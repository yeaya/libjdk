#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV$ListData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_LENGTH
#undef FACET_MAXLENGTH
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE

using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $ListDV$ListData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV$ListData;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _ListDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ListDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ListDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(ListDV, getAllowedFacets, int16_t)},
	{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ListDV, getDataLength, int32_t, Object$*)},
	{}
};

$InnerClassInfo _ListDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV$ListData", "com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV", "ListData", $STATIC | $FINAL},
	{}
};

$ClassInfo _ListDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_ListDV_MethodInfo_,
	nullptr,
	nullptr,
	_ListDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV$ListData"
};

$Object* allocate$ListDV($Class* clazz) {
	return $of($alloc(ListDV));
}

void ListDV::init$() {
	$TypeValidator::init$();
}

int16_t ListDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* ListDV::getActualValue($String* content, $ValidationContext* context) {
	return $of(content);
}

int32_t ListDV::getDataLength(Object$* value) {
	return $nc(($cast($ListDV$ListData, value)))->getLength();
}

ListDV::ListDV() {
}

$Class* ListDV::load$($String* name, bool initialize) {
	$loadClass(ListDV, name, initialize, &_ListDV_ClassInfo_, allocate$ListDV);
	return class$;
}

$Class* ListDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com