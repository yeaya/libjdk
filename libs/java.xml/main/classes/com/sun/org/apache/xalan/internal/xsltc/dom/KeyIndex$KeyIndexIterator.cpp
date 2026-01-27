#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator$KeyIndexHeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef EMPTY_NODES
#undef END
#undef ROOT

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $KeyIndex = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex;
using $KeyIndex$KeyIndexIterator$KeyIndexHeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator$KeyIndexHeapNode;
using $MultiValuedNodeHeapIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator;
using $MultiValuedNodeHeapIterator$HeapNode = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _KeyIndex$KeyIndexIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;", nullptr, $FINAL | $SYNTHETIC, $field(KeyIndex$KeyIndexIterator, this$0)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator, _nodes)},
	{"_keyValueIterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator, _keyValueIterator)},
	{"_keyValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator, _keyValue)},
	{"_isKeyIterator", "Z", nullptr, $PRIVATE, $field(KeyIndex$KeyIndexIterator, _isKeyIterator)},
	{}
};

$MethodInfo _KeyIndex$KeyIndexIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;Ljava/lang/String;Z)V", nullptr, 0, $method(KeyIndex$KeyIndexIterator, init$, void, $KeyIndex*, $String*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)V", nullptr, 0, $method(KeyIndex$KeyIndexIterator, init$, void, $KeyIndex*, $DTMAxisIterator*, bool)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator, getLast, int32_t)},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator, getNodeByPosition, int32_t, int32_t)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(KeyIndex$KeyIndexIterator, init, void)},
	{"lookupNodes", "(ILjava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PROTECTED, $virtualMethod(KeyIndex$KeyIndexIterator, lookupNodes, $IntegerArray*, int32_t, $String*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator, reset, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(KeyIndex$KeyIndexIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _KeyIndex$KeyIndexIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex", "KeyIndexIterator", $PUBLIC},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator$KeyIndexHeapNode", "com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator", "KeyIndexHeapNode", $PROTECTED},
	{}
};

$ClassInfo _KeyIndex$KeyIndexIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator",
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator",
	nullptr,
	_KeyIndex$KeyIndexIterator_FieldInfo_,
	_KeyIndex$KeyIndexIterator_MethodInfo_,
	nullptr,
	nullptr,
	_KeyIndex$KeyIndexIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex"
};

$Object* allocate$KeyIndex$KeyIndexIterator($Class* clazz) {
	return $of($alloc(KeyIndex$KeyIndexIterator));
}

void KeyIndex$KeyIndexIterator::init$($KeyIndex* this$0, $String* keyValue, bool isKeyIterator) {
	$set(this, this$0, this$0);
	$MultiValuedNodeHeapIterator::init$();
	this->_isKeyIterator = isKeyIterator;
	$set(this, _keyValue, keyValue);
}

void KeyIndex$KeyIndexIterator::init$($KeyIndex* this$0, $DTMAxisIterator* keyValues, bool isKeyIterator) {
	$set(this, this$0, this$0);
	$MultiValuedNodeHeapIterator::init$();
	$set(this, _keyValueIterator, keyValues);
	this->_isKeyIterator = isKeyIterator;
}

$IntegerArray* KeyIndex$KeyIndexIterator::lookupNodes(int32_t root, $String* keyValue) {
	$useLocalCurrentObjectStackCache();
	$var($IntegerArray, result, nullptr);
	$var($Map, index, $cast($Map, $nc(this->this$0->_rootToIndexMap)->get($($Integer::valueOf(root)))));
	if (!this->_isKeyIterator) {
		$var($StringTokenizer, values, $new($StringTokenizer, keyValue, " \n\t"_s));
		while (values->hasMoreElements()) {
			$var($String, token, $cast($String, values->nextElement()));
			$var($IntegerArray, nodes, nullptr);
			if (index != nullptr) {
				$assign(nodes, $cast($IntegerArray, index->get(token)));
			}
			if (nodes == nullptr && this->this$0->_enhancedDOM != nullptr && $nc(this->this$0->_enhancedDOM)->hasDOMSource()) {
				$assign(nodes, this->this$0->getDOMNodeById(token));
			}
			if (nodes != nullptr) {
				if (result == nullptr) {
					$assign(result, $cast($IntegerArray, nodes->clone()));
				} else {
					$nc(result)->merge(nodes);
				}
			}
		}
	} else if (index != nullptr) {
		$assign(result, $cast($IntegerArray, index->get(keyValue)));
	}
	return result;
}

