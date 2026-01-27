#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$FollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingIterator;
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

$FieldInfo _SAX2DTM2$TypedFollowingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedFollowingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedFollowingIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedFollowingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedFollowingIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedFollowingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedFollowingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedFollowingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "FollowingIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedFollowingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator",
	nullptr,
	_SAX2DTM2$TypedFollowingIterator_FieldInfo_,
	_SAX2DTM2$TypedFollowingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedFollowingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedFollowingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedFollowingIterator));
}

void SAX2DTM2$TypedFollowingIterator::init$($SAX2DTM2* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$SAX2DTM2$FollowingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t SAX2DTM2$TypedFollowingIterator::next() {
	int32_t current = 0;
	int32_t node = 0;
	int32_t type = 0;
	int32_t nodeType = this->_nodeType;
	int32_t currentNodeID = this->this$0->makeNodeIdentity(this->_currentNode);
	if (nodeType >= $DTM::NTYPES) {
		do {
			node = currentNodeID;
			current = node;
			do {
				++current;
				type = this->this$0->_type2(current);
			} while (type != -1 && ((int16_t)2 == type || (int16_t)13 == type));
			currentNodeID = (type != -1) ? current : -1;
		} while (node != $DTM::NULL && this->this$0->_exptype2(node) != nodeType);
	} else {
		bool var$0 = false;
		do {
			node = currentNodeID;
			current = node;
			do {
				++current;
				type = this->this$0->_type2(current);
			} while (type != -1 && ((int16_t)2 == type || (int16_t)13 == type));
			currentNodeID = (type != -1) ? current : -1;
			var$0 = node != $DTM::NULL;
			if (var$0) {
				bool var$1 = this->this$0->_exptype2(node) != nodeType;
				var$0 = (var$1 && this->this$0->_type2(node) != nodeType);
			}
		} while (var$0);
	}
	this->_currentNode = this->this$0->makeNodeHandle(currentNodeID);
	return (node == $DTM::NULL ? $DTM::NULL : returnNode(this->this$0->makeNodeHandle(node)));
}

SAX2DTM2$TypedFollowingIterator::SAX2DTM2$TypedFollowingIterator() {
}

$Class* SAX2DTM2$TypedFollowingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedFollowingIterator, name, initialize, &_SAX2DTM2$TypedFollowingIterator_ClassInfo_, allocate$SAX2DTM2$TypedFollowingIterator);
	return class$;
}

$Class* SAX2DTM2$TypedFollowingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com