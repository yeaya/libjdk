#ifndef _javax_tools_StandardLocation_h_
#define _javax_tools_StandardLocation_h_
//$ class javax.tools.StandardLocation
//$ extends java.lang.Enum
//$ implements javax.tools.JavaFileManager$Location

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <javax/tools/JavaFileManager$Location.h>

#pragma push_macro("ANNOTATION_PROCESSOR_MODULE_PATH")
#undef ANNOTATION_PROCESSOR_MODULE_PATH
#pragma push_macro("ANNOTATION_PROCESSOR_PATH")
#undef ANNOTATION_PROCESSOR_PATH
#pragma push_macro("CLASS_OUTPUT")
#undef CLASS_OUTPUT
#pragma push_macro("CLASS_PATH")
#undef CLASS_PATH
#pragma push_macro("MODULE_PATH")
#undef MODULE_PATH
#pragma push_macro("MODULE_SOURCE_PATH")
#undef MODULE_SOURCE_PATH
#pragma push_macro("NATIVE_HEADER_OUTPUT")
#undef NATIVE_HEADER_OUTPUT
#pragma push_macro("PATCH_MODULE_PATH")
#undef PATCH_MODULE_PATH
#pragma push_macro("PLATFORM_CLASS_PATH")
#undef PLATFORM_CLASS_PATH
#pragma push_macro("SOURCE_OUTPUT")
#undef SOURCE_OUTPUT
#pragma push_macro("SOURCE_PATH")
#undef SOURCE_PATH
#pragma push_macro("SYSTEM_MODULES")
#undef SYSTEM_MODULES
#pragma push_macro("UPGRADE_MODULE_PATH")
#undef UPGRADE_MODULE_PATH

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace javax {
	namespace tools {

class $import StandardLocation : public ::java::lang::Enum, public ::javax::tools::JavaFileManager$Location {
	$class(StandardLocation, 0, ::java::lang::Enum, ::javax::tools::JavaFileManager$Location)
public:
	StandardLocation();
	static $Array<::javax::tools::StandardLocation>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* getName() override;
	virtual bool isModuleOrientedLocation() override;
	virtual bool isOutputLocation() override;
	static ::javax::tools::JavaFileManager$Location* locationFor($String* name);
	virtual $String* toString() override;
	static ::javax::tools::StandardLocation* valueOf($String* name);
	static $Array<::javax::tools::StandardLocation>* values();
	static ::javax::tools::StandardLocation* CLASS_OUTPUT;
	static ::javax::tools::StandardLocation* SOURCE_OUTPUT;
	static ::javax::tools::StandardLocation* CLASS_PATH;
	static ::javax::tools::StandardLocation* SOURCE_PATH;
	static ::javax::tools::StandardLocation* ANNOTATION_PROCESSOR_PATH;
	static ::javax::tools::StandardLocation* ANNOTATION_PROCESSOR_MODULE_PATH;
	static ::javax::tools::StandardLocation* PLATFORM_CLASS_PATH;
	static ::javax::tools::StandardLocation* NATIVE_HEADER_OUTPUT;
	static ::javax::tools::StandardLocation* MODULE_SOURCE_PATH;
	static ::javax::tools::StandardLocation* UPGRADE_MODULE_PATH;
	static ::javax::tools::StandardLocation* SYSTEM_MODULES;
	static ::javax::tools::StandardLocation* MODULE_PATH;
	static ::javax::tools::StandardLocation* PATCH_MODULE_PATH;
	static $Array<::javax::tools::StandardLocation>* $VALUES;
	static ::java::util::concurrent::ConcurrentMap* locations;
};

	} // tools
} // javax

#pragma pop_macro("ANNOTATION_PROCESSOR_MODULE_PATH")
#pragma pop_macro("ANNOTATION_PROCESSOR_PATH")
#pragma pop_macro("CLASS_OUTPUT")
#pragma pop_macro("CLASS_PATH")
#pragma pop_macro("MODULE_PATH")
#pragma pop_macro("MODULE_SOURCE_PATH")
#pragma pop_macro("NATIVE_HEADER_OUTPUT")
#pragma pop_macro("PATCH_MODULE_PATH")
#pragma pop_macro("PLATFORM_CLASS_PATH")
#pragma pop_macro("SOURCE_OUTPUT")
#pragma pop_macro("SOURCE_PATH")
#pragma pop_macro("SYSTEM_MODULES")
#pragma pop_macro("UPGRADE_MODULE_PATH")

#endif // _javax_tools_StandardLocation_h_