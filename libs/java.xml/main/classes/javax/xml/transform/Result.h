#ifndef _javax_xml_transform_Result_h_
#define _javax_xml_transform_Result_h_
//$ interface javax.xml.transform.Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PI_DISABLE_OUTPUT_ESCAPING")
#undef PI_DISABLE_OUTPUT_ESCAPING
#pragma push_macro("PI_ENABLE_OUTPUT_ESCAPING")
#undef PI_ENABLE_OUTPUT_ESCAPING

namespace javax {
	namespace xml {
		namespace transform {

class $export Result : public ::java::lang::Object {
	$interface(Result, 0, ::java::lang::Object)
public:
	virtual $String* getSystemId() {return nullptr;}
	virtual void setSystemId($String* systemId) {}
	static $String* PI_DISABLE_OUTPUT_ESCAPING;
	static $String* PI_ENABLE_OUTPUT_ESCAPING;
};

		} // transform
	} // xml
} // javax

#pragma pop_macro("PI_DISABLE_OUTPUT_ESCAPING")
#pragma pop_macro("PI_ENABLE_OUTPUT_ESCAPING")

#endif // _javax_xml_transform_Result_h_