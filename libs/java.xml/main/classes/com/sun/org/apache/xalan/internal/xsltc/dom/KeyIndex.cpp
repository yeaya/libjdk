#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef EMPTY_NODES
#undef END
#undef NULL
#undef ROOT

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $DOMAdapter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter;
using $KeyIndex$KeyIndexIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator;
using $MultiDOM = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
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

$CompoundAttribute _KeyIndex_MethodAnnotations_cloneIterator2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_getLast9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_getPosition10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_getStartNode11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_gotoMark12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_isReverse13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_lookupId14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_lookupKey15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_merge16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_next17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_reset18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_setMark20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _KeyIndex_MethodAnnotations_setStartNode22[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _KeyIndex_FieldInfo_[] = {
	{"_index", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;>;", $PRIVATE, $field(KeyIndex, _index)},
	{"_currentDocumentNode", "I", nullptr, $PRIVATE, $field(KeyIndex, _currentDocumentNode)},
	{"_rootToIndexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;>;>;", $PRIVATE, $field(KeyIndex, _rootToIndexMap)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(KeyIndex, _nodes)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(KeyIndex, _dom)},
	{"_enhancedDOM", "Lcom/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM;", nullptr, $PRIVATE, $field(KeyIndex, _enhancedDOM)},
	{"_markedPosition", "I", nullptr, $PRIVATE, $field(KeyIndex, _markedPosition)},
	{"EMPTY_NODES", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyIndex, EMPTY_NODES)},
	{}
};

$MethodInfo _KeyIndex_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(KeyIndex, init$, void, int32_t)},
	{"add", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(KeyIndex, add, void, $String*, int32_t, int32_t)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, cloneIterator, $DTMAxisIterator*), nullptr, nullptr, _KeyIndex_MethodAnnotations_cloneIterator2},
	{"containsID", "(ILjava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(KeyIndex, containsID, int32_t, int32_t, Object$*)},
	{"containsKey", "(ILjava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(KeyIndex, containsKey, int32_t, int32_t, Object$*)},
	{"getDOMNodeById", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PUBLIC, $virtualMethod(KeyIndex, getDOMNodeById, $IntegerArray*, $String*)},
	{"getKeyIndexIterator", "(Ljava/lang/Object;Z)Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;", nullptr, $PUBLIC, $virtualMethod(KeyIndex, getKeyIndexIterator, $KeyIndex$KeyIndexIterator*, Object$*, bool)},
	{"getKeyIndexIterator", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;", nullptr, $PUBLIC, $virtualMethod(KeyIndex, getKeyIndexIterator, $KeyIndex$KeyIndexIterator*, $String*, bool)},
	{"getKeyIndexIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;", nullptr, $PUBLIC, $virtualMethod(KeyIndex, getKeyIndexIterator, $KeyIndex$KeyIndexIterator*, $DTMAxisIterator*, bool)},
	{"getLast", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, getLast, int32_t), nullptr, nullptr, _KeyIndex_MethodAnnotations_getLast9},
	{"getPosition", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, getPosition, int32_t), nullptr, nullptr, _KeyIndex_MethodAnnotations_getPosition10},
	{"getStartNode", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, getStartNode, int32_t), nullptr, nullptr, _KeyIndex_MethodAnnotations_getStartNode11},
	{"gotoMark", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, gotoMark, void), nullptr, nullptr, _KeyIndex_MethodAnnotations_gotoMark12},
	{"isReverse", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, isReverse, bool), nullptr, nullptr, _KeyIndex_MethodAnnotations_isReverse13},
	{"lookupId", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, lookupId, void, Object$*), nullptr, nullptr, _KeyIndex_MethodAnnotations_lookupId14},
	{"lookupKey", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, lookupKey, void, Object$*), nullptr, nullptr, _KeyIndex_MethodAnnotations_lookupKey15},
	{"merge", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, merge, void, KeyIndex*), nullptr, nullptr, _KeyIndex_MethodAnnotations_merge16},
	{"next", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, next, int32_t), nullptr, nullptr, _KeyIndex_MethodAnnotations_next17},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, reset, $DTMAxisIterator*), nullptr, nullptr, _KeyIndex_MethodAnnotations_reset18},
	{"setDom", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;I)V", nullptr, $PUBLIC, $virtualMethod(KeyIndex, setDom, void, $DOM*, int32_t)},
	{"setMark", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, setMark, void), nullptr, nullptr, _KeyIndex_MethodAnnotations_setMark20},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(KeyIndex, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(KeyIndex, setStartNode, $DTMAxisIterator*, int32_t), nullptr, nullptr, _KeyIndex_MethodAnnotations_setStartNode22},
	{}
};

$InnerClassInfo _KeyIndex_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex", "KeyIndexIterator", $PUBLIC},
	{}
};

