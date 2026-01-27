#ifndef _com_sun_org_apache_xerces_internal_xni_XMLResourceIdentifier_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLResourceIdentifier_h_
//$ interface com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XMLResourceIdentifier : public ::java::lang::Object {
	$interface(XMLResourceIdentifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getBaseSystemId() {return nullptr;}
	virtual $String* getExpandedSystemId() {return nullptr;}
	virtual $String* getLiteralSystemId() {return nullptr;}
	virtual $String* getNamespace() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual void setBaseSystemId($String* systemId) {}
	virtual void setExpandedSystemId($String* systemId) {}
	virtual void setLiteralSystemId($String* systemId) {}
	virtual void setNamespace($String* namespace$) {}
	virtual void setPublicId($String* publicId) {}
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_XMLResourceIdentifier_h_