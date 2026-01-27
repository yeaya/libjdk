#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$ParentIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef END
#undef NTYPES
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
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

$FieldInfo _DTMDefaultBaseIterators$ParentIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$ParentIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE, $field(DTMDefaultBaseIterators$ParentIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$ParentIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$ParentIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$ParentIterator, next, int32_t)},
	{"setNodeType", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$ParentIterator, setNodeType, $DTMAxisIterator*, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$ParentIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$ParentIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ParentIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "ParentIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$ParentIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ParentIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$ParentIterator_FieldInfo_,
	_DTMDefaultBaseIterators$ParentIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$ParentIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$ParentIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$ParentIterator));
}

void DTMDefaultBaseIterators$ParentIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = -1;
}

$DTMAxisIterator* DTMDefaultBaseIterators$ParentIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = this->this$0->getParent(node);
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* DTMDefaultBaseIterators$ParentIterator::setNodeType(int32_t type) {
	this->_nodeType = type;
	return this;
}

int32_t DTMDefaultBaseIterators$ParentIterator::next() {
	int32_t result = this->_currentNode;
	if (this->_nodeType >= $DTM::NTYPES) {
		if (this->_nodeType != this->this$0->getExpandedTypeID(this->_currentNode)) {
			result = $DTMAxisIterator::END;
		}
	} else if (this->_nodeType != -1) {
		if (this->_nodeType != this->this$0->getNodeType(this->_currentNode)) {
			result = $DTMAxisIterator::END;
		}
	}
	this->_currentNode = $DTMAxisIterator::END;
	return returnNode(result);
}

DTMDefaultBaseIterators$ParentIterator::DTMDefaultBaseIterators$ParentIterator() {
}

$Class* DTMDefaultBaseIterators$ParentIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$ParentIterator, name, initialize, &_DTMDefaultBaseIterators$ParentIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$ParentIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$ParentIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com