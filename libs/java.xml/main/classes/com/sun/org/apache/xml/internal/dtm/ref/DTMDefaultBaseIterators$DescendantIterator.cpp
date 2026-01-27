#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef END
#undef ROOTNODE

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

$FieldInfo _DTMDefaultBaseIterators$DescendantIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$DescendantIterator, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$DescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$DescendantIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"isDescendant", "(I)Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseIterators$DescendantIterator, isDescendant, bool, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$DescendantIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$DescendantIterator, reset, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$DescendantIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$DescendantIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "DescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$DescendantIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$DescendantIterator_FieldInfo_,
	_DTMDefaultBaseIterators$DescendantIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$DescendantIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$DescendantIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$DescendantIterator));
}

void DTMDefaultBaseIterators$DescendantIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* DTMDefaultBaseIterators$DescendantIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		node = this->this$0->makeNodeIdentity(node);
		this->_startNode = node;
		if (this->_includeSelf) {
			--node;
		}
		this->_currentNode = node;
		return resetPosition();
	}
	return this;
}

bool DTMDefaultBaseIterators$DescendantIterator::isDescendant(int32_t identity) {
	return (this->this$0->_parent(identity) >= this->_startNode) || (this->_startNode == identity);
}

int32_t DTMDefaultBaseIterators$DescendantIterator::next() {
	if (this->_startNode == -1) {
		return -1;
	}
	if (this->_includeSelf && (this->_currentNode + 1) == this->_startNode) {
		return returnNode(this->this$0->makeNodeHandle(++this->_currentNode));
	}
	int32_t node = this->_currentNode;
	int32_t type = 0;
	do {
		++node;
		type = this->this$0->_type(node);
		if (-1 == type || !isDescendant(node)) {
			this->_currentNode = -1;
			return $DTMAxisIterator::END;
		}
	} while ((int16_t)2 == type || (int16_t)3 == type || (int16_t)13 == type);
	this->_currentNode = node;
	return returnNode(this->this$0->makeNodeHandle(node));
}

$DTMAxisIterator* DTMDefaultBaseIterators$DescendantIterator::reset() {
	bool temp = this->_isRestartable;
	this->_isRestartable = true;
	setStartNode(this->this$0->makeNodeHandle(this->_startNode));
	this->_isRestartable = temp;
	return this;
}

DTMDefaultBaseIterators$DescendantIterator::DTMDefaultBaseIterators$DescendantIterator() {
}

$Class* DTMDefaultBaseIterators$DescendantIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$DescendantIterator, name, initialize, &_DTMDefaultBaseIterators$DescendantIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$DescendantIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$DescendantIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com