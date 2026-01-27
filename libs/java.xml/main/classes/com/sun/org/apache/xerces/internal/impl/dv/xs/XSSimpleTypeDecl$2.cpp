#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$2.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <jcpp.h>

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSSimpleTypeDecl$AbstractObjectList = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $FINAL | $SYNTHETIC, $field(XSSimpleTypeDecl$2, this$0)},
	{}
};

$MethodInfo _XSSimpleTypeDecl$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;)V", nullptr, 0, $method(XSSimpleTypeDecl$2, init$, void, $XSSimpleTypeDecl*)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$2, contains, bool, Object$*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$2, getLength, int32_t)},
	{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$2, item, $Object*, int32_t)},
	{}
};

$EnclosingMethodInfo _XSSimpleTypeDecl$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl",
	"getActualEnumeration",
	"()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;"
};

$InnerClassInfo _XSSimpleTypeDecl$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "AbstractObjectList", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _XSSimpleTypeDecl$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$2",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList",
	nullptr,
	_XSSimpleTypeDecl$2_FieldInfo_,
	_XSSimpleTypeDecl$2_MethodInfo_,
	nullptr,
	&_XSSimpleTypeDecl$2_EnclosingMethodInfo_,
	_XSSimpleTypeDecl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$2($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$2));
}

void XSSimpleTypeDecl$2::init$($XSSimpleTypeDecl* this$0) {
	$set(this, this$0, this$0);
	$XSSimpleTypeDecl$AbstractObjectList::init$();
}

int32_t XSSimpleTypeDecl$2::getLength() {
	return (this->this$0->fEnumeration != nullptr) ? this->this$0->fEnumerationSize : 0;
}

bool XSSimpleTypeDecl$2::contains(Object$* item) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->fEnumeration == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < this->this$0->fEnumerationSize; ++i) {
		if ($nc($of($($nc($nc(this->this$0->fEnumeration)->get(i))->getActualValue())))->equals(item)) {
			return true;
		}
	}
	return false;
}

$Object* XSSimpleTypeDecl$2::item(int32_t index) {
	if (index < 0 || index >= getLength()) {
		return $of(nullptr);
	}
	return $of($nc($nc(this->this$0->fEnumeration)->get(index))->getActualValue());
}

XSSimpleTypeDecl$2::XSSimpleTypeDecl$2() {
}

$Class* XSSimpleTypeDecl$2::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$2, name, initialize, &_XSSimpleTypeDecl$2_ClassInfo_, allocate$XSSimpleTypeDecl$2);
	return class$;
}

$Class* XSSimpleTypeDecl$2::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com