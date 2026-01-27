#ifndef _com_sun_org_apache_xml_internal_serialize_BaseMarkupSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_BaseMarkupSerializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer
//$ extends org.xml.sax.ContentHandler
//$ implements org.xml.sax.DocumentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.DeclHandler,com.sun.org.apache.xml.internal.serialize.DOMSerializer,com.sun.org.apache.xml.internal.serialize.Serializer

#include <com/sun/org/apache/xml/internal/serialize/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/Serializer.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DOMErrorImpl;
						}
					}
				}
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
						namespace serialize {
							class ElementState;
							class EncodingInfo;
							class OutputFormat;
							class Printer;
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
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMError;
			class DOMErrorHandler;
			class Document;
			class DocumentFragment;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSSerializerFilter;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
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
						namespace serialize {

class BaseMarkupSerializer : public ::org::xml::sax::ContentHandler, public ::org::xml::sax::DocumentHandler, public ::org::xml::sax::ext::LexicalHandler, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ext::DeclHandler, public ::com::sun::org::apache::xml::internal::serialize::DOMSerializer, public ::com::sun::org::apache::xml::internal::serialize::Serializer {
	$class(BaseMarkupSerializer, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::org::xml::sax::DocumentHandler, ::org::xml::sax::ext::LexicalHandler, ::org::xml::sax::DTDHandler, ::org::xml::sax::ext::DeclHandler, ::com::sun::org::apache::xml::internal::serialize::DOMSerializer, ::com::sun::org::apache::xml::internal::serialize::Serializer)
public:
	BaseMarkupSerializer();
	using ::org::xml::sax::ContentHandler::endElement;
	using ::org::xml::sax::DocumentHandler::endElement;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual ::org::xml::sax::ContentHandler* asContentHandler() override;
	virtual ::com::sun::org::apache::xml::internal::serialize::DOMSerializer* asDOMSerializer() override;
	virtual ::org::xml::sax::DocumentHandler* asDocumentHandler() override;
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void characters($String* text);
	virtual void checkUnboundNamespacePrefixedNode(::org::w3c::dom::Node* node);
	virtual void cleanup();
	void clearDocumentState();
	virtual void comment($chars* chars, int32_t start, int32_t length) override;
	virtual void comment($String* text);
	virtual ::com::sun::org::apache::xml::internal::serialize::ElementState* content();
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endEntity($String* name) override;
	virtual void endNonEscaping();
	virtual void endPrefixMapping($String* prefix) override;
	virtual void endPreserving();
	virtual ::com::sun::org::apache::xml::internal::serialize::ElementState* enterElementState($String* namespaceURI, $String* localName, $String* rawName, bool preserveSpace);
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void fatalError($String* message);
	virtual ::com::sun::org::apache::xml::internal::serialize::ElementState* getElementState();
	virtual $String* getEntityRef(int32_t ch) {return nullptr;}
	virtual $String* getPrefix($String* namespaceURI);
	virtual void ignorableWhitespace($chars* chars, int32_t start, int32_t length) override;
	virtual void internalEntityDecl($String* name, $String* value) override;
	virtual bool isDocumentState();
	virtual ::com::sun::org::apache::xml::internal::serialize::ElementState* leaveElementState();
	virtual ::org::w3c::dom::DOMError* modifyDOMError($String* message, int16_t severity, $String* type, ::org::w3c::dom::Node* node);
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void prepare();
	virtual void printCDATAText($String* text);
	virtual void printDoctypeURL($String* url);
	virtual void printEscaped(int32_t ch);
	virtual void printEscaped($String* source);
	void printHex(int32_t ch);
	virtual void printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped);
	virtual void printText($String* text, bool preserveSpace, bool unescaped);
	virtual void processingInstruction($String* target, $String* code) override;
	virtual void processingInstructionIO($String* target, $String* code);
	virtual bool reset();
	virtual void serialize(::org::w3c::dom::Element* elem) override;
	virtual void serialize(::org::w3c::dom::Node* node);
	virtual void serialize(::org::w3c::dom::DocumentFragment* frag) override;
	virtual void serialize(::org::w3c::dom::Document* doc) override;
	virtual void serializeDTD($String* name);
	virtual void serializeDocument();
	virtual void serializeElement(::org::w3c::dom::Element* elem) {}
	virtual void serializeNode(::org::w3c::dom::Node* node);
	virtual void serializePreRoot();
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setOutputByteStream(::java::io::OutputStream* output) override;
	virtual void setOutputCharStream(::java::io::Writer* writer) override;
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	using ::org::xml::sax::ContentHandler::startElement;
	using ::org::xml::sax::DocumentHandler::startElement;
	virtual void startEntity($String* name) override;
	virtual void startNonEscaping();
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual void startPreserving();
	virtual void surrogates(int32_t high, int32_t low, bool inContent);
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	int16_t features = 0;
	::org::w3c::dom::DOMErrorHandler* fDOMErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* fDOMError = nullptr;
	::org::w3c::dom::ls::LSSerializerFilter* fDOMFilter = nullptr;
	::com::sun::org::apache::xml::internal::serialize::EncodingInfo* _encodingInfo = nullptr;
	$Array<::com::sun::org::apache::xml::internal::serialize::ElementState>* _elementStates = nullptr;
	int32_t _elementStateCount = 0;
	::java::util::List* _preRoot = nullptr;
	bool _started = false;
	bool _prepared = false;
	::java::util::Map* _prefixes = nullptr;
	$String* _docTypePublicId = nullptr;
	$String* _docTypeSystemId = nullptr;
	::com::sun::org::apache::xml::internal::serialize::OutputFormat* _format = nullptr;
	::com::sun::org::apache::xml::internal::serialize::Printer* _printer = nullptr;
	bool _indenting = false;
	::java::lang::StringBuffer* fStrBuffer = nullptr;
	::java::io::Writer* _writer = nullptr;
	::java::io::OutputStream* _output = nullptr;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_BaseMarkupSerializer_h_