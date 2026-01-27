#ifndef _com_sun_org_apache_xerces_internal_util_XMLLocatorWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_XMLLocatorWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLLocatorWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLLocatorWrapper : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(XMLLocatorWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	XMLLocatorWrapper();
	void init$();
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* getLocator();
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	void setLocator(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator);
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLLocatorWrapper_h_