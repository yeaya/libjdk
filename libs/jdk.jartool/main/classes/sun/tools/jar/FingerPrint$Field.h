#ifndef _sun_tools_jar_FingerPrint$Field_h_
#define _sun_tools_jar_FingerPrint$Field_h_
//$ class sun.tools.jar.FingerPrint$Field
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace tools {
		namespace jar {

class FingerPrint$Field : public ::java::lang::Object {
	$class(FingerPrint$Field, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FingerPrint$Field();
	void init$(int32_t access, $String* name, $String* desc);
	virtual bool equals(Object$* that) override;
	virtual int32_t hashCode() override;
	int32_t access = 0;
	$String* name = nullptr;
	$String* desc = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_FingerPrint$Field_h_