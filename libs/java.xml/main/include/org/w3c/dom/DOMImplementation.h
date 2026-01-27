#ifndef _org_w3c_dom_DOMImplementation_h_
#define _org_w3c_dom_DOMImplementation_h_
//$ interface org.w3c.dom.DOMImplementation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class DocumentType;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import DOMImplementation : public ::java::lang::Object {
	$interface(DOMImplementation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::Document* createDocument($String* namespaceURI, $String* qualifiedName, ::org::w3c::dom::DocumentType* doctype) {return nullptr;}
	virtual ::org::w3c::dom::DocumentType* createDocumentType($String* qualifiedName, $String* publicId, $String* systemId) {return nullptr;}
	virtual $Object* getFeature($String* feature, $String* version) {return nullptr;}
	virtual bool hasFeature($String* feature, $String* version) {return false;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMImplementation_h_