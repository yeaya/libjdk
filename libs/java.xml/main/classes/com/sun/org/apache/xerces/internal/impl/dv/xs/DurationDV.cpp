#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DurationDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDateTimeException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/Duration.h>
#include <jcpp.h>

#undef DATETIMES
#undef DAYTIMEDURATION_TYPE
#undef DURATION_TYPE
#undef FIELD_UNDEFINED
#undef INDETERMINATE
#undef POSITIVE_INFINITY
#undef YEARMONTHDURATION_TYPE

using $AbstractDateTimeDV$DateTimeDataArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData>;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $SchemaDateTimeException = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDateTimeException;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringBuffer = ::java::lang::StringBuffer;
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

$AbstractDateTimeDV$DateTimeDataArray* DurationDV::DATETIMES = nullptr;

void DurationDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* DurationDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return parse(content, DurationDV::DURATION_TYPE);
	} catch ($Exception& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			content,
			"duration"_s
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* DurationDV::parse($String* str, int32_t durationType) {
	int32_t len = $nc(str)->length();
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t start = 0;
	char16_t c = str->charAt(start++);
	if (c != u'P' && c != u'-') {
		$throwNew($SchemaDateTimeException);
	} else {
		date->utc = (c == u'-') ? u'-' : 0;
		if (c == u'-' && str->charAt(start++) != u'P') {
			$throwNew($SchemaDateTimeException);
		}
	}
	int32_t negate = 1;
	if (date->utc == u'-') {
		negate = -1;
	}
	bool designator = false;
	int32_t endDate = indexOf(str, start, len, u'T');
	if (endDate == -1) {
		endDate = len;
	} else if (durationType == DurationDV::YEARMONTHDURATION_TYPE) {
		$throwNew($SchemaDateTimeException);
	}
	int32_t end = indexOf(str, start, endDate, u'Y');
	if (end != -1) {
		if (durationType == DurationDV::DAYTIMEDURATION_TYPE) {
			$throwNew($SchemaDateTimeException);
		}
		date->year = negate * parseInt(str, start, end);
		start = end + 1;
		designator = true;
	}
	end = indexOf(str, start, endDate, u'M');
	if (end != -1) {
		if (durationType == DurationDV::DAYTIMEDURATION_TYPE) {
			$throwNew($SchemaDateTimeException);
		}
		date->month = negate * parseInt(str, start, end);
		start = end + 1;
		designator = true;
	}
	end = indexOf(str, start, endDate, u'D');
	if (end != -1) {
		if (durationType == DurationDV::YEARMONTHDURATION_TYPE) {
			$throwNew($SchemaDateTimeException);
		}
		date->day = negate * parseInt(str, start, end);
		start = end + 1;
		designator = true;
	}
	if (len == endDate && start != len) {
		$throwNew($SchemaDateTimeException);
	}
	if (len != endDate) {
		end = indexOf(str, ++start, len, u'H');
		if (end != -1) {
			date->hour = negate * parseInt(str, start, end);
			start = end + 1;
			designator = true;
		}
		end = indexOf(str, start, len, u'M');
		if (end != -1) {
			date->minute = negate * parseInt(str, start, end);
			start = end + 1;
			designator = true;
		}
		end = indexOf(str, start, len, u'S');
		if (end != -1) {
			date->second = negate * parseSecond(str, start, end);
			start = end + 1;
			designator = true;
		}
		if (start != len || str->charAt(--start) == u'T') {
			$throwNew($SchemaDateTimeException);
		}
	}
	if (!designator) {
		$throwNew($SchemaDateTimeException);
	}
	return date;
}

int16_t DurationDV::compareDates($AbstractDateTimeDV$DateTimeData* date1, $AbstractDateTimeDV$DateTimeData* date2, bool strict) {
	$useLocalObjectStack();
	int16_t resultA = 0;
	int16_t resultB = $TypeValidator::INDETERMINATE;
	resultA = compareOrder(date1, date2);
	if (resultA == 0) {
		return 0;
	}
	$var($AbstractDateTimeDV$DateTimeDataArray, result, $new($AbstractDateTimeDV$DateTimeDataArray, 2));
	result->set(0, $$new($AbstractDateTimeDV$DateTimeData, nullptr, this));
	result->set(1, $$new($AbstractDateTimeDV$DateTimeData, nullptr, this));
	$var($AbstractDateTimeDV$DateTimeData, tempA, addDuration(date1, DurationDV::DATETIMES->get(0), result->get(0)));
	$var($AbstractDateTimeDV$DateTimeData, tempB, addDuration(date2, DurationDV::DATETIMES->get(0), result->get(1)));
	resultA = compareOrder(tempA, tempB);
	if (resultA == $TypeValidator::INDETERMINATE) {
		return $TypeValidator::INDETERMINATE;
	}
	$assign(tempA, addDuration(date1, DurationDV::DATETIMES->get(1), result->get(0)));
	$assign(tempB, addDuration(date2, DurationDV::DATETIMES->get(1), result->get(1)));
	resultB = compareOrder(tempA, tempB);
	resultA = compareResults(resultA, resultB, strict);
	if (resultA == $TypeValidator::INDETERMINATE) {
		return $TypeValidator::INDETERMINATE;
	}
	$assign(tempA, addDuration(date1, DurationDV::DATETIMES->get(2), result->get(0)));
	$assign(tempB, addDuration(date2, DurationDV::DATETIMES->get(2), result->get(1)));
	resultB = compareOrder(tempA, tempB);
	resultA = compareResults(resultA, resultB, strict);
	if (resultA == $TypeValidator::INDETERMINATE) {
		return $TypeValidator::INDETERMINATE;
	}
	$assign(tempA, addDuration(date1, DurationDV::DATETIMES->get(3), result->get(0)));
	$assign(tempB, addDuration(date2, DurationDV::DATETIMES->get(3), result->get(1)));
	resultB = compareOrder(tempA, tempB);
	resultA = compareResults(resultA, resultB, strict);
	return resultA;
}

int16_t DurationDV::compareResults(int16_t resultA, int16_t resultB, bool strict) {
	if (resultB == $TypeValidator::INDETERMINATE) {
		return $TypeValidator::INDETERMINATE;
	} else if (resultA != resultB && strict) {
		return $TypeValidator::INDETERMINATE;
	} else if (resultA != resultB && !strict) {
		if (resultA != 0 && resultB != 0) {
			return $TypeValidator::INDETERMINATE;
		} else {
			return (resultA != 0) ? resultA : resultB;
		}
	}
	return resultA;
}

$AbstractDateTimeDV$DateTimeData* DurationDV::addDuration($AbstractDateTimeDV$DateTimeData* date, $AbstractDateTimeDV$DateTimeData* addto, $AbstractDateTimeDV$DateTimeData* duration) {
	resetDateObj(duration);
	int32_t temp = $nc(addto)->month + $nc(date)->month;
	$nc(duration)->month = modulo(temp, 1, 13);
	int32_t carry = fQuotient(temp, 1, 13);
	duration->year = addto->year + date->year + carry;
	double dtemp = addto->second + date->second;
	carry = $cast(int32_t, $Math::floor(dtemp / 60));
	duration->second = dtemp - carry * 60;
	temp = addto->minute + date->minute + carry;
	carry = fQuotient(temp, 60);
	duration->minute = mod(temp, 60, carry);
	temp = addto->hour + date->hour + carry;
	carry = fQuotient(temp, 24);
	duration->hour = mod(temp, 24, carry);
	duration->day = addto->day + date->day + carry;
	while (true) {
		temp = maxDayInMonthFor(duration->year, duration->month);
		if (duration->day < 1) {
			duration->day = duration->day + maxDayInMonthFor(duration->year, duration->month - 1);
			carry = -1;
		} else if (duration->day > temp) {
			duration->day = duration->day - temp;
			carry = 1;
		} else {
			break;
		}
		temp = duration->month + carry;
		duration->month = modulo(temp, 1, 13);
		duration->year = duration->year + fQuotient(temp, 1, 13);
	}
	duration->utc = u'Z';
	return duration;
}

double DurationDV::parseSecond($String* buffer, int32_t start, int32_t end) {
	$useLocalObjectStack();
	int32_t dot = -1;
	for (int32_t i = start; i < end; ++i) {
		char16_t ch = $nc(buffer)->charAt(i);
		if (ch == u'.') {
			dot = i;
		} else if (ch > u'9' || ch < u'0') {
			$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
		}
	}
	if (dot + 1 == end) {
		$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
	}
	double value = $Double::parseDouble($($nc(buffer)->substring(start, end)));
	if (value == $Double::POSITIVE_INFINITY) {
		$throwNew($NumberFormatException, $$str({"\'"_s, buffer, "\' has wrong format"_s}));
	}
	return value;
}

$String* DurationDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 30));
	if ($nc(date)->year < 0 || date->month < 0 || date->day < 0 || date->hour < 0 || date->minute < 0 || date->second < 0) {
		message->append(u'-');
	}
	message->append(u'P');
	message->append((date->year < 0 ? -1 : 1) * date->year);
	message->append(u'Y');
	message->append((date->month < 0 ? -1 : 1) * date->month);
	message->append(u'M');
	message->append((date->day < 0 ? -1 : 1) * date->day);
	message->append(u'D');
	message->append(u'T');
	message->append((date->hour < 0 ? -1 : 1) * date->hour);
	message->append(u'H');
	message->append((date->minute < 0 ? -1 : 1) * date->minute);
	message->append(u'M');
	append2(message, (date->second < 0 ? -1 : 1) * date->second);
	message->append(u'S');
	return message->toString();
}

