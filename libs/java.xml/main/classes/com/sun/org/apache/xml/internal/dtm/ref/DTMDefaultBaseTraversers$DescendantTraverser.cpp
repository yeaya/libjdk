#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$IndexedDTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$DescendantTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$DescendantTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$DescendantTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$DescendantTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"axisHasBeenProcessed", "(I)Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, axisHasBeenProcessed, bool, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, first, int32_t, int32_t, int32_t)},
	{"getFirstPotential", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, getFirstPotential, int32_t, int32_t)},
	{"getSubtreeRoot", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, getSubtreeRoot, int32_t, int32_t)},
	{"isAfterAxis", "(II)Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, isAfterAxis, bool, int32_t, int32_t)},
	{"isDescendant", "(II)Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, isDescendant, bool, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$DescendantTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "IndexedDTMAxisTraverser", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$DescendantTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$DescendantTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$DescendantTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$DescendantTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$DescendantTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$DescendantTraverser));
}

void DTMDefaultBaseTraversers$DescendantTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$DescendantTraverser::getFirstPotential(int32_t identity) {
	return identity + 1;
}

bool DTMDefaultBaseTraversers$DescendantTraverser::axisHasBeenProcessed(int32_t axisRoot) {
	return !($nc(this->this$0->m_nextsib)->elementAt(axisRoot) == -2);
}

int32_t DTMDefaultBaseTraversers$DescendantTraverser::getSubtreeRoot(int32_t handle) {
	return this->this$0->makeNodeIdentity(handle);
}

bool DTMDefaultBaseTraversers$DescendantTraverser::isDescendant(int32_t subtreeRootIdentity, int32_t identity) {
	return this->this$0->_parent(identity) >= subtreeRootIdentity;
}

bool DTMDefaultBaseTraversers$DescendantTraverser::isAfterAxis(int32_t axisRoot, int32_t identity) {
	do {
		if (identity == axisRoot) {
			return false;
		}
		identity = $nc(this->this$0->m_parent)->elementAt(identity);
	} while (identity >= axisRoot);
	return true;
}

int32_t DTMDefaultBaseTraversers$DescendantTraverser::first(int32_t context, int32_t expandedTypeID) {
	if (isIndexed(expandedTypeID)) {
		int32_t identity = getSubtreeRoot(context);
		int32_t firstPotential = getFirstPotential(identity);
		return this->this$0->makeNodeHandle(getNextIndexed(identity, firstPotential, expandedTypeID));
	}
	return next(context, context, expandedTypeID);
}

int32_t DTMDefaultBaseTraversers$DescendantTraverser::next(int32_t context, int32_t current) {
	int32_t subtreeRootIdent = getSubtreeRoot(context);
	for (current = this->this$0->makeNodeIdentity(current) + 1;; ++current) {
		int32_t type = this->this$0->_type(current);
		if (!isDescendant(subtreeRootIdent, current)) {
			return -1;
		}
		if ((int16_t)2 == type || (int16_t)13 == type) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

int32_t DTMDefaultBaseTraversers$DescendantTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	int32_t subtreeRootIdent = getSubtreeRoot(context);
	current = this->this$0->makeNodeIdentity(current) + 1;
	if (isIndexed(expandedTypeID)) {
		return this->this$0->makeNodeHandle(getNextIndexed(subtreeRootIdent, current, expandedTypeID));
	}
	for (;; ++current) {
		int32_t exptype = this->this$0->_exptype(current);
		if (!isDescendant(subtreeRootIdent, current)) {
			return -1;
		}
		if (exptype != expandedTypeID) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

DTMDefaultBaseTraversers$DescendantTraverser::DTMDefaultBaseTraversers$DescendantTraverser() {
}

$Class* DTMDefaultBaseTraversers$DescendantTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$DescendantTraverser, name, initialize, &_DTMDefaultBaseTraversers$DescendantTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$DescendantTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$DescendantTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com