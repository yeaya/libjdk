#ifndef _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$LocatorProxy_h_
#define _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$LocatorProxy_h_
//$ class com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$LocatorProxy
//$ extends org.xml.sax.ext.Locator2

#include <org/xml/sax/ext/Locator2.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class AbstractSAXParser;
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
						namespace parsers {

class AbstractSAXParser$LocatorProxy : public ::org::xml::sax::ext::Locator2 {
	$class(AbstractSAXParser$LocatorProxy, $NO_CLASS_INIT, ::org::xml::sax::ext::Locator2)
public:
	AbstractSAXParser$LocatorProxy();
	void init$(::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser* this$0, ::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator);
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getXMLVersion() override;
	::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$LocatorProxy_h_