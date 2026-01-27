#ifndef _com_sun_org_apache_xpath_internal_compiler_PsuedoNames_h_
#define _com_sun_org_apache_xpath_internal_compiler_PsuedoNames_h_
//$ class com.sun.org.apache.xpath.internal.compiler.PsuedoNames
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PSEUDONAME_ANY")
#undef PSEUDONAME_ANY
#pragma push_macro("PSEUDONAME_COMMENT")
#undef PSEUDONAME_COMMENT
#pragma push_macro("PSEUDONAME_OTHER")
#undef PSEUDONAME_OTHER
#pragma push_macro("PSEUDONAME_PI")
#undef PSEUDONAME_PI
#pragma push_macro("PSEUDONAME_ROOT")
#undef PSEUDONAME_ROOT
#pragma push_macro("PSEUDONAME_TEXT")
#undef PSEUDONAME_TEXT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export PsuedoNames : public ::java::lang::Object {
	$class(PsuedoNames, 0, ::java::lang::Object)
public:
	PsuedoNames();
	void init$();
	static $String* PSEUDONAME_ANY;
	static $String* PSEUDONAME_ROOT;
	static $String* PSEUDONAME_TEXT;
	static $String* PSEUDONAME_COMMENT;
	static $String* PSEUDONAME_PI;
	static $String* PSEUDONAME_OTHER;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PSEUDONAME_ANY")
#pragma pop_macro("PSEUDONAME_COMMENT")
#pragma pop_macro("PSEUDONAME_OTHER")
#pragma pop_macro("PSEUDONAME_PI")
#pragma pop_macro("PSEUDONAME_ROOT")
#pragma pop_macro("PSEUDONAME_TEXT")

#endif // _com_sun_org_apache_xpath_internal_compiler_PsuedoNames_h_