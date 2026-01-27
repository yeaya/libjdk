#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedPrecedingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef NTYPES

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$PrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$PrecedingIterator;
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

$FieldInfo _SAX2DTM2$TypedPrecedingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedPrecedingIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedPrecedingIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedPrecedingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedPrecedingIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedPrecedingIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedPrecedingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedPrecedingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedPrecedingIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator",
	nullptr,
	_SAX2DTM2$TypedPrecedingIterator_FieldInfo_,
	_SAX2DTM2$TypedPrecedingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedPrecedingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedPrecedingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedPrecedingIterator));
}

void SAX2DTM2$TypedPrecedingIterator::init$($SAX2DTM2* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$SAX2DTM2$PrecedingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t SAX2DTM2$TypedPrecedingIterator::next() {
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	if (nodeType >= $DTM::NTYPES) {
		while (true) {
			++node;
			if (this->_sp < 0) {
				node = -1;
				break;
			} else if (node >= $nc(this->_stack)->get(this->_sp)) {
				if (--this->_sp < 0) {
					node = -1;
					break;
				}
			} else if (this->this$0->_exptype2(node) == nodeType) {
				break;
			}
		}
	} else {
		int32_t expType = 0;
		while (true) {
			++node;
			if (this->_sp < 0) {
				node = -1;
				break;
			} else if (node >= $nc(this->_stack)->get(this->_sp)) {
				if (--this->_sp < 0) {
					node = -1;
					break;
				}
			} else {
				expType = this->this$0->_exptype2(node);
				if (expType < $DTM::NTYPES) {
					if (expType == nodeType) {
						break;
					}
				} else if ($nc($nc(this->this$0->m_extendedTypes)->get(expType))->getNodeType() == nodeType) {
					break;
				}
			}
		}
	}
	this->_currentNode = node;
	return (node == -1) ? -1 : returnNode(this->this$0->makeNodeHandle(node));
}

SAX2DTM2$TypedPrecedingIterator::SAX2DTM2$TypedPrecedingIterator() {
}

$Class* SAX2DTM2$TypedPrecedingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedPrecedingIterator, name, initialize, &_SAX2DTM2$TypedPrecedingIterator_ClassInfo_, allocate$SAX2DTM2$TypedPrecedingIterator);
	return class$;
}

$Class* SAX2DTM2$TypedPrecedingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com