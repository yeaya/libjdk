#ifndef _javax_tools_Diagnostic_h_
#define _javax_tools_Diagnostic_h_
//$ interface javax.tools.Diagnostic
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NOPOS")
#undef NOPOS

namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
	}
}

namespace javax {
	namespace tools {

class $export Diagnostic : public ::java::lang::Object {
	$interface(Diagnostic, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getCode() {return nullptr;}
	virtual int64_t getColumnNumber() {return 0;}
	virtual int64_t getEndPosition() {return 0;}
	virtual ::javax::tools::Diagnostic$Kind* getKind() {return nullptr;}
	virtual int64_t getLineNumber() {return 0;}
	virtual $String* getMessage(::java::util::Locale* locale) {return nullptr;}
	virtual int64_t getPosition() {return 0;}
	virtual $Object* getSource() {return nullptr;}
	virtual int64_t getStartPosition() {return 0;}
	static const int64_t NOPOS = (-1);
};

	} // tools
} // javax

#pragma pop_macro("NOPOS")

#endif // _javax_tools_Diagnostic_h_