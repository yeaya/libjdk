#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DatatypeFactoryImpl.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <java/math/BigDecimal.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef DAY
#undef DEBUG
#undef FACET_ENUMERATION
#undef FACET_MAXEXCLUSIVE
#undef FACET_MAXINCLUSIVE
#undef FACET_MINEXCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_PATTERN
#undef FACET_WHITESPACE
#undef GREATER_THAN
#undef INDETERMINATE
#undef LESS_THAN
#undef MAX_VALUE
#undef MIN_VALUE
#undef MONTH
#undef SCHEMA_1_1_SUPPORT
#undef YEAR

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $DatatypeFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DatatypeFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $BigDecimal = ::java::math::BigDecimal;
using $DatatypeFactory = ::javax::xml::datatype::DatatypeFactory;
using $Duration = ::javax::xml::datatype::Duration;
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

$FieldInfo _AbstractDateTimeDV_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDateTimeDV, DEBUG)},
	{"YEAR", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractDateTimeDV, YEAR)},
	{"MONTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractDateTimeDV, MONTH)},
	{"DAY", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractDateTimeDV, DAY)},
	{"datatypeFactory", "Ljavax/xml/datatype/DatatypeFactory;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDateTimeDV, datatypeFactory)},
	{}
};

$MethodInfo _AbstractDateTimeDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractDateTimeDV, init$, void)},
	{"append", "(Ljava/lang/StringBuffer;II)V", nullptr, $PROTECTED | $FINAL, $method(AbstractDateTimeDV, append, void, $StringBuffer*, int32_t, int32_t)},
	{"append", "(Ljava/lang/StringBuffer;D)V", nullptr, $PROTECTED | $FINAL, $method(AbstractDateTimeDV, append, void, $StringBuffer*, double)},
	{"append2", "(Ljava/lang/StringBuffer;D)V", nullptr, $PROTECTED | $FINAL, $method(AbstractDateTimeDV, append2, void, $StringBuffer*, double)},
	{"append3", "(Ljava/lang/StringBuffer;D)V", nullptr, $PRIVATE, $method(AbstractDateTimeDV, append3, void, $StringBuffer*, double)},
	{"cloneDate", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PRIVATE, $method(AbstractDateTimeDV, cloneDate, void, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV, compare, int32_t, Object$*, Object$*)},
	{"compareDates", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Z)S", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, compareDates, int16_t, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*, bool)},
	{"compareOrder", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)S", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, compareOrder, int16_t, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*)},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
	{"fQuotient", "(II)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, fQuotient, int32_t, int32_t, int32_t)},
	{"fQuotient", "(III)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, fQuotient, int32_t, int32_t, int32_t, int32_t)},
	{"findUTCSign", "(Ljava/lang/String;II)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, findUTCSign, int32_t, $String*, int32_t, int32_t)},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV, getAllowedFacets, int16_t)},
	{"getDate", "(Ljava/lang/String;IILcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getDate, int32_t, $String*, int32_t, int32_t, $AbstractDateTimeDV$DateTimeData*), "java.lang.RuntimeException"},
	{"getDuration", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/Duration;", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getDuration, $Duration*, $AbstractDateTimeDV$DateTimeData*)},
	{"getFractionalSecondsAsBigDecimal", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/math/BigDecimal;", nullptr, $PROTECTED | $FINAL, $method(AbstractDateTimeDV, getFractionalSecondsAsBigDecimal, $BigDecimal*, $AbstractDateTimeDV$DateTimeData*)},
	{"getTime", "(Ljava/lang/String;IILcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getTime, void, $String*, int32_t, int32_t, $AbstractDateTimeDV$DateTimeData*), "java.lang.RuntimeException"},
	{"getTimeZone", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;II)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getTimeZone, void, $String*, $AbstractDateTimeDV$DateTimeData*, int32_t, int32_t), "java.lang.RuntimeException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getXMLGregorianCalendar, $XMLGregorianCalendar*, $AbstractDateTimeDV$DateTimeData*)},
	{"getYearMonth", "(Ljava/lang/String;IILcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, getYearMonth, int32_t, $String*, int32_t, int32_t, $AbstractDateTimeDV$DateTimeData*), "java.lang.RuntimeException"},
	{"indexOf", "(Ljava/lang/String;IIC)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, indexOf, int32_t, $String*, int32_t, int32_t, char16_t)},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV, isIdentical, bool, Object$*, Object$*)},
	{"isLeapYear", "(I)Z", nullptr, $PRIVATE, $method(AbstractDateTimeDV, isLeapYear, bool, int32_t)},
	{"isNextCharUTCSign", "(Ljava/lang/String;II)Z", nullptr, $PROTECTED | $FINAL, $method(AbstractDateTimeDV, isNextCharUTCSign, bool, $String*, int32_t, int32_t)},
	{"maxDayInMonthFor", "(II)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, maxDayInMonthFor, int32_t, int32_t, int32_t)},
	{"mod", "(III)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, mod, int32_t, int32_t, int32_t, int32_t)},
	{"modulo", "(III)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, modulo, int32_t, int32_t, int32_t, int32_t)},
	{"normalize", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, normalize, void, $AbstractDateTimeDV$DateTimeData*)},
	{"parseInt", "(Ljava/lang/String;II)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, parseInt, int32_t, $String*, int32_t, int32_t), "java.lang.NumberFormatException"},
	{"parseIntYear", "(Ljava/lang/String;I)I", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, parseIntYear, int32_t, $String*, int32_t)},
	{"parseSecond", "(Ljava/lang/String;II)D", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, parseSecond, double, $String*, int32_t, int32_t), "java.lang.NumberFormatException"},
	{"parseTimeZone", "(Ljava/lang/String;IILcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, parseTimeZone, void, $String*, int32_t, int32_t, $AbstractDateTimeDV$DateTimeData*), "java.lang.RuntimeException"},
	{"resetDateObj", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, resetDateObj, void, $AbstractDateTimeDV$DateTimeData*)},
	{"saveUnnormalized", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, saveUnnormalized, void, $AbstractDateTimeDV$DateTimeData*)},
	{"validateDateTime", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDateTimeDV, validateDateTime, void, $AbstractDateTimeDV$DateTimeData*)},
	{}
};

$InnerClassInfo _AbstractDateTimeDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV$DateTimeData", "com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV", "DateTimeData", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractDateTimeDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	_AbstractDateTimeDV_FieldInfo_,
	_AbstractDateTimeDV_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDateTimeDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV$DateTimeData"
};

$Object* allocate$AbstractDateTimeDV($Class* clazz) {
	return $of($alloc(AbstractDateTimeDV));
}

$DatatypeFactory* AbstractDateTimeDV::datatypeFactory = nullptr;

void AbstractDateTimeDV::init$() {
	$TypeValidator::init$();
}

int16_t AbstractDateTimeDV::getAllowedFacets() {
	return ((int16_t)(((((($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_MAXINCLUSIVE) | $XSSimpleTypeDecl::FACET_MININCLUSIVE) | $XSSimpleTypeDecl::FACET_MAXEXCLUSIVE) | $XSSimpleTypeDecl::FACET_MINEXCLUSIVE));
}

bool AbstractDateTimeDV::isIdentical(Object$* value1, Object$* value2) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($AbstractDateTimeDV$DateTimeData, value1)) || !($instanceOf($AbstractDateTimeDV$DateTimeData, value2))) {
		return false;
	}
	$var($AbstractDateTimeDV$DateTimeData, v1, $cast($AbstractDateTimeDV$DateTimeData, value1));
	$var($AbstractDateTimeDV$DateTimeData, v2, $cast($AbstractDateTimeDV$DateTimeData, value2));
	if (($nc(v1)->timezoneHr == $nc(v2)->timezoneHr) && (v1->timezoneMin == v2->timezoneMin)) {
		return v1->equals(v2);
	}
	return false;
}

int32_t AbstractDateTimeDV::compare(Object$* value1, Object$* value2) {
	return compareDates(($cast($AbstractDateTimeDV$DateTimeData, value1)), ($cast($AbstractDateTimeDV$DateTimeData, value2)), true);
}

int16_t AbstractDateTimeDV::compareDates($AbstractDateTimeDV$DateTimeData* date1, $AbstractDateTimeDV$DateTimeData* date2, bool strict) {
	if ($nc(date1)->utc == $nc(date2)->utc) {
		return compareOrder(date1, date2);
	}
	int16_t c1 = 0;
	int16_t c2 = 0;
	$var($AbstractDateTimeDV$DateTimeData, tempDate, $new($AbstractDateTimeDV$DateTimeData, nullptr, this));
	if ($nc(date1)->utc == u'Z') {
		cloneDate(date2, tempDate);
		tempDate->timezoneHr = 14;
		tempDate->timezoneMin = 0;
		tempDate->utc = u'+';
		normalize(tempDate);
		c1 = compareOrder(date1, tempDate);
		if (c1 == $TypeValidator::LESS_THAN) {
			return c1;
		}
		cloneDate(date2, tempDate);
		tempDate->timezoneHr = -14;
		tempDate->timezoneMin = 0;
		tempDate->utc = u'-';
		normalize(tempDate);
		c2 = compareOrder(date1, tempDate);
		if (c2 == $TypeValidator::GREATER_THAN) {
			return c2;
		}
		return $TypeValidator::INDETERMINATE;
	} else if ($nc(date2)->utc == u'Z') {
		cloneDate(date1, tempDate);
		tempDate->timezoneHr = -14;
		tempDate->timezoneMin = 0;
		tempDate->utc = u'-';
		normalize(tempDate);
		c1 = compareOrder(tempDate, date2);
		if (c1 == $TypeValidator::LESS_THAN) {
			return c1;
		}
		cloneDate(date1, tempDate);
		tempDate->timezoneHr = 14;
		tempDate->timezoneMin = 0;
		tempDate->utc = u'+';
		normalize(tempDate);
		c2 = compareOrder(tempDate, date2);
		if (c2 == $TypeValidator::GREATER_THAN) {
			return c2;
		}
		return $TypeValidator::INDETERMINATE;
	}
	return $TypeValidator::INDETERMINATE;
}

int16_t AbstractDateTimeDV::compareOrder($AbstractDateTimeDV$DateTimeData* date1, $AbstractDateTimeDV$DateTimeData* date2) {
	if ($nc(date1)->position < 1) {
		if (date1->year < $nc(date2)->year) {
			return (int16_t)-1;
		}
		if (date1->year > $nc(date2)->year) {
			return (int16_t)1;
		}
	}
	if ($nc(date1)->position < 2) {
		if (date1->month < $nc(date2)->month) {
			return (int16_t)-1;
		}
		if (date1->month > $nc(date2)->month) {
			return (int16_t)1;
		}
	}
	if ($nc(date1)->day < $nc(date2)->day) {
		return (int16_t)-1;
	}
	if ($nc(date1)->day > $nc(date2)->day) {
		return (int16_t)1;
	}
	if ($nc(date1)->hour < $nc(date2)->hour) {
		return (int16_t)-1;
	}
	if ($nc(date1)->hour > $nc(date2)->hour) {
		return (int16_t)1;
	}
	if ($nc(date1)->minute < $nc(date2)->minute) {
		return (int16_t)-1;
	}
	if ($nc(date1)->minute > $nc(date2)->minute) {
		return (int16_t)1;
	}
	if ($nc(date1)->second < $nc(date2)->second) {
		return (int16_t)-1;
	}
	if ($nc(date1)->second > $nc(date2)->second) {
		return (int16_t)1;
	}
	if ($nc(date1)->utc < $nc(date2)->utc) {
		return (int16_t)-1;
	}
	if ($nc(date1)->utc > $nc(date2)->utc) {
		return (int16_t)1;
	}
	return (int16_t)0;
}

void AbstractDateTimeDV::getTime($String* buffer, int32_t start, int32_t end, $AbstractDateTimeDV$DateTimeData* data) {
	int32_t stop = start + 2;
	$nc(data)->hour = parseInt(buffer, start, stop);
	if ($nc(buffer)->charAt(stop++) != u':') {
		$throwNew($RuntimeException, "Error in parsing time zone"_s);
	}
	start = stop;
	stop = stop + 2;
	data->minute = parseInt(buffer, start, stop);
	if ($nc(buffer)->charAt(stop++) != u':') {
		$throwNew($RuntimeException, "Error in parsing time zone"_s);
	}
	int32_t sign = findUTCSign(buffer, start, end);
	start = stop;
	stop = sign < 0 ? end : sign;
	data->second = parseSecond(buffer, start, stop);
	if (sign > 0) {
		getTimeZone(buffer, data, sign, end);
	}
}

int32_t AbstractDateTimeDV::getDate($String* buffer, int32_t start, int32_t end, $AbstractDateTimeDV$DateTimeData* date) {
	start = getYearMonth(buffer, start, end, date);
	if ($nc(buffer)->charAt(start++) != u'-') {
		$throwNew($RuntimeException, "CCYY-MM must be followed by \'-\' sign"_s);
	}
	int32_t stop = start + 2;
	$nc(date)->day = parseInt(buffer, start, stop);
	return stop;
}

int32_t AbstractDateTimeDV::getYearMonth($String* buffer, int32_t start, int32_t end, $AbstractDateTimeDV$DateTimeData* date) {
	if ($nc(buffer)->charAt(0) == u'-') {
		++start;
	}
	int32_t i = indexOf(buffer, start, end, u'-');
	if (i == -1) {
		$throwNew($RuntimeException, "Year separator is missing or misplaced"_s);
	}
	int32_t length = i - start;
	if (length < 4) {
		$throwNew($RuntimeException, "Year must have \'CCYY\' format"_s);
	} else if (length > 4 && $nc(buffer)->charAt(start) == u'0') {
		$throwNew($RuntimeException, "Leading zeros are required if the year value would otherwise have fewer than four digits; otherwise they are forbidden"_s);
	}
	$nc(date)->year = parseIntYear(buffer, i);
	if ($nc(buffer)->charAt(i) != u'-') {
		$throwNew($RuntimeException, "CCYY must be followed by \'-\' sign"_s);
	}
	start = ++i;
	i = start + 2;
	date->month = parseInt(buffer, start, i);
	return i;
}

void AbstractDateTimeDV::parseTimeZone($String* buffer, int32_t start, int32_t end, $AbstractDateTimeDV$DateTimeData* date) {
	if (start < end) {
		if (!isNextCharUTCSign(buffer, start, end)) {
			$throwNew($RuntimeException, "Error in month parsing"_s);
		} else {
			getTimeZone(buffer, date, start, end);
		}
	}
}

void AbstractDateTimeDV::getTimeZone($String* buffer, $AbstractDateTimeDV$DateTimeData* data, int32_t sign, int32_t end) {
	$nc(data)->utc = $nc(buffer)->charAt(sign);
	if (buffer->charAt(sign) == u'Z') {
		if (end > (++sign)) {
			$throwNew($RuntimeException, "Error in parsing time zone"_s);
		}
		return;
	}
	if (sign <= (end - 6)) {
		int32_t negate = buffer->charAt(sign) == u'-' ? -1 : 1;
		int32_t stop = ++sign + 2;
		data->timezoneHr = negate * parseInt(buffer, sign, stop);
		if (buffer->charAt(stop++) != u':') {
			$throwNew($RuntimeException, "Error in parsing time zone"_s);
		}
		data->timezoneMin = negate * parseInt(buffer, stop, stop + 2);
		if (stop + 2 != end) {
			$throwNew($RuntimeException, "Error in parsing time zone"_s);
		}
		if (data->timezoneHr != 0 || data->timezoneMin != 0) {
			data->normalized = false;
		}
	} else {
		$throwNew($RuntimeException, "Error in parsing time zone"_s);
	}
}

int32_t AbstractDateTimeDV::indexOf($String* buffer, int32_t start, int32_t end, char16_t ch) {
	for (int32_t i = start; i < end; ++i) {
		if ($nc(buffer)->charAt(i) == ch) {
			return i;
		}
	}
	return -1;
}

void AbstractDateTimeDV::validateDateTime($AbstractDateTimeDV$DateTimeData* data) {
	if ($nc(data)->year == 0) {
		$throwNew($RuntimeException, "The year \"0000\" is an illegal year value"_s);
	}
	if ($nc(data)->month < 1 || $nc(data)->month > 12) {
		$throwNew($RuntimeException, "The month must have values 1 to 12"_s);
	}
	if ($nc(data)->day > maxDayInMonthFor(data->year, data->month) || $nc(data)->day < 1) {
		$throwNew($RuntimeException, "The day must have values 1 to 31"_s);
	}
	if ($nc(data)->hour > 23 || $nc(data)->hour < 0) {
		if (data->hour == 24 && data->minute == 0 && data->second == 0) {
			data->hour = 0;
			int32_t var$0 = ++data->day;
			if (var$0 > maxDayInMonthFor(data->year, data->month)) {
				data->day = 1;
				if (++data->month > 12) {
					data->month = 1;
					if (++data->year == 0) {
						data->year = 1;
					}
				}
			}
		} else {
			$throwNew($RuntimeException, "Hour must have values 0-23, unless 24:00:00"_s);
		}
	}
	if ($nc(data)->minute > 59 || $nc(data)->minute < 0) {
		$throwNew($RuntimeException, "Minute must have values 0-59"_s);
	}
	if ($nc(data)->second >= 60 || $nc(data)->second < 0) {
		$throwNew($RuntimeException, "Second must have values 0-59"_s);
	}
	if ($nc(data)->timezoneHr > 14 || $nc(data)->timezoneHr < -14) {
		$throwNew($RuntimeException, "Time zone should have range -14:00 to +14:00"_s);
	} else if ((data->timezoneHr == 14 || data->timezoneHr == -14) && data->timezoneMin != 0) {
		$throwNew($RuntimeException, "Time zone should have range -14:00 to +14:00"_s);
	} else if (data->timezoneMin > 59 || data->timezoneMin < -59) {
		$throwNew($RuntimeException, "Minute must have values 0-59"_s);
	}
}

int32_t AbstractDateTimeDV::findUTCSign($String* buffer, int32_t start, int32_t end) {
	int32_t c = 0;
	for (int32_t i = start; i < end; ++i) {
		c = $nc(buffer)->charAt(i);
		if (c == u'Z' || c == u'+' || c == u'-') {
			return i;
		}
	}
	return -1;
}

bool AbstractDateTimeDV::isNextCharUTCSign($String* buffer, int32_t start, int32_t end) {
	if (start < end) {
		char16_t c = $nc(buffer)->charAt(start);
		return (c == u'Z' || c == u'+' || c == u'-');
	}
	return false;
}

int32_t AbstractDateTimeDV::parseInt($String* buffer, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	int32_t radix = 10;
	int32_t result = 0;
	int32_t digit = 0;
	int32_t limit = -$Integer::MAX_VALUE;
	int32_t multmin = $div(limit, radix);
	int32_t i = start;
	do {
		digit = getDigit($nc(buffer)->charAt(i));
		if (digit < 0) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		if (result < multmin) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		result *= radix;
		if (result < limit + digit) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		result -= digit;
	} while (++i < end);
	return -result;
}

int32_t AbstractDateTimeDV::parseIntYear($String* buffer, int32_t end) {
	$useLocalCurrentObjectStackCache();
	int32_t radix = 10;
	int32_t result = 0;
	bool negative = false;
	int32_t i = 0;
	int32_t limit = 0;
	int32_t multmin = 0;
	int32_t digit = 0;
	if ($nc(buffer)->charAt(0) == u'-') {
		negative = true;
		limit = $Integer::MIN_VALUE;
		++i;
	} else {
		limit = -$Integer::MAX_VALUE;
	}
	multmin = $div(limit, radix);
	while (i < end) {
		digit = getDigit($nc(buffer)->charAt(i++));
		if (digit < 0) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		if (result < multmin) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		result *= radix;
		if (result < limit + digit) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
		result -= digit;
	}
	if (negative) {
		if (i > 1) {
			return result;
		} else {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
	}
	return -result;
}

void AbstractDateTimeDV::normalize($AbstractDateTimeDV$DateTimeData* date) {
	int32_t negate = -1;
	int32_t temp = $nc(date)->minute + negate * date->timezoneMin;
	int32_t carry = fQuotient(temp, 60);
	date->minute = mod(temp, 60, carry);
	temp = date->hour + negate * date->timezoneHr + carry;
	carry = fQuotient(temp, 24);
	date->hour = mod(temp, 24, carry);
	date->day = date->day + carry;
	while (true) {
		temp = maxDayInMonthFor(date->year, date->month);
		if (date->day < 1) {
			date->day = date->day + maxDayInMonthFor(date->year, date->month - 1);
			carry = -1;
		} else if (date->day > temp) {
			date->day = date->day - temp;
			carry = 1;
		} else {
			break;
		}
		temp = date->month + carry;
		date->month = modulo(temp, 1, 13);
		date->year = date->year + fQuotient(temp, 1, 13);
		if (date->year == 0 && !$Constants::SCHEMA_1_1_SUPPORT) {
			date->year = (date->timezoneHr < 0 || date->timezoneMin < 0) ? 1 : -1;
		}
	}
	date->utc = u'Z';
}

void AbstractDateTimeDV::saveUnnormalized($AbstractDateTimeDV$DateTimeData* date) {
	$nc(date)->unNormYear = date->year;
	date->unNormMonth = date->month;
	date->unNormDay = date->day;
	date->unNormHour = date->hour;
	date->unNormMinute = date->minute;
	date->unNormSecond = date->second;
}

void AbstractDateTimeDV::resetDateObj($AbstractDateTimeDV$DateTimeData* data) {
	$nc(data)->year = 0;
	data->month = 0;
	data->day = 0;
	data->hour = 0;
	data->minute = 0;
	data->second = (double)0;
	data->utc = 0;
	data->timezoneHr = 0;
	data->timezoneMin = 0;
}

int32_t AbstractDateTimeDV::maxDayInMonthFor(int32_t year, int32_t month) {
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	} else if (month == 2) {
		if (isLeapYear(year)) {
			return 29;
		} else {
			return 28;
		}
	} else {
		return 31;
	}
}

bool AbstractDateTimeDV::isLeapYear(int32_t year) {
	return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}

int32_t AbstractDateTimeDV::mod(int32_t a, int32_t b, int32_t quotient) {
	return (a - quotient * b);
}

int32_t AbstractDateTimeDV::fQuotient(int32_t a, int32_t b) {
	return $cast(int32_t, $Math::floor((float)a / b));
}

int32_t AbstractDateTimeDV::modulo(int32_t temp, int32_t low, int32_t high) {
	int32_t a = temp - low;
	int32_t b = high - low;
	return (mod(a, b, fQuotient(a, b)) + low);
}

int32_t AbstractDateTimeDV::fQuotient(int32_t temp, int32_t low, int32_t high) {
	return fQuotient(temp - low, high - low);
}

$String* AbstractDateTimeDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 25));
	append(message, $nc(date)->year, 4);
	message->append(u'-');
	append(message, $nc(date)->month, 2);
	message->append(u'-');
	append(message, $nc(date)->day, 2);
	message->append(u'T');
	append(message, $nc(date)->hour, 2);
	message->append(u':');
	append(message, $nc(date)->minute, 2);
	message->append(u':');
	append(message, $nc(date)->second);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

void AbstractDateTimeDV::append($StringBuffer* message, int32_t value, int32_t nch) {
	if (value == $Integer::MIN_VALUE) {
		$nc(message)->append(value);
		return;
	}
	if (value < 0) {
		$nc(message)->append(u'-');
		value = -value;
	}
	if (nch == 4) {
		if (value < 10) {
			$nc(message)->append("000"_s);
		} else if (value < 100) {
			$nc(message)->append("00"_s);
		} else if (value < 1000) {
			$nc(message)->append(u'0');
		}
		$nc(message)->append(value);
	} else if (nch == 2) {
		if (value < 10) {
			$nc(message)->append(u'0');
		}
		$nc(message)->append(value);
	} else if (value != 0) {
		$nc(message)->append((char16_t)value);
	}
}

void AbstractDateTimeDV::append($StringBuffer* message, double value) {
	if (value < 0) {
		$nc(message)->append(u'-');
		value = -value;
	}
	if (value < 10) {
		$nc(message)->append(u'0');
	}
	append2(message, value);
}

void AbstractDateTimeDV::append2($StringBuffer* message, double value) {
	int32_t intValue = $cast(int32_t, value);
	if (value == intValue) {
		$nc(message)->append(intValue);
	} else {
		append3(message, value);
	}
}

void AbstractDateTimeDV::append3($StringBuffer* message, double value) {
	$var($String, d, $String::valueOf(value));
	int32_t eIndex = d->indexOf((int32_t)u'E');
	if (eIndex == -1) {
		$nc(message)->append(d);
		return;
	}
	int32_t exp = 0;
	if (value < 1) {
		try {
			exp = parseInt(d, eIndex + 2, d->length());
		} catch ($Exception& e) {
			$nc(message)->append(d);
			return;
		}
		$nc(message)->append("0."_s);
		for (int32_t i = 1; i < exp; ++i) {
			message->append(u'0');
		}
		int32_t end = eIndex - 1;
		while (end > 0) {
			char16_t c = d->charAt(end);
			if (c != u'0') {
				break;
			}
			--end;
		}
		for (int32_t i = 0; i <= end; ++i) {
			char16_t c = d->charAt(i);
			if (c != u'.') {
				message->append(c);
			}
		}
	} else {
		try {
			exp = parseInt(d, eIndex + 1, d->length());
		} catch ($Exception& e) {
			$nc(message)->append(d);
			return;
		}
		int32_t integerEnd = exp + 2;
		for (int32_t i = 0; i < eIndex; ++i) {
			char16_t c = d->charAt(i);
			if (c != u'.') {
				if (i == integerEnd) {
					$nc(message)->append(u'.');
				}
				$nc(message)->append(c);
			}
		}
		for (int32_t i = integerEnd - eIndex; i > 0; --i) {
			$nc(message)->append(u'0');
		}
	}
}

double AbstractDateTimeDV::parseSecond($String* buffer, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	int32_t dot = -1;
	for (int32_t i = start; i < end; ++i) {
		char16_t ch = $nc(buffer)->charAt(i);
		if (ch == u'.') {
			dot = i;
		} else if (ch > u'9' || ch < u'0') {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
	}
	if (dot == -1) {
		if (start + 2 != end) {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
	} else if (start + 2 != dot || dot + 1 == end) {
		$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
	}
	return $Double::parseDouble($($nc(buffer)->substring(start, end)));
}

void AbstractDateTimeDV::cloneDate($AbstractDateTimeDV$DateTimeData* finalValue, $AbstractDateTimeDV$DateTimeData* tempDate) {
	$nc(tempDate)->year = $nc(finalValue)->year;
	tempDate->month = finalValue->month;
	tempDate->day = finalValue->day;
	tempDate->hour = finalValue->hour;
	tempDate->minute = finalValue->minute;
	tempDate->second = finalValue->second;
	tempDate->utc = finalValue->utc;
	tempDate->timezoneHr = finalValue->timezoneHr;
	tempDate->timezoneMin = finalValue->timezoneMin;
}

$XMLGregorianCalendar* AbstractDateTimeDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* data) {
	return nullptr;
}

$Duration* AbstractDateTimeDV::getDuration($AbstractDateTimeDV$DateTimeData* data) {
	return nullptr;
}

$BigDecimal* AbstractDateTimeDV::getFractionalSecondsAsBigDecimal($AbstractDateTimeDV$DateTimeData* data) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer));
	append3(buf, $nc(data)->unNormSecond);
	$var($String, value, buf->toString());
	int32_t index = $nc(value)->indexOf((int32_t)u'.');
	if (index == -1) {
		return nullptr;
	}
	$assign(value, value->substring(index));
	$var($BigDecimal, _val, $new($BigDecimal, value));
	if (_val->compareTo($($BigDecimal::valueOf((int64_t)0))) == 0) {
		return nullptr;
	}
	return _val;
}

void clinit$AbstractDateTimeDV($Class* class$) {
	$assignStatic(AbstractDateTimeDV::datatypeFactory, $new($DatatypeFactoryImpl));
}

AbstractDateTimeDV::AbstractDateTimeDV() {
}

$Class* AbstractDateTimeDV::load$($String* name, bool initialize) {
	$loadClass(AbstractDateTimeDV, name, initialize, &_AbstractDateTimeDV_ClassInfo_, clinit$AbstractDateTimeDV, allocate$AbstractDateTimeDV);
	return class$;
}

$Class* AbstractDateTimeDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com