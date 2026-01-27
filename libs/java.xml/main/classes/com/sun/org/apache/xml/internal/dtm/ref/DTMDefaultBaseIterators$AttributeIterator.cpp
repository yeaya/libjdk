#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$AttributeIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

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

$FieldInfo _DTMDefaultBaseIterators$AttributeIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$AttributeIterator, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$AttributeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$AttributeIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AttributeIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$AttributeIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$AttributeIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "AttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$AttributeIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AttributeIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$AttributeIterator_FieldInfo_,
	_DTMDefaultBaseIterators$AttributeIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$AttributeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$AttributeIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$AttributeIterator));
}

void DTMDefaultBaseIterators$AttributeIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* DTMDefaultBaseIterators$AttributeIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = this->this$0->getFirstAttributeIdentity(this->this$0->makeNodeIdentity(node));
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$AttributeIterator::next() {
	int32_t node = this->_currentNode;
	if (node != -1) {
		this->_currentNode = this->this$0->getNextAttributeIdentity(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
	return -1;
}

DTMDefaultBaseIterators$AttributeIterator::DTMDefaultBaseIterators$AttributeIterator() {
}

$Class* DTMDefaultBaseIterators$AttributeIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$AttributeIterator, name, initialize, &_DTMDefaultBaseIterators$AttributeIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$AttributeIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$AttributeIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com