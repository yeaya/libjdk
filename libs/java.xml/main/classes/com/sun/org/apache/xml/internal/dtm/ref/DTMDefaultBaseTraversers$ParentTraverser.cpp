#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$ParentTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <jcpp.h>

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

void DTMDefaultBaseTraversers$ParentTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$ParentTraverser::first(int32_t context) {
	return this->this$0->getParent(context);
}

int32_t DTMDefaultBaseTraversers$ParentTraverser::first(int32_t current, int32_t expandedTypeID) {
	current = this->this$0->makeNodeIdentity(current);
	while (-1 != (current = $nc(this->this$0->m_parent)->elementAt(current))) {
		if ($nc(this->this$0->m_exptype)->elementAt(current) == expandedTypeID) {
			return this->this$0->makeNodeHandle(current);
		}
	}
	return -1;
}

int32_t DTMDefaultBaseTraversers$ParentTraverser::next(int32_t context, int32_t current) {
	return -1;
}

int32_t DTMDefaultBaseTraversers$ParentTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	return -1;
}

DTMDefaultBaseTraversers$ParentTraverser::DTMDefaultBaseTraversers$ParentTraverser() {
}

$Class* DTMDefaultBaseTraversers$ParentTraverser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$ParentTraverser, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$ParentTraverser, init$, void, $DTMDefaultBaseTraversers*)},
		{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ParentTraverser, first, int32_t, int32_t)},
		{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ParentTraverser, first, int32_t, int32_t, int32_t)},
		{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ParentTraverser, next, int32_t, int32_t, int32_t)},
		{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$ParentTraverser, next, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ParentTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "ParentTraverser", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ParentTraverser",
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
	$loadClass(DTMDefaultBaseTraversers$ParentTraverser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseTraversers$ParentTraverser);
	});
	return class$;
}

$Class* DTMDefaultBaseTraversers$ParentTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com