#ifndef _com_sun_org_apache_xml_internal_serializer_ToUnknownStream_h_
#define _com_sun_org_apache_xml_internal_serializer_ToUnknownStream_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToUnknownStream
//$ extends com.sun.org.apache.xml.internal.serializer.SerializerBase

#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class DOMSerializer;
							class NamespaceMappings;
							class SerializationHandler;
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
			class ErrorListener;
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

class ToUnknownStream : public ::com::sun::org::apache::xml::internal::serializer::SerializerBase {
	$class(ToUnknownStream, 0, ::com::sun::org::apache::xml::internal::serializer::SerializerBase)
public:
	ToUnknownStream();
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::characters;
	void init$();
	void init$(::javax::xml::transform::ErrorListener* l);
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) override;
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) override;
	virtual void addAttribute($String* rawName, $String* value) override;
	virtual void addAttributes(::org::xml::sax::Attributes* atts) override;
	virtual void addUniqueAttribute($String* rawName, $String* value, int32_t flags) override;
	virtual ::org::xml::sax::ContentHandler* asContentHandler() override;
	virtual $Object* asDOM3Serializer() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::DOMSerializer* asDOMSerializer() override;
	virtual void attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) override;
	virtual void characters($String* chars) override;
	virtual void characters($chars* characters, int32_t offset, int32_t length) override;
	virtual void close() override;
	virtual void comment($String* comment) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void elementDecl($String* arg0, $String* arg1) override;
	void emitFirstTag();
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* elementName) override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void entityReference($String* entityName) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	void firePseudoElement($String* elementName);
	void flush();
	virtual void flushPending() override;
	virtual $String* getDoctypePublic() override;
	virtual $String* getDoctypeSystem() override;
	virtual $String* getEncoding() override;
	virtual bool getIndent() override;
	virtual int32_t getIndentAmount() override;
	$String* getLocalNameUnknown($String* value);
	virtual $String* getMediaType() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* getNamespaceMappings() override;
	virtual $String* getNamespaceURI($String* qname, bool isElement) override;
	virtual $String* getNamespaceURIFromPrefix($String* prefix) override;
	virtual bool getOmitXMLDeclaration() override;
	virtual ::java::util::Properties* getOutputFormat() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual $String* getPrefix($String* namespaceURI) override;
	$String* getPrefixPartUnknown($String* qname);
	virtual $String* getStandalone() override;
	virtual ::javax::xml::transform::Transformer* getTransformer() override;
	virtual $String* getVersion() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	void initStreamOutput();
	virtual void internalEntityDecl($String* arg0, $String* arg1) override;
	bool isFirstElemHTML();
	virtual void namespaceAfterStartElement($String* prefix, $String* uri) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual bool reset() override;
	virtual void serialize(::org::w3c::dom::Node* node) override;
	virtual void setCdataSectionElements(::java::util::List* URI_and_localNames) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* ch) override;
	virtual void setDoctype($String* system, $String* pub) override;
	virtual void setDoctypePublic($String* doctype) override;
	virtual void setDoctypeSystem($String* doctype) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEncoding($String* encoding) override;
	virtual bool setEscaping(bool escape) override;
	virtual void setIndent(bool indent) override;
	virtual void setIndentAmount(int32_t value) override;
	virtual void setIsStandalone(bool isStandalone) override;
	virtual void setMediaType($String* mediaType) override;
	virtual void setOmitXMLDeclaration(bool b) override;
	virtual void setOutputFormat(::java::util::Properties* format) override;
	virtual void setOutputStream(::java::io::OutputStream* output) override;
	virtual void setSourceLocator(::javax::xml::transform::SourceLocator* locator) override;
	virtual void setStandalone($String* standalone) override;
	virtual void setTransformer(::javax::xml::transform::Transformer* t) override;
	virtual void setVersion($String* version) override;
	virtual void setWriter(::java::io::Writer* writer) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* qName) override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* elementName, ::org::xml::sax::Attributes* atts) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) override;
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* m_handler = nullptr;
	static $String* EMPTYSTRING;
	bool m_wrapped_handler_not_initialized = false;
	$String* m_firstElementPrefix = nullptr;
	$String* m_firstElementName = nullptr;
	$String* m_firstElementURI = nullptr;
	$String* m_firstElementLocalName = nullptr;
	bool m_firstTagNotEmitted = false;
	::java::util::List* m_namespaceURI = nullptr;
	::java::util::List* m_namespacePrefix = nullptr;
	bool m_needToCallStartDocument = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTYSTRING")

#endif // _com_sun_org_apache_xml_internal_serializer_ToUnknownStream_h_