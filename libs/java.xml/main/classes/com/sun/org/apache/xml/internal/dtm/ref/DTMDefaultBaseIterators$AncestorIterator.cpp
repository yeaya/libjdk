#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$AncestorIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $NodeVector = ::com::sun::org::apache::xml::internal::utils::NodeVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
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

$FieldInfo _DTMDefaultBaseIterators$AncestorIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$AncestorIterator, this$0)},
	{"m_ancestors", "Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, 0, $field(DTMDefaultBaseIterators$AncestorIterator, m_ancestors)},
	{"m_ancestorsPos", "I", nullptr, 0, $field(DTMDefaultBaseIterators$AncestorIterator, m_ancestorsPos)},
	{"m_markedPos", "I", nullptr, 0, $field(DTMDefaultBaseIterators$AncestorIterator, m_markedPos)},
	{"m_realStartNode", "I", nullptr, 0, $field(DTMDefaultBaseIterators$AncestorIterator, m_realStartNode)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$AncestorIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$AncestorIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, cloneIterator, $DTMAxisIterator*)},
	{"getStartNode", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, getStartNode, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AncestorIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$AncestorIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "AncestorIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$AncestorIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$AncestorIterator_FieldInfo_,
	_DTMDefaultBaseIterators$AncestorIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$AncestorIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$AncestorIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$AncestorIterator));
}

void DTMDefaultBaseIterators$AncestorIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	$set(this, m_ancestors, $new($NodeVector));
}

int32_t DTMDefaultBaseIterators$AncestorIterator::getStartNode() {
	return this->m_realStartNode;
}

bool DTMDefaultBaseIterators$AncestorIterator::isReverse() {
	return true;
}

$DTMAxisIterator* DTMDefaultBaseIterators$AncestorIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	this->_isRestartable = false;
	try {
		$var(DTMDefaultBaseIterators$AncestorIterator, clone, $cast(DTMDefaultBaseIterators$AncestorIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
		$nc(clone)->_startNode = this->_startNode;
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$init($XMLErrorResources);
		$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED, nullptr)));
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* DTMDefaultBaseIterators$AncestorIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	this->m_realStartNode = node;
	if (this->_isRestartable) {
		int32_t nodeID = this->this$0->makeNodeIdentity(node);
		if (!this->_includeSelf && node != $DTM::NULL) {
			nodeID = this->this$0->_parent(nodeID);
			node = this->this$0->makeNodeHandle(nodeID);
		}
		this->_startNode = node;
		while (nodeID != $DTMAxisIterator::END) {
			$nc(this->m_ancestors)->addElement(node);
			nodeID = this->this$0->_parent(nodeID);
			node = this->this$0->makeNodeHandle(nodeID);
		}
		this->m_ancestorsPos = $nc(this->m_ancestors)->size() - 1;
		this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->elementAt(this->m_ancestorsPos) : $DTM::NULL;
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* DTMDefaultBaseIterators$AncestorIterator::reset() {
	this->m_ancestorsPos = $nc(this->m_ancestors)->size() - 1;
	this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->elementAt(this->m_ancestorsPos) : $DTM::NULL;
	return resetPosition();
}

int32_t DTMDefaultBaseIterators$AncestorIterator::next() {
	int32_t next = this->_currentNode;
	int32_t pos = --this->m_ancestorsPos;
	this->_currentNode = (pos >= 0) ? $nc(this->m_ancestors)->elementAt(this->m_ancestorsPos) : $DTM::NULL;
	return returnNode(next);
}

void DTMDefaultBaseIterators$AncestorIterator::setMark() {
	this->m_markedPos = this->m_ancestorsPos;
}

void DTMDefaultBaseIterators$AncestorIterator::gotoMark() {
	this->m_ancestorsPos = this->m_markedPos;
	this->_currentNode = this->m_ancestorsPos >= 0 ? $nc(this->m_ancestors)->elementAt(this->m_ancestorsPos) : $DTM::NULL;
}

DTMDefaultBaseIterators$AncestorIterator::DTMDefaultBaseIterators$AncestorIterator() {
}

$Class* DTMDefaultBaseIterators$AncestorIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$AncestorIterator, name, initialize, &_DTMDefaultBaseIterators$AncestorIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$AncestorIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$AncestorIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com