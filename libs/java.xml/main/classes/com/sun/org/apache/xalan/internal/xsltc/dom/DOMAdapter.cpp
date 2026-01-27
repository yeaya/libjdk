#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef NULL

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _DOMAdapter_FieldInfo_[] = {
	{"_enhancedDOM", "Lcom/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM;", nullptr, $PRIVATE, $field(DOMAdapter, _enhancedDOM)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(DOMAdapter, _dom)},
	{"_namesArray", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMAdapter, _namesArray)},
	{"_urisArray", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMAdapter, _urisArray)},
	{"_typesArray", "[I", nullptr, $PRIVATE, $field(DOMAdapter, _typesArray)},
	{"_namespaceArray", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMAdapter, _namespaceArray)},
	{"_mapping", "[S", nullptr, $PRIVATE, $field(DOMAdapter, _mapping)},
	{"_reverse", "[I", nullptr, $PRIVATE, $field(DOMAdapter, _reverse)},
	{"_NSmapping", "[S", nullptr, $PRIVATE, $field(DOMAdapter, _NSmapping)},
	{"_NSreverse", "[S", nullptr, $PRIVATE, $field(DOMAdapter, _NSreverse)},
	{"_multiDOMMask", "I", nullptr, $PRIVATE, $field(DOMAdapter, _multiDOMMask)},
	{}
};

$MethodInfo _DOMAdapter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;[Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMAdapter, init$, void, $DOM*, $StringArray*, $StringArray*, $ints*, $StringArray*)},
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, characters, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, copy, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, copy, void, $DTMAxisIterator*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getAttributeNode, int32_t, int32_t, int32_t)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getChildren, $DTMAxisIterator*, int32_t)},
	{"getDOMImpl", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(DOMAdapter, getDOMImpl, $DOM*)},
	{"getDocument", "()I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getDocument, int32_t)},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(DOMAdapter, getDocumentURI, $String*)},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getDocumentURI, $String*, int32_t)},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(DOMAdapter, getElementsWithIDs, $Map*)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getExpandedTypeID, int32_t, int32_t)},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getIterator, $DTMAxisIterator*)},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getLanguage, $String*, int32_t)},
	{"getMapping", "()[S", nullptr, $PRIVATE, $method(DOMAdapter, getMapping, $shorts*)},
	{"getMultiDOMMask", "()I", nullptr, $PUBLIC, $method(DOMAdapter, getMultiDOMMask, int32_t)},
	{"getNSMapping", "()[S", nullptr, $PRIVATE, $method(DOMAdapter, getNSMapping, $shorts*)},
	{"getNSReverse", "()[S", nullptr, $PRIVATE, $method(DOMAdapter, getNSReverse, $shorts*)},
	{"getNSType", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNSType, int32_t, int32_t)},
	{"getNamesArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(DOMAdapter, getNamesArray, $StringArray*)},
	{"getNamespaceArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(DOMAdapter, getNamespaceArray, $StringArray*)},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNamespaceAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNamespaceName, $String*, int32_t)},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNamespaceType, int32_t, int32_t)},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNodeHandle, int32_t, int32_t)},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNodeIdent, int32_t, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNodeNameX, $String*, int32_t)},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNodeValueIterator, $DTMAxisIterator*, $DTMAxisIterator*, int32_t, $String*, bool)},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getNthDescendant, $DTMAxisIterator*, int32_t, int32_t, bool)},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getOutputDomBuilder, $SerializationHandler*)},
	{"getParent", "(I)I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getParent, int32_t, int32_t)},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getResultTreeFrag, $DOM*, int32_t, int32_t)},
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getResultTreeFrag, $DOM*, int32_t, int32_t, bool)},
	{"getReverse", "()[I", nullptr, $PRIVATE, $method(DOMAdapter, getReverse, $ints*)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getSize, int32_t)},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getStringValue, $String*)},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getStringValueX, $String*, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getTypedChildren, $DTMAxisIterator*, int32_t)},
	{"getTypesArray", "()[I", nullptr, $PUBLIC, $method(DOMAdapter, getTypesArray, $ints*)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, getUnparsedEntityURI, $String*, $String*)},
	{"getUrisArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(DOMAdapter, getUrisArray, $StringArray*)},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, isAttribute, bool, int32_t)},
	{"isElement", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, isElement, bool, int32_t)},
	{"lessThan", "(II)Z", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, lessThan, bool, int32_t, int32_t)},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, lookupNamespace, $String*, int32_t, $String*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, makeNode, $Node*, int32_t)},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, makeNode, $Node*, $DTMAxisIterator*)},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, makeNodeList, $NodeList*, int32_t)},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, makeNodeList, $NodeList*, $DTMAxisIterator*)},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, orderNodes, $DTMAxisIterator*, $DTMAxisIterator*, int32_t)},
	{"release", "()V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, release, void)},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMAdapter, setDocumentURI, void, $String*)},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, setFilter, void, $StripFilter*)},
	{"setMultiDOMMask", "(I)V", nullptr, $PUBLIC, $method(DOMAdapter, setMultiDOMMask, void, int32_t)},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, setupMapping, void, $StringArray*, $StringArray*, $ints*, $StringArray*)},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMAdapter, shallowCopy, $String*, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _DOMAdapter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DOMAdapter",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	_DOMAdapter_FieldInfo_,
	_DOMAdapter_MethodInfo_
};

