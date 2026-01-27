#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDocumentImpl_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDocumentImpl_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDocumentImpl
//$ extends com.sun.org.apache.xml.internal.dtm.DTM
//$ implements org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DOCHANDLE_MASK")
#undef DOCHANDLE_MASK
#pragma push_macro("DOCHANDLE_SHIFT")
#undef DOCHANDLE_SHIFT
#pragma push_macro("NODEHANDLE_MASK")
#undef NODEHANDLE_MASK

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
							class DTMWSFilter;
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
						namespace dtm {
							namespace ref {
								class ChunkedIntArray;
								class DTMStringPool;
								class ExpandedNameTable;
								class IncrementalSAXSource;
							}
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
							class FastStringBuffer;
							class XMLString;
							class XMLStringFactory;
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
			class Attributes;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
			class Locator;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class DeclHandler;
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
							namespace ref {

class DTMDocumentImpl : public ::com::sun::org::apache::xml::internal::dtm::DTM, public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ext::LexicalHandler {
	$class(DTMDocumentImpl, 0, ::com::sun::org::apache::xml::internal::dtm::DTM, ::org::xml::sax::ContentHandler, ::org::xml::sax::ext::LexicalHandler)
public:
	DTMDocumentImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, int32_t documentNumber, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory);
	virtual void appendAttribute(int32_t namespaceIndex, int32_t localNameIndex, int32_t prefixIndex, bool isID, int32_t m_char_current_start, int32_t contentLength);
	virtual void appendChild(int32_t newChild, bool clone, bool cloneDepth) override;
	virtual void appendComment(int32_t m_char_current_start, int32_t contentLength);
	virtual void appendEndDocument();
	virtual void appendEndElement();
	virtual void appendNSDeclaration(int32_t prefixIndex, int32_t namespaceIndex, bool isID);
	int32_t appendNode(int32_t w0, int32_t w1, int32_t w2, int32_t w3);
	virtual void appendStartDocument();
	virtual void appendStartElement(int32_t namespaceIndex, int32_t localNameIndex, int32_t prefixIndex);
	virtual void appendTextChild($String* str) override;
	virtual void appendTextChild(int32_t m_char_current_start, int32_t contentLength);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override;
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) override;
	virtual void documentRegistration() override;
	virtual void documentRelease() override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual int32_t getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* getAxisTraverser(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* getContentBuffer();
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler() override;
	virtual int32_t getDocument() override;
	virtual bool getDocumentAllDeclarationsProcessed() override;
	virtual $String* getDocumentBaseURI() override;
	virtual $String* getDocumentEncoding(int32_t nodeHandle) override;
	virtual int32_t getDocumentRoot();
	virtual int32_t getDocumentRoot(int32_t nodeHandle) override;
	virtual $String* getDocumentStandalone(int32_t nodeHandle) override;
	virtual $String* getDocumentSystemIdentifier(int32_t nodeHandle) override;
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() override;
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() override;
	virtual $String* getDocumentVersion(int32_t documentHandle) override;
	virtual int32_t getElementById($String* elementId) override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual int32_t getExpandedTypeID(int32_t nodeHandle) override;
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type) override;
	virtual int32_t getFirstAttribute(int32_t nodeHandle) override;
	virtual int32_t getFirstChild(int32_t nodeHandle) override;
	virtual int32_t getFirstNamespaceNode(int32_t nodeHandle, bool inScope) override;
	virtual int32_t getLastChild(int32_t nodeHandle) override;
	virtual int16_t getLevel(int32_t nodeHandle) override;
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler() override;
	virtual $String* getLocalName(int32_t nodeHandle) override;
	virtual $String* getLocalNameFromExpandedNameID(int32_t ExpandedNameID) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* getLocalNameTable();
	virtual $String* getNamespaceFromExpandedNameID(int32_t ExpandedNameID) override;
	virtual $String* getNamespaceURI(int32_t nodeHandle) override;
	virtual int32_t getNextAttribute(int32_t nodeHandle) override;
	virtual int32_t getNextDescendant(int32_t subtreeRootHandle, int32_t nodeHandle);
	virtual int32_t getNextFollowing(int32_t axisContextHandle, int32_t nodeHandle);
	virtual int32_t getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) override;
	virtual int32_t getNextPreceding(int32_t axisContextHandle, int32_t nodeHandle);
	virtual int32_t getNextSibling(int32_t nodeHandle) override;
	virtual ::org::w3c::dom::Node* getNode(int32_t nodeHandle) override;
	virtual $String* getNodeName(int32_t nodeHandle) override;
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual int16_t getNodeType(int32_t nodeHandle) override;
	virtual $String* getNodeValue(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* getNsNameTable();
	virtual int32_t getOwnerDocument(int32_t nodeHandle) override;
	virtual int32_t getParent(int32_t nodeHandle) override;
	virtual $String* getPrefix(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* getPrefixNameTable();
	virtual int32_t getPreviousSibling(int32_t nodeHandle) override;
	virtual ::javax::xml::transform::SourceLocator* getSourceLocatorFor(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override;
	virtual $chars* getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) override;
	virtual int32_t getStringValueChunkCount(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
	virtual $String* getUnparsedEntityURI($String* name) override;
	virtual bool hasChildNodes(int32_t nodeHandle) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	void initDocument(int32_t documentNumber);
	virtual bool isAttributeSpecified(int32_t attributeHandle) override;
	virtual bool isCharacterElementContentWhitespace(int32_t nodeHandle) override;
	virtual bool isDocumentAllDeclarationsProcessed(int32_t documentHandle) override;
	virtual bool isNodeAfter(int32_t nodeHandle1, int32_t nodeHandle2) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* manager) override;
	virtual bool needsTwoThreads() override;
	void processAccumulatedText();
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setContentBuffer(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* buffer);
	virtual void setDocumentBaseURI($String* baseURI) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setIncrementalSAXSource(::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* source);
	virtual void setLocalNameTable(::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* poolRef);
	virtual void setNsNameTable(::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* poolRef);
	virtual void setPrefixNameTable(::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* poolRef);
	virtual void setProperty($String* property, Object$* value) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual bool supportsPreStripping() override;
	virtual $String* toString() override;
	static const int8_t DOCHANDLE_SHIFT = 22;
	static const int32_t NODEHANDLE_MASK = 8388607; // (1 << (DOCHANDLE_SHIFT + 1)) - 1
	static const int32_t DOCHANDLE_MASK = -8388608; // -1 - NODEHANDLE_MASK
	int32_t m_docHandle = 0;
	int32_t m_docElement = 0;
	int32_t currentParent = 0;
	int32_t previousSibling = 0;
	int32_t m_currentNode = 0;
	bool previousSiblingWasParent = false;
	$ints* gotslot = nullptr;
	bool done = false;
	bool m_isError = false;
	static const bool DEBUG = false;
	$String* m_documentBaseURI = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* m_incrSAXSource = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray* nodes = nullptr;
	::com::sun::org::apache::xml::internal::utils::FastStringBuffer* m_char = nullptr;
	int32_t m_char_current_start = 0;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* m_localNames = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* m_nsNames = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* m_prefixNames = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* m_expandedNames = nullptr;
	::com::sun::org::apache::xml::internal::utils::XMLStringFactory* m_xsf = nullptr;
	static $StringArray* fixednames;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DOCHANDLE_MASK")
#pragma pop_macro("DOCHANDLE_SHIFT")
#pragma pop_macro("NODEHANDLE_MASK")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDocumentImpl_h_