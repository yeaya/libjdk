#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_DOMAdapter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_DOMAdapter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.DOMAdapter
//$ extends com.sun.org.apache.xalan.internal.xsltc.DOM

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOMEnhancedForDTM;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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

class DOMAdapter : public ::com::sun::org::apache::xalan::internal::xsltc::DOM {
	$class(DOMAdapter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::DOM)
public:
	DOMAdapter();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, $StringArray* namesArray, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaceArray);
	virtual void characters(int32_t textNode, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual void copy(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodes, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	virtual int32_t getAttributeNode(int32_t type, int32_t element) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getChildren(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDOMImpl();
	virtual int32_t getDocument() override;
	$String* getDocumentURI();
	virtual $String* getDocumentURI(int32_t node) override;
	virtual ::java::util::Map* getElementsWithIDs() override;
	virtual int32_t getExpandedTypeID(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getIterator() override;
	virtual $String* getLanguage(int32_t node) override;
	$shorts* getMapping();
	int32_t getMultiDOMMask();
	$shorts* getNSMapping();
	$shorts* getNSReverse();
	virtual int32_t getNSType(int32_t node) override;
	$StringArray* getNamesArray();
	$StringArray* getNamespaceArray();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNamespaceAxisIterator(int32_t axis, int32_t ns) override;
	virtual $String* getNamespaceName(int32_t node) override;
	virtual int32_t getNamespaceType(int32_t node) override;
	virtual int32_t getNodeHandle(int32_t nodeId) override;
	virtual int32_t getNodeIdent(int32_t nodeHandle) override;
	virtual $String* getNodeName(int32_t node) override;
	virtual $String* getNodeNameX(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNodeValueIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, int32_t type, $String* value, bool op) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNthDescendant(int32_t type, int32_t n, bool includeself) override;
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputDomBuilder() override;
	virtual int32_t getParent(int32_t node) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) override;
	$ints* getReverse();
	virtual int32_t getSize() override;
	virtual $String* getStringValue() override;
	virtual $String* getStringValueX(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedChildren(int32_t type) override;
	$ints* getTypesArray();
	virtual $String* getUnparsedEntityURI($String* entity) override;
	$StringArray* getUrisArray();
	virtual bool isAttribute(int32_t node) override;
	virtual bool isElement(int32_t node) override;
	virtual bool lessThan(int32_t node1, int32_t node2) override;
	virtual $String* lookupNamespace(int32_t node, $String* prefix) override;
	virtual ::org::w3c::dom::Node* makeNode(int32_t index) override;
	virtual ::org::w3c::dom::Node* makeNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(int32_t index) override;
	virtual ::org::w3c::dom::NodeList* makeNodeList(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* orderNodes(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t node) override;
	virtual void release() override;
	void setDocumentURI($String* uri);
	virtual void setFilter(::com::sun::org::apache::xalan::internal::xsltc::StripFilter* filter) override;
	void setMultiDOMMask(int32_t mask);
	virtual void setupMapping($StringArray* names, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaces) override;
	virtual $String* shallowCopy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM* _enhancedDOM = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
	$StringArray* _namesArray = nullptr;
	$StringArray* _urisArray = nullptr;
	$ints* _typesArray = nullptr;
	$StringArray* _namespaceArray = nullptr;
	$shorts* _mapping = nullptr;
	$ints* _reverse = nullptr;
	$shorts* _NSmapping = nullptr;
	$shorts* _NSreverse = nullptr;
	int32_t _multiDOMMask = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_DOMAdapter_h_