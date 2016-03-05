#ifndef _0_CLASSFUNCTION_HPP
#define _0_CLASSFUNCTION_HPP

#include <memory>
#include <functional>
#include <stdexcept>

namespace cct{

template<typename __U__>
class ClassFunction {
public:
    typedef std::unique_ptr< std::function<__U__> > UniqueFunction;
    typedef UniqueFunction unique_function_type;
    typedef typename std::function<__U__>::result_type result_type;
private:
    template<
        typename SharedFunction_
        /* std::shared_ptr< std::function<void(void)> > */,
        typename ... Args_
    >
    static result_type _call_shared_function(
            const SharedFunction_ & fun___,
            Args_ && ... args__
            ) noexcept(false) {
        const auto & fun__=fun___;
        if ( fun__ ) {
            const auto & fun_=*fun__;
            if (fun_) { return fun_( std::forward<Args_>(args__)...  ); }
        }
        throw std::invalid_argument("function is null");
    }

private:
    std::unique_ptr< std::function<__U__> > function_;
    bool isCalled_=false;
public:
    ClassFunction(const ClassFunction &)=delete;
    ClassFunction&operator=(const ClassFunction &)=delete;

    ClassFunction(ClassFunction &&)=default;
    ClassFunction&operator=(ClassFunction &&)=default;

    ClassFunction() {}
    ClassFunction( decltype(nullptr) ){}
    ClassFunction( UniqueFunction && fun ):function_(std::move(fun)) {}
    template<typename ... Args>
    ClassFunction( Args && ... args ):function_(
        UniqueFunction( new std::function<__U__>( std::forward<Args>(args)... ) )
        ) {}

    /*
    if function is null this will throw std::invalid_argument("function is null");
    */
    template<typename ... Args>
    result_type call( Args && ... args ) noexcept(false) {
        isCalled_=true;
        return _call_shared_function(function_,std::forward<Args>(args)...);
    }

    /*
    if function is null this will throw std::invalid_argument("function is null");
    */
    template<typename ... Args>
    result_type operator()( Args && ... args ) noexcept(false) {
        return call( std::forward<Args>(args)... );
    }

    /* if the function have called , this will throw logic_error */
    UniqueFunction getFunction() noexcept(false) {
        if (isCalled_) { throw std::logic_error("the function have called!!"); }
        return std::move( function_ );
    }

    /* if the function have called , this will throw logic_error */
    void setFunction( UniqueFunction && fun ) noexcept(false){
        if (isCalled_) { throw std::logic_error("the function have called!!"); }
        function_=std::move(fun);
    }

};

}

#endif // CLASSFUNCTION_HPP
/*
 * #endif // CLASSFUNCTION_HPP
*/
