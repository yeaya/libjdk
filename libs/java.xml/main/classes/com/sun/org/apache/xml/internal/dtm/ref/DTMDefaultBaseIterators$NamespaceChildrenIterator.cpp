#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceChildrenIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef END
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
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

$FieldInfo _DTMDefaultBaseIterators$NamespaceChildrenIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$NamespaceChildrenIterator, this$0)},
	{"_nsType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$NamespaceChildrenIterator, _nsType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$NamespaceChildrenIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$NamespaceChildrenIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceChildrenIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NamespaceChildrenIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$NamespaceChildrenIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$NamespaceChildrenIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceChildrenIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$NamespaceChildrenIterator_FieldInfo_,
	_DTMDefaultBaseIterators$NamespaceChildrenIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$NamespaceChildrenIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$NamespaceChildrenIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$NamespaceChildrenIterator));
}

void DTMDefaultBaseIterators$NamespaceChildrenIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nsType = type;
}

$DTMAxisIterator* DTMDefaultBaseIterators$NamespaceChildrenIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = (node == $DTM::NULL) ? $DTM::NULL : -2;
		return resetPosition();
	}
	return this;
}

int32_t DTMDefaultBaseIterators$NamespaceChildrenIterator::next() {
	if (this->_currentNode != $DTM::NULL) {
		for (int32_t node = (-2 == this->_currentNode) ? this->this$0->_firstch(this->this$0->makeNodeIdentity(this->_startNode)) : this->this$0->_nextsib(this->_currentNode); node != $DTMAxisIterator::END; node = this->this$0->_nextsib(node)) {
			if ($nc(this->this$0->m_expandedNameTable)->getNamespaceID(this->this$0->_exptype(node)) == this->_nsType) {
				this->_currentNode = node;
				return returnNode(node);
			}
		}
	}
	return $DTMAxisIterator::END;
}

DTMDefaultBaseIterators$NamespaceChildrenIterator::DTMDefaultBaseIterators$NamespaceChildrenIterator() {
}

$Class* DTMDefaultBaseIterators$NamespaceChildrenIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$NamespaceChildrenIterator, name, initialize, &_DTMDefaultBaseIterators$NamespaceChildrenIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$NamespaceChildrenIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$NamespaceChildrenIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com