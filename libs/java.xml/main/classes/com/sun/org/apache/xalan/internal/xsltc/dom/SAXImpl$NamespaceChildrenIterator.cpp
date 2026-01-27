#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceChildrenIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef NULL
#undef ROOTNODE

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _SAXImpl$NamespaceChildrenIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$NamespaceChildrenIterator, this$0)},
	{"_nsType", "I", nullptr, $PRIVATE | $FINAL, $field(SAXImpl$NamespaceChildrenIterator, _nsType)},
	{}
};

$MethodInfo _SAXImpl$NamespaceChildrenIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)V", nullptr, $PUBLIC, $method(SAXImpl$NamespaceChildrenIterator, init$, void, $SAXImpl*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceChildrenIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceChildrenIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl$NamespaceChildrenIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceChildrenIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAXImpl$NamespaceChildrenIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceChildrenIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAXImpl$NamespaceChildrenIterator_FieldInfo_,
	_SAXImpl$NamespaceChildrenIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl$NamespaceChildrenIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
};

$Object* allocate$SAXImpl$NamespaceChildrenIterator($Class* clazz) {
	return $of($alloc(SAXImpl$NamespaceChildrenIterator));
}

void SAXImpl$NamespaceChildrenIterator::init$($SAXImpl* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nsType = type;
}

$DTMAxisIterator* SAXImpl$NamespaceChildrenIterator::setStartNode(int32_t node) {
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

int32_t SAXImpl$NamespaceChildrenIterator::next() {
	if (this->_currentNode != $DTM::NULL) {
		for (int32_t node = (-2 == this->_currentNode) ? $SAXImpl::access$200(this->this$0, this->this$0->makeNodeIdentity(this->_startNode)) : $SAXImpl::access$300(this->this$0, this->_currentNode); node != $DTMAxisIterator::END; node = $SAXImpl::access$400(this->this$0, node)) {
			int32_t nodeHandle = this->this$0->makeNodeHandle(node);
			if (this->this$0->getNSType(nodeHandle) == this->_nsType) {
				this->_currentNode = node;
				return returnNode(nodeHandle);
			}
		}
	}
	return $DTMAxisIterator::END;
}

SAXImpl$NamespaceChildrenIterator::SAXImpl$NamespaceChildrenIterator() {
}

$Class* SAXImpl$NamespaceChildrenIterator::load$($String* name, bool initialize) {
	$loadClass(SAXImpl$NamespaceChildrenIterator, name, initialize, &_SAXImpl$NamespaceChildrenIterator_ClassInfo_, allocate$SAXImpl$NamespaceChildrenIterator);
	return class$;
}

$Class* SAXImpl$NamespaceChildrenIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com