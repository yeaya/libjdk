#ifndef _org_xml_sax_DTDHandler_h_
#define _org_xml_sax_DTDHandler_h_
//$ interface org.xml.sax.DTDHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {

class $import DTDHandler : public ::java::lang::Object {
	$interface(DTDHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) {}
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_DTDHandler_h_