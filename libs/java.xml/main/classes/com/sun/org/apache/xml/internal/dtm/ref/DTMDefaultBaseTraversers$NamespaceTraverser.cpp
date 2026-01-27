#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$NamespaceTraverser.h>

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

$FieldInfo _DTMDefaultBaseTraversers$NamespaceTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$NamespaceTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$NamespaceTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$NamespaceTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$NamespaceTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$NamespaceTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$NamespaceTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "NamespaceTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$NamespaceTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$NamespaceTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$NamespaceTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$NamespaceTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$NamespaceTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$NamespaceTraverser));
}

void DTMDefaultBaseTraversers$NamespaceTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$NamespaceTraverser::next(int32_t context, int32_t current) {
	return (context == current) ? this->this$0->getFirstNamespaceNode(context, true) : this->this$0->getNextNamespaceNode(context, current, true);
}

int32_t DTMDefaultBaseTraversers$NamespaceTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	current = (context == current) ? this->this$0->getFirstNamespaceNode(context, true) : this->this$0->getNextNamespaceNode(context, current, true);
	do {
		if (this->this$0->getExpandedTypeID(current) == expandedTypeID) {
			return current;
		}
	} while ($DTM::NULL != (current = this->this$0->getNextNamespaceNode(context, current, true)));
	return -1;
}

DTMDefaultBaseTraversers$NamespaceTraverser::DTMDefaultBaseTraversers$NamespaceTraverser() {
}

$Class* DTMDefaultBaseTraversers$NamespaceTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$NamespaceTraverser, name, initialize, &_DTMDefaultBaseTraversers$NamespaceTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$NamespaceTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$NamespaceTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com