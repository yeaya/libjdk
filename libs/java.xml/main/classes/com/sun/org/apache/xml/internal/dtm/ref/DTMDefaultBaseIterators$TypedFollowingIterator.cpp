#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedFollowingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$FollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedFollowingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedFollowingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedFollowingIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedFollowingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedFollowingIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedFollowingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedFollowingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedFollowingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedFollowingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedFollowingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedFollowingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedFollowingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedFollowingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedFollowingIterator));
}

void DTMDefaultBaseIterators$TypedFollowingIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$FollowingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t DTMDefaultBaseIterators$TypedFollowingIterator::next() {
	int32_t node = 0;
	bool var$0 = false;
	do {
		node = this->_currentNode;
		this->_currentNode = $nc(this->m_traverser)->next(this->_startNode, this->_currentNode);
		var$0 = node != $DTM::NULL;
		if (var$0) {
			bool var$1 = this->this$0->getExpandedTypeID(node) != this->_nodeType;
			var$0 = (var$1 && this->this$0->getNodeType(node) != this->_nodeType);
		}
	} while (var$0);
	return (node == $DTM::NULL ? $DTM::NULL : returnNode(node));
}

DTMDefaultBaseIterators$TypedFollowingIterator::DTMDefaultBaseIterators$TypedFollowingIterator() {
}

$Class* DTMDefaultBaseIterators$TypedFollowingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedFollowingIterator, name, initialize, &_DTMDefaultBaseIterators$TypedFollowingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedFollowingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedFollowingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com