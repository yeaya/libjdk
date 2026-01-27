#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$ChildTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
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

$FieldInfo _DTMDefaultBaseTraversers$ChildTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$ChildTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$ChildTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$ChildTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ChildTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ChildTraverser, first, int32_t, int32_t, int32_t)},
	{"getNextIndexed", "(III)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$ChildTraverser, getNextIndexed, int32_t, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ChildTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ChildTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$ChildTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ChildTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "ChildTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$ChildTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ChildTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$ChildTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$ChildTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$ChildTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$ChildTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$ChildTraverser));
}

void DTMDefaultBaseTraversers$ChildTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$ChildTraverser::getNextIndexed(int32_t axisRoot, int32_t nextPotential, int32_t expandedTypeID) {
	int32_t nsIndex = $nc(this->this$0->m_expandedNameTable)->getNamespaceID(expandedTypeID);
	int32_t lnIndex = $nc(this->this$0->m_expandedNameTable)->getLocalNameID(expandedTypeID);
	for (;;) {
		int32_t nextID = this->this$0->findElementFromIndex(nsIndex, lnIndex, nextPotential);
		if (-2 != nextID) {
			int32_t parentID = $nc(this->this$0->m_parent)->elementAt(nextID);
			if (parentID == axisRoot) {
				return nextID;
			}
			if (parentID < axisRoot) {
				return -1;
			}
			do {
				parentID = $nc(this->this$0->m_parent)->elementAt(parentID);
				if (parentID < axisRoot) {
					return -1;
				}
			} while (parentID > axisRoot);
			nextPotential = nextID + 1;
			continue;
		}
		this->this$0->nextNode();
		if (!($nc(this->this$0->m_nextsib)->elementAt(axisRoot) == -2)) {
			break;
		}
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBaseTraversers$ChildTraverser::first(int32_t context) {
	return this->this$0->getFirstChild(context);
}

int32_t DTMDefaultBaseTraversers$ChildTraverser::first(int32_t context, int32_t expandedTypeID) {
	{
		int32_t identity = this->this$0->makeNodeIdentity(context);
		int32_t firstMatch = getNextIndexed(identity, this->this$0->_firstch(identity), expandedTypeID);
		return this->this$0->makeNodeHandle(firstMatch);
	}
}

int32_t DTMDefaultBaseTraversers$ChildTraverser::next(int32_t context, int32_t current) {
	return this->this$0->getNextSibling(current);
}

int32_t DTMDefaultBaseTraversers$ChildTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	for (current = this->this$0->_nextsib(this->this$0->makeNodeIdentity(current)); $DTM::NULL != current; current = this->this$0->_nextsib(current)) {
		if ($nc(this->this$0->m_exptype)->elementAt(current) == expandedTypeID) {
			return this->this$0->makeNodeHandle(current);
		}
	}
	return -1;
}

DTMDefaultBaseTraversers$ChildTraverser::DTMDefaultBaseTraversers$ChildTraverser() {
}

$Class* DTMDefaultBaseTraversers$ChildTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$ChildTraverser, name, initialize, &_DTMDefaultBaseTraversers$ChildTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$ChildTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$ChildTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com