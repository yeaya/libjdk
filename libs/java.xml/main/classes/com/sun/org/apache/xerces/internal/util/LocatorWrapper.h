#ifndef _com_sun_org_apache_xerces_internal_util_LocatorWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_LocatorWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.LocatorWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace org {
	namespace xml {
		namespace sax {
			class Locator;
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

class LocatorWrapper : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(LocatorWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	LocatorWrapper();
	void init$(::org::xml::sax::Locator* _loc);
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	::org::xml::sax::Locator* locator = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_LocatorWrapper_h_