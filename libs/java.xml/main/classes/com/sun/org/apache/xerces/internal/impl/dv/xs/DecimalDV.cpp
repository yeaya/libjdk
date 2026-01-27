#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV$XDecimal.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_FRACTIONDIGITS
#undef FACET_MAXEXCLUSIVE
#undef FACET_MAXINCLUSIVE
#undef FACET_MINEXCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_PATTERN
#undef FACET_TOTALDIGITS
#undef FACET_WHITESPACE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $DecimalDV$XDecimal = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV$XDecimal;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _DecimalDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DecimalDV, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DecimalDV, compare, int32_t, Object$*, Object$*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DecimalDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC | $FINAL, $virtualMethod(DecimalDV, getAllowedFacets, int16_t)},
	{"getFractionDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DecimalDV, getFractionDigits, int32_t, Object$*)},
	{"getTotalDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DecimalDV, getTotalDigits, int32_t, Object$*)},
	{}
};

$InnerClassInfo _DecimalDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV$XDecimal", "com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV", "XDecimal", $STATIC | $FINAL},
	{}
};

$ClassInfo _DecimalDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_DecimalDV_MethodInfo_,
	nullptr,
	nullptr,
	_DecimalDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV$XDecimal"
};

$Object* allocate$DecimalDV($Class* clazz) {
	return $of($alloc(DecimalDV));
}

void DecimalDV::init$() {
	$TypeValidator::init$();
}

int16_t DecimalDV::getAllowedFacets() {
	return ((int16_t)(((((((($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_MAXINCLUSIVE) | $XSSimpleTypeDecl::FACET_MININCLUSIVE) | $XSSimpleTypeDecl::FACET_MAXEXCLUSIVE) | $XSSimpleTypeDecl::FACET_MINEXCLUSIVE) | $XSSimpleTypeDecl::FACET_TOTALDIGITS) | $XSSimpleTypeDecl::FACET_FRACTIONDIGITS));
}

$Object* DecimalDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of($new($DecimalDV$XDecimal, content));
	} catch ($NumberFormatException& nfe) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("decimal"_s)
		}));
	}
	$shouldNotReachHere();
}

int32_t DecimalDV::compare(Object$* value1, Object$* value2) {
	return $nc(($cast($DecimalDV$XDecimal, value1)))->compareTo($cast($DecimalDV$XDecimal, value2));
}

int32_t DecimalDV::getTotalDigits(Object$* value) {
	return $nc(($cast($DecimalDV$XDecimal, value)))->totalDigits;
}

int32_t DecimalDV::getFractionDigits(Object$* value) {
	return $nc(($cast($DecimalDV$XDecimal, value)))->fracDigits;
}

DecimalDV::DecimalDV() {
}

$Class* DecimalDV::load$($String* name, bool initialize) {
	$loadClass(DecimalDV, name, initialize, &_DecimalDV_ClassInfo_, allocate$DecimalDV);
	return class$;
}

$Class* DecimalDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com