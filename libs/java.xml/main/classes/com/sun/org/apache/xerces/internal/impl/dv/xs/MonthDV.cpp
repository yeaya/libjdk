#include <com/sun/org/apache/xerces/internal/impl/dv/xs/MonthDV.h>

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

#undef DAY
#undef FIELD_UNDEFINED
#undef YEAR

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $SchemaDateTimeException = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDateTimeException;
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

$MethodInfo _MonthDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MonthDV, init$, void)},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(MonthDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MonthDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(MonthDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(MonthDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _MonthDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.MonthDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	nullptr,
	_MonthDV_MethodInfo_
};

$Object* allocate$MonthDV($Class* clazz) {
	return $of($alloc(MonthDV));
}

void MonthDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* MonthDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of(parse(content));
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("gMonth"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* MonthDV::parse($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	date->year = $AbstractDateTimeDV::YEAR;
	date->day = $AbstractDateTimeDV::DAY;
	bool var$0 = str->charAt(0) != u'-';
	if (var$0 || str->charAt(1) != u'-') {
		$throwNew($SchemaDateTimeException, $$str({"Invalid format for gMonth: "_s, str}));
	}
	int32_t stop = 4;
	date->month = parseInt(str, 2, stop);
	bool var$2 = str->length() >= stop + 2;
	bool var$1 = var$2 && str->charAt(stop) == u'-';
	if (var$1 && str->charAt(stop + 1) == u'-') {
		stop += 2;
	}
	if (stop < len) {
		if (!isNextCharUTCSign(str, stop, len)) {
			$throwNew($SchemaDateTimeException, $$str({"Error in month parsing: "_s, str}));
		} else {
			getTimeZone(str, date, stop, len);
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

$String* MonthDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 5));
	message->append(u'-');
	message->append(u'-');
	append(message, $nc(date)->month, 2);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

$XMLGregorianCalendar* MonthDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$init($AbstractDateTimeDV);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar($DatatypeConstants::FIELD_UNDEFINED, $nc(date)->unNormMonth, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, date->hasTimeZone() ? date->timezoneHr * 60 + date->timezoneMin : $DatatypeConstants::FIELD_UNDEFINED);
}

MonthDV::MonthDV() {
}

$Class* MonthDV::load$($String* name, bool initialize) {
	$loadClass(MonthDV, name, initialize, &_MonthDV_ClassInfo_, allocate$MonthDV);
	return class$;
}

$Class* MonthDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com