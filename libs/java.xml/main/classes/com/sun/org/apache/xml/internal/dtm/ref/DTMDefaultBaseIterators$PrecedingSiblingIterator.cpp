#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef NAMESPACE
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

$FieldInfo _DTMDefaultBaseIterators$PrecedingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$PrecedingSiblingIterator, this$0)},
	{"_startNodeID", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingSiblingIterator, _startNodeID)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$PrecedingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$PrecedingSiblingIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingSiblingIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingSiblingIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingSiblingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$PrecedingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$PrecedingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$PrecedingSiblingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$PrecedingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$PrecedingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$PrecedingSiblingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$PrecedingSiblingIterator));
}

void DTMDefaultBaseIterators$PrecedingSiblingIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

bool DTMDefaultBaseIterators$PrecedingSiblingIterator::isReverse() {
	return true;
}

$DTMAxisIterator* DTMDefaultBaseIterators$PrecedingSiblingIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		node = (this->_startNodeID = this->this$0->makeNodeIdentity(node));
		if (node == -1) {
			this->_currentNode = node;
			return resetPosition();
		}
		int32_t type = $nc(this->this$0->m_expandedNameTable)->getType(this->this$0->_exptype(node));
		if ($ExpandedNameTable::ATTRIBUTE == type || $ExpandedNameTable::NAMESPACE == type) {
			this->_currentNode = node;
		} else {
			this->_currentNode = this->this$0->_parent(node);
			if (-1 != this->_currentNode) {
				this->_currentNode = this->this$0->_firstch(this->_currentNode);
			} else {
				this->_currentNode = node;
			}
		}
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$PrecedingSiblingIterator::next() {
	if (this->_currentNode == this->_startNodeID || this->_currentNode == $DTM::NULL) {
		return -1;
	} else {
		int32_t node = this->_currentNode;
		this->_currentNode = this->this$0->_nextsib(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

DTMDefaultBaseIterators$PrecedingSiblingIterator::DTMDefaultBaseIterators$PrecedingSiblingIterator() {
}

$Class* DTMDefaultBaseIterators$PrecedingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$PrecedingSiblingIterator, name, initialize, &_DTMDefaultBaseIterators$PrecedingSiblingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$PrecedingSiblingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$PrecedingSiblingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com