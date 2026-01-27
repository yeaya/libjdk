#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM
//$ extends com.sun.org.apache.xalan.internal.xsltc.DOM

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <java/lang/Array.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE
#pragma push_macro("NO_TYPE")
#undef NO_TYPE

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
								class DOMAdapter;
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
namespace java {
	namespace util {
		class Map;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class MultiDOM : public ::com::sun::org::apache::xalan::internal::xsltc::DOM {
	$class(MultiDOM, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::DOM)
public:
	MultiDOM();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* main);
	int32_t addDOMAdapter(::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* adapter);
	int32_t addDOMAdapter(::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* adapter, bool indexByURI);
	virtual void characters(int32_t textNode, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void copy(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodes, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual int32_t getAttributeNode(int32_t type, int32_t el) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getChildren(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDOMAdapter($String* uri);
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDTM(int32_t nodeHandle);
	int32_t getDTMId(int32_t nodeHandle);
	::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager();
	virtual int32_t getDocument() override;
	int32_t getDocumentMask($String* uri);
	virtual $String* getDocumentURI(int32_t node) override;
	virtual ::java::util::Map* getElementsWithIDs() override;
	virtual int32_t getExpandedTypeID(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getIterator() override;
	virtual $String* getLanguage(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getMain();
	virtual int32_t getNSType(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNamespaceAxisIterator(int32_t axis, int32_t ns) override;
	virtual $String* getNamespaceName(int32_t node) override;
	virtual int32_t getNamespaceType(int32_t node) override;
	virtual int32_t getNodeHandle(int32_t nodeId) override;
	virtual int32_t getNodeIdent(int32_t nodeHandle) override;
	virtual $String* getNodeName(int32_t node) override;
	virtual $String* getNodeNameX(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNodeValueIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, int32_t type, $String* value, bool op) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNthDescendant(int32_t node, int32_t n, bool includeself) override;
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputDomBuilder() override;
	virtual int32_t getParent(int32_t node) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) override;
	virtual int32_t getSize() override;
	virtual $String* getStringValue() override;
	virtual $String* getStringValueX(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedChildren(int32_t type) override;
	virtual $String* getUnparsedEntityURI($String* entity) override;
	virtual bool isAttribute(int32_t node) override;
	virtual bool isElement(int32_t node) override;
	bool isMatchingAdapterEntry(::com::sun::org::apache::xalan::internal::xsltc::DOM* entry, ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* adapter);
	virtual bool lessThan(int32_t node1, int32_t node2) override;
	virtual $String* lookupNamespace(int32_t node, $String* prefix) override;
	virtual ::org::w3c::dom::Node* makeNode(int32_t index) override;
	virtual ::org::w3c::dom::Node* makeNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(int32_t index) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	int32_t nextMask();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* orderNodes(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t node) override;
	virtual void release() override;
	void removeDOMAdapter(::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* adapter);
	virtual void setFilter(::com::sun::org::apache::xalan::internal::xsltc::StripFilter* filter) override;
	virtual void setupMapping($StringArray* names, $StringArray* uris, $ints* types, $StringArray* namespaces) override;
	virtual $String* shallowCopy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	static const int32_t NO_TYPE = -2; // DOM.FIRST_TYPE - 2
	static const int32_t INITIAL_SIZE = 4;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::DOM>* _adapters = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* _main = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMManager* _dtmManager = nullptr;
	int32_t _free = 0;
	int32_t _size = 0;
	::java::util::Map* _documents = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INITIAL_SIZE")
#pragma pop_macro("NO_TYPE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM_h_