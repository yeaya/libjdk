#ifndef _org_xml_sax_ext_DeclHandler_h_
#define _org_xml_sax_ext_DeclHandler_h_
//$ interface org.xml.sax.ext.DeclHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $export DeclHandler : public ::java::lang::Object {
	$interface(DeclHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* mode, $String* value) {}
	virtual void elementDecl($String* name, $String* model) {}
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) {}
	virtual void internalEntityDecl($String* name, $String* value) {}
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_DeclHandler_h_