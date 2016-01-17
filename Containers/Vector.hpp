﻿
#if !defined(VECTOR__HPP__CCT)
#define VECTOR__HPP__CCT

#include <vector>
#include <memory>
#include <type_traits>

namespace cct {

namespace base {
template<typename T>
class Vector :public std::vector<T> {
    typedef std::vector<T> _Super;
public:
    using _Super::_Super;
    Vector()=default;
    Vector(const Vector &)=default;
    Vector(Vector &&)=default;
    Vector(const _Super &v):_Super(v) {}
    Vector(_Super &&v):_Super(std::move(v)) {}
    Vector&operator=(Vector &&)=default;
    Vector&operator=(const Vector &)=default;
    static void deleteThis(Vector * v) { delete v; }
};
}

template<typename __T>
class Vector :
    public std::shared_ptr< cct::base::Vector<__T> > {
private:
    typedef std::shared_ptr< cct::base::Vector<__T> > __Super;
    typedef typename __Super::element_type element_type;
    const element_type * _get_const()const { return this->get(); }
    element_type * _get() { return this->get(); }

public:
    typedef typename element_type::value_type value_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;
    size_type size() const { return _get_const()->size(); }
    size_type length()const { return size(); }

    auto begin()const { return _get_const()->begin(); }
    auto end() const { return _get_const()->end(); }
    auto cbegin()const { return _get_const()->cbegin(); }
    auto cend() const { return _get_const()->cend(); }
    auto rbegin()const { return _get_const()->rbegin(); }
    auto rend() const { return _get_const()->rend(); }
    auto crbegin()const { return _get_const()->crbegin(); }
    auto crend() const { return _get_const()->crend(); }

    auto begin() { return _get()->begin(); }
    auto end() { return _get()->end(); }
    auto rbegin() { return _get()->rbegin(); }
    auto rend() { return _get()->rend(); }

    Vector():__Super(new element_type,&element_type::deleteThis) {}
    Vector(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    Vector(_U* value):__Super(static_cast<element_type *>(value),&element_type::deleteThis) {}
    Vector(const __Super & s):__Super(s) {}
    template<typename _U>Vector(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Vector(const std::weak_ptr<_U> &u):__Super(u) {}
    Vector(__Super && s):__Super(std::move(s)) {}
    template<typename _U>Vector(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Vector(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Vector(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}
    template<typename A0,typename A1,typename ... Args>
    Vector(A0 && a0,A1 && a1,Args && ... args):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1),std::forward<Args>(args)...),&element_type::deleteThis) {}
    template<typename A0,typename _EXPLICIT=decltype(new element_type(std::declval<A0>())),typename _EMORE=void>
    Vector(A0 && a0):__Super(new element_type(std::move(a0)),&element_type::deleteThis) {}
    template<typename A0,typename _EXPLICIT=decltype(new element_type(*(reinterpret_cast<std::remove_reference_t<A0> *>(0))))>
    Vector(A0 & a0):__Super(new element_type(a0),&element_type::deleteThis) {}
    template<typename _U>
    Vector(const std::initializer_list<_U> & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~Vector()=default;
    Vector(const Vector&)=default;
    Vector(Vector&&)=default;
    Vector&operator=(const Vector&)=default;
    Vector&operator=(Vector&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<Vector &>(*this)); }

    auto operator[](size_type n)->decltype(this->_get()->operator[](n)) {
        return this->_get()->operator[](n);
    }

    auto operator[](size_type n)const ->decltype(this->_get_const()->operator[](n)) {
        return this->_get_const()->operator[](n);
    }

};

template<typename __T>
class Vector<__T>::WriteCopy :
    public Vector {
public:
    using Vector::Vector;
    WriteCopy(const Vector & v):Vector(v) {}
    WriteCopy(Vector && v):Vector(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(Vector)==sizeof(WriteCopy),"you can not add any data");
        return Vector::operator->();
    }
    element_type * operator->() {
        if (*this) { if (this->unique()==false) { *this=Vector(new element_type(*(*this))); } }
        return Vector::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get() { return this->operator->(); }
    const WriteCopy & copy() const { return *this; }

    auto begin() { return get()->begin(); }
    auto end() { return get()->end(); }
    auto rbegin() { return get()->rbegin(); }
    auto rend() { return get()->rend(); }

    auto begin()const { return get()->begin(); }
    auto end()const { return get()->end(); }
    auto cbegin()const { return get()->cbegin(); }
    auto cend()const { return get()->cend(); }
    auto rbegin()const { return get()->rbegin(); }
    auto rend()const { return get()->rend(); }
    auto crbegin()const { return get()->crbegin(); }
    auto crend()const { return get()->crend(); }

    auto operator[](size_type n)->decltype(this->get()->operator[](n)) {
        return this->get()->operator[](n);
    }

};

}

#endif



