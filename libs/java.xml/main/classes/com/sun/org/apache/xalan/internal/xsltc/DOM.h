#ifndef _com_sun_org_apache_xalan_internal_xsltc_DOM_h_
#define _com_sun_org_apache_xalan_internal_xsltc_DOM_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.DOM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADAPTIVE_RTF")
#undef ADAPTIVE_RTF
#pragma push_macro("DOM")
#undef DOM
#pragma push_macro("FIRST_TYPE")
#undef FIRST_TYPE
#pragma push_macro("NO_TYPE")
#undef NO_TYPE
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("RETURN_CURRENT")
#undef RETURN_CURRENT
#pragma push_macro("RETURN_PARENT")
#undef RETURN_PARENT
#pragma push_macro("SIMPLE_RTF")
#undef SIMPLE_RTF
#pragma push_macro("TREE_RTF")
#undef TREE_RTF

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

class DOM : public ::java::lang::Object {
	$interface(DOM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void characters(int32_t textNode, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {}
	virtual void copy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {}
	virtual void copy(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodes, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {}
	virtual int32_t getAttributeNode(int32_t gType, int32_t element) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getChildren(int32_t node) {return nullptr;}
	virtual int32_t getDocument() {return 0;}
	virtual $String* getDocumentURI(int32_t node) {return nullptr;}
	virtual ::java::util::Map* getElementsWithIDs() {return nullptr;}
	virtual int32_t getExpandedTypeID(int32_t node) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getIterator() {return nullptr;}
	virtual $String* getLanguage(int32_t node) {return nullptr;}
	virtual int32_t getNSType(int32_t node) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNamespaceAxisIterator(int32_t axis, int32_t ns) {return nullptr;}
	virtual $String* getNamespaceName(int32_t node) {return nullptr;}
	virtual int32_t getNamespaceType(int32_t node) {return 0;}
	virtual int32_t getNodeHandle(int32_t nodeId) {return 0;}
	virtual int32_t getNodeIdent(int32_t nodehandle) {return 0;}
	virtual $String* getNodeName(int32_t node) {return nullptr;}
	virtual $String* getNodeNameX(int32_t node) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNodeValueIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter, int32_t returnType, $String* value, bool op) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getNthDescendant(int32_t node, int32_t n, bool includeself) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputDomBuilder() {return nullptr;}
	virtual int32_t getParent(int32_t node) {return 0;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initialSize, int32_t rtfType) {return nullptr;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* getResultTreeFrag(int32_t initialSize, int32_t rtfType, bool addToDTMManager) {return nullptr;}
	virtual int32_t getSize() {return 0;}
	virtual $String* getStringValue() {return nullptr;}
	virtual $String* getStringValueX(int32_t node) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedChildren(int32_t type) {return nullptr;}
	virtual $String* getUnparsedEntityURI($String* name) {return nullptr;}
	virtual bool isAttribute(int32_t node) {return false;}
	virtual bool isElement(int32_t node) {return false;}
	virtual bool lessThan(int32_t node1, int32_t node2) {return false;}
	virtual $String* lookupNamespace(int32_t node, $String* prefix) {return nullptr;}
	virtual ::org::w3c::dom::Node* makeNode(int32_t index) {return nullptr;}
	virtual ::org::w3c::dom::Node* makeNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* makeNodeList(int32_t index) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* makeNodeList(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* orderNodes(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t node) {return nullptr;}
	virtual void release() {}
	virtual void setFilter(::com::sun::org::apache::xalan::internal::xsltc::StripFilter* filter) {}
	virtual void setupMapping($StringArray* names, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaces) {}
	virtual $String* shallowCopy(int32_t node, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {return nullptr;}
	static const int32_t FIRST_TYPE = 0;
	static const int32_t NO_TYPE = (-1);
	static const int32_t NULL = 0;
	static const int32_t RETURN_CURRENT = 0;
	static const int32_t RETURN_PARENT = 1;
	static const int32_t SIMPLE_RTF = 0;
	static const int32_t ADAPTIVE_RTF = 1;
	static const int32_t TREE_RTF = 2;
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ADAPTIVE_RTF")
#pragma pop_macro("DOM")
#pragma pop_macro("FIRST_TYPE")
#pragma pop_macro("NO_TYPE")
#pragma pop_macro("NULL")
#pragma pop_macro("RETURN_CURRENT")
#pragma pop_macro("RETURN_PARENT")
#pragma pop_macro("SIMPLE_RTF")
#pragma pop_macro("TREE_RTF")

#endif // _com_sun_org_apache_xalan_internal_xsltc_DOM_h_