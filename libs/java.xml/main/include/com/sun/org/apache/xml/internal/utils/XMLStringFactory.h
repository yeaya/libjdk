#ifndef _com_sun_org_apache_xml_internal_utils_XMLStringFactory_h_
#define _com_sun_org_apache_xml_internal_utils_XMLStringFactory_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLStringFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class FastStringBuffer;
							class XMLString;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import XMLStringFactory : public ::java::lang::Object {
	$class(XMLStringFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLStringFactory();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* emptystr() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($String* string) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* string, int32_t start, int32_t length) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($chars* string, int32_t start, int32_t length) {return nullptr;}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLStringFactory_h_