#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>

#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef ADAPTIVE_RTF
#undef DOM
#undef FIRST_TYPE
#undef NO_TYPE
#undef NULL
#undef RETURN_CURRENT
#undef RETURN_PARENT
#undef SIMPLE_RTF
#undef TREE_RTF

using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
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

$FieldInfo _DOM_FieldInfo_[] = {
	{"FIRST_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, FIRST_TYPE)},
	{"NO_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, NO_TYPE)},
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, NULL)},
	{"RETURN_CURRENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, RETURN_CURRENT)},
	{"RETURN_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, RETURN_PARENT)},
	{"SIMPLE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, SIMPLE_RTF)},
	{"ADAPTIVE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, ADAPTIVE_RTF)},
	{"TREE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, TREE_RTF)},
	{}
};

$MethodInfo _DOM_MethodInfo_[] = {
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, characters, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, copy, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, copy, void, $DTMAxisIterator*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getAttributeNode, int32_t, int32_t, int32_t)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getChildren, $DTMAxisIterator*, int32_t)},
	{"getDocument", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getDocument, int32_t)},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getDocumentURI, $String*, int32_t)},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getElementsWithIDs, $Map*)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getExpandedTypeID, int32_t, int32_t)},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getIterator, $DTMAxisIterator*)},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getLanguage, $String*, int32_t)},
	{"getNSType", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNSType, int32_t, int32_t)},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNamespaceAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNamespaceName, $String*, int32_t)},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNamespaceType, int32_t, int32_t)},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNodeHandle, int32_t, int32_t)},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNodeIdent, int32_t, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNodeNameX, $String*, int32_t)},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNodeValueIterator, $DTMAxisIterator*, $DTMAxisIterator*, int32_t, $String*, bool)},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getNthDescendant, $DTMAxisIterator*, int32_t, int32_t, bool)},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getOutputDomBuilder, $SerializationHandler*)},
	{"getParent", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getParent, int32_t, int32_t)},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getResultTreeFrag, DOM*, int32_t, int32_t)},
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getResultTreeFrag, DOM*, int32_t, int32_t, bool)},
	{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getSize, int32_t)},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getStringValue, $String*)},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getStringValueX, $String*, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getTypedChildren, $DTMAxisIterator*, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, getUnparsedEntityURI, $String*, $String*)},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, isAttribute, bool, int32_t)},
	{"isElement", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, isElement, bool, int32_t)},
	{"lessThan", "(II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, lessThan, bool, int32_t, int32_t)},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, lookupNamespace, $String*, int32_t, $String*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, makeNode, $Node*, int32_t)},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, makeNode, $Node*, $DTMAxisIterator*)},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, makeNodeList, $NodeList*, int32_t)},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, makeNodeList, $NodeList*, $DTMAxisIterator*)},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, orderNodes, $DTMAxisIterator*, $DTMAxisIterator*, int32_t)},
	{"release", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, release, void)},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, setFilter, void, $StripFilter*)},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, setupMapping, void, $StringArray*, $StringArray*, $ints*, $StringArray*)},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM, shallowCopy, $String*, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _DOM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	nullptr,
	nullptr,
	_DOM_FieldInfo_,
	_DOM_MethodInfo_
};

$Object* allocate$DOM($Class* clazz) {
	return $of($alloc(DOM));
}

$Class* DOM::load$($String* name, bool initialize) {
	$loadClass(DOM, name, initialize, &_DOM_ClassInfo_, allocate$DOM);
	return class$;
}

$Class* DOM::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com