#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AttributeTraverser.h>

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

$FieldInfo _DTMDefaultBaseTraversers$AttributeTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$AttributeTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$AttributeTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$AttributeTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AttributeTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$AttributeTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$AttributeTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AttributeTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AttributeTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$AttributeTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AttributeTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$AttributeTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$AttributeTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$AttributeTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$AttributeTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$AttributeTraverser));
}

void DTMDefaultBaseTraversers$AttributeTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

int32_t DTMDefaultBaseTraversers$AttributeTraverser::next(int32_t context, int32_t current) {
	return (context == current) ? this->this$0->getFirstAttribute(context) : this->this$0->getNextAttribute(current);
}

int32_t DTMDefaultBaseTraversers$AttributeTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	current = (context == current) ? this->this$0->getFirstAttribute(context) : this->this$0->getNextAttribute(current);
	do {
		if (this->this$0->getExpandedTypeID(current) == expandedTypeID) {
			return current;
		}
	} while ($DTM::NULL != (current = this->this$0->getNextAttribute(current)));
	return -1;
}

DTMDefaultBaseTraversers$AttributeTraverser::DTMDefaultBaseTraversers$AttributeTraverser() {
}

$Class* DTMDefaultBaseTraversers$AttributeTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$AttributeTraverser, name, initialize, &_DTMDefaultBaseTraversers$AttributeTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$AttributeTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$AttributeTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com