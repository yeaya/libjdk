#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantFromRootTraverser.h>

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

$FieldInfo _DTMDefaultBaseTraversers$DescendantFromRootTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$DescendantFromRootTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$DescendantFromRootTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$DescendantFromRootTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantFromRootTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$DescendantFromRootTraverser, first, int32_t, int32_t, int32_t)},
	{"getFirstPotential", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantFromRootTraverser, getFirstPotential, int32_t, int32_t)},
	{"getSubtreeRoot", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$DescendantFromRootTraverser, getSubtreeRoot, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$DescendantFromRootTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$DescendantFromRootTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantFromRootTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$DescendantFromRootTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$DescendantFromRootTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$DescendantFromRootTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$DescendantFromRootTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$DescendantFromRootTraverser));
}

void DTMDefaultBaseTraversers$DescendantFromRootTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$DescendantTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$DescendantFromRootTraverser::getFirstPotential(int32_t identity) {
	return this->this$0->_firstch(0);
}

int32_t DTMDefaultBaseTraversers$DescendantFromRootTraverser::getSubtreeRoot(int32_t handle) {
	return 0;
}

int32_t DTMDefaultBaseTraversers$DescendantFromRootTraverser::first(int32_t context) {
	return this->this$0->makeNodeHandle(this->this$0->_firstch(0));
}

int32_t DTMDefaultBaseTraversers$DescendantFromRootTraverser::first(int32_t context, int32_t expandedTypeID) {
	if (isIndexed(expandedTypeID)) {
		int32_t identity = 0;
		int32_t firstPotential = getFirstPotential(identity);
		return this->this$0->makeNodeHandle(getNextIndexed(identity, firstPotential, expandedTypeID));
	}
	int32_t root = this->this$0->getDocumentRoot(context);
	return next(root, root, expandedTypeID);
}

DTMDefaultBaseTraversers$DescendantFromRootTraverser::DTMDefaultBaseTraversers$DescendantFromRootTraverser() {
}

$Class* DTMDefaultBaseTraversers$DescendantFromRootTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$DescendantFromRootTraverser, name, initialize, &_DTMDefaultBaseTraversers$DescendantFromRootTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$DescendantFromRootTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$DescendantFromRootTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com