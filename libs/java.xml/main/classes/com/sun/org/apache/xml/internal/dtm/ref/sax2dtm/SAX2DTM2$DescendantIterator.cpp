#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$DescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef ROOTNODE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
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

$FieldInfo _SAX2DTM2$DescendantIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$DescendantIterator, this$0)},
	{}
};

$MethodInfo _SAX2DTM2$DescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$DescendantIterator, init$, void, $SAX2DTM2*)},
	{"isDescendant", "(I)Z", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2$DescendantIterator, isDescendant, bool, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$DescendantIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$DescendantIterator, reset, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$DescendantIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$DescendantIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "DescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$DescendantIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$DescendantIterator_FieldInfo_,
	_SAX2DTM2$DescendantIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$DescendantIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$DescendantIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$DescendantIterator));
}

void SAX2DTM2$DescendantIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
}

$DTMAxisIterator* SAX2DTM2$DescendantIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		node = this->this$0->makeNodeIdentity(node);
		this->_startNode = node;
		if (this->_includeSelf) {
			--node;
		}
		this->_currentNode = node;
		return resetPosition();
	}
	return this;
}

bool SAX2DTM2$DescendantIterator::isDescendant(int32_t identity) {
	return (this->this$0->_parent2(identity) >= this->_startNode) || (this->_startNode == identity);
}

int32_t SAX2DTM2$DescendantIterator::next() {
	int32_t startNode = this->_startNode;
	if (startNode == -1) {
		return -1;
	}
	if (this->_includeSelf && (this->_currentNode + 1) == startNode) {
		return returnNode(this->this$0->makeNodeHandle(++this->_currentNode));
	}
	int32_t node = this->_currentNode;
	int32_t type = 0;
	if (startNode == 0) {
		int32_t eType = 0;
		do {
			++node;
			eType = this->this$0->_exptype2(node);
			if (-1 == eType) {
				this->_currentNode = -1;
				return $DTMAxisIterator::END;
			}
		} while (eType == (int16_t)3 || (type = $nc($nc(this->this$0->m_extendedTypes)->get(eType))->getNodeType()) == (int16_t)2 || type == (int16_t)13);
	} else {
		do {
			++node;
			type = this->this$0->_type2(node);
			if (-1 == type || !isDescendant(node)) {
				this->_currentNode = -1;
				return $DTMAxisIterator::END;
			}
		} while ((int16_t)2 == type || (int16_t)3 == type || (int16_t)13 == type);
	}
	this->_currentNode = node;
	return returnNode(this->this$0->makeNodeHandle(node));
}

$DTMAxisIterator* SAX2DTM2$DescendantIterator::reset() {
	bool temp = this->_isRestartable;
	this->_isRestartable = true;
	setStartNode(this->this$0->makeNodeHandle(this->_startNode));
	this->_isRestartable = temp;
	return this;
}

SAX2DTM2$DescendantIterator::SAX2DTM2$DescendantIterator() {
}

$Class* SAX2DTM2$DescendantIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$DescendantIterator, name, initialize, &_SAX2DTM2$DescendantIterator_ClassInfo_, allocate$SAX2DTM2$DescendantIterator);
	return class$;
}

$Class* SAX2DTM2$DescendantIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com