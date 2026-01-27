#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceAttributeIterator.h>

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

$FieldInfo _DTMDefaultBaseIterators$NamespaceAttributeIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$NamespaceAttributeIterator, this$0)},
	{"_nsType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$NamespaceAttributeIterator, _nsType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$NamespaceAttributeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$NamespaceAttributeIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceAttributeIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceAttributeIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$NamespaceAttributeIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceAttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$NamespaceAttributeIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceAttributeIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$NamespaceAttributeIterator_FieldInfo_,
	_DTMDefaultBaseIterators$NamespaceAttributeIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$NamespaceAttributeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$NamespaceAttributeIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$NamespaceAttributeIterator));
}

void DTMDefaultBaseIterators$NamespaceAttributeIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nsType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nsType = nsType;
}

$DTMAxisIterator* DTMDefaultBaseIterators$NamespaceAttributeIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = this->this$0->getFirstNamespaceNode(node, false);
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$NamespaceAttributeIterator::next() {
	int32_t node = this->_currentNode;
	if ($DTM::NULL != node) {
		this->_currentNode = this->this$0->getNextNamespaceNode(this->_startNode, node, false);
	}
	return returnNode(node);
}

DTMDefaultBaseIterators$NamespaceAttributeIterator::DTMDefaultBaseIterators$NamespaceAttributeIterator() {
}

$Class* DTMDefaultBaseIterators$NamespaceAttributeIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$NamespaceAttributeIterator, name, initialize, &_DTMDefaultBaseIterators$NamespaceAttributeIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$NamespaceAttributeIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$NamespaceAttributeIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com