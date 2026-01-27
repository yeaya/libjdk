#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$RootTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromRootTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$AllFromRootTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromRootTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$RootTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$RootTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$RootTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$RootTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$RootTraverser, first, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$RootTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$RootTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$RootTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$RootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "RootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromRootTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$RootTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$RootTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$RootTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$RootTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$RootTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$RootTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$RootTraverser));
}

void DTMDefaultBaseTraversers$RootTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$AllFromRootTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$RootTraverser::first(int32_t context, int32_t expandedTypeID) {
	int32_t root = this->this$0->getDocumentRoot(context);
	return (this->this$0->getExpandedTypeID(root) == expandedTypeID) ? root : -1;
}

int32_t DTMDefaultBaseTraversers$RootTraverser::next(int32_t context, int32_t current) {
	return -1;
}

int32_t DTMDefaultBaseTraversers$RootTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	return -1;
}

DTMDefaultBaseTraversers$RootTraverser::DTMDefaultBaseTraversers$RootTraverser() {
}

$Class* DTMDefaultBaseTraversers$RootTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$RootTraverser, name, initialize, &_DTMDefaultBaseTraversers$RootTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$RootTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$RootTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com