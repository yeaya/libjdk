#ifndef _com_sun_org_apache_xml_internal_serializer_Version_h_
#define _com_sun_org_apache_xml_internal_serializer_Version_h_
//$ class com.sun.org.apache.xml.internal.serializer.Version
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class Version : public ::java::lang::Object {
	$class(Version, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Version();
	void init$();
	static void _main($StringArray* argv);
	static int32_t getDevelopmentVersionNum();
	static $String* getImplementationLanguage();
	static int32_t getMaintenanceVersionNum();
	static int32_t getMajorVersionNum();
	static $String* getProduct();
	static int32_t getReleaseVersionNum();
	static $String* getVersion();
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_Version_h_