$DTMAxisIterator* KeyIndex$KeyIndexIterator::setStartNode(int32_t node) {
	this->_startNode = node;
	if (this->_keyValueIterator != nullptr) {
		$set(this, _keyValueIterator, $nc(this->_keyValueIterator)->setStartNode(node));
	}
	init();
	return $MultiValuedNodeHeapIterator::setStartNode(node);
}

int32_t KeyIndex$KeyIndexIterator::next() {
	int32_t nodeHandle = 0;
	if (this->_nodes != nullptr) {
		if (this->_position < $nc(this->_nodes)->cardinality()) {
			nodeHandle = returnNode($nc(this->_nodes)->at(this->_position));
		} else {
			nodeHandle = $DTMAxisIterator::END;
		}
	} else {
		nodeHandle = $MultiValuedNodeHeapIterator::next();
	}
	return nodeHandle;
}

$DTMAxisIterator* KeyIndex$KeyIndexIterator::reset() {
	if (this->_nodes == nullptr) {
		init();
	} else {
		$MultiValuedNodeHeapIterator::reset();
	}
	return resetPosition();
}

void KeyIndex$KeyIndexIterator::init() {
	$useLocalCurrentObjectStackCache();
	$MultiValuedNodeHeapIterator::init();
	this->_position = 0;
	int32_t rootHandle = $nc($($nc($($nc(this->this$0->_dom)->getAxisIterator($Axis::ROOT)))->setStartNode(this->_startNode)))->next();
	if (this->_keyValueIterator == nullptr) {
		$set(this, _nodes, lookupNodes(rootHandle, this->_keyValue));
		if (this->_nodes == nullptr) {
			$init($KeyIndex);
			$set(this, _nodes, $KeyIndex::EMPTY_NODES);
		}
	} else {
		$var($DTMAxisIterator, keyValues, $nc(this->_keyValueIterator)->reset());
		int32_t retrievedKeyValueIdx = 0;
		bool foundNodes = false;
		$set(this, _nodes, nullptr);
		for (int32_t keyValueNode = $nc(keyValues)->next(); keyValueNode != $DTMAxisIterator::END; keyValueNode = keyValues->next()) {
			$var($String, keyValue, $BasisLibrary::stringF(keyValueNode, this->this$0->_dom));
			$var($IntegerArray, nodes, lookupNodes(rootHandle, keyValue));
			if (nodes != nullptr) {
				if (!foundNodes) {
					$set(this, _nodes, nodes);
					foundNodes = true;
				} else {
					if (this->_nodes != nullptr) {
						addHeapNode($$new($KeyIndex$KeyIndexIterator$KeyIndexHeapNode, this, this->_nodes));
						$set(this, _nodes, nullptr);
					}
					addHeapNode($$new($KeyIndex$KeyIndexIterator$KeyIndexHeapNode, this, nodes));
				}
			}
		}
		if (!foundNodes) {
			$init($KeyIndex);
			$set(this, _nodes, $KeyIndex::EMPTY_NODES);
		}
	}
}

int32_t KeyIndex$KeyIndexIterator::getLast() {
	return (this->_nodes != nullptr) ? $nc(this->_nodes)->cardinality() : $MultiValuedNodeHeapIterator::getLast();
}

int32_t KeyIndex$KeyIndexIterator::getNodeByPosition(int32_t position) {
	int32_t node = $DTMAxisIterator::END;
	if (this->_nodes != nullptr) {
		if (position > 0) {
			if (position <= $nc(this->_nodes)->cardinality()) {
				this->_position = position;
				node = $nc(this->_nodes)->at(position - 1);
			} else {
				this->_position = $nc(this->_nodes)->cardinality();
			}
		}
	} else {
		node = $MultiValuedNodeHeapIterator::getNodeByPosition(position);
	}
	return node;
}

KeyIndex$KeyIndexIterator::KeyIndex$KeyIndexIterator() {
}

$Class* KeyIndex$KeyIndexIterator::load$($String* name, bool initialize) {
	$loadClass(KeyIndex$KeyIndexIterator, name, initialize, &_KeyIndex$KeyIndexIterator_ClassInfo_, allocate$KeyIndex$KeyIndexIterator);
	return class$;
}

$Class* KeyIndex$KeyIndexIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com