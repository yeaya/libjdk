#ifndef _sun_tools_jar_FingerPrint$Method_h_
#define _sun_tools_jar_FingerPrint$Method_h_
//$ class sun.tools.jar.FingerPrint$Method
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class FingerPrint$Method : public ::java::lang::Object {
	$class(FingerPrint$Method, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FingerPrint$Method();
	void init$(int32_t access, $String* name, $String* desc, ::java::util::Set* exceptions);
	virtual bool equals(Object$* that) override;
	virtual int32_t hashCode() override;
	int32_t access = 0;
	$String* name = nullptr;
	$String* desc = nullptr;
	::java::util::Set* exceptions = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_FingerPrint$Method_h_