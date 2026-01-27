#ifndef _com_sun_org_apache_xerces_internal_util_LocatorProxy_h_
#define _com_sun_org_apache_xerces_internal_util_LocatorProxy_h_
//$ class com.sun.org.apache.xerces.internal.util.LocatorProxy
//$ extends org.xml.sax.ext.Locator2

#include <org/xml/sax/ext/Locator2.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLLocator;
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
				namespace xerces {
					namespace internal {
						namespace util {

class LocatorProxy : public ::org::xml::sax::ext::Locator2 {
	$class(LocatorProxy, $NO_CLASS_INIT, ::org::xml::sax::ext::Locator2)
public:
	LocatorProxy();
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator);
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getXMLVersion() override;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_LocatorProxy_h_