$ClassInfo _KeyIndex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_KeyIndex_FieldInfo_,
	_KeyIndex_MethodInfo_,
	nullptr,
	nullptr,
	_KeyIndex_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator,com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator$KeyIndexHeapNode"
};

$Object* allocate$KeyIndex($Class* clazz) {
	return $of($alloc(KeyIndex));
}

$IntegerArray* KeyIndex::EMPTY_NODES = nullptr;

void KeyIndex::init$(int32_t dummy) {
	$DTMAxisIteratorBase::init$();
	this->_currentDocumentNode = $DTM::NULL;
	$set(this, _rootToIndexMap, $new($HashMap));
	$set(this, _nodes, nullptr);
	this->_markedPosition = 0;
}

void KeyIndex::setRestartable(bool flag) {
}

void KeyIndex::add($String* value, int32_t node, int32_t rootNode) {
	$useLocalCurrentObjectStackCache();
	if (this->_currentDocumentNode != rootNode) {
		this->_currentDocumentNode = rootNode;
		$set(this, _index, $new($HashMap));
		$nc(this->_rootToIndexMap)->put($($Integer::valueOf(rootNode)), this->_index);
	}
	$var($IntegerArray, nodes, $cast($IntegerArray, $nc(this->_index)->get(value)));
	if (nodes == nullptr) {
		$assign(nodes, $new($IntegerArray));
		$nc(this->_index)->put(value, nodes);
		nodes->add(node);
	} else if (node != $nc(nodes)->at(nodes->cardinality() - 1)) {
		nodes->add(node);
	}
}

void KeyIndex::merge(KeyIndex* other) {
	if (other == nullptr) {
		return;
	}
	if ($nc(other)->_nodes != nullptr) {
		if (this->_nodes == nullptr) {
			$set(this, _nodes, $cast($IntegerArray, $nc(other->_nodes)->clone()));
		} else {
			$nc(this->_nodes)->merge(other->_nodes);
		}
	}
}

void KeyIndex::lookupId(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$set(this, _nodes, nullptr);
	$var($StringTokenizer, values, $new($StringTokenizer, $cast($String, value), " \n\t"_s));
	while (values->hasMoreElements()) {
		$var($String, token, $cast($String, values->nextElement()));
		$var($IntegerArray, nodes, $cast($IntegerArray, $nc(this->_index)->get(token)));
		if (nodes == nullptr && this->_enhancedDOM != nullptr && $nc(this->_enhancedDOM)->hasDOMSource()) {
			$assign(nodes, getDOMNodeById(token));
		}
		if (nodes == nullptr) {
			continue;
		}
		if (this->_nodes == nullptr) {
			$assign(nodes, $cast($IntegerArray, $nc(nodes)->clone()));
			$set(this, _nodes, nodes);
		} else {
			$nc(this->_nodes)->merge(nodes);
		}
	}
}

$IntegerArray* KeyIndex::getDOMNodeById($String* id) {
	$useLocalCurrentObjectStackCache();
	$var($IntegerArray, nodes, nullptr);
	if (this->_enhancedDOM != nullptr) {
		int32_t ident = $nc(this->_enhancedDOM)->getElementById(id);
		if (ident != $DTM::NULL) {
			$var($Integer, root, $Integer::valueOf($nc(this->_enhancedDOM)->getDocument()));
			$var($Map, index, $cast($Map, $nc(this->_rootToIndexMap)->get(root)));
			if (index == nullptr) {
				$assign(index, $new($HashMap));
				$nc(this->_rootToIndexMap)->put(root, index);
			} else {
				$assign(nodes, $cast($IntegerArray, $nc(index)->get(id)));
			}
			if (nodes == nullptr) {
				$assign(nodes, $new($IntegerArray));
				$nc(index)->put(id, nodes);
			}
			$nc(nodes)->add($nc(this->_enhancedDOM)->getNodeHandle(ident));
		}
	}
	return nodes;
}

void KeyIndex::lookupKey(Object$* value) {
	$var($IntegerArray, nodes, $cast($IntegerArray, $nc(this->_index)->get(value)));
	$set(this, _nodes, (nodes != nullptr) ? $cast($IntegerArray, $nc(nodes)->clone()) : ($IntegerArray*)nullptr);
	this->_position = 0;
}

int32_t KeyIndex::next() {
	if (this->_nodes == nullptr) {
		return $DTMAxisIterator::END;
	}
	return (this->_position < $nc(this->_nodes)->cardinality()) ? $nc(this->_dom)->getNodeHandle($nc(this->_nodes)->at(this->_position++)) : $DTMAxisIterator::END;
}

