#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_DOMDocumentHandler_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_DOMDocumentHandler_h_
//$ interface com.sun.org.apache.xerces.internal.jaxp.validation.DOMDocumentHandler
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler

#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {
				class DOMResult;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class CDATASection;
			class Comment;
			class DocumentType;
			class ProcessingInstruction;
			class Text;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class DOMDocumentHandler : public ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler {
	$interface(DOMDocumentHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler)
public:
	virtual void cdata(::org::w3c::dom::CDATASection* node) {}
	using ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler::characters;
	virtual void characters(::org::w3c::dom::Text* node) {}
	using ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler::comment;
	virtual void comment(::org::w3c::dom::Comment* node) {}
	using ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler::doctypeDecl;
	virtual void doctypeDecl(::org::w3c::dom::DocumentType* node) {}
	using ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler::processingInstruction;
	virtual void processingInstruction(::org::w3c::dom::ProcessingInstruction* node) {}
	virtual void setDOMResult(::javax::xml::transform::dom::DOMResult* result) {}
	virtual void setIgnoringCharacters(bool ignore) {}
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_DOMDocumentHandler_h_