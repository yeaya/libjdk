#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromNodeTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$DescendantOrSelfTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$AllFromNodeTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$AllFromNodeTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$AllFromNodeTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$AllFromNodeTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AllFromNodeTraverser, next, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$AllFromNodeTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromNodeTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantOrSelfTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$AllFromNodeTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$AllFromNodeTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$AllFromNodeTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$AllFromNodeTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$AllFromNodeTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$AllFromNodeTraverser));
}

void DTMDefaultBaseTraversers$AllFromNodeTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$DescendantOrSelfTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$AllFromNodeTraverser::next(int32_t context, int32_t current) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) + 1;; current++) {
		this->this$0->_exptype(current);
		if (!isDescendant(subtreeRootIdent, current)) {
			return -1;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

DTMDefaultBaseTraversers$AllFromNodeTraverser::DTMDefaultBaseTraversers$AllFromNodeTraverser() {
}

$Class* DTMDefaultBaseTraversers$AllFromNodeTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$AllFromNodeTraverser, name, initialize, &_DTMDefaultBaseTraversers$AllFromNodeTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$AllFromNodeTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$AllFromNodeTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com