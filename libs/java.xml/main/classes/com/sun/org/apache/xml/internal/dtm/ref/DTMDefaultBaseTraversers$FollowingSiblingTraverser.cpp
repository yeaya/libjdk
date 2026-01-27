#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$FollowingSiblingTraverser.h>

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

$FieldInfo _DTMDefaultBaseTraversers$FollowingSiblingTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$FollowingSiblingTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$FollowingSiblingTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$FollowingSiblingTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingSiblingTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingSiblingTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$FollowingSiblingTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingSiblingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "FollowingSiblingTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$FollowingSiblingTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingSiblingTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$FollowingSiblingTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$FollowingSiblingTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$FollowingSiblingTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$FollowingSiblingTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$FollowingSiblingTraverser));
}

void DTMDefaultBaseTraversers$FollowingSiblingTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$FollowingSiblingTraverser::next(int32_t context, int32_t current) {
	return this->this$0->getNextSibling(current);
}

int32_t DTMDefaultBaseTraversers$FollowingSiblingTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	while ($DTM::NULL != (current = this->this$0->getNextSibling(current))) {
		if (this->this$0->getExpandedTypeID(current) == expandedTypeID) {
			return current;
		}
	}
	return -1;
}

DTMDefaultBaseTraversers$FollowingSiblingTraverser::DTMDefaultBaseTraversers$FollowingSiblingTraverser() {
}

$Class* DTMDefaultBaseTraversers$FollowingSiblingTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$FollowingSiblingTraverser, name, initialize, &_DTMDefaultBaseTraversers$FollowingSiblingTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$FollowingSiblingTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$FollowingSiblingTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com