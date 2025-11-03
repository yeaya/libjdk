#ifndef _sun_tools_jar_GNUStyleOptions$OptionType_h_
#define _sun_tools_jar_GNUStyleOptions$OptionType_h_
//$ class sun.tools.jar.GNUStyleOptions$OptionType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("CREATE")
#undef CREATE
#pragma push_macro("CREATE_UPDATE")
#undef CREATE_UPDATE
#pragma push_macro("CREATE_UPDATE_INDEX")
#undef CREATE_UPDATE_INDEX
#pragma push_macro("MAIN_OPERATION")
#undef MAIN_OPERATION
#pragma push_macro("OTHER")
#undef OTHER

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$OptionType : public ::java::lang::Enum {
	$class(GNUStyleOptions$OptionType, 0, ::java::lang::Enum)
public:
	GNUStyleOptions$OptionType();
	static $Array<::sun::tools::jar::GNUStyleOptions$OptionType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	static ::sun::tools::jar::GNUStyleOptions$OptionType* valueOf($String* name);
	static $Array<::sun::tools::jar::GNUStyleOptions$OptionType>* values();
	static ::sun::tools::jar::GNUStyleOptions$OptionType* MAIN_OPERATION;
	static ::sun::tools::jar::GNUStyleOptions$OptionType* ANY;
	static ::sun::tools::jar::GNUStyleOptions$OptionType* CREATE;
	static ::sun::tools::jar::GNUStyleOptions$OptionType* CREATE_UPDATE;
	static ::sun::tools::jar::GNUStyleOptions$OptionType* CREATE_UPDATE_INDEX;
	static ::sun::tools::jar::GNUStyleOptions$OptionType* OTHER;
	static $Array<::sun::tools::jar::GNUStyleOptions$OptionType>* $VALUES;
	$String* name$ = nullptr;
};

		} // jar
	} // tools
} // sun

#pragma pop_macro("ANY")
#pragma pop_macro("CREATE")
#pragma pop_macro("CREATE_UPDATE")
#pragma pop_macro("CREATE_UPDATE_INDEX")
#pragma pop_macro("MAIN_OPERATION")
#pragma pop_macro("OTHER")

#endif // _sun_tools_jar_GNUStyleOptions$OptionType_h_