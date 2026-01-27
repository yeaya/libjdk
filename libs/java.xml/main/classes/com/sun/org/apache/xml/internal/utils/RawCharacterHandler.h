#ifndef _com_sun_org_apache_xml_internal_utils_RawCharacterHandler_h_
#define _com_sun_org_apache_xml_internal_utils_RawCharacterHandler_h_
//$ interface com.sun.org.apache.xml.internal.utils.RawCharacterHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export RawCharacterHandler : public ::java::lang::Object {
	$interface(RawCharacterHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void charactersRaw($chars* ch, int32_t start, int32_t length) {}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_RawCharacterHandler_h_