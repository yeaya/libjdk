#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$NamespaceDeclsTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
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

void DTMDefaultBaseTraversers$NamespaceDeclsTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$NamespaceDeclsTraverser::next(int32_t context, int32_t current) {
	return (context == current) ? this->this$0->getFirstNamespaceNode(context, false) : this->this$0->getNextNamespaceNode(context, current, false);
}

int32_t DTMDefaultBaseTraversers$NamespaceDeclsTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	current = (context == current) ? this->this$0->getFirstNamespaceNode(context, false) : this->this$0->getNextNamespaceNode(context, current, false);
	do {
		if (this->this$0->getExpandedTypeID(current) == expandedTypeID) {
			return current;
		}
	} while ($DTM::NULL != (current = this->this$0->getNextNamespaceNode(context, current, false)));
	return -1;
}

DTMDefaultBaseTraversers$NamespaceDeclsTraverser::DTMDefaultBaseTraversers$NamespaceDeclsTraverser() {
}

$Class* DTMDefaultBaseTraversers$NamespaceDeclsTraverser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$NamespaceDeclsTraverser, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$NamespaceDeclsTraverser, init$, void, $DTMDefaultBaseTraversers*)},
		{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$NamespaceDeclsTraverser, next, int32_t, int32_t, int32_t)},
		{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$NamespaceDeclsTraverser, next, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceDeclsTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "NamespaceDeclsTraverser", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceDeclsTraverser",
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
	$loadClass(DTMDefaultBaseTraversers$NamespaceDeclsTraverser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseTraversers$NamespaceDeclsTraverser);
	});
	return class$;
}

$Class* DTMDefaultBaseTraversers$NamespaceDeclsTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com