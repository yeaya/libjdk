#ifndef _com_sun_org_apache_xml_internal_dtm_DTM_h_
#define _com_sun_org_apache_xml_internal_dtm_DTM_h_
//$ interface com.sun.org.apache.xml.internal.dtm.DTM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ATTRIBUTE_NODE")
#undef ATTRIBUTE_NODE
#pragma push_macro("CDATA_SECTION_NODE")
#undef CDATA_SECTION_NODE
#pragma push_macro("COMMENT_NODE")
#undef COMMENT_NODE
#pragma push_macro("DOCUMENT_FRAGMENT_NODE")
#undef DOCUMENT_FRAGMENT_NODE
#pragma push_macro("DOCUMENT_NODE")
#undef DOCUMENT_NODE
#pragma push_macro("DOCUMENT_TYPE_NODE")
#undef DOCUMENT_TYPE_NODE
#pragma push_macro("DTM")
#undef DTM
#pragma push_macro("ELEMENT_NODE")
#undef ELEMENT_NODE
#pragma push_macro("ENTITY_NODE")
#undef ENTITY_NODE
#pragma push_macro("ENTITY_REFERENCE_NODE")
#undef ENTITY_REFERENCE_NODE
#pragma push_macro("NAMESPACE_NODE")
#undef NAMESPACE_NODE
#pragma push_macro("NOTATION_NODE")
#undef NOTATION_NODE
#pragma push_macro("NTYPES")
#undef NTYPES
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("PROCESSING_INSTRUCTION_NODE")
#undef PROCESSING_INSTRUCTION_NODE
#pragma push_macro("ROOT_NODE")
#undef ROOT_NODE
#pragma push_macro("TEXT_NODE")
#undef TEXT_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
							class DTMAxisTraverser;
							class DTMManager;
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
						namespace utils {
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
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
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class DeclHandler;
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
						namespace dtm {

class $export DTM : public ::java::lang::Object {
	$interface(DTM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void appendChild(int32_t newChild, bool clone, bool cloneDepth) {}
	virtual void appendTextChild($String* str) {}
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) {}
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) {}
	virtual void documentRegistration() {}
	virtual void documentRelease() {}
	virtual int32_t getAttributeNode(int32_t elementHandle, $String* namespaceURI, $String* name) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* getAxisTraverser(int32_t axis) {return nullptr;}
	virtual ::org::xml::sax::ContentHandler* getContentHandler() {return nullptr;}
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() {return nullptr;}
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler() {return nullptr;}
	virtual int32_t getDocument() {return 0;}
	virtual bool getDocumentAllDeclarationsProcessed() {return false;}
	virtual $String* getDocumentBaseURI() {return nullptr;}
	virtual $String* getDocumentEncoding(int32_t nodeHandle) {return nullptr;}
	virtual int32_t getDocumentRoot(int32_t nodeHandle) {return 0;}
	virtual $String* getDocumentStandalone(int32_t nodeHandle) {return nullptr;}
	virtual $String* getDocumentSystemIdentifier(int32_t nodeHandle) {return nullptr;}
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() {return nullptr;}
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() {return nullptr;}
	virtual $String* getDocumentVersion(int32_t documentHandle) {return nullptr;}
	virtual int32_t getElementById($String* elementId) {return 0;}
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() {return nullptr;}
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual int32_t getExpandedTypeID(int32_t nodeHandle) {return 0;}
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {return 0;}
	virtual int32_t getFirstAttribute(int32_t nodeHandle) {return 0;}
	virtual int32_t getFirstChild(int32_t nodeHandle) {return 0;}
	virtual int32_t getFirstNamespaceNode(int32_t nodeHandle, bool inScope) {return 0;}
	virtual int32_t getLastChild(int32_t nodeHandle) {return 0;}
	virtual int16_t getLevel(int32_t nodeHandle) {return 0;}
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler() {return nullptr;}
	virtual $String* getLocalName(int32_t nodeHandle) {return nullptr;}
	virtual $String* getLocalNameFromExpandedNameID(int32_t ExpandedNameID) {return nullptr;}
	virtual $String* getNamespaceFromExpandedNameID(int32_t ExpandedNameID) {return nullptr;}
	virtual $String* getNamespaceURI(int32_t nodeHandle) {return nullptr;}
	virtual int32_t getNextAttribute(int32_t nodeHandle) {return 0;}
	virtual int32_t getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) {return 0;}
	virtual int32_t getNextSibling(int32_t nodeHandle) {return 0;}
	virtual ::org::w3c::dom::Node* getNode(int32_t nodeHandle) {return nullptr;}
	virtual $String* getNodeName(int32_t nodeHandle) {return nullptr;}
	virtual $String* getNodeNameX(int32_t nodeHandle) {return nullptr;}
	virtual int16_t getNodeType(int32_t nodeHandle) {return 0;}
	virtual $String* getNodeValue(int32_t nodeHandle) {return nullptr;}
	virtual int32_t getOwnerDocument(int32_t nodeHandle) {return 0;}
	virtual int32_t getParent(int32_t nodeHandle) {return 0;}
	virtual $String* getPrefix(int32_t nodeHandle) {return nullptr;}
	virtual int32_t getPreviousSibling(int32_t nodeHandle) {return 0;}
	virtual ::javax::xml::transform::SourceLocator* getSourceLocatorFor(int32_t node) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) {return nullptr;}
	virtual $chars* getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) {return nullptr;}
	virtual int32_t getStringValueChunkCount(int32_t nodeHandle) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) {return nullptr;}
	virtual $String* getUnparsedEntityURI($String* name) {return nullptr;}
	virtual bool hasChildNodes(int32_t nodeHandle) {return false;}
	virtual bool isAttributeSpecified(int32_t attributeHandle) {return false;}
	virtual bool isCharacterElementContentWhitespace(int32_t nodeHandle) {return false;}
	virtual bool isDocumentAllDeclarationsProcessed(int32_t documentHandle) {return false;}
	virtual bool isNodeAfter(int32_t firstNodeHandle, int32_t secondNodeHandle) {return false;}
	virtual bool isSupported($String* feature, $String* version) {return false;}
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* manager) {}
	virtual bool needsTwoThreads() {return false;}
	virtual void setDocumentBaseURI($String* baseURI) {}
	virtual void setFeature($String* featureId, bool state) {}
	virtual void setProperty($String* property, Object$* value) {}
	virtual bool supportsPreStripping() {return false;}
	static const int32_t NULL = (-1);
	static const int16_t ROOT_NODE = 0;
	static const int16_t ELEMENT_NODE = 1;
	static const int16_t ATTRIBUTE_NODE = 2;
	static const int16_t TEXT_NODE = 3;
	static const int16_t CDATA_SECTION_NODE = 4;
	static const int16_t ENTITY_REFERENCE_NODE = 5;
	static const int16_t ENTITY_NODE = 6;
	static const int16_t PROCESSING_INSTRUCTION_NODE = 7;
	static const int16_t COMMENT_NODE = 8;
	static const int16_t DOCUMENT_NODE = 9;
	static const int16_t DOCUMENT_TYPE_NODE = 10;
	static const int16_t DOCUMENT_FRAGMENT_NODE = 11;
	static const int16_t NOTATION_NODE = 12;
	static const int16_t NAMESPACE_NODE = 13;
	static const int16_t NTYPES = 14;
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE_NODE")
#pragma pop_macro("CDATA_SECTION_NODE")
#pragma pop_macro("COMMENT_NODE")
#pragma pop_macro("DOCUMENT_FRAGMENT_NODE")
#pragma pop_macro("DOCUMENT_NODE")
#pragma pop_macro("DOCUMENT_TYPE_NODE")
#pragma pop_macro("DTM")
#pragma pop_macro("ELEMENT_NODE")
#pragma pop_macro("ENTITY_NODE")
#pragma pop_macro("ENTITY_REFERENCE_NODE")
#pragma pop_macro("NAMESPACE_NODE")
#pragma pop_macro("NOTATION_NODE")
#pragma pop_macro("NTYPES")
#pragma pop_macro("NULL")
#pragma pop_macro("PROCESSING_INSTRUCTION_NODE")
#pragma pop_macro("ROOT_NODE")
#pragma pop_macro("TEXT_NODE")

#endif // _com_sun_org_apache_xml_internal_dtm_DTM_h_