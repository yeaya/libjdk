#include <com/sun/org/apache/xerces/internal/impl/dv/xs/MonthDayDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDateTimeException.h>
#include <java/lang/StringBuffer.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED
#undef MONTHDAY_SIZE
#undef YEAR

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $SchemaDateTimeException = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDateTimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _MonthDayDV_FieldInfo_[] = {
	{"MONTHDAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MonthDayDV, MONTHDAY_SIZE)},
	{}
};

$MethodInfo _MonthDayDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MonthDayDV, init$, void)},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(MonthDayDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MonthDayDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(MonthDayDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(MonthDayDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _MonthDayDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.MonthDayDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	_MonthDayDV_FieldInfo_,
	_MonthDayDV_MethodInfo_
};

$Object* allocate$MonthDayDV($Class* clazz) {
	return $of($alloc(MonthDayDV));
}

void MonthDayDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* MonthDayDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("gMonthDay"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* MonthDayDV::parse($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	date->year = $AbstractDateTimeDV::YEAR;
	bool var$0 = str->charAt(0) != u'-';
	if (var$0 || str->charAt(1) != u'-') {
		$throwNew($SchemaDateTimeException, $$str({"Invalid format for gMonthDay: "_s, str}));
	}
	date->month = parseInt(str, 2, 4);
	int32_t start = 4;
	if (str->charAt(start++) != u'-') {
		$throwNew($SchemaDateTimeException, $$str({"Invalid format for gMonthDay: "_s, str}));
	}
	date->day = parseInt(str, start, start + 2);
	if (MonthDayDV::MONTHDAY_SIZE < len) {
		if (!isNextCharUTCSign(str, MonthDayDV::MONTHDAY_SIZE, len)) {
			$throwNew($SchemaDateTimeException, $$str({"Error in month parsing:"_s, str}));
		} else {
			getTimeZone(str, date, MonthDayDV::MONTHDAY_SIZE, len);
		}
	}
	validateDateTime(date);
	saveUnnormalized(date);
	if (date->utc != 0 && date->utc != u'Z') {
		normalize(date);
	}
	date->position = 1;
	return date;
}

$String* MonthDayDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 8));
	message->append(u'-');
	message->append(u'-');
	append(message, $nc(date)->month, 2);
	message->append(u'-');
	append(message, $nc(date)->day, 2);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

$XMLGregorianCalendar* MonthDayDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$init($AbstractDateTimeDV);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar($DatatypeConstants::FIELD_UNDEFINED, $nc(date)->unNormMonth, date->unNormDay, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, date->hasTimeZone() ? date->timezoneHr * 60 + date->timezoneMin : $DatatypeConstants::FIELD_UNDEFINED);
}

MonthDayDV::MonthDayDV() {
}

$Class* MonthDayDV::load$($String* name, bool initialize) {
	$loadClass(MonthDayDV, name, initialize, &_MonthDayDV_ClassInfo_, allocate$MonthDayDV);
	return class$;
}

$Class* MonthDayDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com