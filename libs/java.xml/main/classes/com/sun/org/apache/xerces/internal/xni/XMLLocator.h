#ifndef _com_sun_org_apache_xerces_internal_xni_XMLLocator_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLLocator_h_
//$ interface com.sun.org.apache.xerces.internal.xni.XMLLocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XMLLocator : public ::java::lang::Object {
	$interface(XMLLocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getBaseSystemId() {return nullptr;}
	virtual int32_t getCharacterOffset() {return 0;}
	virtual int32_t getColumnNumber() {return 0;}
	virtual $String* getEncoding() {return nullptr;}
	virtual $String* getExpandedSystemId() {return nullptr;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getLiteralSystemId() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getXMLVersion() {return nullptr;}
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_XMLLocator_h_