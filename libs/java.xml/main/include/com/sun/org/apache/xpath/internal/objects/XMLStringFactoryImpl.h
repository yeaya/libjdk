#ifndef _com_sun_org_apache_xpath_internal_objects_XMLStringFactoryImpl_h_
#define _com_sun_org_apache_xpath_internal_objects_XMLStringFactoryImpl_h_
//$ class com.sun.org.apache.xpath.internal.objects.XMLStringFactoryImpl
//$ extends com.sun.org.apache.xml.internal.utils.XMLStringFactory

#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
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
				namespace xpath {
					namespace internal {
						namespace objects {

class $import XMLStringFactoryImpl : public ::com::sun::org::apache::xml::internal::utils::XMLStringFactory {
	$class(XMLStringFactoryImpl, 0, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory)
public:
	XMLStringFactoryImpl();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* emptystr() override;
	static ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* getFactory();
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($String* string) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb, int32_t start, int32_t length) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* newstr($chars* string, int32_t start, int32_t length) override;
	static ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* m_xstringfactory;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XMLStringFactoryImpl_h_