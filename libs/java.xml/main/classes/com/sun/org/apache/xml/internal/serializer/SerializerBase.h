#ifndef _com_sun_org_apache_xml_internal_serializer_SerializerBase_h_
#define _com_sun_org_apache_xml_internal_serializer_SerializerBase_h_
//$ class com.sun.org.apache.xml.internal.serializer.SerializerBase
//$ extends com.sun.org.apache.xml.internal.serializer.SerializationHandler
//$ implements com.sun.org.apache.xml.internal.serializer.SerializerConstants

#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class AttributesImplSerializer;
							class DOMSerializer;
							class ElemContext;
							class NamespaceMappings;
							class SerializerTrace;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Set;
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

class SerializerBase : public ::com::sun::org::apache::xml::internal::serializer::SerializationHandler, public ::com::sun::org::apache::xml::internal::serializer::SerializerConstants {
	$class(SerializerBase, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler, ::com::sun::org::apache::xml::internal::serializer::SerializerConstants)
public:
	SerializerBase();
	using ::com::sun::org::apache::xml::internal::serializer::SerializationHandler::characters;
	using ::com::sun::org::apache::xml::internal::serializer::SerializationHandler::endElement;
	using ::com::sun::org::apache::xml::internal::serializer::SerializationHandler::comment;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) override;
	virtual void addAttribute($String* name, $String* value) override;
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) override;
	virtual bool addAttributeAlways($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute);
	virtual void addAttributes(::org::xml::sax::Attributes* atts) override;
	void addCDATAElement($String* uri, $String* localName);
	virtual void addXSLAttribute($String* name, $String* value, $String* uri) override;
	virtual ::org::xml::sax::ContentHandler* asContentHandler() override;
	virtual $Object* asDOM3Serializer() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::DOMSerializer* asDOMSerializer() override;
	virtual void characters(::org::w3c::dom::Node* node) override;
	virtual void close() override;
	virtual void comment($String* data) override;
	virtual bool documentIsEmpty();
	virtual void endEntity($String* name) override;
	virtual void entityReference($String* name) override;
	virtual void error(::org::xml::sax::SAXParseException* exc) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exc) override;
	virtual void fireCDATAEvent($chars* chars, int32_t start, int32_t length);
	virtual void fireCharEvent($chars* chars, int32_t start, int32_t length);
	virtual void fireCommentEvent($chars* chars, int32_t start, int32_t length);
	virtual void fireEndDoc();
	virtual void fireEndElem($String* name);
	virtual void fireEndEntity($String* name);
	virtual void fireEntityReference($String* name);
	virtual void fireEscapingEvent($String* name, $String* data);
	virtual void fireStartDoc();
	virtual void fireStartElem($String* elemName);
	virtual void fireStartEntity($String* name);
	void flushMyWriter();
	virtual $String* getDoctypePublic() override;
	virtual $String* getDoctypeSystem() override;
	$String* getElementURI();
	virtual $String* getEncoding() override;
	static char16_t getFirstCharLocName($String* name);
	virtual bool getIndent() override;
	virtual int32_t getIndentAmount() override;
	static $String* getLocalName($String* qname);
	virtual $String* getMediaType() override;
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* getNamespaceMappings() override;
	virtual $String* getNamespaceURI($String* qname, bool isElement) override;
	virtual $String* getNamespaceURIFromPrefix($String* prefix) override;
	virtual bool getOmitXMLDeclaration() override;
	virtual ::java::util::Set* getOutputPropDefaultKeys();
	virtual ::java::util::Set* getOutputPropKeys();
	virtual $String* getOutputProperty($String* name) override;
	virtual $String* getOutputPropertyDefault($String* name) override;
	virtual $String* getOutputPropertyNonDefault($String* name);
	virtual $String* getPrefix($String* namespaceURI) override;
	static $String* getPrefixPart($String* qname);
	$String* getProp($String* name, bool defaultVal);
	virtual $String* getStandalone() override;
	virtual ::javax::xml::transform::Transformer* getTransformer() override;
	virtual $String* getVersion() override;
	bool inTemporaryOutputState();
	virtual void initCDATA();
	virtual void initCdataElems($String* s);
	virtual bool isCdataSection();
	virtual bool isInEntityRef();
	virtual void namespaceAfterStartElement($String* uri, $String* prefix) override;
	virtual void notationDecl($String* arg0, $String* arg1, $String* arg2) override;
	virtual $String* patchName($String* qname);
	virtual bool reset() override;
	void resetSerializerBase();
	virtual void setDTDEntityExpansion(bool expand) override;
	virtual void setDoctype($String* doctypeSystem, $String* doctypePublic) override;
	virtual void setDoctypePublic($String* doctypePublic) override;
	virtual void setDoctypeSystem($String* doctypeSystem) override;
	virtual void setDocumentInfo();
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEncoding($String* encoding) override;
	virtual void setIndent(bool doIndent) override;
	virtual void setIndentAmount(int32_t m_indentAmount) override;
	virtual void setIsStandalone(bool isStandalone) override;
	virtual void setMediaType($String* mediaType) override;
	virtual void setNamespaceMappings(::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* mappings) override;
	virtual void setOmitXMLDeclaration(bool b) override;
	virtual void setOutputProperty($String* name, $String* val) override;
	virtual void setOutputPropertyDefault($String* name, $String* val) override;
	virtual void setProp($String* name, $String* val, bool defaultVal);
	virtual void setSourceLocator(::javax::xml::transform::SourceLocator* locator) override;
	virtual void setStandalone($String* standalone) override;
	virtual void setStandaloneInternal($String* standalone);
	virtual void setTransformer(::javax::xml::transform::Transformer* t) override;
	virtual void setVersion($String* version) override;
	virtual void startDocument() override;
	virtual void startDocumentInternal();
	using ::com::sun::org::apache::xml::internal::serializer::SerializationHandler::startElement;
	using ::com::sun::org::apache::xml::internal::serializer::SerializationHandler::startPrefixMapping;
	static bool subPartMatch($String* p, $String* t);
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3) override;
	virtual void warning(::org::xml::sax::SAXParseException* exc) override;
	::javax::xml::transform::ErrorListener* m_errListener = nullptr;
	bool m_needToCallStartDocument = false;
	bool m_cdataTagOpen = false;
	::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer* m_attributes = nullptr;
	int32_t m_inEntityRef = 0;
	bool m_inExternalDTD = false;
	$String* m_doctypeSystem = nullptr;
	$String* m_doctypePublic = nullptr;
	bool m_needToOutputDocTypeDecl = false;
	bool m_shouldNotWriteXMLHeader = false;
	$String* m_standalone = nullptr;
	bool m_standaloneWasSpecified = false;
	bool m_isStandalone = false;
	bool m_doIndent = false;
	int32_t m_indentAmount = 0;
	$String* m_version = nullptr;
	$String* m_mediatype = nullptr;
	::javax::xml::transform::Transformer* m_transformer = nullptr;
	::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* m_prefixMap = nullptr;
	::com::sun::org::apache::xml::internal::serializer::SerializerTrace* m_tracer = nullptr;
	::javax::xml::transform::SourceLocator* m_sourceLocator = nullptr;
	::java::io::Writer* m_writer = nullptr;
	::com::sun::org::apache::xml::internal::serializer::ElemContext* m_elemContext = nullptr;
	$chars* m_charsBuff = nullptr;
	$chars* m_attrBuff = nullptr;
	::org::xml::sax::Locator* m_locator = nullptr;
	bool m_needToCallSetDocumentInfo = false;
	$String* m_StringOfCDATASections = nullptr;
	bool m_docIsEmpty = false;
	::java::util::HashMap* m_CdataElems = nullptr;
	::java::util::HashMap* m_OutputProps = nullptr;
	::java::util::HashMap* m_OutputPropsDefault = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_SerializerBase_h_