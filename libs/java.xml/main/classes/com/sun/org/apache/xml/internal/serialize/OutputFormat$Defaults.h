#ifndef _com_sun_org_apache_xml_internal_serialize_OutputFormat$Defaults_h_
#define _com_sun_org_apache_xml_internal_serialize_OutputFormat$Defaults_h_
//$ class com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class OutputFormat$Defaults : public ::java::lang::Object {
	$class(OutputFormat$Defaults, 0, ::java::lang::Object)
public:
	OutputFormat$Defaults();
	void init$();
	static const int32_t Indent = 4;
	static $String* Encoding;
	static const int32_t LineWidth = 72;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_OutputFormat$Defaults_h_