#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef NAMESPACE_NODE
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

$FieldInfo _SAX2DTM2$FollowingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$FollowingIterator, this$0)},
	{}
};

$MethodInfo _SAX2DTM2$FollowingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$FollowingIterator, init$, void, $SAX2DTM2*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$FollowingIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$FollowingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$FollowingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "FollowingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$FollowingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$FollowingIterator_FieldInfo_,
	_SAX2DTM2$FollowingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$FollowingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$FollowingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$FollowingIterator));
}

void SAX2DTM2$FollowingIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* SAX2DTM2$FollowingIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		node = this->this$0->makeNodeIdentity(node);
		int32_t first = 0;
		int32_t type = this->this$0->_type2(node);
		if (($DTM::ATTRIBUTE_NODE == type) || ($DTM::NAMESPACE_NODE == type)) {
			node = this->this$0->_parent2(node);
			first = this->this$0->_firstch2(node);
			if (-1 != first) {
				this->_currentNode = this->this$0->makeNodeHandle(first);
				return resetPosition();
			}
		}
		do {
			first = this->this$0->_nextsib2(node);
			if (-1 == first) {
				node = this->this$0->_parent2(node);
			}
		} while (-1 == first && -1 != node);
		this->_currentNode = this->this$0->makeNodeHandle(first);
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$FollowingIterator::next() {
	int32_t node = this->_currentNode;
	int32_t current = this->this$0->makeNodeIdentity(node);
	while (true) {
		++current;
		int32_t type = this->this$0->_type2(current);
		if (-1 == type) {
			this->_currentNode = -1;
			return returnNode(node);
		}
		if ((int16_t)2 == type || (int16_t)13 == type) {
			continue;
		}
		this->_currentNode = this->this$0->makeNodeHandle(current);
		return returnNode(node);
	}
}

SAX2DTM2$FollowingIterator::SAX2DTM2$FollowingIterator() {
}

$Class* SAX2DTM2$FollowingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$FollowingIterator, name, initialize, &_SAX2DTM2$FollowingIterator_ClassInfo_, allocate$SAX2DTM2$FollowingIterator);
	return class$;
}

$Class* SAX2DTM2$FollowingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com