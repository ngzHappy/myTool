#include <iostream>

#include <QMap>
#include <QList>
#include <QVector>
#include <QSet>

using namespace std;
#include "Containers.hpp"
#include "String.hpp"
#include "Itetator.hpp"
#include <QDebug>
using namespace cct;

class S{
public:
void key(){}
void value(){}
};

int Xmain()
{

    {

        qDebug()<< cct::_private::__HasKeyValue<int>::value;
        qDebug()<< cct::_private::__HasKeyValue<S>::value;

        std::vector<int> v{1,2,3,4,5};
        Iterator<int> begin_( v.begin() );
        Iterator<int> end_(v.end());

        std::map<int,double> dsfe;
        dsfe.insert({ 1,2 });
        QMap<int,double> fff;

        auto li = makeLinkedIterator( dsfe.begin() );(void) li;
        auto lj = makeLinkedIterator( fff.begin() );(void) lj;
        Iterator<int,double> xits( fff.begin() );

         qDebug()<< cct::_private::__HasKeyValue< decltype( fff.begin() ) >::value ;


         li.key();

         dsfe.begin()->first;

         QSet<int> ggg;

         Iterator< int > l( ggg.begin() );

         Iterator<  int,double > it( dsfe.begin() );
         it.key();

         for (; begin_!=end_;++begin_) {
             std::cout<<*begin_<<std::endl;
         }
    }

    {
        cct::Deque<int> v;
        v->push_back(12);
        v->push_back(13);

        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::ForwardList<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::List<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::String v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Vector<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Map<int,double> v;
        for( const auto & i:v ){
            std::cout << i.first <<std::endl;
        }
    }

    {
        cct::Unordered_set<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Unordered_map<int,double> v;
        for( const auto & i:v ){
            std::cout << i.first <<std::endl;
        }
    }

    cout << "Hello World!" << endl;
    return 0;
}
