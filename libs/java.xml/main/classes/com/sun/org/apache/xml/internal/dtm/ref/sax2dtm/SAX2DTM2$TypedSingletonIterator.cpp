#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedSingletonIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$SingletonIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$SingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$SingletonIterator;
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

$FieldInfo _SAX2DTM2$TypedSingletonIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedSingletonIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedSingletonIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedSingletonIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedSingletonIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedSingletonIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedSingletonIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedSingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedSingletonIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "SingletonIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedSingletonIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedSingletonIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator",
	nullptr,
	_SAX2DTM2$TypedSingletonIterator_FieldInfo_,
	_SAX2DTM2$TypedSingletonIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedSingletonIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedSingletonIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedSingletonIterator));
}

void SAX2DTM2$TypedSingletonIterator::init$($SAX2DTM2* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$SingletonIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t SAX2DTM2$TypedSingletonIterator::next() {
	int32_t result = this->_currentNode;
	if (result == $DTMAxisIterator::END) {
		return $DTM::NULL;
	}
	this->_currentNode = $DTMAxisIterator::END;
	if (this->_nodeType >= $DTM::NTYPES) {
		if (this->this$0->_exptype2(this->this$0->makeNodeIdentity(result)) == this->_nodeType) {
			return returnNode(result);
		}
	} else if (this->this$0->_type2(this->this$0->makeNodeIdentity(result)) == this->_nodeType) {
		return returnNode(result);
	}
	return -1;
}

SAX2DTM2$TypedSingletonIterator::SAX2DTM2$TypedSingletonIterator() {
}

$Class* SAX2DTM2$TypedSingletonIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedSingletonIterator, name, initialize, &_SAX2DTM2$TypedSingletonIterator_ClassInfo_, allocate$SAX2DTM2$TypedSingletonIterator);
	return class$;
}

$Class* SAX2DTM2$TypedSingletonIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com