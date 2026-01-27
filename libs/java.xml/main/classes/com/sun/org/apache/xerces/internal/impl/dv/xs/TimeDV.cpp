#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TimeDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <java/lang/StringBuffer.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED
#undef MONTH
#undef YEAR

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeFactory = ::javax::xml::datatype::DatatypeFactory;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _TimeDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeDV, init$, void)},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TimeDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TimeDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(TimeDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(TimeDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _TimeDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TimeDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	nullptr,
	_TimeDV_MethodInfo_
};

$Object* allocate$TimeDV($Class* clazz) {
	return $of($alloc(TimeDV));
}

void TimeDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* TimeDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("time"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* TimeDV::parse($String* str) {
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	date->year = $AbstractDateTimeDV::YEAR;
	date->month = $AbstractDateTimeDV::MONTH;
	date->day = 15;
	getTime(str, 0, len, date);
	validateDateTime(date);
	saveUnnormalized(date);
	if (date->utc != 0 && date->utc != u'Z') {
		normalize(date);
	}
	date->position = 2;
	return date;
}

$String* TimeDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 16));
	append(message, $nc(date)->hour, 2);
	message->append(u':');
	append(message, $nc(date)->minute, 2);
	message->append(u':');
	append(message, $nc(date)->second);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

$XMLGregorianCalendar* TimeDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$init($AbstractDateTimeDV);
	int32_t var$0 = $nc(date)->unNormHour;
	int32_t var$1 = date->unNormMinute;
	int32_t var$2 = $cast(int32_t, date->unNormSecond);
	$var($BigDecimal, var$3, date->unNormSecond != 0 ? getFractionalSecondsAsBigDecimal(date) : ($BigDecimal*)nullptr);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar(($BigInteger*)nullptr, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, var$0, var$1, var$2, var$3, date->hasTimeZone() ? (date->timezoneHr * 60 + date->timezoneMin) : $DatatypeConstants::FIELD_UNDEFINED);
}

TimeDV::TimeDV() {
}

$Class* TimeDV::load$($String* name, bool initialize) {
	$loadClass(TimeDV, name, initialize, &_TimeDV_ClassInfo_, allocate$TimeDV);
	return class$;
}

$Class* TimeDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com