#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedChildrenIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef NTYPES
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

void SAX2DTM2$TypedChildrenIterator::init$($SAX2DTM2* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = nodeType;
}

$DTMAxisIterator* SAX2DTM2$TypedChildrenIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = (node == $DTM::NULL) ? $DTM::NULL : this->this$0->_firstch2(this->this$0->makeNodeIdentity(this->_startNode));
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$TypedChildrenIterator::next() {
	int32_t node = this->_currentNode;
	if (node == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t nodeType = this->_nodeType;
	if (nodeType != $DTM::ELEMENT_NODE) {
		while (node != $DTM::NULL && this->this$0->_exptype2(node) != nodeType) {
			node = this->this$0->_nextsib2(node);
		}
	} else {
		int32_t eType = 0;
		while (node != $DTM::NULL) {
			eType = this->this$0->_exptype2(node);
			if (eType >= $DTM::NTYPES) {
				break;
			} else {
				node = this->this$0->_nextsib2(node);
			}
		}
	}
	if (node == $DTM::NULL) {
		this->_currentNode = $DTM::NULL;
		return $DTM::NULL;
	} else {
		this->_currentNode = this->this$0->_nextsib2(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

int32_t SAX2DTM2$TypedChildrenIterator::getNodeByPosition(int32_t position) {
	if (position <= 0) {
		return $DTM::NULL;
	}
	int32_t node = this->_currentNode;
	int32_t pos = 0;
	int32_t nodeType = this->_nodeType;
	if (nodeType != $DTM::ELEMENT_NODE) {
		while (node != $DTM::NULL) {
			if (this->this$0->_exptype2(node) == nodeType) {
				++pos;
				if (pos == position) {
					return this->this$0->makeNodeHandle(node);
				}
			}
			node = this->this$0->_nextsib2(node);
		}
		return -1;
	} else {
		while (node != $DTM::NULL) {
			if (this->this$0->_exptype2(node) >= $DTM::NTYPES) {
				++pos;
				if (pos == position) {
					return this->this$0->makeNodeHandle(node);
				}
			}
			node = this->this$0->_nextsib2(node);
		}
		return -1;
	}
}

SAX2DTM2$TypedChildrenIterator::SAX2DTM2$TypedChildrenIterator() {
}

$Class* SAX2DTM2$TypedChildrenIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedChildrenIterator, this$0)},
		{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedChildrenIterator, _nodeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedChildrenIterator, init$, void, $SAX2DTM2*, int32_t)},
		{"getNodeByPosition", "(I)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedChildrenIterator, getNodeByPosition, int32_t, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedChildrenIterator, next, int32_t)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedChildrenIterator, setStartNode, $DTMAxisIterator*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedChildrenIterator", $PUBLIC | $FINAL},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedChildrenIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
	};
	$loadClass(SAX2DTM2$TypedChildrenIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAX2DTM2$TypedChildrenIterator);
	});
	return class$;
}

$Class* SAX2DTM2$TypedChildrenIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com