#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedDescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef END
#undef NTYPES
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$DescendantIterator;
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

$FieldInfo _SAX2DTM2$TypedDescendantIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedDescendantIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedDescendantIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedDescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedDescendantIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedDescendantIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedDescendantIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedDescendantIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "DescendantIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedDescendantIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedDescendantIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator",
	nullptr,
	_SAX2DTM2$TypedDescendantIterator_FieldInfo_,
	_SAX2DTM2$TypedDescendantIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedDescendantIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedDescendantIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedDescendantIterator));
}

void SAX2DTM2$TypedDescendantIterator::init$($SAX2DTM2* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$SAX2DTM2$DescendantIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t SAX2DTM2$TypedDescendantIterator::next() {
	int32_t startNode = this->_startNode;
	if (this->_startNode == -1) {
		return -1;
	}
	int32_t node = this->_currentNode;
	int32_t expType = 0;
	int32_t nodeType = this->_nodeType;
	if (nodeType != $DTM::ELEMENT_NODE) {
		do {
			++node;
			expType = this->this$0->_exptype2(node);
			if (-1 == expType || this->this$0->_parent2(node) < startNode && startNode != node) {
				this->_currentNode = -1;
				return $DTMAxisIterator::END;
			}
		} while (expType != nodeType);
	} else if (startNode == $DTMDefaultBase::ROOTNODE) {
		do {
			++node;
			expType = this->this$0->_exptype2(node);
			if (-1 == expType) {
				this->_currentNode = -1;
				return $DTMAxisIterator::END;
			}
		} while (expType < $DTM::NTYPES || $nc($nc(this->this$0->m_extendedTypes)->get(expType))->getNodeType() != $DTM::ELEMENT_NODE);
	} else {
		do {
			++node;
			expType = this->this$0->_exptype2(node);
			if (-1 == expType || this->this$0->_parent2(node) < startNode && startNode != node) {
				this->_currentNode = -1;
				return $DTMAxisIterator::END;
			}
		} while (expType < $DTM::NTYPES || $nc($nc(this->this$0->m_extendedTypes)->get(expType))->getNodeType() != $DTM::ELEMENT_NODE);
	}
	this->_currentNode = node;
	return returnNode(this->this$0->makeNodeHandle(node));
}

SAX2DTM2$TypedDescendantIterator::SAX2DTM2$TypedDescendantIterator() {
}

$Class* SAX2DTM2$TypedDescendantIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedDescendantIterator, name, initialize, &_SAX2DTM2$TypedDescendantIterator_ClassInfo_, allocate$SAX2DTM2$TypedDescendantIterator);
	return class$;
}

$Class* SAX2DTM2$TypedDescendantIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com