#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeList.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <java/lang/CloneNotSupportedException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMNodeList_FieldInfo_[] = {
	{"m_iter", "Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PRIVATE, $field(DTMNodeList, m_iter)},
	{}
};

$MethodInfo _DTMNodeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DTMNodeList, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $method(DTMNodeList, init$, void, $DTMIterator*)},
	{"getDTMIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(DTMNodeList, getDTMIterator, $DTMIterator*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DTMNodeList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNodeList, item, $Node*, int32_t)},
	{}
};

$ClassInfo _DTMNodeList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeList",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase",
	nullptr,
	_DTMNodeList_FieldInfo_,
	_DTMNodeList_MethodInfo_
};

$Object* allocate$DTMNodeList($Class* clazz) {
	return $of($alloc(DTMNodeList));
}

void DTMNodeList::init$() {
	$DTMNodeListBase::init$();
}

void DTMNodeList::init$($DTMIterator* dtmIterator) {
	$DTMNodeListBase::init$();
	if (dtmIterator != nullptr) {
		int32_t pos = dtmIterator->getCurrentPos();
		try {
			$set(this, m_iter, dtmIterator->cloneWithReset());
		} catch ($CloneNotSupportedException& cnse) {
			$set(this, m_iter, dtmIterator);
		}
		$nc(this->m_iter)->setShouldCacheNodes(true);
		$nc(this->m_iter)->runTo(-1);
		$nc(this->m_iter)->setCurrentPos(pos);
	}
}

$DTMIterator* DTMNodeList::getDTMIterator() {
	return this->m_iter;
}

$Node* DTMNodeList::item(int32_t index) {
	if (this->m_iter != nullptr) {
		int32_t handle = $nc(this->m_iter)->item(index);
		if (handle == $DTM::NULL) {
			return nullptr;
		}
		return $nc($($nc(this->m_iter)->getDTM(handle)))->getNode(handle);
	} else {
		return nullptr;
	}
}

int32_t DTMNodeList::getLength() {
	return (this->m_iter != nullptr) ? $nc(this->m_iter)->getLength() : 0;
}

DTMNodeList::DTMNodeList() {
}

$Class* DTMNodeList::load$($String* name, bool initialize) {
	$loadClass(DTMNodeList, name, initialize, &_DTMNodeList_ClassInfo_, allocate$DTMNodeList);
	return class$;
}

$Class* DTMNodeList::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com