#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceWildcardIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef ELEMENT_NODE
#undef END
#undef ITERATOR_CLONE_ERR
#undef NAMESPACE

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
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

$FieldInfo _SAXImpl$NamespaceWildcardIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$NamespaceWildcardIterator, this$0)},
	{"m_nsType", "I", nullptr, $PROTECTED, $field(SAXImpl$NamespaceWildcardIterator, m_nsType)},
	{"m_baseIterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED, $field(SAXImpl$NamespaceWildcardIterator, m_baseIterator)},
	{}
};

$MethodInfo _SAXImpl$NamespaceWildcardIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;II)V", nullptr, $PUBLIC, $method(SAXImpl$NamespaceWildcardIterator, init$, void, $SAXImpl*, int32_t, int32_t)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, next, int32_t)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl$NamespaceWildcardIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl$NamespaceWildcardIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceWildcardIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceWildcardIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAXImpl$NamespaceWildcardIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceWildcardIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAXImpl$NamespaceWildcardIterator_FieldInfo_,
	_SAXImpl$NamespaceWildcardIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl$NamespaceWildcardIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
};

$Object* allocate$SAXImpl$NamespaceWildcardIterator($Class* clazz) {
	return $of($alloc(SAXImpl$NamespaceWildcardIterator));
}

void SAXImpl$NamespaceWildcardIterator::init$($SAXImpl* this$0, int32_t axis, int32_t nsType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->m_nsType = nsType;
	switch (axis) {
	case $Axis::ATTRIBUTE:
		{
			{
				$set(this, m_baseIterator, this$0->getAxisIterator(axis));
				break;
			}
		}
	case $Axis::NAMESPACE:
		{
			{
				$set(this, m_baseIterator, this$0->getAxisIterator(axis));
				break;
			}
		}
	default:
		{
			{
				$set(this, m_baseIterator, this$0->getTypedAxisIterator(axis, $DTM::ELEMENT_NODE));
			}
		}
	}
}

$DTMAxisIterator* SAXImpl$NamespaceWildcardIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		this->_startNode = node;
		$nc(this->m_baseIterator)->setStartNode(node);
		resetPosition();
	}
	return this;
}

int32_t SAXImpl$NamespaceWildcardIterator::next() {
	int32_t node = 0;
	while ((node = $nc(this->m_baseIterator)->next()) != $DTMAxisIterator::END) {
		if (this->this$0->getNSType(node) == this->m_nsType) {
			return returnNode(node);
		}
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* SAXImpl$NamespaceWildcardIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DTMAxisIterator, nestedClone, $nc(this->m_baseIterator)->cloneIterator());
		$var(SAXImpl$NamespaceWildcardIterator, clone, $cast(SAXImpl$NamespaceWildcardIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
		$set($nc(clone), m_baseIterator, nestedClone);
		clone->m_nsType = this->m_nsType;
		clone->_isRestartable = false;
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

bool SAXImpl$NamespaceWildcardIterator::isReverse() {
	return $nc(this->m_baseIterator)->isReverse();
}

void SAXImpl$NamespaceWildcardIterator::setMark() {
	$nc(this->m_baseIterator)->setMark();
}

void SAXImpl$NamespaceWildcardIterator::gotoMark() {
	$nc(this->m_baseIterator)->gotoMark();
}

SAXImpl$NamespaceWildcardIterator::SAXImpl$NamespaceWildcardIterator() {
}

$Class* SAXImpl$NamespaceWildcardIterator::load$($String* name, bool initialize) {
	$loadClass(SAXImpl$NamespaceWildcardIterator, name, initialize, &_SAXImpl$NamespaceWildcardIterator_ClassInfo_, allocate$SAXImpl$NamespaceWildcardIterator);
	return class$;
}

$Class* SAXImpl$NamespaceWildcardIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com