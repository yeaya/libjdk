#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$ChildrenIterator.h>

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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

$FieldInfo _SAX2DTM2$ChildrenIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$ChildrenIterator, this$0)},
	{}
};

$MethodInfo _SAX2DTM2$ChildrenIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$ChildrenIterator, init$, void, $SAX2DTM2*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ChildrenIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ChildrenIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$ChildrenIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "ChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$ChildrenIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ChildrenIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$ChildrenIterator_FieldInfo_,
	_SAX2DTM2$ChildrenIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$ChildrenIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$ChildrenIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$ChildrenIterator));
}

void SAX2DTM2$ChildrenIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* SAX2DTM2$ChildrenIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = (node == $DTM::NULL) ? $DTM::NULL : this->this$0->_firstch2(this->this$0->makeNodeIdentity(node));
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$ChildrenIterator::next() {
	if (this->_currentNode != -1) {
		int32_t node = this->_currentNode;
		this->_currentNode = this->this$0->_nextsib2(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
	return $DTMAxisIterator::END;
}

SAX2DTM2$ChildrenIterator::SAX2DTM2$ChildrenIterator() {
}

$Class* SAX2DTM2$ChildrenIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$ChildrenIterator, name, initialize, &_SAX2DTM2$ChildrenIterator_ClassInfo_, allocate$SAX2DTM2$ChildrenIterator);
	return class$;
}

$Class* SAX2DTM2$ChildrenIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com