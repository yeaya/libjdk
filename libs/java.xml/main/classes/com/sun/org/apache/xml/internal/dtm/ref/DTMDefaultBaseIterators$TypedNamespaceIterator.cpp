#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedNamespaceIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$NamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedNamespaceIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedNamespaceIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedNamespaceIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedNamespaceIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedNamespaceIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedNamespaceIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedNamespaceIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedNamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedNamespaceIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedNamespaceIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedNamespaceIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedNamespaceIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedNamespaceIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedNamespaceIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedNamespaceIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedNamespaceIterator));
}

void DTMDefaultBaseIterators$TypedNamespaceIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$NamespaceIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t DTMDefaultBaseIterators$TypedNamespaceIterator::next() {
	int32_t node = 0;
	for (node = this->_currentNode; node != $DTMAxisIterator::END; node = this->this$0->getNextNamespaceNode(this->_startNode, node, true)) {
		bool var$1 = this->this$0->getExpandedTypeID(node) == this->_nodeType;
		bool var$0 = var$1 || this->this$0->getNodeType(node) == this->_nodeType;
		if (var$0 || this->this$0->getNamespaceType(node) == this->_nodeType) {
			this->_currentNode = node;
			return returnNode(node);
		}
	}
	return (this->_currentNode = $DTMAxisIterator::END);
}

DTMDefaultBaseIterators$TypedNamespaceIterator::DTMDefaultBaseIterators$TypedNamespaceIterator() {
}

$Class* DTMDefaultBaseIterators$TypedNamespaceIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedNamespaceIterator, name, initialize, &_DTMDefaultBaseIterators$TypedNamespaceIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedNamespaceIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedNamespaceIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com