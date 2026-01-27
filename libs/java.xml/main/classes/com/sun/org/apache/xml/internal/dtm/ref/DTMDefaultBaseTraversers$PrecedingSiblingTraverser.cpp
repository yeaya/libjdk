#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingSiblingTraverser.h>

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

$FieldInfo _DTMDefaultBaseTraversers$PrecedingSiblingTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$PrecedingSiblingTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$PrecedingSiblingTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$PrecedingSiblingTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingSiblingTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$PrecedingSiblingTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$PrecedingSiblingTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingSiblingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingSiblingTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$PrecedingSiblingTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingSiblingTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingSiblingTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$PrecedingSiblingTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$PrecedingSiblingTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$PrecedingSiblingTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$PrecedingSiblingTraverser));
}

void DTMDefaultBaseTraversers$PrecedingSiblingTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$PrecedingSiblingTraverser::next(int32_t context, int32_t current) {
	return this->this$0->getPreviousSibling(current);
}

int32_t DTMDefaultBaseTraversers$PrecedingSiblingTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	while ($DTM::NULL != (current = this->this$0->getPreviousSibling(current))) {
		if (this->this$0->getExpandedTypeID(current) == expandedTypeID) {
			return current;
		}
	}
	return -1;
}

DTMDefaultBaseTraversers$PrecedingSiblingTraverser::DTMDefaultBaseTraversers$PrecedingSiblingTraverser() {
}

$Class* DTMDefaultBaseTraversers$PrecedingSiblingTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$PrecedingSiblingTraverser, name, initialize, &_DTMDefaultBaseTraversers$PrecedingSiblingTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$PrecedingSiblingTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$PrecedingSiblingTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com