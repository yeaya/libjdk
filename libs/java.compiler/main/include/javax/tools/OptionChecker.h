#ifndef _javax_tools_OptionChecker_h_
#define _javax_tools_OptionChecker_h_
//$ interface javax.tools.OptionChecker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace tools {

class $import OptionChecker : public ::java::lang::Object {
	$interface(OptionChecker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t isSupportedOption($String* option) {return 0;}
};

	} // tools
} // javax

#endif // _javax_tools_OptionChecker_h_