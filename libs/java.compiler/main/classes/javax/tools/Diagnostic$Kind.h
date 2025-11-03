#ifndef _javax_tools_Diagnostic$Kind_h_
#define _javax_tools_Diagnostic$Kind_h_
//$ class javax.tools.Diagnostic$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("MANDATORY_WARNING")
#undef MANDATORY_WARNING
#pragma push_macro("NOTE")
#undef NOTE
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("WARNING")
#undef WARNING

namespace javax {
	namespace tools {

class $export Diagnostic$Kind : public ::java::lang::Enum {
	$class(Diagnostic$Kind, 0, ::java::lang::Enum)
public:
	Diagnostic$Kind();
	static $Array<::javax::tools::Diagnostic$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::tools::Diagnostic$Kind* valueOf($String* name);
	static $Array<::javax::tools::Diagnostic$Kind>* values();
	static ::javax::tools::Diagnostic$Kind* ERROR;
	static ::javax::tools::Diagnostic$Kind* WARNING;
	static ::javax::tools::Diagnostic$Kind* MANDATORY_WARNING;
	static ::javax::tools::Diagnostic$Kind* NOTE;
	static ::javax::tools::Diagnostic$Kind* OTHER;
	static $Array<::javax::tools::Diagnostic$Kind>* $VALUES;
};

	} // tools
} // javax

#pragma pop_macro("ERROR")
#pragma pop_macro("MANDATORY_WARNING")
#pragma pop_macro("NOTE")
#pragma pop_macro("OTHER")
#pragma pop_macro("WARNING")

#endif // _javax_tools_Diagnostic$Kind_h_