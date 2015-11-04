#ifndef __GET__LINE__HPP__00
#define __GET__LINE__HPP__00

#include <iostream>

std::istream & getLine( std::istream & i,std::ostream & t,char d='\n' ){

    std::istreambuf_iterator<char> b(i);
    std::istreambuf_iterator<char> e;
    std::ostreambuf_iterator<char> o(t);
    char c;

    while ( b!=e ) {
        c = *b++;
        *o++ = c;
        if( c==d ){break;}
    }

    return i;
}

template<
	typename T,
	template<typename> class CT_0, 
	template<typename> class CT_1 
>
decltype(auto) getLine(
	std::basic_istream<T, CT_0<T> > & i,
	std::basic_ostream<T, CT_1<T> > & t,
	T d = '\n') {

	std::istreambuf_iterator<T, CT_0<T> > b(i);
	std::istreambuf_iterator<T, CT_0<T> > e;
	std::ostreambuf_iterator<T, CT_1<T> > o(t);
	T c;

	while (b != e) {
		c = *b++;
		*o++ = c;
		if (c == d) { break; }
	}

	return i;
}


#endif

/*
*/
