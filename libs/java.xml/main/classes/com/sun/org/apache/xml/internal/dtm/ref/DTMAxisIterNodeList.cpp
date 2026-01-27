#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIterNodeList.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef END

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _DTMAxisIterNodeList_FieldInfo_[] = {
	{"m_dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PRIVATE, $field(DTMAxisIterNodeList, m_dtm)},
	{"m_iter", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(DTMAxisIterNodeList, m_iter)},
	{"m_cachedNodes", "Lcom/sun/org/apache/xml/internal/utils/IntVector;", nullptr, $PRIVATE, $field(DTMAxisIterNodeList, m_cachedNodes)},
	{"m_last", "I", nullptr, $PRIVATE, $field(DTMAxisIterNodeList, m_last)},
	{}
};

$MethodInfo _DTMAxisIterNodeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DTMAxisIterNodeList, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(DTMAxisIterNodeList, init$, void, $DTM*, $DTMAxisIterator*)},
	{"getDTMAxisIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMAxisIterNodeList, getDTMAxisIterator, $DTMAxisIterator*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DTMAxisIterNodeList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMAxisIterNodeList, item, $Node*, int32_t)},
	{}
};

$ClassInfo _DTMAxisIterNodeList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIterNodeList",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase",
	nullptr,
	_DTMAxisIterNodeList_FieldInfo_,
	_DTMAxisIterNodeList_MethodInfo_
};

$Object* allocate$DTMAxisIterNodeList($Class* clazz) {
	return $of($alloc(DTMAxisIterNodeList));
}

void DTMAxisIterNodeList::init$() {
	$DTMNodeListBase::init$();
	this->m_last = -1;
}

void DTMAxisIterNodeList::init$($DTM* dtm, $DTMAxisIterator* dtmAxisIterator) {
	$DTMNodeListBase::init$();
	this->m_last = -1;
	if (dtmAxisIterator == nullptr) {
		this->m_last = 0;
	} else {
		$set(this, m_cachedNodes, $new($IntVector));
		$set(this, m_dtm, dtm);
	}
	$set(this, m_iter, dtmAxisIterator);
}

$DTMAxisIterator* DTMAxisIterNodeList::getDTMAxisIterator() {
	return this->m_iter;
}

$Node* DTMAxisIterNodeList::item(int32_t index) {
	if (this->m_iter != nullptr) {
		int32_t node = 0;
		int32_t count = $nc(this->m_cachedNodes)->size();
		if (count > index) {
			node = $nc(this->m_cachedNodes)->elementAt(index);
			return $nc(this->m_dtm)->getNode(node);
		} else if (this->m_last == -1) {
			while (count <= index && ((node = $nc(this->m_iter)->next()) != $DTMAxisIterator::END)) {
				$nc(this->m_cachedNodes)->addElement(node);
				++count;
			}
			if (node == $DTMAxisIterator::END) {
				this->m_last = count;
			} else {
				return $nc(this->m_dtm)->getNode(node);
			}
		}
	}
	return nullptr;
}

int32_t DTMAxisIterNodeList::getLength() {
	if (this->m_last == -1) {
		int32_t node = 0;
		while ((node = $nc(this->m_iter)->next()) != $DTMAxisIterator::END) {
			$nc(this->m_cachedNodes)->addElement(node);
		}
		this->m_last = $nc(this->m_cachedNodes)->size();
	}
	return this->m_last;
}

DTMAxisIterNodeList::DTMAxisIterNodeList() {
}

$Class* DTMAxisIterNodeList::load$($String* name, bool initialize) {
	$loadClass(DTMAxisIterNodeList, name, initialize, &_DTMAxisIterNodeList_ClassInfo_, allocate$DTMAxisIterNodeList);
	return class$;
}

$Class* DTMAxisIterNodeList::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com