#include <com/sun/org/apache/xerces/internal/impl/dv/xs/UnionDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_PATTERN

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

void UnionDV::init$() {
	$TypeValidator::init$();
}

int16_t UnionDV::getAllowedFacets() {
	return ((int16_t)($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_ENUMERATION));
}

$Object* UnionDV::getActualValue($String* content, $ValidationContext* context) {
	return $of(content);
}

UnionDV::UnionDV() {
}

$Class* UnionDV::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnionDV, init$, void)},
		{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnionDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(UnionDV, getAllowedFacets, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.UnionDV",
		"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UnionDV, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionDV);
	});
	return class$;
}

$Class* UnionDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com