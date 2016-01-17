#if !defined( FUNCTION_HPP__CCT__ )
#define FUNCTION_HPP__CCT__ 1

#include <memory>
#include <type_traits>
#include <functional>

namespace cct {
namespace base {

template<typename xT>
class Function : public std::function<xT> {
    typedef std::function<xT> _Super;
public:
    using _Super::_Super;
    Function()=default;
    Function(const Function &)=default;
    Function(Function &&)=default;
    Function(const _Super &v):_Super(v) {}
    Function(_Super &&v):_Super(std::move(v)) {}
    Function&operator=(Function &&)=default;
    Function&operator=(const Function &)=default;
    static void deleteThis(Function * v) { delete v; }
};

}

template<typename __Ux>
class Function :
    public std::shared_ptr< cct::base::Function<__Ux> >{
private:
    typedef std::shared_ptr< cct::base::Function<__Ux> > __Super;
    typedef typename __Super::element_type element_type;
    const element_type * _get_const() const { return this->get(); }
    element_type * _get(){ return this->get(); }
public:
    Function():__Super(new element_type,&element_type::deleteThis){}
    Function(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    Function(_U* value):__Super(static_cast<element_type * >(value) ,&element_type::deleteThis) {}
    Function(const __Super & s):__Super(s) {}
    template<typename _U>Function(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(const std::weak_ptr<_U> &u):__Super(u) {}
    Function(__Super && s):__Super(std::move(s)) {}
    template<typename _U>Function(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename A0,typename A1, typename ... Args>
    Function(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),&element_type::deleteThis){}
    template<typename A0 >
    Function(A0 && a0 ):__Super(new element_type( std::forward(a0) ),&element_type::deleteThis ) {}
    template<typename _U>
    Function(const std::initializer_list<_U> & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~Function()=default;
    Function(const Function&)=default;
    Function(Function&&)=default;
    Function&operator=(const Function&)=default;
    Function&operator=(Function&&)=default;

    template<typename ... Args >
    auto operator()( Args&& ... args ) ->decltype( this->_get()->operator()( std::forward<Args>(args) ...) ) {
        return this->_get()->operator()( std::forward<Args>(args) ...) ;
    }

    template<typename ... Args >
    auto operator()( Args&& ... args )const ->decltype( this->_get_const()->operator()( std::forward<Args>(args) ...) ) {
        return this->_get_const()->operator()( std::forward<Args>(args) ...) ;
    }

    explicit operator bool()const {
        auto * fun_=this->get();
        if (fun_) { if (*fun_) { return true; } }
        return false;
    }

};

}


#endif // FUNCTION_HPP


