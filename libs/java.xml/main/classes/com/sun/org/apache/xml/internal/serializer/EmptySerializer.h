#ifndef _com_sun_org_apache_xml_internal_serializer_EmptySerializer_h_
#define _com_sun_org_apache_xml_internal_serializer_EmptySerializer_h_
//$ class com.sun.org.apache.xml.internal.serializer.EmptySerializer
//$ extends com.sun.org.apache.xml.internal.serializer.SerializationHandler

#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/lang/Array.h>

#pragma push_macro("ERR")
#undef ERR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class DOMSerializer;
							class NamespaceMappings;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace util {
		class List;
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
			class Transformer;
		}
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
			class SAXParseException;
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

class EmptySerializer : public ::com::sun::org::apache::xml::internal::serializer::SerializationHandler {
	$class(EmptySerializer, 0, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler)
public:
	EmptySerializer();
	void init$();
	virtual void aMethodIsCalled();
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) override;
	virtual void addAttribute($String* name, $String* value) override;
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) override;
	virtual void addAttributes(::org::xml::sax::Attributes* atts) override;
	virtual void addUniqueAttribute($String* name, $String* value, int32_t flags) override;
	virtual void addXSLAttribute($String* qName, $String* value, $String* uri) override;
	virtual ::org::xml::sax::ContentHandler* asContentHandler() override;
	virtual $Object* asDOM3Serializer() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::DOMSerializer* asDOMSerializer() override;
	virtual void attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) override;
	virtual void characters($String* chars) override;
	virtual void characters($chars* arg0, int32_t arg1, int32_t arg2) override;
	virtual void characters(::org::w3c::dom::Node* node) override;
	virtual void close() override;
	virtual void comment($String* comment) override;
	virtual void comment($chars* arg0, int32_t arg1, int32_t arg2) override;
	virtual void couldThrowIOException();
	virtual void couldThrowSAXException();
	virtual void couldThrowSAXException($chars* chars, int32_t off, int32_t len);
	virtual void couldThrowSAXException($String* elemQName);
	virtual void elementDecl($String* arg0, $String* arg1) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* elemName) override;
	virtual void endElement($String* arg0, $String* arg1, $String* arg2) override;
	virtual void endEntity($String* arg0) override;
	virtual void endPrefixMapping($String* arg0) override;
	virtual void entityReference($String* entityName) override;
	virtual void error(::org::xml::sax::SAXParseException* arg0) override;
	virtual void externalEntityDecl($String* arg0, $String* arg1, $String* arg2) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* arg0) override;
	virtual void flushPending() override;
	virtual $String* getDoctypePublic() override;
	virtual $String* getDoctypeSystem() override;
	virtual $String* getEncoding() override;
	virtual bool getIndent() override;
	virtual int32_t getIndentAmount() override;
	virtual $String* getMediaType() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* getNamespaceMappings() override;
	virtual $String* getNamespaceURI($String* name, bool isElement) override;
	virtual $String* getNamespaceURIFromPrefix($String* prefix) override;
	virtual bool getOmitXMLDeclaration() override;
	virtual ::java::util::Properties* getOutputFormat() override;
	virtual $String* getOutputProperty($String* name) override;
	virtual $String* getOutputPropertyDefault($String* name) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual $String* getPrefix($String* uri) override;
	virtual $String* getStandalone() override;
	virtual ::javax::xml::transform::Transformer* getTransformer() override;
	virtual $String* getVersion() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual void ignorableWhitespace($chars* arg0, int32_t arg1, int32_t arg2) override;
	virtual void internalEntityDecl($String* arg0, $String* arg1) override;
	virtual void namespaceAfterStartElement($String* uri, $String* prefix) override;
	virtual void notationDecl($String* arg0, $String* arg1, $String* arg2) override;
	virtual void processingInstruction($String* arg0, $String* arg1) override;
	virtual bool reset() override;
	virtual void serialize(::org::w3c::dom::Node* node) override;
	virtual void setCdataSectionElements(::java::util::List* URI_and_localNames) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* ch) override;
	virtual void setDTDEntityExpansion(bool expand) override;
	virtual void setDoctype($String* system, $String* pub) override;
	virtual void setDoctypePublic($String* doctype) override;
	virtual void setDoctypeSystem($String* doctype) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* arg0) override;
	virtual void setEncoding($String* encoding) override;
	virtual bool setEscaping(bool escape) override;
	virtual void setIndent(bool indent) override;
	virtual void setIndentAmount(int32_t spaces) override;
	virtual void setIsStandalone(bool isStandalone) override;
	virtual void setMediaType($String* mediatype) override;
	virtual void setNamespaceMappings(::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* mappings) override;
	virtual void setOmitXMLDeclaration(bool b) override;
	virtual void setOutputFormat(::java::util::Properties* format) override;
	virtual void setOutputProperty($String* name, $String* val) override;
	virtual void setOutputPropertyDefault($String* name, $String* val) override;
	virtual void setOutputStream(::java::io::OutputStream* output) override;
	virtual void setSourceLocator(::javax::xml::transform::SourceLocator* locator) override;
	virtual void setStandalone($String* standalone) override;
	virtual void setTransformer(::javax::xml::transform::Transformer* transformer) override;
	virtual void setVersion($String* version) override;
	virtual void setWriter(::java::io::Writer* writer) override;
	virtual void skippedEntity($String* arg0) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* arg0, $String* arg1, $String* arg2) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName) override;
	virtual void startElement($String* qName) override;
	virtual void startElement($String* arg0, $String* arg1, $String* arg2, ::org::xml::sax::Attributes* arg3) override;
	virtual void startEntity($String* arg0) override;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) override;
	virtual void startPrefixMapping($String* arg0, $String* arg1) override;
	virtual void unparsedEntityDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3) override;
	virtual void warning(::org::xml::sax::SAXParseException* arg0) override;
	static $String* ERR;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERR")

#endif // _com_sun_org_apache_xml_internal_serializer_EmptySerializer_h_