#ifndef _com_sun_org_apache_xml_internal_utils_XMLStringFactoryDefault_h_
#define _com_sun_org_apache_xml_internal_utils_XMLStringFactoryDefault_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLStringFactoryDefault
//$ extends com.sun.org.apache.xml.internal.utils.XMLStringFactory

#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class FastStringBuffer;
							class XMLString;
							class XMLStringDefault;
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

class $import XMLStringFactoryDefault : public ::com::sun::org::apache::xml::internal::utils::XMLStringFactory {
	$class(XMLStringFactoryDefault, 0, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory)
public:
	XMLStringFactoryDefault();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* emptystr() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($String* string) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb, int32_t start, int32_t length) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($chars* string, int32_t start, int32_t length) override;
	static ::com::sun::org::apache::xml::internal::utils::XMLStringDefault* EMPTY_STR;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STR")

#endif // _com_sun_org_apache_xml_internal_utils_XMLStringFactoryDefault_h_