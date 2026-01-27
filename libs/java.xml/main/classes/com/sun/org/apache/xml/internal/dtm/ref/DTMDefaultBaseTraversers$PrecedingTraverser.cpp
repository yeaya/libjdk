#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
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

$FieldInfo _DTMDefaultBaseTraversers$PrecedingTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$PrecedingTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$PrecedingTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$PrecedingTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"isAncestor", "(II)Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$PrecedingTraverser, isAncestor, bool, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$PrecedingTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$PrecedingTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$PrecedingTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$PrecedingTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$PrecedingTraverser));
}

void DTMDefaultBaseTraversers$PrecedingTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

bool DTMDefaultBaseTraversers$PrecedingTraverser::isAncestor(int32_t contextIdent, int32_t currentIdent) {
	for (contextIdent = $nc(this->this$0->m_parent)->elementAt(contextIdent); $DTM::NULL != contextIdent; contextIdent = $nc(this->this$0->m_parent)->elementAt(contextIdent)) {
		if (contextIdent == currentIdent) {
			return true;
		}
	}
	return false;
}

int32_t DTMDefaultBaseTraversers$PrecedingTraverser::next(int32_t context, int32_t current) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) - 1; current >= 0; --current) {
		int16_t type = this->this$0->_type(current);
		if ((int16_t)2 == type || (int16_t)13 == type || isAncestor(subtreeRootIdent, current)) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
	return -1;
}

int32_t DTMDefaultBaseTraversers$PrecedingTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) - 1; current >= 0; --current) {
		int32_t exptype = $nc(this->this$0->m_exptype)->elementAt(current);
		if (exptype != expandedTypeID || isAncestor(subtreeRootIdent, current)) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
	return -1;
}

DTMDefaultBaseTraversers$PrecedingTraverser::DTMDefaultBaseTraversers$PrecedingTraverser() {
}

$Class* DTMDefaultBaseTraversers$PrecedingTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$PrecedingTraverser, name, initialize, &_DTMDefaultBaseTraversers$PrecedingTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$PrecedingTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$PrecedingTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com