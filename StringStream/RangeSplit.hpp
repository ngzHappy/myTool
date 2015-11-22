
#if !defined( RANGE__SPLIT__HPP__ )
#define RANGE__SPLIT__HPP__

#include <set>
#include <type_traits>
#include <exception>
#include <stdexcept>
#include <string>
#include <stack>

namespace range_split
{
//input <int,double>
//output int double
    template<
        typename Item_I ,typename Item_Ie ,
        typename Item_  ,
        typename CallBackFunction_
    >
    Item_I split(
        Item_I b             /*const char * lick*/ ,
        const Item_Ie e      /*const char * lick*/ ,
        const Item_ split_op /* , lick */    ,
        CallBackFunction_ callback_function_ /* void(Item_I,Item_I) */
        ) {

        typedef typename std::remove_reference<
            typename std::remove_cv< decltype(*b) >::type
        >::type ItemType /* char lick */ ;

        const static std::set< ItemType > op_begin{'(','{','<','['};
        const static std::set< ItemType > op_end{')','}','>',']'};

        auto _opbe_ = op_begin.end();
        auto _opee_=op_end.end();

        if ( op_begin.find(*b)==_opbe_ ) {
            throw std::logic_error("rang must start with ( { < [");
        }

        if ( (op_begin.count(split_op)>0) || (op_end.count(split_op)>0) ) {
            throw std::logic_error("split operator must not be ( { < [ ] > } )");
        }

        std::stack<ItemType> oprange_stack;

        oprange_stack.push( *b );

        auto cpos= ++b;
        bool reset_range_start=false;
        for (; cpos!=e ; ++cpos ) {

            if (reset_range_start) {
                reset_range_start=false;
                b=cpos;
            }

            const auto word = *cpos;

            /* if it is a split word */
            if ( word == split_op ) {
                if ( oprange_stack.size() == 1) {
                    callback_function_( b , cpos ); //find a range
                    reset_range_start=true;
                    continue;
                }
                continue;
            }

            /* if it is a < { ( [*/
            if ( op_begin.find(word)!=_opbe_ ) {
                oprange_stack.push( word );
                continue;
            }

            /* if it is a > } ) ]*/
            if (op_end.find(word)!=_opee_) {
                oprange_stack.pop();
                if (oprange_stack.empty()) {
                    break;/* find range endl */
                }
                continue;
            }

       }

        callback_function_( b , cpos ); //find final range
        return cpos;
    }
}


#endif
