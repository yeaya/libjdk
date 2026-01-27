#include <com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <java/lang/StringBuffer.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef DAY
#undef FIELD_UNDEFINED

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
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

$MethodInfo _YearMonthDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(YearMonthDV, init$, void)},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(YearMonthDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(YearMonthDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(YearMonthDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(YearMonthDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _YearMonthDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.YearMonthDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	nullptr,
	_YearMonthDV_MethodInfo_
};

$Object* allocate$YearMonthDV($Class* clazz) {
	return $of($alloc(YearMonthDV));
}

void YearMonthDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* YearMonthDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("gYearMonth"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* YearMonthDV::parse($String* str) {
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	int32_t end = getYearMonth(str, 0, len, date);
	date->day = $AbstractDateTimeDV::DAY;
	parseTimeZone(str, end, len, date);
	validateDateTime(date);
	saveUnnormalized(date);
	if (date->utc != 0 && date->utc != u'Z') {
		normalize(date);
	}
	date->position = 0;
	return date;
}

$String* YearMonthDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 25));
	append(message, $nc(date)->year, 4);
	message->append(u'-');
	append(message, $nc(date)->month, 2);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

$XMLGregorianCalendar* YearMonthDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$init($AbstractDateTimeDV);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar($nc(date)->unNormYear, date->unNormMonth, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, date->hasTimeZone() ? date->timezoneHr * 60 + date->timezoneMin : $DatatypeConstants::FIELD_UNDEFINED);
}

YearMonthDV::YearMonthDV() {
}

$Class* YearMonthDV::load$($String* name, bool initialize) {
	$loadClass(YearMonthDV, name, initialize, &_YearMonthDV_ClassInfo_, allocate$YearMonthDV);
	return class$;
}

$Class* YearMonthDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com