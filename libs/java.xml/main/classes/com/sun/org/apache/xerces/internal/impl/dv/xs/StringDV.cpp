#include <com/sun/org/apache/xerces/internal/impl/dv/xs/StringDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
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
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _StringDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StringDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(StringDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _StringDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.StringDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_StringDV_MethodInfo_
};

$Object* allocate$StringDV($Class* clazz) {
	return $of($alloc(StringDV));
}

void StringDV::init$() {
	$TypeValidator::init$();
}

int16_t StringDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* StringDV::getActualValue($String* content, $ValidationContext* context) {
	return $of(content);
}

StringDV::StringDV() {
}

$Class* StringDV::load$($String* name, bool initialize) {
	$loadClass(StringDV, name, initialize, &_StringDV_ClassInfo_, allocate$StringDV);
	return class$;
}

$Class* StringDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com