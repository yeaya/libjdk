#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef NULL
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

$FieldInfo _DTMDefaultBaseIterators$NamespaceIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$NamespaceIterator, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$NamespaceIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$NamespaceIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$NamespaceIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$NamespaceIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$NamespaceIterator_FieldInfo_,
	_DTMDefaultBaseIterators$NamespaceIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$NamespaceIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$NamespaceIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$NamespaceIterator));
}

void DTMDefaultBaseIterators$NamespaceIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* DTMDefaultBaseIterators$NamespaceIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = this->this$0->getFirstNamespaceNode(node, true);
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$NamespaceIterator::next() {
	int32_t node = this->_currentNode;
	if ($DTM::NULL != node) {
		this->_currentNode = this->this$0->getNextNamespaceNode(this->_startNode, node, true);
	}
	return returnNode(node);
}

DTMDefaultBaseIterators$NamespaceIterator::DTMDefaultBaseIterators$NamespaceIterator() {
}

$Class* DTMDefaultBaseIterators$NamespaceIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$NamespaceIterator, name, initialize, &_DTMDefaultBaseIterators$NamespaceIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$NamespaceIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$NamespaceIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com