#if !defined( RANGE__SPLITNAME__HPP__ )
#define RANGE__SPLITNAME__HPP__

#include <set>

namespace range_name{

//input abc<int,dboule>
//output abc
    template<
        typename Item_I,
        typename CallBackFunction_
    >
    Item_I find_name(
        const Item_I b,
        const Item_I e ,
        CallBackFunction_ callback_function_ /* void(Item_I,Item_I) */
        ) {

        typedef typename std::remove_reference<
            typename std::remove_cv< decltype(*b) >::type
        >::type ItemType /* char lick */ ;

        const static std::set< ItemType > op_begin{'(','{','<','['};

        auto cpos = b ;
        for (;cpos!=e;++cpos ) {
            if ( op_begin.count(*cpos) >0 ) {
                callback_function_( b,cpos );
                return cpos;
            }
        }

        /* can not find ( { < [ */
        return e;
    }


}

#endif
