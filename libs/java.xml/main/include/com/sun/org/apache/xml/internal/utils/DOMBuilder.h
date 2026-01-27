#ifndef _com_sun_org_apache_xml_internal_utils_DOMBuilder_h_
#define _com_sun_org_apache_xml_internal_utils_DOMBuilder_h_
//$ class com.sun.org.apache.xml.internal.utils.DOMBuilder
//$ extends org.xml.sax.ContentHandler
//$ implements org.xml.sax.ext.LexicalHandler

#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Stack;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class DocumentFragment;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class Locator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import DOMBuilder : public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ext::LexicalHandler {
	$class(DOMBuilder, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::org::xml::sax::ext::LexicalHandler)
public:
	DOMBuilder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Document* doc, ::org::w3c::dom::Node* node);
	void init$(::org::w3c::dom::Document* doc, ::org::w3c::dom::DocumentFragment* docFrag);
	void init$(::org::w3c::dom::Document* doc);
	virtual void append(::org::w3c::dom::Node* newNode);
	virtual void cdata($chars* ch, int32_t start, int32_t length);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void charactersRaw($chars* ch, int32_t start, int32_t length);
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* ns, $String* localName, $String* name) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void entityReference($String* name);
	virtual ::org::w3c::dom::Node* getCurrentNode();
	virtual ::org::w3c::dom::Node* getNextSibling();
	virtual ::org::w3c::dom::Node* getRootDocument();
	virtual ::org::w3c::dom::Node* getRootNode();
	virtual ::java::io::Writer* getWriter();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	bool isOutsideDocElem();
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setIDAttribute($String* id, ::org::w3c::dom::Element* elem);
	virtual void setNextSibling(::org::w3c::dom::Node* nextSibling);
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* ns, $String* localName, $String* name, ::org::xml::sax::Attributes* atts) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	::org::w3c::dom::Document* m_doc = nullptr;
	::org::w3c::dom::Node* m_currentNode = nullptr;
	::org::w3c::dom::Node* m_root = nullptr;
	::org::w3c::dom::Node* m_nextSibling = nullptr;
	::org::w3c::dom::DocumentFragment* m_docFrag = nullptr;
	::java::util::Stack* m_elemStack = nullptr;
	bool m_inCData = false;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_DOMBuilder_h_