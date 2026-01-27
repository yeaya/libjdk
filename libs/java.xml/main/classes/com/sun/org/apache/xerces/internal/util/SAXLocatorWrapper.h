#ifndef _com_sun_org_apache_xerces_internal_util_SAXLocatorWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_SAXLocatorWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.SAXLocatorWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace org {
	namespace xml {
		namespace sax {
			class Locator;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class Locator2;
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

class SAXLocatorWrapper : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(SAXLocatorWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	SAXLocatorWrapper();
	void init$();
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	::org::xml::sax::Locator* getLocator();
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	void setLocator(::org::xml::sax::Locator* locator);
	::org::xml::sax::Locator* fLocator = nullptr;
	::org::xml::sax::ext::Locator2* fLocator2 = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SAXLocatorWrapper_h_