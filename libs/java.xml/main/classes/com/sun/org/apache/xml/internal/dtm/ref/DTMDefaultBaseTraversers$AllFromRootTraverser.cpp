#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromRootTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromNodeTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$AllFromNodeTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromNodeTraverser;
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

$FieldInfo _DTMDefaultBaseTraversers$AllFromRootTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$AllFromRootTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$AllFromRootTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$AllFromRootTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AllFromRootTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AllFromRootTraverser, first, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AllFromRootTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AllFromRootTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$AllFromRootTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromNodeTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$AllFromRootTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$AllFromRootTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$AllFromRootTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$AllFromRootTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$AllFromRootTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$AllFromRootTraverser));
}

void DTMDefaultBaseTraversers$AllFromRootTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$AllFromNodeTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$AllFromRootTraverser::first(int32_t context) {
	return this->this$0->getDocumentRoot(context);
}

int32_t DTMDefaultBaseTraversers$AllFromRootTraverser::first(int32_t context, int32_t expandedTypeID) {
	return (this->this$0->getExpandedTypeID(this->this$0->getDocumentRoot(context)) == expandedTypeID) ? context : next(context, context, expandedTypeID);
}

int32_t DTMDefaultBaseTraversers$AllFromRootTraverser::next(int32_t context, int32_t current) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) + 1;; current++) {
		int32_t type = this->this$0->_type(current);
		if (type == -1) {
			return -1;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

int32_t DTMDefaultBaseTraversers$AllFromRootTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	int32_t subtreeRootIdent = this->this$0->makeNodeIdentity(context);
	for (current = this->this$0->makeNodeIdentity(current) + 1;; ++current) {
		int32_t exptype = this->this$0->_exptype(current);
		if (exptype == -1) {
			return -1;
		}
		if (exptype != expandedTypeID) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

DTMDefaultBaseTraversers$AllFromRootTraverser::DTMDefaultBaseTraversers$AllFromRootTraverser() {
}

$Class* DTMDefaultBaseTraversers$AllFromRootTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$AllFromRootTraverser, name, initialize, &_DTMDefaultBaseTraversers$AllFromRootTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$AllFromRootTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$AllFromRootTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com