$Object* allocate$DOMAdapter($Class* clazz) {
	return $of($alloc(DOMAdapter));
}

void DOMAdapter::init$($DOM* dom, $StringArray* namesArray, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaceArray) {
	$set(this, _mapping, nullptr);
	$set(this, _reverse, nullptr);
	$set(this, _NSmapping, nullptr);
	$set(this, _NSreverse, nullptr);
	if ($instanceOf($DOMEnhancedForDTM, dom)) {
		$set(this, _enhancedDOM, $cast($DOMEnhancedForDTM, dom));
	}
	$set(this, _dom, dom);
	$set(this, _namesArray, namesArray);
	$set(this, _urisArray, urisArray);
	$set(this, _typesArray, typesArray);
	$set(this, _namespaceArray, namespaceArray);
}

void DOMAdapter::setupMapping($StringArray* names, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaces) {
	$set(this, _namesArray, names);
	$set(this, _urisArray, urisArray);
	$set(this, _typesArray, typesArray);
	$set(this, _namespaceArray, namespaces);
}

$StringArray* DOMAdapter::getNamesArray() {
	return this->_namesArray;
}

$StringArray* DOMAdapter::getUrisArray() {
	return this->_urisArray;
}

$ints* DOMAdapter::getTypesArray() {
	return this->_typesArray;
}

$StringArray* DOMAdapter::getNamespaceArray() {
	return this->_namespaceArray;
}

$DOM* DOMAdapter::getDOMImpl() {
	return this->_dom;
}

$shorts* DOMAdapter::getMapping() {
	if (this->_mapping == nullptr) {
		if (this->_enhancedDOM != nullptr) {
			$set(this, _mapping, $nc(this->_enhancedDOM)->getMapping(this->_namesArray, this->_urisArray, this->_typesArray));
		}
	}
	return this->_mapping;
}

$ints* DOMAdapter::getReverse() {
	if (this->_reverse == nullptr) {
		if (this->_enhancedDOM != nullptr) {
			$set(this, _reverse, $nc(this->_enhancedDOM)->getReverseMapping(this->_namesArray, this->_urisArray, this->_typesArray));
		}
	}
	return this->_reverse;
}

$shorts* DOMAdapter::getNSMapping() {
	if (this->_NSmapping == nullptr) {
		if (this->_enhancedDOM != nullptr) {
			$set(this, _NSmapping, $nc(this->_enhancedDOM)->getNamespaceMapping(this->_namespaceArray));
		}
	}
	return this->_NSmapping;
}

$shorts* DOMAdapter::getNSReverse() {
	if (this->_NSreverse == nullptr) {
		if (this->_enhancedDOM != nullptr) {
			$set(this, _NSreverse, $nc(this->_enhancedDOM)->getReverseNamespaceMapping(this->_namespaceArray));
		}
	}
	return this->_NSreverse;
}

$DTMAxisIterator* DOMAdapter::getIterator() {
	return $nc(this->_dom)->getIterator();
}

