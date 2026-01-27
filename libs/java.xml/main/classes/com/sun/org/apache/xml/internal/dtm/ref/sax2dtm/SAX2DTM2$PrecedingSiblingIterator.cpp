#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingSiblingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef NAMESPACE
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
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

$FieldInfo _SAX2DTM2$PrecedingSiblingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$PrecedingSiblingIterator, this$0)},
	{"_startNodeID", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingSiblingIterator, _startNodeID)},
	{}
};

$MethodInfo _SAX2DTM2$PrecedingSiblingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$PrecedingSiblingIterator, init$, void, $SAX2DTM2*)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingSiblingIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingSiblingIterator, next, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingSiblingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$PrecedingSiblingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$PrecedingSiblingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$PrecedingSiblingIterator_FieldInfo_,
	_SAX2DTM2$PrecedingSiblingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$PrecedingSiblingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$PrecedingSiblingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$PrecedingSiblingIterator));
}

void SAX2DTM2$PrecedingSiblingIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

bool SAX2DTM2$PrecedingSiblingIterator::isReverse() {
	return true;
}

$DTMAxisIterator* SAX2DTM2$PrecedingSiblingIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		node = (this->_startNodeID = this->this$0->makeNodeIdentity(node));
		if (node == -1) {
			this->_currentNode = node;
			return resetPosition();
		}
		int32_t type = this->this$0->_type2(node);
		if ($ExpandedNameTable::ATTRIBUTE == type || $ExpandedNameTable::NAMESPACE == type) {
			this->_currentNode = node;
		} else {
			this->_currentNode = this->this$0->_parent2(node);
			if (-1 != this->_currentNode) {
				this->_currentNode = this->this$0->_firstch2(this->_currentNode);
			} else {
				this->_currentNode = node;
			}
		}
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$PrecedingSiblingIterator::next() {
	if (this->_currentNode == this->_startNodeID || this->_currentNode == $DTM::NULL) {
		return -1;
	} else {
		int32_t node = this->_currentNode;
		this->_currentNode = this->this$0->_nextsib2(node);
		return returnNode(this->this$0->makeNodeHandle(node));
	}
}

SAX2DTM2$PrecedingSiblingIterator::SAX2DTM2$PrecedingSiblingIterator() {
}

$Class* SAX2DTM2$PrecedingSiblingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$PrecedingSiblingIterator, name, initialize, &_SAX2DTM2$PrecedingSiblingIterator_ClassInfo_, allocate$SAX2DTM2$PrecedingSiblingIterator);
	return class$;
}

$Class* SAX2DTM2$PrecedingSiblingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com