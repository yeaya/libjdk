#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AncestorOrSelfTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AncestorTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$AncestorTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AncestorTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$AncestorOrSelfTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$AncestorOrSelfTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$AncestorOrSelfTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$AncestorOrSelfTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AncestorOrSelfTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AncestorOrSelfTraverser, first, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$AncestorOrSelfTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorOrSelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AncestorOrSelfTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AncestorTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$AncestorOrSelfTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorOrSelfTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$AncestorOrSelfTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$AncestorOrSelfTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$AncestorOrSelfTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$AncestorOrSelfTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$AncestorOrSelfTraverser));
}

void DTMDefaultBaseTraversers$AncestorOrSelfTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$AncestorTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$AncestorOrSelfTraverser::first(int32_t context) {
	return context;
}

int32_t DTMDefaultBaseTraversers$AncestorOrSelfTraverser::first(int32_t context, int32_t expandedTypeID) {
	return (this->this$0->getExpandedTypeID(context) == expandedTypeID) ? context : next(context, context, expandedTypeID);
}

DTMDefaultBaseTraversers$AncestorOrSelfTraverser::DTMDefaultBaseTraversers$AncestorOrSelfTraverser() {
}

$Class* DTMDefaultBaseTraversers$AncestorOrSelfTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$AncestorOrSelfTraverser, name, initialize, &_DTMDefaultBaseTraversers$AncestorOrSelfTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$AncestorOrSelfTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$AncestorOrSelfTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com