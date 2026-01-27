#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedPrecedingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef NTYPES
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$PrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$PrecedingSiblingIterator;
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

$FieldInfo _SAX2DTM2$TypedPrecedingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedPrecedingSiblingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedPrecedingSiblingIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedPrecedingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedPrecedingSiblingIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedPrecedingSiblingIterator, getLast, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedPrecedingSiblingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedPrecedingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedPrecedingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingSiblingIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedPrecedingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator",
	nullptr,
	_SAX2DTM2$TypedPrecedingSiblingIterator_FieldInfo_,
	_SAX2DTM2$TypedPrecedingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedPrecedingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedPrecedingSiblingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedPrecedingSiblingIterator));
}

void SAX2DTM2$TypedPrecedingSiblingIterator::init$($SAX2DTM2* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$SAX2DTM2$PrecedingSiblingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t SAX2DTM2$TypedPrecedingSiblingIterator::next() {
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	int32_t startNodeID = this->_startNodeID;
	if (nodeType != $DTM::ELEMENT_NODE) {
		while (node != -1 && node != startNodeID && this->this$0->_exptype2(node) != nodeType) {
			node = this->this$0->_nextsib2(node);
		}
	} else {
		while (node != -1 && node != startNodeID && this->this$0->_exptype2(node) < $DTM::NTYPES) {
			node = this->this$0->_nextsib2(node);
		}
	}
	if (node == $DTM::NULL || node == startNodeID) {
		this->_currentNode = -1;
		return -1;
	} else {
		this->_currentNode = this->this$0->_nextsib2(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

int32_t SAX2DTM2$TypedPrecedingSiblingIterator::getLast() {
	if (this->_last != -1) {
		return this->_last;
	}
	setMark();
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	int32_t startNodeID = this->_startNodeID;
	int32_t last = 0;
	if (nodeType != $DTM::ELEMENT_NODE) {
		while (node != -1 && node != startNodeID) {
			if (this->this$0->_exptype2(node) == nodeType) {
				++last;
			}
			node = this->this$0->_nextsib2(node);
		}
	} else {
		while (node != -1 && node != startNodeID) {
			if (this->this$0->_exptype2(node) >= $DTM::NTYPES) {
				++last;
			}
			node = this->this$0->_nextsib2(node);
		}
	}
	gotoMark();
	return (this->_last = last);
}

SAX2DTM2$TypedPrecedingSiblingIterator::SAX2DTM2$TypedPrecedingSiblingIterator() {
}

$Class* SAX2DTM2$TypedPrecedingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedPrecedingSiblingIterator, name, initialize, &_SAX2DTM2$TypedPrecedingSiblingIterator_ClassInfo_, allocate$SAX2DTM2$TypedPrecedingSiblingIterator);
	return class$;
}

$Class* SAX2DTM2$TypedPrecedingSiblingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com