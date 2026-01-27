#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl
//$ extends com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2
//$ implements com.sun.org.apache.xalan.internal.xsltc.DOMEnhancedForDTM,com.sun.org.apache.xalan.internal.xsltc.dom.DOMBuilder

#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTYITERATOR")
#undef EMPTYITERATOR
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("PRESERVE_STRING")
#undef PRESERVE_STRING
#pragma push_macro("XMLSPACE_STRING")
#undef XMLSPACE_STRING
#pragma push_macro("XML_PREFIX")
#undef XML_PREFIX
#pragma push_macro("XML_URI")
#undef XML_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
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
								class ExpandedNameTable;
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
							class XMLStringFactory;
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
			class Source;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Node;
			class NodeList;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
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

class SAXImpl : public ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2, public ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM, public ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMBuilder {
	$class(SAXImpl, 0, ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2, ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM, ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMBuilder)
public:
	SAXImpl();
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2::getStringValue;
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2::getAttributeNode;
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2::error;
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2::getExpandedTypeID;
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual $Object* clone() override;
	virtual void declaration($String* version, $String* encoding, $String* standalone) override;
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual bool equals(Object$* arg0) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void finalize() override;
	virtual int32_t getDocument() override;
	virtual int32_t getExpandedTypeID(int32_t nodeHandle) override;
	virtual int32_t getExpandedTypeID2(int32_t nodeHandle) override;
	virtual int32_t getNodeHandle(int32_t nodeId) override;
	virtual int32_t getNodeIdent(int32_t nodeHandle) override;
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual int32_t getParent(int32_t nodeHandle) override;
	virtual $String* getStringValue() override;
	virtual $String* getStringValueX(int32_t nodeHandle) override;
	virtual int32_t hashCode() override;
	virtual void internalEntityDecl($String* name, $String* value) override;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, bool buildIdIndex);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool buildIdIndex, bool newNameTable);
	static ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* access$000(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* x0);
	static ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* access$100(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* x0);
	static int32_t access$200(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* x0, int32_t x1);
	static int32_t access$300(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* x0, int32_t x1);
	static int32_t access$400(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* x0, int32_t x1);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void characters(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void copy(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodes, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	void copy(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, bool isChild);
	void copyPI(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	void definePrefixAndUri($String* prefix, $String* uri);
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qname) override;
	virtual int32_t getAttributeNode(int32_t type, int32_t element) override;
	$String* getAttributeValue(int32_t type, int32_t element);
	$String* getAttributeValue($String* name, int32_t element);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::DOMBuilder* getBuilder();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getChildren(int32_t node) override;
	virtual $String* getDocumentURI() override;
	virtual $String* getDocumentURI(int32_t node) override;
	virtual int32_t getElementById($String* idString) override;
	virtual ::java::util::Map* getElementsWithIDs() override;
	int32_t getGeneralizedType($String* name);
	int32_t getGeneralizedType($String* name, bool searchOnly);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getIterator() override;
	virtual $String* getLanguage(int32_t node) override;
	virtual $shorts* getMapping($StringArray* names, $StringArray* uris, $ints* types) override;
	$shorts* getMapping2($StringArray* names, $StringArray* uris, $ints* types);
	virtual int32_t getNSType(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNamespaceAxisIterator(int32_t axis, int32_t ns) override;
	virtual $shorts* getNamespaceMapping($StringArray* namespaces) override;
	virtual $String* getNamespaceName(int32_t node) override;
	virtual int32_t getNamespaceType(int32_t node) override;
	virtual $String* getNodeName(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNodeValueIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, int32_t type, $String* value, bool op) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNthDescendant(int32_t type, int32_t n, bool includeself) override;
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputDomBuilder() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) override;
	virtual $ints* getReverseMapping($StringArray* names, $StringArray* uris, $ints* types) override;
	virtual $shorts* getReverseNamespaceMapping($StringArray* namespaces) override;
	virtual bool getShouldStripWhitespace() override;
	virtual int32_t getSize() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedChildren(int32_t type) override;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedDescendantIterator(int32_t type);
	virtual $String* getUnparsedEntityURI($String* name) override;
	void handleTextEscaping();
	virtual bool hasDOMSource() override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual bool isAttribute(int32_t node) override;
	virtual bool isElement(int32_t node) override;
	virtual bool lessThan(int32_t node1, int32_t node2) override;
	virtual $String* lookupNamespace(int32_t node, $String* prefix) override;
	virtual ::org::w3c::dom::Node* makeNode(int32_t index) override;
	virtual ::org::w3c::dom::Node* makeNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(int32_t index) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* manager) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* orderNodes(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t node) override;
	void print(int32_t node, int32_t level);
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void release() override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setDocumentURI($String* uri) override;
	bool setEscaping(bool value);
	virtual void setFilter(::com::sun::org::apache::xalan::internal::xsltc::StripFilter* filter) override;
	virtual void setupMapping($StringArray* names, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaces) override;
	virtual $String* shallowCopy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	void startElement($String* uri, $String* localName, $String* qname, ::org::xml::sax::Attributes* attributes, ::org::w3c::dom::Node* node);
	virtual void startElement($String* uri, $String* localName, $String* qname, ::org::xml::sax::Attributes* attributes) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	void xmlSpaceDefine($String* val, int32_t node);
	void xmlSpaceRevert(int32_t node);
	int32_t _uriCount = 0;
	$ints* _xmlSpaceStack = nullptr;
	int32_t _idx = 0;
	bool _preserve = false;
	static $String* XML_PREFIX;
	static $String* XMLSPACE_STRING;
	static $String* PRESERVE_STRING;
	static $String* XML_URI;
	bool _escaping = false;
	bool _disableEscaping = false;
	int32_t _textNodeToProcess = 0;
	static $String* EMPTYSTRING;
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* EMPTYITERATOR;
	int32_t _namesSize = 0;
	::java::util::Map* _nsIndex = nullptr;
	int32_t _size = 0;
	::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray* _dontEscape = nullptr;
	static int32_t _documentURIIndex;
	::org::w3c::dom::Document* _document = nullptr;
	::java::util::Map* _node2Ids = nullptr;
	bool _hasDOMSource = false;
	::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* _dtmManager = nullptr;
	$Array<::org::w3c::dom::Node>* _nodes = nullptr;
	$Array<::org::w3c::dom::NodeList>* _nodeLists = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTYITERATOR")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("PRESERVE_STRING")
#pragma pop_macro("XMLSPACE_STRING")
#pragma pop_macro("XML_PREFIX")
#pragma pop_macro("XML_URI")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl_h_