#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2DOM_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2DOM_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.SAX2DOM
//$ extends org.xml.sax.ContentHandler
//$ implements org.xml.sax.ext.LexicalHandler,com.sun.org.apache.xalan.internal.xsltc.runtime.Constants

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Constants.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

#pragma push_macro("SAX2DOM")
#undef SAX2DOM

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
		class Stack;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilderFactory;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class SAX2DOM : public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ext::LexicalHandler, public ::com::sun::org::apache::xalan::internal::xsltc::runtime::Constants {
	$class(SAX2DOM, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::org::xml::sax::ext::LexicalHandler, ::com::sun::org::apache::xalan::internal::xsltc::runtime::Constants)
public:
	SAX2DOM();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool overrideDefaultParser);
	void init$(::org::w3c::dom::Node* root, ::org::w3c::dom::Node* nextSibling, bool overrideDefaultParser);
	void init$(::org::w3c::dom::Node* root, bool overrideDefaultParser);
	void appendTextNode();
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	::org::w3c::dom::Document* createDocument(bool overrideDefaultParser);
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespace$, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual ::org::w3c::dom::Node* getDOM();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void processingInstruction($String* target, $String* data) override;
	void setDocumentInfo();
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* namespace$, $String* localName, $String* qName, ::org::xml::sax::Attributes* attrs) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	::org::w3c::dom::Node* _root = nullptr;
	::org::w3c::dom::Document* _document = nullptr;
	::org::w3c::dom::Node* _nextSibling = nullptr;
	::java::util::Stack* _nodeStk = nullptr;
	::java::util::List* _namespaceDecls = nullptr;
	::org::w3c::dom::Node* _lastSibling = nullptr;
	::org::xml::sax::Locator* locator = nullptr;
	bool needToSetDocumentInfo = false;
	::java::lang::StringBuilder* _textBuffer = nullptr;
	::org::w3c::dom::Node* _nextSiblingCache = nullptr;
	::javax::xml::parsers::DocumentBuilderFactory* _factory = nullptr;
	bool _internal = false;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SAX2DOM")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2DOM_h_