$Duration* DurationDV::getDuration($AbstractDateTimeDV$DateTimeData* date) {
	$useLocalObjectStack();
	int32_t sign = 1;
	if ($nc(date)->year < 0 || date->month < 0 || date->day < 0 || date->hour < 0 || date->minute < 0 || date->second < 0) {
		sign = -1;
	}
	$init($AbstractDateTimeDV);
	bool var$0 = sign == 1;
	$var($BigInteger, var$1, date->year != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->year) : ($BigInteger*)nullptr);
	$var($BigInteger, var$2, date->month != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->month) : ($BigInteger*)nullptr);
	$var($BigInteger, var$3, date->day != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->day) : ($BigInteger*)nullptr);
	$var($BigInteger, var$4, date->hour != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->hour) : ($BigInteger*)nullptr);
	$var($BigInteger, var$5, date->minute != $DatatypeConstants::FIELD_UNDEFINED ? $BigInteger::valueOf(sign * date->minute) : ($BigInteger*)nullptr);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newDuration(var$0, var$1, var$2, var$3, var$4, var$5, date->second != $DatatypeConstants::FIELD_UNDEFINED ? $$new($BigDecimal, $($String::valueOf(sign * date->second))) : ($BigDecimal*)nullptr);
}

void DurationDV::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(DurationDV::DATETIMES, $new($AbstractDateTimeDV$DateTimeDataArray, {
		$$new($AbstractDateTimeDV$DateTimeData, 1696, 9, 1, 0, 0, 0, u'Z', nullptr, true, nullptr),
		$$new($AbstractDateTimeDV$DateTimeData, 1697, 2, 1, 0, 0, 0, u'Z', nullptr, true, nullptr),
		$$new($AbstractDateTimeDV$DateTimeData, 1903, 3, 1, 0, 0, 0, u'Z', nullptr, true, nullptr),
		$$new($AbstractDateTimeDV$DateTimeData, 1903, 7, 1, 0, 0, 0, u'Z', nullptr, true, nullptr)
	}));
}

