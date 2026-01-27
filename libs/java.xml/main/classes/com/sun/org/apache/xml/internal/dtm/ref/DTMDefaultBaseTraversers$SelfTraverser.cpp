#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$SelfTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

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

$FieldInfo _DTMDefaultBaseTraversers$SelfTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$SelfTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$SelfTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$SelfTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$SelfTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$SelfTraverser, first, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$SelfTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$SelfTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$SelfTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$SelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "SelfTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$SelfTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$SelfTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$SelfTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$SelfTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$SelfTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$SelfTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$SelfTraverser));
}

void DTMDefaultBaseTraversers$SelfTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$SelfTraverser::first(int32_t context) {
	return context;
}

int32_t DTMDefaultBaseTraversers$SelfTraverser::first(int32_t context, int32_t expandedTypeID) {
	return (this->this$0->getExpandedTypeID(context) == expandedTypeID) ? context : -1;
}

int32_t DTMDefaultBaseTraversers$SelfTraverser::next(int32_t context, int32_t current) {
	return -1;
}

int32_t DTMDefaultBaseTraversers$SelfTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	return -1;
}

DTMDefaultBaseTraversers$SelfTraverser::DTMDefaultBaseTraversers$SelfTraverser() {
}

$Class* DTMDefaultBaseTraversers$SelfTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$SelfTraverser, name, initialize, &_DTMDefaultBaseTraversers$SelfTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$SelfTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$SelfTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com