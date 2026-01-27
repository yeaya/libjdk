#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DateTimeDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
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

$MethodInfo _DateTimeDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DateTimeDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(DateTimeDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(DateTimeDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _DateTimeDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DateTimeDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	nullptr,
	_DateTimeDV_MethodInfo_
};

$Object* allocate$DateTimeDV($Class* clazz) {
	return $of($alloc(DateTimeDV));
}

void DateTimeDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* DateTimeDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("dateTime"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* DateTimeDV::parse($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	int32_t end = indexOf(str, 0, len, u'T');
	int32_t dateEnd = getDate(str, 0, end, date);
	getTime(str, end + 1, len, date);
	if (dateEnd != end) {
		$throwNew($RuntimeException, $$str({str, " is an invalid dateTime dataype value. Invalid character(s) seprating date and time values."_s}));
	}
	validateDateTime(date);
	saveUnnormalized(date);
	if (date->utc != 0 && date->utc != u'Z') {
		normalize(date);
	}
	return date;
}

$XMLGregorianCalendar* DateTimeDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$useLocalCurrentObjectStackCache();
	$init($AbstractDateTimeDV);
	$var($BigInteger, var$0, $BigInteger::valueOf((int64_t)$nc(date)->unNormYear));
	int32_t var$1 = $nc(date)->unNormMonth;
	int32_t var$2 = date->unNormDay;
	int32_t var$3 = date->unNormHour;
	int32_t var$4 = date->unNormMinute;
	int32_t var$5 = $cast(int32_t, date->unNormSecond);
	$var($BigDecimal, var$6, date->unNormSecond != 0 ? getFractionalSecondsAsBigDecimal(date) : ($BigDecimal*)nullptr);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar(var$0, var$1, var$2, var$3, var$4, var$5, var$6, date->hasTimeZone() ? (date->timezoneHr * 60 + date->timezoneMin) : $DatatypeConstants::FIELD_UNDEFINED);
}

DateTimeDV::DateTimeDV() {
}

$Class* DateTimeDV::load$($String* name, bool initialize) {
	$loadClass(DateTimeDV, name, initialize, &_DateTimeDV_ClassInfo_, allocate$DateTimeDV);
	return class$;
}

$Class* DateTimeDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com