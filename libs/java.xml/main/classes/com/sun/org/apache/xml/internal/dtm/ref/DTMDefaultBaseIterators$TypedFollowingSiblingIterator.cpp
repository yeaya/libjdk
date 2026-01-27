#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedFollowingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$FollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingSiblingIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedFollowingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedFollowingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedFollowingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedFollowingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingSiblingIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedFollowingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingSiblingIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedFollowingSiblingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedFollowingSiblingIterator));
}

void DTMDefaultBaseIterators$TypedFollowingSiblingIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$FollowingSiblingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t DTMDefaultBaseIterators$TypedFollowingSiblingIterator::next() {
	if (this->_currentNode == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t node = this->_currentNode;
	int32_t eType = 0;
	int32_t nodeType = this->_nodeType;
	if (nodeType >= $DTM::NTYPES) {
		do {
			node = this->this$0->_nextsib(node);
		} while (node != $DTM::NULL && this->this$0->_exptype(node) != nodeType);
	} else {
		while ((node = this->this$0->_nextsib(node)) != $DTM::NULL) {
			eType = this->this$0->_exptype(node);
			if (eType < $DTM::NTYPES) {
				if (eType == nodeType) {
					break;
				}
			} else if ($nc(this->this$0->m_expandedNameTable)->getType(eType) == nodeType) {
				break;
			}
		}
	}
	this->_currentNode = node;
	return (this->_currentNode == $DTM::NULL) ? $DTM::NULL : returnNode(this->this$0->makeNodeHandle(this->_currentNode));
}

DTMDefaultBaseIterators$TypedFollowingSiblingIterator::DTMDefaultBaseIterators$TypedFollowingSiblingIterator() {
}

$Class* DTMDefaultBaseIterators$TypedFollowingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, name, initialize, &_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedFollowingSiblingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedFollowingSiblingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com