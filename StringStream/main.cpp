#include <iostream>

#include <sstream>
#include <type_traits>
template<typename TSuper>
class IStringStream : public TSuper {

public:
    using TSuper::TSuper;

    const auto * begin()const {
        auto * buffer = this->rdbuf();

        typedef typename std::remove_reference<
            typename std::remove_cv< decltype(*buffer) >::type
        >::type Buffer ;

        class RDBuffer : public Buffer{
        public:
            using Buffer::gptr;
            using Buffer::egptr;
        };

        return static_cast<RDBuffer *>(buffer)->gptr();
    }

    const auto * end() const {
        auto * pthis = const_cast<IStringStream *>(this);
        const auto pos_=pthis->tellg( );
        pthis->seekg( 0,std::ios::end );
        const auto * const ans=this->begin();
        pthis->seekg(pos_,std::ios::beg);
        return ans;
    }

};


int main() {

    IStringStream<std::istringstream> ss("aabbccdd");


    for ( const auto & i:ss ) {

    }

    system("pause");
}
