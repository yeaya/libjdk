#include <com/sun/org/apache/xml/internal/dtm/ref/DTMChildIterNodeList.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
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

$FieldInfo _DTMChildIterNodeList_FieldInfo_[] = {
	{"m_firstChild", "I", nullptr, $PRIVATE, $field(DTMChildIterNodeList, m_firstChild)},
	{"m_parentDTM", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PRIVATE, $field(DTMChildIterNodeList, m_parentDTM)},
	{}
};

$MethodInfo _DTMChildIterNodeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DTMChildIterNodeList, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;I)V", nullptr, $PUBLIC, $method(DTMChildIterNodeList, init$, void, $DTM*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DTMChildIterNodeList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMChildIterNodeList, item, $Node*, int32_t)},
	{}
};

$ClassInfo _DTMChildIterNodeList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMChildIterNodeList",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase",
	nullptr,
	_DTMChildIterNodeList_FieldInfo_,
	_DTMChildIterNodeList_MethodInfo_
};

$Object* allocate$DTMChildIterNodeList($Class* clazz) {
	return $of($alloc(DTMChildIterNodeList));
}

void DTMChildIterNodeList::init$() {
	$DTMNodeListBase::init$();
}

void DTMChildIterNodeList::init$($DTM* parentDTM, int32_t parentHandle) {
	$DTMNodeListBase::init$();
	$set(this, m_parentDTM, parentDTM);
	this->m_firstChild = $nc(parentDTM)->getFirstChild(parentHandle);
}

$Node* DTMChildIterNodeList::item(int32_t index) {
	int32_t handle = this->m_firstChild;
	while (--index >= 0 && handle != $DTM::NULL) {
		handle = $nc(this->m_parentDTM)->getNextSibling(handle);
	}
	if (handle == $DTM::NULL) {
		return nullptr;
	}
	return $nc(this->m_parentDTM)->getNode(handle);
}

int32_t DTMChildIterNodeList::getLength() {
	int32_t count = 0;
	for (int32_t handle = this->m_firstChild; handle != $DTM::NULL; handle = $nc(this->m_parentDTM)->getNextSibling(handle)) {
		++count;
	}
	return count;
}

DTMChildIterNodeList::DTMChildIterNodeList() {
}

$Class* DTMChildIterNodeList::load$($String* name, bool initialize) {
	$loadClass(DTMChildIterNodeList, name, initialize, &_DTMChildIterNodeList_ClassInfo_, allocate$DTMChildIterNodeList);
	return class$;
}

$Class* DTMChildIterNodeList::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com