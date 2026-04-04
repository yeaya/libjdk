#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AncestorTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
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

void DTMDefaultBaseTraversers$AncestorTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$AncestorTraverser::next(int32_t context, int32_t current) {
	return this->this$0->getParent(current);
}

int32_t DTMDefaultBaseTraversers$AncestorTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	current = this->this$0->makeNodeIdentity(current);
	while ($DTM::NULL != (current = $nc(this->this$0->m_parent)->elementAt(current))) {
		if ($nc(this->this$0->m_exptype)->elementAt(current) == expandedTypeID) {
			return this->this$0->makeNodeHandle(current);
		}
	}
	return -1;
}

DTMDefaultBaseTraversers$AncestorTraverser::DTMDefaultBaseTraversers$AncestorTraverser() {
}

$Class* DTMDefaultBaseTraversers$AncestorTraverser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$AncestorTraverser, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$AncestorTraverser, init$, void, $DTMDefaultBaseTraversers*)},
		{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AncestorTraverser, next, int32_t, int32_t, int32_t)},
		{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AncestorTraverser, next, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AncestorTraverser", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser",
		"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
	};
	$loadClass(DTMDefaultBaseTraversers$AncestorTraverser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseTraversers$AncestorTraverser);
	});
	return class$;
}

$Class* DTMDefaultBaseTraversers$AncestorTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com