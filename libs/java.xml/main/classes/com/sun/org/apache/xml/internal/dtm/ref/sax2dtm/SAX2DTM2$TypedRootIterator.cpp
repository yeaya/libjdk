#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedRootIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$RootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef NTYPES

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$RootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$RootIterator;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
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

$FieldInfo _SAX2DTM2$TypedRootIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedRootIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedRootIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedRootIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedRootIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedRootIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedRootIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedRootIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedRootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "RootIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedRootIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedRootIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator",
	nullptr,
	_SAX2DTM2$TypedRootIterator_FieldInfo_,
	_SAX2DTM2$TypedRootIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedRootIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedRootIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedRootIterator));
}

void SAX2DTM2$TypedRootIterator::init$($SAX2DTM2* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$RootIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t SAX2DTM2$TypedRootIterator::next() {
	if (this->_startNode == this->_currentNode) {
		return -1;
	}
	int32_t node = this->_startNode;
	int32_t expType = this->this$0->_exptype2(this->this$0->makeNodeIdentity(node));
	this->_currentNode = node;
	if (this->_nodeType >= $DTM::NTYPES) {
		if (this->_nodeType == expType) {
			return returnNode(node);
		}
	} else if (expType < $DTM::NTYPES) {
		if (expType == this->_nodeType) {
			return returnNode(node);
		}
	} else if ($nc($nc(this->this$0->m_extendedTypes)->get(expType))->getNodeType() == this->_nodeType) {
		return returnNode(node);
	}
	return -1;
}

SAX2DTM2$TypedRootIterator::SAX2DTM2$TypedRootIterator() {
}

$Class* SAX2DTM2$TypedRootIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedRootIterator, name, initialize, &_SAX2DTM2$TypedRootIterator_ClassInfo_, allocate$SAX2DTM2$TypedRootIterator);
	return class$;
}

$Class* SAX2DTM2$TypedRootIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com