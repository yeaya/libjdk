#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$ParentIterator.h>

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
#undef NTYPES
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

$FieldInfo _SAX2DTM2$ParentIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$ParentIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE, $field(SAX2DTM2$ParentIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$ParentIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$ParentIterator, init$, void, $SAX2DTM2*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ParentIterator, next, int32_t)},
	{"setNodeType", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $method(SAX2DTM2$ParentIterator, setNodeType, $DTMAxisIterator*, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ParentIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$ParentIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "ParentIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$ParentIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$ParentIterator_FieldInfo_,
	_SAX2DTM2$ParentIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$ParentIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$ParentIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$ParentIterator));
}

void SAX2DTM2$ParentIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = $DTM::NULL;
}

$DTMAxisIterator* SAX2DTM2$ParentIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		if (node != $DTM::NULL) {
			this->_currentNode = this->this$0->_parent2(this->this$0->makeNodeIdentity(node));
		} else {
			this->_currentNode = $DTM::NULL;
		}
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* SAX2DTM2$ParentIterator::setNodeType(int32_t type) {
	this->_nodeType = type;
	return this;
}

int32_t SAX2DTM2$ParentIterator::next() {
	int32_t result = this->_currentNode;
	if (result == $DTMAxisIterator::END) {
		return $DTM::NULL;
	}
	if (this->_nodeType == -1) {
		this->_currentNode = $DTMAxisIterator::END;
		return returnNode(this->this$0->makeNodeHandle(result));
	} else if (this->_nodeType >= $DTM::NTYPES) {
		if (this->_nodeType == this->this$0->_exptype2(result)) {
			this->_currentNode = $DTMAxisIterator::END;
			return returnNode(this->this$0->makeNodeHandle(result));
		}
	} else if (this->_nodeType == this->this$0->_type2(result)) {
		this->_currentNode = $DTMAxisIterator::END;
		return returnNode(this->this$0->makeNodeHandle(result));
	}
	return $DTM::NULL;
}

SAX2DTM2$ParentIterator::SAX2DTM2$ParentIterator() {
}

$Class* SAX2DTM2$ParentIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$ParentIterator, name, initialize, &_SAX2DTM2$ParentIterator_ClassInfo_, allocate$SAX2DTM2$ParentIterator);
	return class$;
}

$Class* SAX2DTM2$ParentIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com