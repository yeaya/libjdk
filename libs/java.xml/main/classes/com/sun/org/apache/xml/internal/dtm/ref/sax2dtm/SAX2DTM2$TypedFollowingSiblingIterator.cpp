#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$FollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingSiblingIterator;
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

$FieldInfo _SAX2DTM2$TypedFollowingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedFollowingSiblingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedFollowingSiblingIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedFollowingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedFollowingSiblingIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedFollowingSiblingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedFollowingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedFollowingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "FollowingSiblingIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedFollowingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator",
	nullptr,
	_SAX2DTM2$TypedFollowingSiblingIterator_FieldInfo_,
	_SAX2DTM2$TypedFollowingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedFollowingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedFollowingSiblingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedFollowingSiblingIterator));
}

void SAX2DTM2$TypedFollowingSiblingIterator::init$($SAX2DTM2* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$SAX2DTM2$FollowingSiblingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t SAX2DTM2$TypedFollowingSiblingIterator::next() {
	if (this->_currentNode == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	if (nodeType != $DTM::ELEMENT_NODE) {
		while (true) {
			bool var$0 = (node = this->this$0->_nextsib2(node)) != $DTM::NULL;
			if (!(var$0 && this->this$0->_exptype2(node) != nodeType)) {
				break;
			}
			{
			}
		}
	} else {
		while (true) {
			bool var$1 = (node = this->this$0->_nextsib2(node)) != $DTM::NULL;
			if (!(var$1 && this->this$0->_exptype2(node) < $DTM::NTYPES)) {
				break;
			}
			{
			}
		}
	}
	this->_currentNode = node;
	return (node == $DTM::NULL) ? $DTM::NULL : returnNode(this->this$0->makeNodeHandle(node));
}

SAX2DTM2$TypedFollowingSiblingIterator::SAX2DTM2$TypedFollowingSiblingIterator() {
}

$Class* SAX2DTM2$TypedFollowingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedFollowingSiblingIterator, name, initialize, &_SAX2DTM2$TypedFollowingSiblingIterator_ClassInfo_, allocate$SAX2DTM2$TypedFollowingSiblingIterator);
	return class$;
}

$Class* SAX2DTM2$TypedFollowingSiblingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com