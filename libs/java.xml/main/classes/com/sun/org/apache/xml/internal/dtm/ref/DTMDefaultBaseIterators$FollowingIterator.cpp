#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef FOLLOWING
#undef ROOTNODE

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
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

$FieldInfo _DTMDefaultBaseIterators$FollowingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$FollowingIterator, this$0)},
	{"m_traverser", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, 0, $field(DTMDefaultBaseIterators$FollowingIterator, m_traverser)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$FollowingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$FollowingIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$FollowingIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$FollowingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$FollowingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$FollowingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$FollowingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$FollowingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$FollowingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$FollowingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$FollowingIterator));
}

void DTMDefaultBaseIterators$FollowingIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	$set(this, m_traverser, this$0->getAxisTraverser($Axis::FOLLOWING));
}

$DTMAxisIterator* DTMDefaultBaseIterators$FollowingIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = $nc(this->m_traverser)->first(node);
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$FollowingIterator::next() {
	int32_t node = this->_currentNode;
	this->_currentNode = $nc(this->m_traverser)->next(this->_startNode, this->_currentNode);
	return returnNode(node);
}

DTMDefaultBaseIterators$FollowingIterator::DTMDefaultBaseIterators$FollowingIterator() {
}

$Class* DTMDefaultBaseIterators$FollowingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$FollowingIterator, name, initialize, &_DTMDefaultBaseIterators$FollowingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$FollowingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$FollowingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com