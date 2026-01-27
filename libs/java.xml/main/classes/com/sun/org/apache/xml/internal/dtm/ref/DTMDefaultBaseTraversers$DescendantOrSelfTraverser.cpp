#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$DescendantTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$DescendantOrSelfTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$DescendantOrSelfTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$DescendantOrSelfTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$DescendantOrSelfTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfTraverser, first, int32_t, int32_t)},
	{"getFirstPotential", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfTraverser, getFirstPotential, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$DescendantOrSelfTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantOrSelfTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$DescendantOrSelfTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$DescendantOrSelfTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$DescendantOrSelfTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$DescendantOrSelfTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$DescendantOrSelfTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$DescendantOrSelfTraverser));
}

void DTMDefaultBaseTraversers$DescendantOrSelfTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$DescendantTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfTraverser::getFirstPotential(int32_t identity) {
	return identity;
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfTraverser::first(int32_t context) {
	return context;
}

DTMDefaultBaseTraversers$DescendantOrSelfTraverser::DTMDefaultBaseTraversers$DescendantOrSelfTraverser() {
}

$Class* DTMDefaultBaseTraversers$DescendantOrSelfTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$DescendantOrSelfTraverser, name, initialize, &_DTMDefaultBaseTraversers$DescendantOrSelfTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$DescendantOrSelfTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$DescendantOrSelfTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com