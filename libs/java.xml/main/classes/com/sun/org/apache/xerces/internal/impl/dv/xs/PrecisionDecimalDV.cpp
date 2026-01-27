#include <com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal.h>
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
using $PrecisionDecimalDV$XPrecisionDecimal = ::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal;
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

$MethodInfo _PrecisionDecimalDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(PrecisionDecimalDV, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, compare, int32_t, Object$*, Object$*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, getAllowedFacets, int16_t)},
	{"getFractionDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, getFractionDigits, int32_t, Object$*)},
	{"getTotalDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, getTotalDigits, int32_t, Object$*)},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV, isIdentical, bool, Object$*, Object$*)},
	{}
};

$InnerClassInfo _PrecisionDecimalDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV$XPrecisionDecimal", "com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV", "XPrecisionDecimal", $STATIC | $FINAL},
	{}
};

$ClassInfo _PrecisionDecimalDV_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_PrecisionDecimalDV_MethodInfo_,
	nullptr,
	nullptr,
	_PrecisionDecimalDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV$XPrecisionDecimal"
};

$Object* allocate$PrecisionDecimalDV($Class* clazz) {
	return $of($alloc(PrecisionDecimalDV));
}

void PrecisionDecimalDV::init$() {
	$TypeValidator::init$();
}

int16_t PrecisionDecimalDV::getAllowedFacets() {
	return ((int16_t)(((((((($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_MAXINCLUSIVE) | $XSSimpleTypeDecl::FACET_MININCLUSIVE) | $XSSimpleTypeDecl::FACET_MAXEXCLUSIVE) | $XSSimpleTypeDecl::FACET_MINEXCLUSIVE) | $XSSimpleTypeDecl::FACET_TOTALDIGITS) | $XSSimpleTypeDecl::FACET_FRACTIONDIGITS));
}

$Object* PrecisionDecimalDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of($new($PrecisionDecimalDV$XPrecisionDecimal, content));
	} catch ($NumberFormatException& nfe) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("precisionDecimal"_s)
		}));
	}
	$shouldNotReachHere();
}

int32_t PrecisionDecimalDV::compare(Object$* value1, Object$* value2) {
	return $nc(($cast($PrecisionDecimalDV$XPrecisionDecimal, value1)))->compareTo($cast($PrecisionDecimalDV$XPrecisionDecimal, value2));
}

int32_t PrecisionDecimalDV::getFractionDigits(Object$* value) {
	return $nc(($cast($PrecisionDecimalDV$XPrecisionDecimal, value)))->fracDigits;
}

int32_t PrecisionDecimalDV::getTotalDigits(Object$* value) {
	return $nc(($cast($PrecisionDecimalDV$XPrecisionDecimal, value)))->totalDigits;
}

bool PrecisionDecimalDV::isIdentical(Object$* value1, Object$* value2) {
	if (!($instanceOf($PrecisionDecimalDV$XPrecisionDecimal, value2)) || !($instanceOf($PrecisionDecimalDV$XPrecisionDecimal, value1))) {
		return false;
	}
	return $nc(($cast($PrecisionDecimalDV$XPrecisionDecimal, value1)))->isIdentical($cast($PrecisionDecimalDV$XPrecisionDecimal, value2));
}

PrecisionDecimalDV::PrecisionDecimalDV() {
}

$Class* PrecisionDecimalDV::load$($String* name, bool initialize) {
	$loadClass(PrecisionDecimalDV, name, initialize, &_PrecisionDecimalDV_ClassInfo_, allocate$PrecisionDecimalDV);
	return class$;
}

$Class* PrecisionDecimalDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com