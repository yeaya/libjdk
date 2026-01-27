#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceAttributeIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef ROOTNODE

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
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

$FieldInfo _SAXImpl$NamespaceAttributeIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$NamespaceAttributeIterator, this$0)},
	{"_nsType", "I", nullptr, $PRIVATE | $FINAL, $field(SAXImpl$NamespaceAttributeIterator, _nsType)},
	{}
};

$MethodInfo _SAXImpl$NamespaceAttributeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)V", nullptr, $PUBLIC, $method(SAXImpl$NamespaceAttributeIterator, init$, void, $SAXImpl*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceAttributeIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceAttributeIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl$NamespaceAttributeIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceAttributeIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAXImpl$NamespaceAttributeIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceAttributeIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAXImpl$NamespaceAttributeIterator_FieldInfo_,
	_SAXImpl$NamespaceAttributeIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl$NamespaceAttributeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
};

$Object* allocate$SAXImpl$NamespaceAttributeIterator($Class* clazz) {
	return $of($alloc(SAXImpl$NamespaceAttributeIterator));
}

void SAXImpl$NamespaceAttributeIterator::init$($SAXImpl* this$0, int32_t nsType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nsType = nsType;
}

$DTMAxisIterator* SAXImpl$NamespaceAttributeIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		int32_t nsType = this->_nsType;
		this->_startNode = node;
		for (node = this->this$0->getFirstAttribute(node); node != $DTMAxisIterator::END; node = this->this$0->getNextAttribute(node)) {
			if (this->this$0->getNSType(node) == nsType) {
				break;
			}
		}
		this->_currentNode = node;
		return resetPosition();
	}
	return this;
}

int32_t SAXImpl$NamespaceAttributeIterator::next() {
	int32_t node = this->_currentNode;
	int32_t nsType = this->_nsType;
	int32_t nextNode = 0;
	if (node == $DTMAxisIterator::END) {
		return $DTMAxisIterator::END;
	}
	for (nextNode = this->this$0->getNextAttribute(node); nextNode != $DTMAxisIterator::END; nextNode = this->this$0->getNextAttribute(nextNode)) {
		if (this->this$0->getNSType(nextNode) == nsType) {
			break;
		}
	}
	this->_currentNode = nextNode;
	return returnNode(node);
}

SAXImpl$NamespaceAttributeIterator::SAXImpl$NamespaceAttributeIterator() {
}

$Class* SAXImpl$NamespaceAttributeIterator::load$($String* name, bool initialize) {
	$loadClass(SAXImpl$NamespaceAttributeIterator, name, initialize, &_SAXImpl$NamespaceAttributeIterator_ClassInfo_, allocate$SAXImpl$NamespaceAttributeIterator);
	return class$;
}

$Class* SAXImpl$NamespaceAttributeIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com