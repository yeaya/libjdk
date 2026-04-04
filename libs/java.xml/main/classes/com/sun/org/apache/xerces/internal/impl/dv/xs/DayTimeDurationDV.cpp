#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DayTimeDurationDV.h>
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

#undef DAYTIMEDURATION_TYPE
#undef FIELD_UNDEFINED

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

void DayTimeDurationDV::init$() {
	$DurationDV::init$();
}

$Object* DayTimeDurationDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return parse(content, $DurationDV::DAYTIMEDURATION_TYPE);
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			content,
			"dayTimeDuration"_s
		}));
	}
	$shouldNotReachHere();
}

$Duration* DayTimeDurationDV::getDuration($AbstractDateTimeDV$DateTimeData* date) {
	$useLocalObjectStack();
	int32_t sign = 1;
	if ($nc(date)->day < 0 || date->hour < 0 || date->minute < 0 || date->second < 0) {
		sign = -1;
	}
	$init($AbstractDateTimeDV);
	bool var$0 = sign == 1;
	$var($BigInteger, var$1, date->day != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->day) : ($BigInteger*)nullptr);
	$var($BigInteger, var$2, date->hour != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->hour) : ($BigInteger*)nullptr);
	$var($BigInteger, var$3, date->minute != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->minute) : ($BigInteger*)nullptr);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newDuration(var$0, nullptr, nullptr, var$1, var$2, var$3, date->second != $DatatypeConstants::FIELD_UNDEFINED ? $$new($BigDecimal, $($String::valueOf(sign * date->second))) : ($BigDecimal*)nullptr);
}

DayTimeDurationDV::DayTimeDurationDV() {
}

$Class* DayTimeDurationDV::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DayTimeDurationDV, init$, void)},
		{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DayTimeDurationDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{"getDuration", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/Duration;", nullptr, $PROTECTED, $virtualMethod(DayTimeDurationDV, getDuration, $Duration*, $AbstractDateTimeDV$DateTimeData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.DayTimeDurationDV",
		"com.sun.org.apache.xerces.internal.impl.dv.xs.DurationDV",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DayTimeDurationDV, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DayTimeDurationDV);
	});
	return class$;
}

$Class* DayTimeDurationDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com