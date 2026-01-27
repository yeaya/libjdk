#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedPrecedingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$PrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$PrecedingSiblingIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedPrecedingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingSiblingIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedPrecedingSiblingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator));
}

void DTMDefaultBaseIterators$TypedPrecedingSiblingIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$PrecedingSiblingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t DTMDefaultBaseIterators$TypedPrecedingSiblingIterator::next() {
	int32_t node = this->_currentNode;
	int32_t expType = 0;
	int32_t nodeType = this->_nodeType;
	int32_t startID = this->_startNodeID;
	if (nodeType >= $DTM::NTYPES) {
		while (node != -1 && node != startID && this->this$0->_exptype(node) != nodeType) {
			node = this->this$0->_nextsib(node);
		}
	} else {
		while (node != -1 && node != startID) {
			expType = this->this$0->_exptype(node);
			if (expType < $DTM::NTYPES) {
				if (expType == nodeType) {
					break;
				}
			} else if ($nc(this->this$0->m_expandedNameTable)->getType(expType) == nodeType) {
				break;
			}
			node = this->this$0->_nextsib(node);
		}
	}
	if (node == $DTM::NULL || node == this->_startNodeID) {
		this->_currentNode = -1;
		return -1;
	} else {
		this->_currentNode = this->this$0->_nextsib(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

DTMDefaultBaseIterators$TypedPrecedingSiblingIterator::DTMDefaultBaseIterators$TypedPrecedingSiblingIterator() {
}

$Class* DTMDefaultBaseIterators$TypedPrecedingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, name, initialize, &_DTMDefaultBaseIterators$TypedPrecedingSiblingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedPrecedingSiblingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedPrecedingSiblingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com