DurationDV::DurationDV() {
}

$Class* DurationDV::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DURATION_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DurationDV, DURATION_TYPE)},
		{"YEARMONTHDURATION_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DurationDV, YEARMONTHDURATION_TYPE)},
		{"DAYTIMEDURATION_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DurationDV, DAYTIMEDURATION_TYPE)},
		{"DATETIMES", "[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationDV, DATETIMES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DurationDV, init$, void)},
		{"addDuration", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PRIVATE, $method(DurationDV, addDuration, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*)},
		{"compareDates", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;Z)S", nullptr, $PROTECTED, $virtualMethod(DurationDV, compareDates, int16_t, $AbstractDateTimeDV$DateTimeData*, $AbstractDateTimeDV$DateTimeData*, bool)},
		{"compareResults", "(SSZ)S", nullptr, $PRIVATE, $method(DurationDV, compareResults, int16_t, int16_t, int16_t, bool)},
		{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(DurationDV, dateToString, $String*, $AbstractDateTimeDV$DateTimeData*)},
		{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DurationDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{"getDuration", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/Duration;", nullptr, $PROTECTED, $virtualMethod(DurationDV, getDuration, $Duration*, $AbstractDateTimeDV$DateTimeData*)},
		{"parse", "(Ljava/lang/String;I)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, $virtualMethod(DurationDV, parse, $AbstractDateTimeDV$DateTimeData*, $String*, int32_t), "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
		{"parseSecond", "(Ljava/lang/String;II)D", nullptr, $PROTECTED, $virtualMethod(DurationDV, parseSecond, double, $String*, int32_t, int32_t), "java.lang.NumberFormatException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.DurationDV",
		"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DurationDV, name, initialize, &classInfo$$, DurationDV::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DurationDV);
	});
	return class$;
}

$Class* DurationDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com