$String* DOMAdapter::getStringValue() {
	return $nc(this->_dom)->getStringValue();
}

$DTMAxisIterator* DOMAdapter::getChildren(int32_t node) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getChildren(node);
	} else {
		$var($DTMAxisIterator, iterator, $nc(this->_dom)->getChildren(node));
		return $nc(iterator)->setStartNode(node);
	}
}

void DOMAdapter::setFilter($StripFilter* filter) {
}

$DTMAxisIterator* DOMAdapter::getTypedChildren(int32_t type) {
	$var($ints, reverse, getReverse());
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getTypedChildren($nc(reverse)->get(type));
	} else {
		return $nc(this->_dom)->getTypedChildren(type);
	}
}

$DTMAxisIterator* DOMAdapter::getNamespaceAxisIterator(int32_t axis, int32_t ns) {
	return $nc(this->_dom)->getNamespaceAxisIterator(axis, $nc($(getNSReverse()))->get(ns));
}

$DTMAxisIterator* DOMAdapter::getAxisIterator(int32_t axis) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getAxisIterator(axis);
	} else {
		return $nc(this->_dom)->getAxisIterator(axis);
	}
}

$DTMAxisIterator* DOMAdapter::getTypedAxisIterator(int32_t axis, int32_t type) {
	$var($ints, reverse, getReverse());
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getTypedAxisIterator(axis, $nc(reverse)->get(type));
	} else {
		return $nc(this->_dom)->getTypedAxisIterator(axis, type);
	}
}

int32_t DOMAdapter::getMultiDOMMask() {
	return this->_multiDOMMask;
}

void DOMAdapter::setMultiDOMMask(int32_t mask) {
	this->_multiDOMMask = mask;
}

$DTMAxisIterator* DOMAdapter::getNthDescendant(int32_t type, int32_t n, bool includeself) {
	return $nc(this->_dom)->getNthDescendant($nc($(getReverse()))->get(type), n, includeself);
}

$DTMAxisIterator* DOMAdapter::getNodeValueIterator($DTMAxisIterator* iterator, int32_t type, $String* value, bool op) {
	return $nc(this->_dom)->getNodeValueIterator(iterator, type, value, op);
}

$DTMAxisIterator* DOMAdapter::orderNodes($DTMAxisIterator* source, int32_t node) {
	return $nc(this->_dom)->orderNodes(source, node);
}

int32_t DOMAdapter::getExpandedTypeID(int32_t node) {
	$var($shorts, mapping, getMapping());
	int32_t type = 0;
	if (this->_enhancedDOM != nullptr) {
		type = $nc(mapping)->get($nc(this->_enhancedDOM)->getExpandedTypeID2(node));
	} else if (nullptr != mapping) {
		type = mapping->get($nc(this->_dom)->getExpandedTypeID(node));
	} else {
		type = $nc(this->_dom)->getExpandedTypeID(node);
	}
	return type;
}

int32_t DOMAdapter::getNamespaceType(int32_t node) {
	return $nc($(getNSMapping()))->get($nc(this->_dom)->getNSType(node));
}

int32_t DOMAdapter::getNSType(int32_t node) {
	return $nc(this->_dom)->getNSType(node);
}

int32_t DOMAdapter::getParent(int32_t node) {
	return $nc(this->_dom)->getParent(node);
}

int32_t DOMAdapter::getAttributeNode(int32_t type, int32_t element) {
	return $nc(this->_dom)->getAttributeNode($nc($(getReverse()))->get(type), element);
}

$String* DOMAdapter::getNodeName(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc(this->_dom)->getNodeName(node);
}

$String* DOMAdapter::getNodeNameX(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc(this->_dom)->getNodeNameX(node);
}

$String* DOMAdapter::getNamespaceName(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc(this->_dom)->getNamespaceName(node);
}

$String* DOMAdapter::getStringValueX(int32_t node) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getStringValueX(node);
	} else {
		if (node == $DTM::NULL) {
			return ""_s;
		}
		return $nc(this->_dom)->getStringValueX(node);
	}
}

void DOMAdapter::copy(int32_t node, $SerializationHandler* handler) {
	$nc(this->_dom)->copy(node, handler);
}

