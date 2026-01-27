#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedAttributeIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
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

$FieldInfo _SAX2DTM2$TypedAttributeIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedAttributeIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedAttributeIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedAttributeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedAttributeIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedAttributeIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedAttributeIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedAttributeIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$TypedAttributeIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAttributeIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$TypedAttributeIterator_FieldInfo_,
	_SAX2DTM2$TypedAttributeIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedAttributeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedAttributeIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedAttributeIterator));
}

void SAX2DTM2$TypedAttributeIterator::init$($SAX2DTM2* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = nodeType;
}

$DTMAxisIterator* SAX2DTM2$TypedAttributeIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		this->_startNode = node;
		this->_currentNode = this->this$0->getTypedAttribute(node, this->_nodeType);
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$TypedAttributeIterator::next() {
	int32_t node = this->_currentNode;
	this->_currentNode = -1;
	return returnNode(node);
}

SAX2DTM2$TypedAttributeIterator::SAX2DTM2$TypedAttributeIterator() {
}

$Class* SAX2DTM2$TypedAttributeIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedAttributeIterator, name, initialize, &_SAX2DTM2$TypedAttributeIterator_ClassInfo_, allocate$SAX2DTM2$TypedAttributeIterator);
	return class$;
}

$Class* SAX2DTM2$TypedAttributeIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com