int32_t KeyIndex::containsID(int32_t node, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, string, $cast($String, value));
	int32_t rootHandle = $nc($($nc($($nc(this->_dom)->getAxisIterator($Axis::ROOT)))->setStartNode(node)))->next();
	$var($Map, index, $cast($Map, $nc(this->_rootToIndexMap)->get($($Integer::valueOf(rootHandle)))));
	$var($StringTokenizer, values, $new($StringTokenizer, string, " \n\t"_s));
	while (values->hasMoreElements()) {
		$var($String, token, $cast($String, values->nextElement()));
		$var($IntegerArray, nodes, nullptr);
		if (index != nullptr) {
			$assign(nodes, $cast($IntegerArray, index->get(token)));
		}
		if (nodes == nullptr && this->_enhancedDOM != nullptr && $nc(this->_enhancedDOM)->hasDOMSource()) {
			$assign(nodes, getDOMNodeById(token));
		}
		if (nodes != nullptr && nodes->indexOf(node) >= 0) {
			return 1;
		}
	}
	return 0;
}

int32_t KeyIndex::containsKey(int32_t node, Object$* value) {
	$useLocalCurrentObjectStackCache();
	int32_t rootHandle = $nc($($nc($($nc(this->_dom)->getAxisIterator($Axis::ROOT)))->setStartNode(node)))->next();
	$var($Map, index, $cast($Map, $nc(this->_rootToIndexMap)->get($($Integer::valueOf(rootHandle)))));
	if (index != nullptr) {
		$var($IntegerArray, nodes, $cast($IntegerArray, index->get(value)));
		return (nodes != nullptr && nodes->indexOf(node) >= 0) ? 1 : 0;
	}
	return 0;
}

$DTMAxisIterator* KeyIndex::reset() {
	this->_position = 0;
	return this;
}

int32_t KeyIndex::getLast() {
	return (this->_nodes == nullptr) ? 0 : $nc(this->_nodes)->cardinality();
}

int32_t KeyIndex::getPosition() {
	return this->_position;
}

void KeyIndex::setMark() {
	this->_markedPosition = this->_position;
}

void KeyIndex::gotoMark() {
	this->_position = this->_markedPosition;
}

$DTMAxisIterator* KeyIndex::setStartNode(int32_t start) {
	if (start == $DTMAxisIterator::END) {
		$set(this, _nodes, nullptr);
	} else if (this->_nodes != nullptr) {
		this->_position = 0;
	}
	return static_cast<$DTMAxisIterator*>(this);
}

int32_t KeyIndex::getStartNode() {
	return 0;
}

bool KeyIndex::isReverse() {
	return (false);
}

$DTMAxisIterator* KeyIndex::cloneIterator() {
	$var(KeyIndex, other, $new(KeyIndex, 0));
	$set(other, _index, this->_index);
	$set(other, _rootToIndexMap, this->_rootToIndexMap);
	$set(other, _nodes, this->_nodes);
	other->_position = this->_position;
	return static_cast<$DTMAxisIterator*>(other);
}

void KeyIndex::setDom($DOM* dom$renamed, int32_t node) {
	$useLocalCurrentObjectStackCache();
	$var($DOM, dom, dom$renamed);
	$set(this, _dom, dom);
	if ($instanceOf($MultiDOM, dom)) {
		$assign(dom, $nc(($cast($MultiDOM, dom)))->getDTM(node));
	}
	if ($instanceOf($DOMEnhancedForDTM, dom)) {
		$set(this, _enhancedDOM, $cast($DOMEnhancedForDTM, dom));
	} else if ($instanceOf($DOMAdapter, dom)) {
		$var($DOM, idom, $nc(($cast($DOMAdapter, dom)))->getDOMImpl());
		if ($instanceOf($DOMEnhancedForDTM, idom)) {
			$set(this, _enhancedDOM, $cast($DOMEnhancedForDTM, idom));
		}
	}
}

$KeyIndex$KeyIndexIterator* KeyIndex::getKeyIndexIterator(Object$* keyValue, bool isKeyCall) {
	if ($instanceOf($DTMAxisIterator, keyValue)) {
		return getKeyIndexIterator($cast($DTMAxisIterator, keyValue), isKeyCall);
	} else {
		return getKeyIndexIterator($($BasisLibrary::stringF(keyValue, this->_dom)), isKeyCall);
	}
}

$KeyIndex$KeyIndexIterator* KeyIndex::getKeyIndexIterator($String* keyValue, bool isKeyCall) {
	return $new($KeyIndex$KeyIndexIterator, this, keyValue, isKeyCall);
}

$KeyIndex$KeyIndexIterator* KeyIndex::getKeyIndexIterator($DTMAxisIterator* keyValue, bool isKeyCall) {
	return $new($KeyIndex$KeyIndexIterator, this, keyValue, isKeyCall);
}

void clinit$KeyIndex($Class* class$) {
	$assignStatic(KeyIndex::EMPTY_NODES, $new($IntegerArray, 0));
}

KeyIndex::KeyIndex() {
}

$Class* KeyIndex::load$($String* name, bool initialize) {
	$loadClass(KeyIndex, name, initialize, &_KeyIndex_ClassInfo_, clinit$KeyIndex, allocate$KeyIndex);
	return class$;
}

$Class* KeyIndex::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com