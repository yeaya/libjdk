#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser.h>
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

$FieldInfo _DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, first, int32_t, int32_t, int32_t)},
	{"getFirstPotential", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, getFirstPotential, int32_t, int32_t)},
	{"getSubtreeRoot", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, getSubtreeRoot, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantOrSelfFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser));
}

void DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$DescendantTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::getFirstPotential(int32_t identity) {
	return identity;
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::getSubtreeRoot(int32_t handle) {
	return this->this$0->makeNodeIdentity(this->this$0->getDocument());
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::first(int32_t context) {
	return this->this$0->getDocumentRoot(context);
}

int32_t DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::first(int32_t context, int32_t expandedTypeID) {
	if (isIndexed(expandedTypeID)) {
		int32_t identity = 0;
		int32_t firstPotential = getFirstPotential(identity);
		return this->this$0->makeNodeHandle(getNextIndexed(identity, firstPotential, expandedTypeID));
	}
	int32_t root = first(context);
	return next(root, root, expandedTypeID);
}

DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser() {
}

$Class* DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, name, initialize, &_DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com