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
			var$0 = var$1 && this->this$0->getNodeType(node) != this->_nodeType;
		}
	} while (var$0);
	return (node == $DTM::NULL ? $DTM::NULL : returnNode(node));
}

DTMDefaultBaseIterators$TypedFollowingIterator::DTMDefaultBaseIterators$TypedFollowingIterator() {
}

$Class* DTMDefaultBaseIterators$TypedFollowingIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedFollowingIterator, this$0)},
		{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedFollowingIterator, _nodeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedFollowingIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedFollowingIterator, next, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedFollowingIterator", $PUBLIC | $FINAL},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingIterator", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
	};
	$loadClass(DTMDefaultBaseIterators$TypedFollowingIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseIterators$TypedFollowingIterator);
	});
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