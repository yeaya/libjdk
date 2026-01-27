#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

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

$FieldInfo _DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingAndAncestorTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser));
}

void DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::next(int32_t context, int32_t current) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) - 1; current >= 0; --current) {
		int16_t type = this->this$0->_type(current);
		if ((int16_t)2 == type || (int16_t)13 == type) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
	return -1;
}

int32_t DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) - 1; current >= 0; --current) {
		int32_t exptype = $nc(this->this$0->m_exptype)->elementAt(current);
		if (exptype != expandedTypeID) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
	return -1;
}

DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser() {
}

$Class* DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, name, initialize, &_DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com