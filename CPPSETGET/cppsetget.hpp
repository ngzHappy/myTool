
#ifndef __CPPSETGET__
#define __CPPSETGET__

#include <memory>
#include <string>
#include <exception>
#include <list>
#include <boost/optional.hpp>

/*
    auto error_throw = []() {
        throw std::exception(u8R"(-f <filename> or -d <"data">
-w <"this->">
-n <"Type::">
-o <"outFileName">
 PROPERTYR PROPERTYW

 PROPERTYW(int) a = 12;
)");

*/

namespace ns{

	namespace _CppSetGet{
		typedef boost::optional<std::string> ArgParent;
	}

	namespace CppSetGet {
		class Arg  : public _CppSetGet::ArgParent {
		private:
			using P = _CppSetGet::ArgParent;
		public:
			using P::P;
		};
		
		typedef void(* StreamDeleteFunction)(std::ostream*);
		using OutStream = std::unique_ptr< std::ostream, StreamDeleteFunction >;

		typedef void(*StringStreamDeleteFunction)(std::stringstream *);
		typedef std::unique_ptr<std::stringstream,StringStreamDeleteFunction> StringStream;

		class Item{
		public :
			std::string name;
			std::string type;
			std::string upName;
			bool needWrite = true;
		};

		class Items : public std::list<Item> {
			typedef std::list<Item> P;
		public:
			using P::P;
		};

	}

}


class CppSetGet{
public:

    CppSetGet(const int argc,char ** argv );
    virtual ~CppSetGet();

    int run();

protected:
	ns::CppSetGet::Arg inputFileName;
	ns::CppSetGet::Arg inputFileData;
	ns::CppSetGet::Arg beforeNamespace;
	ns::CppSetGet::Arg beforeThisName;
	ns::CppSetGet::Arg outputFileName;

	ns::CppSetGet::OutStream outStream;

	ns::CppSetGet::StringStream hppStream;
	ns::CppSetGet::StringStream cppStream;

	ns::CppSetGet::Items items;
private:
	void _split();
	void _write();

	void _write_type();

	void _write_cget();
    void _write_set();
    void _write_get();
    void _write_f_set();

	void _write_ncget();
	void _write_nget();
	void _write_nset();
	void _write_f_nset();

private:
	void _getAItem(std::string &);
};


#endif



