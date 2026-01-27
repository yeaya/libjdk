#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedChildrenIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef NTYPES
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
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

$FieldInfo _DTMDefaultBaseIterators$TypedChildrenIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedChildrenIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedChildrenIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedChildrenIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedChildrenIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedChildrenIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedChildrenIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedChildrenIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedChildrenIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedChildrenIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$TypedChildrenIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedChildrenIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedChildrenIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedChildrenIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedChildrenIterator));
}

void DTMDefaultBaseIterators$TypedChildrenIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = nodeType;
}

$DTMAxisIterator* DTMDefaultBaseIterators$TypedChildrenIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = (node == $DTM::NULL) ? $DTM::NULL : this->this$0->_firstch(this->this$0->makeNodeIdentity(this->_startNode));
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$TypedChildrenIterator::next() {
	int32_t eType = 0;
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	if (nodeType >= $DTM::NTYPES) {
		while (node != $DTM::NULL && this->this$0->_exptype(node) != nodeType) {
			node = this->this$0->_nextsib(node);
		}
	} else {
		while (node != $DTM::NULL) {
			eType = this->this$0->_exptype(node);
			if (eType < $DTM::NTYPES) {
				if (eType == nodeType) {
					break;
				}
			} else if ($nc(this->this$0->m_expandedNameTable)->getType(eType) == nodeType) {
				break;
			}
			node = this->this$0->_nextsib(node);
		}
	}
	if (node == $DTM::NULL) {
		this->_currentNode = $DTM::NULL;
		return $DTM::NULL;
	} else {
		this->_currentNode = this->this$0->_nextsib(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

DTMDefaultBaseIterators$TypedChildrenIterator::DTMDefaultBaseIterators$TypedChildrenIterator() {
}

$Class* DTMDefaultBaseIterators$TypedChildrenIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedChildrenIterator, name, initialize, &_DTMDefaultBaseIterators$TypedChildrenIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedChildrenIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedChildrenIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com