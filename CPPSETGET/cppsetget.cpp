
#include "cppsetget.hpp"
#include <boost/algorithm/string.hpp>
#include <string>
#include <iostream>
#include <sstream>
#include <memory>
#include <fstream>
#include <exception>
#include <cctype>

namespace {
	const std::string & propertyR() {
		static const std::string ans("PROPERTYR");
		return ans;
	}
	const std::string & propertyW() {
		static const std::string ans("PROPERTYW");
		return ans;
	}
}

int CppSetGet::run(){
	_split();
	_write();
	return 0;
}

void CppSetGet::_write_set() {
	auto & stream = *outStream;
	{
		static const std::string stringTemplate =
			u8R"(void set{#}(const {!} & _{$}_ ) {{+}{$}= _{$}_ ;} )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}",  i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}" ); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
}

void CppSetGet::_write_nset() {
	if (false == bool(beforeNamespace)) { return; }
 
	{//声明 
		static const std::string stringTemplate =
			u8R"(void set{#}(const {!} & _{$}_ ) ; )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate)  ;
			boost::replace_all(ans_i, "{$}", i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
	{//定义
		static const std::string stringTemplate =
			u8R"(void {|}set{#}(const {!} & _{$}_ ) {{+}{$}= _{$}_ ;} )";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{|}", *beforeNamespace);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;

}
void CppSetGet::_write_f_nset() {
	if (false == bool(beforeNamespace)) { return; }
	 
	{//声明
		static const std::string stringTemplate =
			u8R"(void fitSet{#}(const {!} & _{$}_ ) ; )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
	{//声明
		static const std::string stringTemplate =
			u8R"(void fitSet{#}({!} && _{$}_ ) ; )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
 
	{
		//# upname
		//! typename
		//$ argname
		//+ thisp->
		static const std::string stringTemplate =
			u8R"(template<typename ... Args_Auto_>
void fitSet{#}(Args_Auto_&&... _args_){ 
typedef typename std::remove_reference<{!}>::type _TYPE_;
fitSet{#}( std::move(_TYPE_( std::forward<Args_Auto_>(_args_)... )) );
}
 )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;


	{//定义
		static const std::string stringTemplate =
			u8R"(void {|}fitSet{#}(const {!} & _{$}_ ) {{+}{$}= _{$}_ ;} )";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{|}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
	{//定义
		static const std::string stringTemplate =
			u8R"(void {|}fitSet{#}({!} && _{$}_ ) {{+}{$}= std::move(_{$}_) ;} )";
		for (const auto & i : items) {
			auto ans_i =  stringTemplate;
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{|}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
}
void CppSetGet::_write_f_set() {
	auto & stream = *outStream;
	{
		static const std::string stringTemplate =
			u8R"(void fitSet{#}(const {!} & _{$}_ ) {{+}{$}= _{$}_ ;} )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
	{
		static const std::string stringTemplate =
			u8R"(void fitSet{#}({!} && _{$}_ ) {{+}{$}= std::move(_{$}_) ;} )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
	{
		//# upname
		//! typename
		//$ argname
		//+ thisp->
		static const std::string stringTemplate =
u8R"(template<typename ... Args_Auto_>
void fitSet{#}(Args_Auto_&&... _args_){ 
typedef typename std::remove_reference<{!}>::type _TYPE_;
fitSet{#}( std::move(_TYPE_( std::forward<Args_Auto_>(_args_)... )) ); 
}
 )";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", i.name);
			if (beforeThisName) { boost::replace_all(ans_i, "{+}", *beforeThisName); }
			else { boost::erase_all(ans_i, "{+}"); }
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
}

void CppSetGet::_write_ncget() {
	if (false == bool(beforeNamespace)) { return; }
	 
	{
		*hppStream << "public:" << std::endl;
		static const std::string stringTemplate =
			u8R"(const {!} & get{#}() const ;)";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			//boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;

	{
		static const std::string stringTemplate =
			u8R"(const {!} & {+}get{#}() const { return {$}; })";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{+}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
}
void CppSetGet::_write_nget() {
	if (false == bool(beforeNamespace)) { return; }
	 
	{
		*hppStream << "public:" << std::endl;
		static const std::string stringTemplate =
			u8R"(const {!} & fitGet{#}()const &;)";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			//boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} & fitGet{#}()&;)";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			//boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} && fitGet{#}()&&;)";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			//boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			*hppStream << ans_i << std::endl;
		}
	}
	*hppStream << std::endl;
	
	{
		static const std::string stringTemplate =
			u8R"(const {!} & {+}fitGet{#}()const &{ return {$}; })";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{+}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} & {+}fitGet{#}()&{ return {$}; })";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{+}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} && {+}fitGet{#}()&&{ return std::move({$}); })";
		for (const auto & i : items) {
			auto ans_i =stringTemplate;
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			boost::replace_all(ans_i, "{+}", *beforeNamespace);
			*cppStream << ans_i << std::endl;
		}
	}
	*cppStream << std::endl;
	
}


void CppSetGet::_write() {
	using namespace ns::CppSetGet;
	typedef std::stringstream TT;
	hppStream = StringStream(new TT, [](TT *d) {delete d; });
	cppStream = StringStream(new TT, [](TT *d) {delete d; });

	_write_type();

	auto & stream = *outStream;
	stream << "/--------------------------------/" << std::endl;
    _write_cget();
	stream << "/--------------------------------/" << std::endl;
    _write_set();
	stream << "/--------------------------------/" << std::endl;
    _write_get();
	stream << "/--------------------------------/" << std::endl;
    _write_f_set();
	stream << "/--------------------------------/" << std::endl;

    _write_ncget();
    _write_nset();
    _write_nget();
    _write_f_nset();
	stream << 
u8R"(/********************************/
header started!!
/********************************/
)" << std::endl;
	stream << hppStream->rdbuf();
	stream << 
u8R"(/********************************/
header finished!!
/********************************/
)" << std::endl;
	stream << cppStream->rdbuf();
	
	cppStream.reset(nullptr);
	hppStream.reset(nullptr);

}

void CppSetGet::_write_type() {

	auto & stream = *outStream;

	for (const auto & i:items) {
		stream << ("typedef " + i.type + " " + i.upName + "Type ;") << std::endl;
	}
	stream << std::endl;

	for (const auto & i : items) {
		stream << i.upName + "Type " << i.name << " ;" << std::endl;
	}
}


void CppSetGet::_write_get() {
	auto & stream = *outStream;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} & fitGet{#}()&{ return {$}; })";
		for (const auto & i : items) {
			auto ans_i = i.needWrite?("public:\n"+ stringTemplate):("protected:\n"+stringTemplate);
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream <<   std::endl;
	{
		//! type
		//# upName
		//$ before name
		static const std::string stringTemplate =
			u8R"({!} && fitGet{#}()&&{ return std::move({$}); })";
		for (const auto & i : items) {
			auto ans_i = i.needWrite ? ("public:\n" + stringTemplate) : ("protected:\n" + stringTemplate);
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
	{
		stream <<"public:"<< std::endl;
		static const std::string stringTemplate =
			u8R"(const {!} & fitGet{#}()const &{ return {$}; })";
		for (const auto & i : items) {
			auto ans_i = stringTemplate;
			boost::replace_all(ans_i, "{$}", beforeThisName ? *beforeThisName + i.name : i.name);
			boost::replace_all(ans_i, "{!}", i.type);
			boost::replace_all(ans_i, "{#}", i.upName);
			stream << ans_i << std::endl;
		}
	}
	stream << std::endl;
}
void CppSetGet::_write_cget() {
	auto & stream = *outStream;
	//! type
	//# upName
	//$ before name
	static const std::string stringTemplate =
		u8R"(const {!} & get{#}() const { return {$}; })";
	stream << "public:" << std::endl;
	for (const auto & i:items) {
		auto ans_i = stringTemplate;
		boost::replace_all(ans_i, "{$}", beforeThisName? *beforeThisName+i.name : i.name );
		boost::replace_all(ans_i, "{!}", i.type);
		boost::replace_all(ans_i, "{#}", i.upName);
		stream << ans_i <<std::endl;
	}
	stream << std::endl;
}

void CppSetGet::_split(){
	std::stringstream * inputStream_ = 0;
	if ( inputFileName ) {
		std::stringstream ss;
		std::ifstream ifs( *inputFileName );
		inputStream_ = new std::stringstream    ;
		*inputStream_ << ifs.rdbuf();
	}
	else {
		if (false == bool(inputFileData)) {
            class Exception : public std::exception {
            public:
                virtual const char* what() const noexcept override{
                    return "null data";
                }
            };
            throw Exception();
		}
		inputStream_ = new std::stringstream( *inputFileData );
	}
	
	std::stringstream & inputStream = *inputStream_;
	std::unique_ptr<std::stringstream> inputStream__(inputStream_);

	items.clear();
	{
		std::string line;
		while (std::getline(inputStream, line)) {
			if (
				line.find(propertyR()) != std::string::npos ||
				line.find(propertyW()) != std::string::npos) {
				_getAItem(line);
			}
		}
	}

}

namespace {
	auto format(const std::string & i) {
		std::string ans;
		for (const auto i_ : i) {
			if (i_ == '/' || i_ == '=') { break; }
			if (
				std::isalpha(i_) ||
				(i_ == '_') ||
				(std::isalnum(i_))
				) {
				ans.push_back(i_);
			}
		}
		return std::move(ans);
	}
}
void CppSetGet::_getAItem(  std::string & line){
	using namespace ns::CppSetGet;
	Item item;
	std::stringstream tline(std::move(line));
	char c;
	int deep_ = 0;
	bool find_before = false;
	std::string before ;
	std::string & type   = item.type;
	 
	while ( tline.eof() == false ) {
		c = tline.get();
		if (c == '(') {
			find_before = true;
			++deep_;
		}

		if (false == find_before) {
			before.push_back(c);
		}
		else {
			type.push_back(c);
		}

		if (c == ')') {
			--deep_;
			if (deep_ == 0) {
				break;
			}
		}

	}

	tline >> line;
	item.name = std::move( format(line) );
	
	if (item.name.empty()) { return; }
	if (before.empty()) { return; }
	if (type.size()<3) { return; }

	item.needWrite = (before.find( propertyW() ) != std::string::npos)   ;
	type = std::string(type.begin() + 1, type.end() - 1);
	boost::trim( type );
	item.type = std::move( type );

	item.upName = item.name;
	item.upName[0] = std::toupper( item.upName[0] );

	items.emplace_back( std::move(item) );

}//~ CppSetGet::_getAItem

CppSetGet::CppSetGet(const int argc, char **argv):
outStream(nullptr,nullptr),
hppStream(nullptr, nullptr),
cppStream(nullptr, nullptr){

	auto error_throw = []() {
        class Exception : public std::exception {
        public:
            virtual const char* what() const noexcept override{
                return u8R"(-f <filename> or -d <"data">
-w <"this->">
-n <"Type::">
-o <"outFileName">
/* PROPERTYR PROPERTYW */
                        )"  ;
            }
        };
        throw Exception();
	};

	if (argc < 2) {
		error_throw();
	}

	for (int i = 1; i < argc;++i ) {
		std::string argv_i = argv[i];

		if (argv_i == "-f") { 
			++i; if (argc <= i) { error_throw(); }
			argv_i = argv[i];
			inputFileName = std::move(argv_i);
			continue; 
		}
		if (argv_i == "-d") { 
			++i; if (argc <= i) { error_throw(); }
			argv_i = argv[i];
			inputFileData = std::move(argv_i);
			continue; 
		}
		if (argv_i == "-w") { 
			++i; if (argc <= i) { error_throw(); }
			argv_i = argv[i];
			beforeThisName = std::move(argv_i);
			continue; }
		if (argv_i == "-n") { 
			++i; if (argc <= i) { error_throw(); }
			argv_i = argv[i];
			beforeNamespace = std::move(argv_i);
			continue; 
		}
		if (argv_i == "-o") { 
			++i; if (argc <= i) { error_throw(); }
			argv_i = argv[i];
			outputFileName = std::move(argv_i);
			continue; 
		}
	}

	using namespace ns::CppSetGet;
	if (outputFileName) {
		auto * os_ = new std::ofstream( *outputFileName );
		outStream = std::move(OutStream(os_, [](std::ostream* i) {delete i; }));
	}
	else {
		outStream = std::move(OutStream(&std::cout, [](std::ostream*) {}));
	}

}


CppSetGet::~CppSetGet(){

}

/*
*/

