#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$RootIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
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

$FieldInfo _DTMDefaultBaseIterators$RootIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$RootIterator, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$RootIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$RootIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$RootIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$RootIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$RootIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "RootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$RootIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$RootIterator_FieldInfo_,
	_DTMDefaultBaseIterators$RootIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$RootIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$RootIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$RootIterator));
}

void DTMDefaultBaseIterators$RootIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* DTMDefaultBaseIterators$RootIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		this->_startNode = this->this$0->getDocumentRoot(node);
		this->_currentNode = -1;
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$RootIterator::next() {
	if (this->_startNode == this->_currentNode) {
		return -1;
	}
	this->_currentNode = this->_startNode;
	return returnNode(this->_startNode);
}

DTMDefaultBaseIterators$RootIterator::DTMDefaultBaseIterators$RootIterator() {
}

$Class* DTMDefaultBaseIterators$RootIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$RootIterator, name, initialize, &_DTMDefaultBaseIterators$RootIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$RootIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$RootIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com