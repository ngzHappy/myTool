#if !defined(CCT__TYPE_MEORY)
#define CCT__TYPE_MEORY

#include <memory>
#include <cstddef>
#include <cstdint>
#include <ciso646>
#include <type_traits>

namespace cct {

//#ifdef _MSC_VER
//#define restrict __restrict
//#else
//#define restrict __restrict__
//#endif

template<typename T_,typename ... Args>
std::shared_ptr<T_> instance_shared_ptr(Args && ... args) {
    auto * _ans__=new T_{ std::forward<Args>(args)... };
    return std::shared_ptr<T_>(_ans__,[](auto * d) {delete d; });
}

}

#endif

