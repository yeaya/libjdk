#ifndef _javax_tools_JavaFileObject$Kind_h_
#define _javax_tools_JavaFileObject$Kind_h_
//$ class javax.tools.JavaFileObject$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("HTML")
#undef HTML
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("SOURCE")
#undef SOURCE

namespace javax {
	namespace tools {

class $export JavaFileObject$Kind : public ::java::lang::Enum {
	$class(JavaFileObject$Kind, 0, ::java::lang::Enum)
public:
	JavaFileObject$Kind();
	static $Array<::javax::tools::JavaFileObject$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* extension);
	static ::javax::tools::JavaFileObject$Kind* valueOf($String* name);
	static $Array<::javax::tools::JavaFileObject$Kind>* values();
	static ::javax::tools::JavaFileObject$Kind* SOURCE;
	static ::javax::tools::JavaFileObject$Kind* CLASS;
	static ::javax::tools::JavaFileObject$Kind* HTML;
	static ::javax::tools::JavaFileObject$Kind* OTHER;
	static $Array<::javax::tools::JavaFileObject$Kind>* $VALUES;
	$String* extension = nullptr;
};

	} // tools
} // javax

#pragma pop_macro("CLASS")
#pragma pop_macro("HTML")
#pragma pop_macro("OTHER")
#pragma pop_macro("SOURCE")

#endif // _javax_tools_JavaFileObject$Kind_h_