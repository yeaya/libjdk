#ifndef _com_sun_org_apache_xml_internal_serializer_ToXMLSAXHandler_h_
#define _com_sun_org_apache_xml_internal_serializer_ToXMLSAXHandler_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToXMLSAXHandler
//$ extends com.sun.org.apache.xml.internal.serializer.ToSAXHandler

#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
			class Locator;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ToXMLSAXHandler : public ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler {
	$class(ToXMLSAXHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler)
public:
	ToXMLSAXHandler();
	using ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler::comment;
	using ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler::characters;
	using ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler::addAttribute;
	void init$();
	void init$(::org::xml::sax::ContentHandler* handler, $String* encoding);
	void init$(::org::xml::sax::ContentHandler* handler, ::org::xml::sax::ext::LexicalHandler* lex, $String* encoding);
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) override;
	virtual void attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) override;
	virtual void characters($String* chars) override;
	virtual void characters($chars* ch, int32_t off, int32_t len) override;
	virtual void closeCDATA() override;
	virtual void closeStartTag() override;
	virtual void comment($chars* arg0, int32_t arg1, int32_t arg2) override;
	virtual void elementDecl($String* arg0, $String* arg1) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual void endElement($String* elemName) override;
	virtual void endPrefixMapping($String* prefix) override;
	void ensurePrefixIsDeclared($String* ns, $String* rawName);
	virtual void externalEntityDecl($String* arg0, $String* arg1, $String* arg2) override;
	virtual ::java::util::Properties* getOutputFormat() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual void ignorableWhitespace($chars* arg0, int32_t arg1, int32_t arg2) override;
	void indent(int32_t n);
	virtual void internalEntityDecl($String* arg0, $String* arg1) override;
	virtual void namespaceAfterStartElement($String* prefix, $String* uri) override;
	bool popNamespace($String* prefix);
	virtual void processingInstruction($String* target, $String* data) override;
	virtual bool reset() override;
	void resetToXMLSAXHandler();
	virtual void serialize(::org::w3c::dom::Node* node) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* arg0) override;
	virtual bool setEscaping(bool escape) override;
	virtual void setOutputFormat(::java::util::Properties* format) override;
	virtual void setOutputStream(::java::io::OutputStream* output) override;
	virtual void setWriter(::java::io::Writer* writer) override;
	virtual void skippedEntity($String* arg0) override;
	virtual void startCDATA() override;
	virtual void startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) override;
	virtual void startElement($String* elementName) override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* name, ::org::xml::sax::Attributes* atts) override;
	virtual void startEntity($String* arg0) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) override;
	bool m_escapeSetting = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToXMLSAXHandler_h_