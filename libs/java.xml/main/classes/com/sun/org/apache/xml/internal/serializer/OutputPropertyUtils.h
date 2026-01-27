#ifndef _com_sun_org_apache_xml_internal_serializer_OutputPropertyUtils_h_
#define _com_sun_org_apache_xml_internal_serializer_OutputPropertyUtils_h_
//$ class com.sun.org.apache.xml.internal.serializer.OutputPropertyUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class OutputPropertyUtils : public ::java::lang::Object {
	$class(OutputPropertyUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OutputPropertyUtils();
	void init$();
	static bool getBooleanProperty($String* key, ::java::util::Properties* props);
	static int32_t getIntProperty($String* key, ::java::util::Properties* props);
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_OutputPropertyUtils_h_