void DOMAdapter::copy($DTMAxisIterator* nodes, $SerializationHandler* handler) {
	$nc(this->_dom)->copy(nodes, handler);
}

$String* DOMAdapter::shallowCopy(int32_t node, $SerializationHandler* handler) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->shallowCopy(node, handler);
	} else {
		return $nc(this->_dom)->shallowCopy(node, handler);
	}
}

bool DOMAdapter::lessThan(int32_t node1, int32_t node2) {
	return $nc(this->_dom)->lessThan(node1, node2);
}

void DOMAdapter::characters(int32_t textNode, $SerializationHandler* handler) {
	if (this->_enhancedDOM != nullptr) {
		$nc(this->_enhancedDOM)->characters(textNode, handler);
	} else {
		$nc(this->_dom)->characters(textNode, handler);
	}
}

$Node* DOMAdapter::makeNode(int32_t index) {
	return $nc(this->_dom)->makeNode(index);
}

$Node* DOMAdapter::makeNode($DTMAxisIterator* iter) {
	return $nc(this->_dom)->makeNode(iter);
}

$NodeList* DOMAdapter::makeNodeList(int32_t index) {
	return $nc(this->_dom)->makeNodeList(index);
}

$NodeList* DOMAdapter::makeNodeList($DTMAxisIterator* iter) {
	return $nc(this->_dom)->makeNodeList(iter);
}

$String* DOMAdapter::getLanguage(int32_t node) {
	return $nc(this->_dom)->getLanguage(node);
}

int32_t DOMAdapter::getSize() {
	return $nc(this->_dom)->getSize();
}

void DOMAdapter::setDocumentURI($String* uri) {
	if (this->_enhancedDOM != nullptr) {
		$nc(this->_enhancedDOM)->setDocumentURI(uri);
	}
}

$String* DOMAdapter::getDocumentURI() {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getDocumentURI();
	} else {
		return ""_s;
	}
}

$String* DOMAdapter::getDocumentURI(int32_t node) {
	return $nc(this->_dom)->getDocumentURI(node);
}

int32_t DOMAdapter::getDocument() {
	return $nc(this->_dom)->getDocument();
}

bool DOMAdapter::isElement(int32_t node) {
	return ($nc(this->_dom)->isElement(node));
}

bool DOMAdapter::isAttribute(int32_t node) {
	return ($nc(this->_dom)->isAttribute(node));
}

int32_t DOMAdapter::getNodeIdent(int32_t nodeHandle) {
	return $nc(this->_dom)->getNodeIdent(nodeHandle);
}

int32_t DOMAdapter::getNodeHandle(int32_t nodeId) {
	return $nc(this->_dom)->getNodeHandle(nodeId);
}

$DOM* DOMAdapter::getResultTreeFrag(int32_t initSize, int32_t rtfType) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getResultTreeFrag(initSize, rtfType);
	} else {
		return $nc(this->_dom)->getResultTreeFrag(initSize, rtfType);
	}
}

$DOM* DOMAdapter::getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) {
	if (this->_enhancedDOM != nullptr) {
		return $nc(this->_enhancedDOM)->getResultTreeFrag(initSize, rtfType, addToManager);
	} else {
		return $nc(this->_dom)->getResultTreeFrag(initSize, rtfType, addToManager);
	}
}

$SerializationHandler* DOMAdapter::getOutputDomBuilder() {
	return $nc(this->_dom)->getOutputDomBuilder();
}

$String* DOMAdapter::lookupNamespace(int32_t node, $String* prefix) {
	return $nc(this->_dom)->lookupNamespace(node, prefix);
}

$String* DOMAdapter::getUnparsedEntityURI($String* entity) {
	return $nc(this->_dom)->getUnparsedEntityURI(entity);
}

$Map* DOMAdapter::getElementsWithIDs() {
	return $nc(this->_dom)->getElementsWithIDs();
}

void DOMAdapter::release() {
	$nc(this->_dom)->release();
}

DOMAdapter::DOMAdapter() {
}

$Class* DOMAdapter::load$($String* name, bool initialize) {
	$loadClass(DOMAdapter, name, initialize, &_DOMAdapter_ClassInfo_, allocate$DOMAdapter);
	return class$;
}

$Class* DOMAdapter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com