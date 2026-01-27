#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl
//$ extends com.sun.org.apache.xml.internal.serializer.EmptySerializer
//$ implements com.sun.org.apache.xalan.internal.xsltc.DOM,com.sun.org.apache.xml.internal.dtm.DTM

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_ITERATOR")
#undef EMPTY_ITERATOR
#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR
#pragma push_macro("NUMBER_OF_NODES")
#undef NUMBER_OF_NODES
#pragma push_macro("RTF_ROOT")
#undef RTF_ROOT
#pragma push_macro("RTF_TEXT")
#undef RTF_TEXT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class StripFilter;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class BitArray;
								class XSLTCDTMManager;
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
						namespace dtm {
							namespace ref {
								class DTMManagerDefault;
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
						namespace serializer {
							class SerializationHandler;
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
namespace java {
	namespace util {
		class Map;
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
			class NodeList;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class SimpleResultTreeImpl : public ::com::sun::org::apache::xml::internal::serializer::EmptySerializer, public ::com::sun::org::apache::xalan::internal::xsltc::DOM, public ::com::sun::org::apache::xml::internal::dtm::DTM {
	$class(SimpleResultTreeImpl, 0, ::com::sun::org::apache::xml::internal::serializer::EmptySerializer, ::com::sun::org::apache::xalan::internal::xsltc::DOM, ::com::sun::org::apache::xml::internal::dtm::DTM)
public:
	SimpleResultTreeImpl();
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::getPrefix;
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::getNamespaceURI;
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::characters;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* dtmManager, int32_t documentID);
	virtual void appendChild(int32_t newChild, bool clone, bool cloneDepth) override;
	virtual void appendTextChild($String* str) override;
	virtual void characters(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void characters($String* str) override;
	virtual void characters($chars* ch, int32_t offset, int32_t length) override;
	virtual void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void copy(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodes, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override;
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) override;
	virtual void documentRegistration() override;
	virtual void documentRelease() override;
	virtual void endDocument() override;
	virtual int32_t getAttributeNode(int32_t gType, int32_t element) override;
	virtual int32_t getAttributeNode(int32_t elementHandle, $String* namespaceURI, $String* name) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* getAxisTraverser(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getChildren(int32_t node) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault* getDTMManager();
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler() override;
	virtual int32_t getDocument() override;
	virtual bool getDocumentAllDeclarationsProcessed() override;
	virtual $String* getDocumentBaseURI() override;
	virtual $String* getDocumentEncoding(int32_t nodeHandle) override;
	virtual int32_t getDocumentRoot(int32_t nodeHandle) override;
	virtual $String* getDocumentStandalone(int32_t nodeHandle) override;
	virtual $String* getDocumentSystemIdentifier(int32_t nodeHandle) override;
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() override;
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() override;
	virtual $String* getDocumentURI(int32_t node) override;
	virtual $String* getDocumentVersion(int32_t documentHandle) override;
	virtual int32_t getElementById($String* elementId) override;
	virtual ::java::util::Map* getElementsWithIDs() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual int32_t getExpandedTypeID(int32_t nodeHandle) override;
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type) override;
	virtual int32_t getFirstAttribute(int32_t nodeHandle) override;
	virtual int32_t getFirstChild(int32_t nodeHandle) override;
	virtual int32_t getFirstNamespaceNode(int32_t nodeHandle, bool inScope) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getIterator() override;
	virtual $String* getLanguage(int32_t node) override;
	virtual int32_t getLastChild(int32_t nodeHandle) override;
	virtual int16_t getLevel(int32_t nodeHandle) override;
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler() override;
	virtual $String* getLocalName(int32_t nodeHandle) override;
	virtual $String* getLocalNameFromExpandedNameID(int32_t ExpandedNameID) override;
	virtual int32_t getNSType(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNamespaceAxisIterator(int32_t axis, int32_t ns) override;
	virtual $String* getNamespaceFromExpandedNameID(int32_t ExpandedNameID) override;
	virtual $String* getNamespaceName(int32_t node) override;
	virtual int32_t getNamespaceType(int32_t node) override;
	virtual $String* getNamespaceURI(int32_t nodeHandle) override;
	virtual int32_t getNextAttribute(int32_t nodeHandle) override;
	virtual int32_t getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) override;
	virtual int32_t getNextSibling(int32_t nodeHandle) override;
	virtual ::org::w3c::dom::Node* getNode(int32_t nodeHandle) override;
	virtual int32_t getNodeHandle(int32_t nodeId) override;
	virtual int32_t getNodeIdent(int32_t nodehandle) override;
	virtual $String* getNodeName(int32_t node) override;
	virtual $String* getNodeNameX(int32_t node) override;
	virtual int16_t getNodeType(int32_t nodeHandle) override;
	virtual $String* getNodeValue(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNodeValueIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter, int32_t returnType, $String* value, bool op) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNthDescendant(int32_t node, int32_t n, bool includeself) override;
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputDomBuilder() override;
	virtual int32_t getOwnerDocument(int32_t nodeHandle) override;
	virtual int32_t getParent(int32_t nodeHandle) override;
	virtual $String* getPrefix(int32_t nodeHandle) override;
	virtual int32_t getPreviousSibling(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initialSize, int32_t rtfType) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initialSize, int32_t rtfType, bool addToManager) override;
	virtual int32_t getSize() override;
	virtual ::javax::xml::transform::SourceLocator* getSourceLocatorFor(int32_t node) override;
	virtual $String* getStringValue() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override;
	virtual $chars* getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) override;
	virtual int32_t getStringValueChunkCount(int32_t nodeHandle) override;
	virtual $String* getStringValueX(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedChildren(int32_t type) override;
	virtual $String* getUnparsedEntityURI($String* name) override;
	virtual bool hasChildNodes(int32_t nodeHandle) override;
	virtual bool isAttribute(int32_t node) override;
	virtual bool isAttributeSpecified(int32_t attributeHandle) override;
	virtual bool isCharacterElementContentWhitespace(int32_t nodeHandle) override;
	virtual bool isDocumentAllDeclarationsProcessed(int32_t documentHandle) override;
	virtual bool isElement(int32_t node) override;
	virtual bool isNodeAfter(int32_t firstNodeHandle, int32_t secondNodeHandle) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual bool lessThan(int32_t node1, int32_t node2) override;
	virtual $String* lookupNamespace(int32_t node, $String* prefix) override;
	virtual ::org::w3c::dom::Node* makeNode(int32_t index) override;
	virtual ::org::w3c::dom::Node* makeNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(int32_t index) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* manager) override;
	virtual bool needsTwoThreads() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* orderNodes(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t node) override;
	virtual void release() override;
	virtual void setDocumentBaseURI($String* baseURI) override;
	virtual bool setEscaping(bool escape) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setFilter(::com::sun::org::apache::xalan::internal::xsltc::StripFilter* filter) override;
	virtual void setProperty($String* property, Object$* value) override;
	virtual void setupMapping($StringArray* names, $StringArray* uris, $ints* types, $StringArray* namespaces) override;
	virtual $String* shallowCopy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void startDocument() override;
	virtual bool supportsPreStripping() override;
	virtual $String* toString() override;
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* EMPTY_ITERATOR;
	static const int32_t RTF_ROOT = 0;
	static const int32_t RTF_TEXT = 1;
	static const int32_t NUMBER_OF_NODES = 2;
	static int32_t _documentURIIndex;
	static $String* EMPTY_STR;
	$String* _text = nullptr;
	$StringArray* _textArray = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* _dtmManager = nullptr;
	int32_t _size = 0;
	int32_t _documentID = 0;
	::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray* _dontEscape = nullptr;
	bool _escaping = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_ITERATOR")
#pragma pop_macro("EMPTY_STR")
#pragma pop_macro("NUMBER_OF_NODES")
#pragma pop_macro("RTF_ROOT")
#pragma pop_macro("RTF_TEXT")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl_h_