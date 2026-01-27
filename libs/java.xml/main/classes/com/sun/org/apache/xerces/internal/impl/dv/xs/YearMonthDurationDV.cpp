#include <com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDurationDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DurationDV.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/Duration.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED
#undef YEARMONTHDURATION_TYPE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $DurationDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DurationDV;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeFactory = ::javax::xml::datatype::DatatypeFactory;
using $Duration = ::javax::xml::datatype::Duration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _YearMonthDurationDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(YearMonthDurationDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(YearMonthDurationDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getDuration", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/Duration;", nullptr, $PROTECTED, $virtualMethod(YearMonthDurationDV, getDuration, $Duration*, $AbstractDateTimeDV$DateTimeData*)},
	{}
};

$ClassInfo _YearMonthDurationDV_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.YearMonthDurationDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DurationDV",
	nullptr,
	nullptr,
	_YearMonthDurationDV_MethodInfo_
};

$Object* allocate$YearMonthDurationDV($Class* clazz) {
	return $of($alloc(YearMonthDurationDV));
}

void YearMonthDurationDV::init$() {
	$DurationDV::init$();
}

$Object* YearMonthDurationDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content, $DurationDV::YEARMONTHDURATION_TYPE));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("yearMonthDuration"_s)
		}));
	}
	$shouldNotReachHere();
}

$Duration* YearMonthDurationDV::getDuration($AbstractDateTimeDV$DateTimeData* date) {
	$useLocalCurrentObjectStackCache();
	int32_t sign = 1;
	if ($nc(date)->year < 0 || $nc(date)->month < 0) {
		sign = -1;
	}
	$init($AbstractDateTimeDV);
	bool var$0 = sign == 1;
	$var($BigInteger, var$1, $nc(date)->year != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf((int64_t)(sign * $nc(date)->year)) : ($BigInteger*)nullptr);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newDuration(var$0, var$1, $nc(date)->month != $DatatypeConstants::FIELD_UNDEFINED ? $($BigInteger::valueOf((int64_t)(sign * $nc(date)->month))) : ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigDecimal*)nullptr);
}

YearMonthDurationDV::YearMonthDurationDV() {
}

$Class* YearMonthDurationDV::load$($String* name, bool initialize) {
	$loadClass(YearMonthDurationDV, name, initialize, &_YearMonthDurationDV_ClassInfo_, allocate$YearMonthDurationDV);
	return class$;
}

$Class* YearMonthDurationDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com