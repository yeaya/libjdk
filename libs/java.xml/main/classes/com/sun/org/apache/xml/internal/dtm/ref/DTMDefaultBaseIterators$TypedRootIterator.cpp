#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedRootIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$RootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef END
#undef NTYPES

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$RootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$RootIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedRootIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedRootIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedRootIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedRootIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedRootIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedRootIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedRootIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedRootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedRootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "RootIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedRootIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedRootIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedRootIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedRootIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedRootIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedRootIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedRootIterator));
}

void DTMDefaultBaseIterators$TypedRootIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$RootIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t DTMDefaultBaseIterators$TypedRootIterator::next() {
	if (this->_startNode == this->_currentNode) {
		return -1;
	}
	int32_t nodeType = this->_nodeType;
	int32_t node = this->_startNode;
	int32_t expType = this->this$0->getExpandedTypeID(node);
	this->_currentNode = node;
	if (nodeType >= $DTM::NTYPES) {
		if (nodeType == expType) {
			return returnNode(node);
		}
	} else if (expType < $DTM::NTYPES) {
		if (expType == nodeType) {
			return returnNode(node);
		}
	} else if ($nc(this->this$0->m_expandedNameTable)->getType(expType) == nodeType) {
		return returnNode(node);
	}
	return $DTMAxisIterator::END;
}

DTMDefaultBaseIterators$TypedRootIterator::DTMDefaultBaseIterators$TypedRootIterator() {
}

$Class* DTMDefaultBaseIterators$TypedRootIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedRootIterator, name, initialize, &_DTMDefaultBaseIterators$TypedRootIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedRootIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedRootIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com