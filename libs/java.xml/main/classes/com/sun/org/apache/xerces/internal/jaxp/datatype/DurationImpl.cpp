#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl$DurationStream.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DatatypeMessageFormatter.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/RoundingMode.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <javax/xml/datatype/DatatypeConstants$Field.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef DAYS
#undef DAY_OF_MONTH
#undef DOWN
#undef FACTORS
#undef FIELDS
#undef FIELD_UNDEFINED
#undef GMT
#undef HOUR
#undef HOURS
#undef HOUR_OF_DAY
#undef INDETERMINATE
#undef MAX_VALUE
#undef MILLISECOND
#undef MINUTE
#undef MINUTES
#undef MONTH
#undef MONTHS
#undef SECOND
#undef SECONDS
#undef TEST_POINTS
#undef UP
#undef YEAR
#undef YEARS
#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $DatatypeConstants$FieldArray = $Array<::javax::xml::datatype::DatatypeConstants$Field>;
using $XMLGregorianCalendarArray = $Array<::javax::xml::datatype::XMLGregorianCalendar>;
using $DurationImpl$DurationStream = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl$DurationStream;
using $XMLGregorianCalendarImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl;
using $DatatypeMessageFormatter = ::com::sun::org::apache::xerces::internal::util::DatatypeMessageFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $RoundingMode = ::java::math::RoundingMode;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeConstants$Field = ::javax::xml::datatype::DatatypeConstants$Field;
using $Duration = ::javax::xml::datatype::Duration;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _DurationImpl_FieldInfo_[] = {
	{"FIELDS", "[Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, FIELDS)},
	{"GMT", "Ljava/util/TimeZone;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, GMT)},
	{"ZERO", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, ZERO)},
	{"MaxIntAsBigInt", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, MaxIntAsBigInt)},
	{"signum", "I", nullptr, $PROTECTED, $field(DurationImpl, signum$)},
	{"years", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DurationImpl, years)},
	{"months", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DurationImpl, months)},
	{"days", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DurationImpl, days)},
	{"hours", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DurationImpl, hours)},
	{"minutes", "Ljava/math/BigInteger;", nullptr, $PROTECTED, $field(DurationImpl, minutes)},
	{"seconds", "Ljava/math/BigDecimal;", nullptr, $PROTECTED, $field(DurationImpl, seconds)},
	{"TEST_POINTS", "[Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, TEST_POINTS)},
	{"FACTORS", "[Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DurationImpl, FACTORS)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DurationImpl, serialVersionUID)},
	{}
};

$MethodInfo _DurationImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)V", nullptr, $PROTECTED, $method(DurationImpl, init$, void, bool, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigDecimal*)},
	{"<init>", "(ZIIIIII)V", nullptr, $PROTECTED, $method(DurationImpl, init$, void, bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(DurationImpl, init$, void, int64_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(DurationImpl, init$, void, $String*), "java.lang.IllegalArgumentException"},
	{"add", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, add, $Duration*, $Duration*)},
	{"addTo", "(Ljava/util/Calendar;)V", nullptr, $PUBLIC, $virtualMethod(DurationImpl, addTo, void, $Calendar*)},
	{"addTo", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $virtualMethod(DurationImpl, addTo, void, $Date*)},
	{"alignSigns", "([Ljava/math/BigDecimal;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, alignSigns, void, $BigDecimalArray*, int32_t, int32_t)},
	{"calcSignum", "(Z)I", nullptr, $PROTECTED, $virtualMethod(DurationImpl, calcSignum, int32_t, bool)},
	{"checkMaxValue", "(Ljava/lang/Number;Ljavax/xml/datatype/DatatypeConstants$Field;)V", nullptr, $PRIVATE, $method(DurationImpl, checkMaxValue, void, $Number*, $DatatypeConstants$Field*)},
	{"compare", "(Ljavax/xml/datatype/Duration;)I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, compare, int32_t, $Duration*)},
	{"compareDates", "(Ljavax/xml/datatype/Duration;Ljavax/xml/datatype/Duration;)I", nullptr, $PRIVATE, $method(DurationImpl, compareDates, int32_t, $Duration*, $Duration*)},
	{"compareResults", "(II)I", nullptr, $PRIVATE, $method(DurationImpl, compareResults, int32_t, int32_t, int32_t)},
	{"getCalendarTimeInMillis", "(Ljava/util/Calendar;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, getCalendarTimeInMillis, int64_t, $Calendar*)},
	{"getDays", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getDays, int32_t)},
	{"getField", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getField, $Number*, $DatatypeConstants$Field*)},
	{"getFieldAsBigDecimal", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/math/BigDecimal;", nullptr, $PRIVATE, $method(DurationImpl, getFieldAsBigDecimal, $BigDecimal*, $DatatypeConstants$Field*)},
	{"getHours", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getHours, int32_t)},
	{"getInt", "(Ljavax/xml/datatype/DatatypeConstants$Field;)I", nullptr, $PRIVATE, $method(DurationImpl, getInt, int32_t, $DatatypeConstants$Field*)},
	{"getMinutes", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getMinutes, int32_t)},
	{"getMonths", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getMonths, int32_t)},
	{"getSeconds", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getSeconds, int32_t)},
	{"getSign", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getSign, int32_t)},
	{"getTimeInMillis", "(Ljava/util/Calendar;)J", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getTimeInMillis, int64_t, $Calendar*)},
	{"getTimeInMillis", "(Ljava/util/Date;)J", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getTimeInMillis, int64_t, $Date*)},
	{"getYears", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, getYears, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, hashCode, int32_t)},
	{"isDigit", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, isDigit, bool, char16_t)},
	{"isDigitOrPeriod", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, isDigitOrPeriod, bool, char16_t)},
	{"isSet", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Z", nullptr, $PUBLIC, $virtualMethod(DurationImpl, isSet, bool, $DatatypeConstants$Field*)},
	{"multiply", "(I)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, multiply, $Duration*, int32_t)},
	{"multiply", "(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, multiply, $Duration*, $BigDecimal*)},
	{"negate", "()Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, negate, $Duration*)},
	{"normalizeWith", "(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, normalizeWith, $Duration*, $Calendar*)},
	{"organizeParts", "(Ljava/lang/String;[Ljava/lang/String;[IILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, organizeParts, void, $String*, $StringArray*, $ints*, int32_t, $String*), "java.lang.IllegalArgumentException"},
	{"parseBigDecimal", "(Ljava/lang/String;Ljava/lang/String;I)Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, parseBigDecimal, $BigDecimal*, $String*, $String*, int32_t), "java.lang.IllegalArgumentException"},
	{"parseBigInteger", "(Ljava/lang/String;Ljava/lang/String;I)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, parseBigInteger, $BigInteger*, $String*, $String*, int32_t), "java.lang.IllegalArgumentException"},
	{"parsePiece", "(Ljava/lang/String;[I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, parsePiece, $String*, $String*, $ints*), "java.lang.IllegalArgumentException"},
	{"sanitize", "(Ljava/math/BigInteger;I)Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, sanitize, $BigDecimal*, $BigInteger*, int32_t)},
	{"sanitize", "(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;", nullptr, $STATIC, $staticMethod(DurationImpl, sanitize, $BigDecimal*, $BigDecimal*, int32_t)},
	{"signum", "()I", nullptr, $PUBLIC, $virtualMethod(DurationImpl, signum, int32_t)},
	{"subtract", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, subtract, $Duration*, $Duration*)},
	{"testNonNegative", "(Ljava/math/BigInteger;Ljavax/xml/datatype/DatatypeConstants$Field;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(DurationImpl, testNonNegative, void, $BigInteger*, $DatatypeConstants$Field*)},
	{"testNonNegative", "(Ljava/math/BigDecimal;Ljavax/xml/datatype/DatatypeConstants$Field;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(DurationImpl, testNonNegative, void, $BigDecimal*, $DatatypeConstants$Field*)},
	{"toBigInteger", "(Ljava/math/BigDecimal;Z)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(DurationImpl, toBigInteger, $BigInteger*, $BigDecimal*, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DurationImpl, toString, $String*)},
	{"toString", "(Ljava/math/BigDecimal;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DurationImpl, toString, $String*, $BigDecimal*)},
	{"wrap", "(I)Ljava/math/BigInteger;", nullptr, $PROTECTED | $STATIC, $staticMethod(DurationImpl, wrap, $BigInteger*, int32_t)},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DurationImpl, writeReplace, $Object*)},
	{}
};

$InnerClassInfo _DurationImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream", "com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl", "DurationStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DurationImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl",
	"javax.xml.datatype.Duration",
	"java.io.Serializable",
	_DurationImpl_FieldInfo_,
	_DurationImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DurationImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream"
};

$Object* allocate$DurationImpl($Class* clazz) {
	return $of($alloc(DurationImpl));
}

bool DurationImpl::equals(Object$* duration) {
	 return this->$Duration::equals(duration);
}

$Object* DurationImpl::clone() {
	 return this->$Duration::clone();
}

void DurationImpl::finalize() {
	this->$Duration::finalize();
}

$DatatypeConstants$FieldArray* DurationImpl::FIELDS = nullptr;
$TimeZone* DurationImpl::GMT = nullptr;
$BigDecimal* DurationImpl::ZERO = nullptr;
$BigInteger* DurationImpl::MaxIntAsBigInt = nullptr;
$XMLGregorianCalendarArray* DurationImpl::TEST_POINTS = nullptr;
$BigDecimalArray* DurationImpl::FACTORS = nullptr;

int32_t DurationImpl::getSign() {
	return this->signum$;
}

int32_t DurationImpl::calcSignum(bool isPositive) {
	bool var$4 = (this->years == nullptr || $nc(this->years)->signum() == 0);
	bool var$3 = var$4 && (this->months == nullptr || $nc(this->months)->signum() == 0);
	bool var$2 = var$3 && (this->days == nullptr || $nc(this->days)->signum() == 0);
	bool var$1 = var$2 && (this->hours == nullptr || $nc(this->hours)->signum() == 0);
	bool var$0 = var$1 && (this->minutes == nullptr || $nc(this->minutes)->signum() == 0);
	if (var$0 && (this->seconds == nullptr || $nc(this->seconds)->signum() == 0)) {
		return 0;
	}
	if (isPositive) {
		return 1;
	} else {
		return -1;
	}
}

void DurationImpl::init$(bool isPositive, $BigInteger* years, $BigInteger* months, $BigInteger* days, $BigInteger* hours, $BigInteger* minutes, $BigDecimal* seconds) {
	$Duration::init$();
	$set(this, years, years);
	$set(this, months, months);
	$set(this, days, days);
	$set(this, hours, hours);
	$set(this, minutes, minutes);
	$set(this, seconds, seconds);
	this->signum$ = calcSignum(isPositive);
	if (years == nullptr && months == nullptr && days == nullptr && hours == nullptr && minutes == nullptr && seconds == nullptr) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "AllFieldsNull"_s, nullptr)));
	}
	$init($DatatypeConstants);
	testNonNegative(years, $DatatypeConstants::YEARS);
	testNonNegative(months, $DatatypeConstants::MONTHS);
	testNonNegative(days, $DatatypeConstants::DAYS);
	testNonNegative(hours, $DatatypeConstants::HOURS);
	testNonNegative(minutes, $DatatypeConstants::MINUTES);
	testNonNegative(seconds, $DatatypeConstants::SECONDS);
}

void DurationImpl::testNonNegative($BigInteger* n, $DatatypeConstants$Field* f) {
	$init(DurationImpl);
	$useLocalCurrentObjectStackCache();
	if (n != nullptr && n->signum() < 0) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "NegativeField"_s, $$new($ObjectArray, {$($of($nc(f)->toString()))}))));
	}
}

void DurationImpl::testNonNegative($BigDecimal* n, $DatatypeConstants$Field* f) {
	$init(DurationImpl);
	$useLocalCurrentObjectStackCache();
	if (n != nullptr && n->signum() < 0) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "NegativeField"_s, $$new($ObjectArray, {$($of($nc(f)->toString()))}))));
	}
}

void DurationImpl::init$(bool isPositive, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPositive;
	$var($BigInteger, var$1, wrap(years));
	$var($BigInteger, var$2, wrap(months));
	$var($BigInteger, var$3, wrap(days));
	$var($BigInteger, var$4, wrap(hours));
	$var($BigInteger, var$5, wrap(minutes));
	DurationImpl::init$(var$0, var$1, var$2, var$3, var$4, var$5, seconds != $DatatypeConstants::FIELD_UNDEFINED ? $$new($BigDecimal, $($String::valueOf(seconds))) : ($BigDecimal*)nullptr);
}

$BigInteger* DurationImpl::wrap(int32_t i) {
	$init(DurationImpl);
	if (i == $DatatypeConstants::FIELD_UNDEFINED) {
		return nullptr;
	}
	return $BigInteger::valueOf((int64_t)i);
}

void DurationImpl::init$(int64_t durationInMilliSeconds) {
	$Duration::init$();
	bool is0x8000000000000000L = false;
	int64_t l = durationInMilliSeconds;
	if (l > 0) {
		this->signum$ = 1;
	} else if (l < 0) {
		this->signum$ = -1;
		if (l == (int64_t)0x8000000000000000) {
			++l;
			is0x8000000000000000L = true;
		}
		l *= -1;
	} else {
		this->signum$ = 0;
	}
	$var($GregorianCalendar, gregorianCalendar, $new($GregorianCalendar, DurationImpl::GMT));
	gregorianCalendar->setTimeInMillis(l);
	int64_t int2long = 0;
	int2long = gregorianCalendar->get($Calendar::YEAR) - 1970;
	$set(this, years, $BigInteger::valueOf(int2long));
	int2long = gregorianCalendar->get($Calendar::MONTH);
	$set(this, months, $BigInteger::valueOf(int2long));
	int2long = gregorianCalendar->get($Calendar::DAY_OF_MONTH) - 1;
	$set(this, days, $BigInteger::valueOf(int2long));
	int2long = gregorianCalendar->get($Calendar::HOUR_OF_DAY);
	$set(this, hours, $BigInteger::valueOf(int2long));
	int2long = gregorianCalendar->get($Calendar::MINUTE);
	$set(this, minutes, $BigInteger::valueOf(int2long));
	int32_t var$0 = (gregorianCalendar->get($Calendar::SECOND) * 1000);
	int2long = var$0 + gregorianCalendar->get($Calendar::MILLISECOND) + (is0x8000000000000000L ? 1 : 0);
	$set(this, seconds, $BigDecimal::valueOf(int2long, 3));
}

void DurationImpl::init$($String* lexicalRepresentation) {
	$useLocalCurrentObjectStackCache();
	$Duration::init$();
	if (lexicalRepresentation == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($String, s, lexicalRepresentation);
	bool positive = false;
	$var($ints, idx, $new($ints, 1));
	int32_t length = $nc(s)->length();
	bool timeRequired = false;
	idx->set(0, 0);
	if (length != idx->get(0) && s->charAt(idx->get(0)) == u'-') {
		++(*idx)[0];
		positive = false;
	} else {
		positive = true;
	}
	if (length != idx->get(0) && s->charAt((*idx)[0]++) != u'P') {
		$throwNew($IllegalArgumentException, s);
	}
	int32_t dateLen = 0;
	$var($StringArray, dateParts, $new($StringArray, 3));
	$var($ints, datePartsIndex, $new($ints, 3));
	while (length != idx->get(0) && isDigit(s->charAt(idx->get(0))) && dateLen < 3) {
		datePartsIndex->set(dateLen, idx->get(0));
		dateParts->set(dateLen++, $(parsePiece(s, idx)));
	}
	if (length != idx->get(0)) {
		if (s->charAt((*idx)[0]++) == u'T') {
			timeRequired = true;
		} else {
			$throwNew($IllegalArgumentException, s);
		}
	}
	int32_t timeLen = 0;
	$var($StringArray, timeParts, $new($StringArray, 3));
	$var($ints, timePartsIndex, $new($ints, 3));
	while (length != idx->get(0) && isDigitOrPeriod(s->charAt(idx->get(0))) && timeLen < 3) {
		timePartsIndex->set(timeLen, idx->get(0));
		timeParts->set(timeLen++, $(parsePiece(s, idx)));
	}
	if (timeRequired && timeLen == 0) {
		$throwNew($IllegalArgumentException, s);
	}
	if (length != idx->get(0)) {
		$throwNew($IllegalArgumentException, s);
	}
	if (dateLen == 0 && timeLen == 0) {
		$throwNew($IllegalArgumentException, s);
	}
	organizeParts(s, dateParts, datePartsIndex, dateLen, "YMD"_s);
	organizeParts(s, timeParts, timePartsIndex, timeLen, "HMS"_s);
	$set(this, years, parseBigInteger(s, dateParts->get(0), datePartsIndex->get(0)));
	$set(this, months, parseBigInteger(s, dateParts->get(1), datePartsIndex->get(1)));
	$set(this, days, parseBigInteger(s, dateParts->get(2), datePartsIndex->get(2)));
	$set(this, hours, parseBigInteger(s, timeParts->get(0), timePartsIndex->get(0)));
	$set(this, minutes, parseBigInteger(s, timeParts->get(1), timePartsIndex->get(1)));
	$set(this, seconds, parseBigDecimal(s, timeParts->get(2), timePartsIndex->get(2)));
	this->signum$ = calcSignum(positive);
}

bool DurationImpl::isDigit(char16_t ch) {
	$init(DurationImpl);
	return u'0' <= ch && ch <= u'9';
}

bool DurationImpl::isDigitOrPeriod(char16_t ch) {
	$init(DurationImpl);
	return isDigit(ch) || ch == u'.';
}

$String* DurationImpl::parsePiece($String* whole, $ints* idx) {
	$init(DurationImpl);
	int32_t start = $nc(idx)->get(0);
	while (true) {
		bool var$0 = idx->get(0) < $nc(whole)->length();
		if (!(var$0 && isDigitOrPeriod(whole->charAt(idx->get(0))))) {
			break;
		}
		{
			++(*idx)[0];
		}
	}
	if (idx->get(0) == $nc(whole)->length()) {
		$throwNew($IllegalArgumentException, whole);
	}
	++(*idx)[0];
	return $nc(whole)->substring(start, idx->get(0));
}

void DurationImpl::organizeParts($String* whole, $StringArray* parts, $ints* partsIndex, int32_t len, $String* tokens) {
	$init(DurationImpl);
	int32_t idx = $nc(tokens)->length();
	for (int32_t i = len - 1; i >= 0; --i) {
		if ($nc(parts)->get(i) == nullptr) {
			$throwNew($IllegalArgumentException, whole);
		}
		int32_t nidx = tokens->lastIndexOf((int32_t)$nc($nc(parts)->get(i))->charAt($nc(parts->get(i))->length() - 1), idx - 1);
		if (nidx == -1) {
			$throwNew($IllegalArgumentException, whole);
		}
		for (int32_t j = nidx + 1; j < idx; ++j) {
			$nc(parts)->set(j, nullptr);
		}
		idx = nidx;
		$nc(parts)->set(idx, parts->get(i));
		$nc(partsIndex)->set(idx, partsIndex->get(i));
	}
	for (--idx; idx >= 0; --idx) {
		$nc(parts)->set(idx, nullptr);
	}
}

$BigInteger* DurationImpl::parseBigInteger($String* whole, $String* part$renamed, int32_t index) {
	$init(DurationImpl);
	$var($String, part, part$renamed);
	if (part == nullptr) {
		return nullptr;
	}
	$assign(part, $nc(part)->substring(0, part->length() - 1));
	return $new($BigInteger, part);
}

$BigDecimal* DurationImpl::parseBigDecimal($String* whole, $String* part$renamed, int32_t index) {
	$init(DurationImpl);
	$var($String, part, part$renamed);
	if (part == nullptr) {
		return nullptr;
	}
	$assign(part, $nc(part)->substring(0, part->length() - 1));
	return $new($BigDecimal, part);
}

int32_t DurationImpl::compare($Duration* rhs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($DatatypeConstants$FieldArray, arr$, DurationImpl::FIELDS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($DatatypeConstants$Field, field, arr$->get(i$));
			{
				checkMaxValue($(getField(field)), field);
				checkMaxValue($($nc(rhs)->getField(field)), field);
			}
		}
	}
	return compareDates(this, rhs);
}

void DurationImpl::checkMaxValue($Number* field, $DatatypeConstants$Field* fieldType) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, fieldValue, nullptr);
	$init($DatatypeConstants);
	if (fieldType != $DatatypeConstants::SECONDS) {
		$assign(fieldValue, $cast($BigInteger, field));
	} else {
		$var($BigDecimal, rhsSecondsAsBigDecimal, $cast($BigDecimal, field));
		if (rhsSecondsAsBigDecimal != nullptr) {
			$assign(fieldValue, rhsSecondsAsBigDecimal->toBigInteger());
		}
	}
	if (fieldValue != nullptr && fieldValue->compareTo(DurationImpl::MaxIntAsBigInt) == 1) {
		$throwNew($UnsupportedOperationException, $($DatatypeMessageFormatter::formatMessage(nullptr, "TooLarge"_s, $$new($ObjectArray, {
			$of($$str({$($of(this)->getClass()->getName()), "#compare(Duration duration)"_s, fieldType})),
			$($of($nc($of(field))->toString()))
		}))));
	}
}

int32_t DurationImpl::compareDates($Duration* duration1, $Duration* duration2) {
	$useLocalCurrentObjectStackCache();
	int32_t resultA = $DatatypeConstants::INDETERMINATE;
	int32_t resultB = $DatatypeConstants::INDETERMINATE;
	$var($XMLGregorianCalendar, tempA, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(0))->clone()));
	$var($XMLGregorianCalendar, tempB, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(0))->clone()));
	$nc(tempA)->add(duration1);
	$nc(tempB)->add(duration2);
	resultA = tempA->compare(tempB);
	if (resultA == $DatatypeConstants::INDETERMINATE) {
		return $DatatypeConstants::INDETERMINATE;
	}
	$assign(tempA, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(1))->clone()));
	$assign(tempB, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(1))->clone()));
	tempA->add(duration1);
	tempB->add(duration2);
	resultB = tempA->compare(tempB);
	resultA = compareResults(resultA, resultB);
	if (resultA == $DatatypeConstants::INDETERMINATE) {
		return $DatatypeConstants::INDETERMINATE;
	}
	$assign(tempA, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(2))->clone()));
	$assign(tempB, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(2))->clone()));
	tempA->add(duration1);
	tempB->add(duration2);
	resultB = tempA->compare(tempB);
	resultA = compareResults(resultA, resultB);
	if (resultA == $DatatypeConstants::INDETERMINATE) {
		return $DatatypeConstants::INDETERMINATE;
	}
	$assign(tempA, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(3))->clone()));
	$assign(tempB, $cast($XMLGregorianCalendar, $nc($nc(DurationImpl::TEST_POINTS)->get(3))->clone()));
	tempA->add(duration1);
	tempB->add(duration2);
	resultB = tempA->compare(tempB);
	resultA = compareResults(resultA, resultB);
	return resultA;
}

int32_t DurationImpl::compareResults(int32_t resultA, int32_t resultB) {
	if (resultB == $DatatypeConstants::INDETERMINATE) {
		return $DatatypeConstants::INDETERMINATE;
	} else if (resultA != resultB) {
		return $DatatypeConstants::INDETERMINATE;
	}
	return resultA;
}

int32_t DurationImpl::hashCode() {
	$var($Calendar, cal, $nc($nc(DurationImpl::TEST_POINTS)->get(0))->toGregorianCalendar());
	this->addTo(cal);
	return (int32_t)getCalendarTimeInMillis(cal);
}

$String* DurationImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer));
	if (this->signum$ < 0) {
		buf->append(u'-');
	}
	buf->append(u'P');
	if (this->years != nullptr) {
		buf->append($of(this->years))->append(u'Y');
	}
	if (this->months != nullptr) {
		buf->append($of(this->months))->append(u'M');
	}
	if (this->days != nullptr) {
		buf->append($of(this->days))->append(u'D');
	}
	if (this->hours != nullptr || this->minutes != nullptr || this->seconds != nullptr) {
		buf->append(u'T');
		if (this->hours != nullptr) {
			buf->append($of(this->hours))->append(u'H');
		}
		if (this->minutes != nullptr) {
			buf->append($of(this->minutes))->append(u'M');
		}
		if (this->seconds != nullptr) {
			buf->append($(toString(this->seconds)))->append(u'S');
		}
	}
	return buf->toString();
}

$String* DurationImpl::toString($BigDecimal* bd) {
	$useLocalCurrentObjectStackCache();
	$var($String, intString, $nc($($nc(bd)->unscaledValue()))->toString());
	int32_t scale = bd->scale();
	if (scale == 0) {
		return intString;
	}
	$var($StringBuffer, buf, nullptr);
	int32_t insertionPoint = $nc(intString)->length() - scale;
	if (insertionPoint == 0) {
		return $str({"0."_s, intString});
	} else if (insertionPoint > 0) {
		$assign(buf, $new($StringBuffer, intString));
		buf->insert(insertionPoint, u'.');
	} else {
		$assign(buf, $new($StringBuffer, 3 - insertionPoint + intString->length()));
		buf->append("0."_s);
		for (int32_t i = 0; i < -insertionPoint; ++i) {
			buf->append(u'0');
		}
		buf->append(intString);
	}
	return $nc(buf)->toString();
}

bool DurationImpl::isSet($DatatypeConstants$Field* field) {
	$useLocalCurrentObjectStackCache();
	if (field == nullptr) {
		$var($String, methodName, "javax.xml.datatype.Duration#isSet(DatatypeConstants.Field field)"_s);
		$throwNew($NullPointerException, $($DatatypeMessageFormatter::formatMessage(nullptr, "FieldCannotBeNull"_s, $$new($ObjectArray, {$of(methodName)}))));
	}
	$init($DatatypeConstants);
	if (field == $DatatypeConstants::YEARS) {
		return this->years != nullptr;
	}
	if (field == $DatatypeConstants::MONTHS) {
		return this->months != nullptr;
	}
	if (field == $DatatypeConstants::DAYS) {
		return this->days != nullptr;
	}
	if (field == $DatatypeConstants::HOURS) {
		return this->hours != nullptr;
	}
	if (field == $DatatypeConstants::MINUTES) {
		return this->minutes != nullptr;
	}
	if (field == $DatatypeConstants::SECONDS) {
		return this->seconds != nullptr;
	}
	$var($String, methodName, "javax.xml.datatype.Duration#isSet(DatatypeConstants.Field field)"_s);
	$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "UnknownField"_s, $$new($ObjectArray, {
		$of(methodName),
		$($of($nc(field)->toString()))
	}))));
}

$Number* DurationImpl::getField($DatatypeConstants$Field* field) {
	$useLocalCurrentObjectStackCache();
	if (field == nullptr) {
		$var($String, methodName, "javax.xml.datatype.Duration#isSet(DatatypeConstants.Field field) "_s);
		$throwNew($NullPointerException, $($DatatypeMessageFormatter::formatMessage(nullptr, "FieldCannotBeNull"_s, $$new($ObjectArray, {$of(methodName)}))));
	}
	$init($DatatypeConstants);
	if (field == $DatatypeConstants::YEARS) {
		return this->years;
	}
	if (field == $DatatypeConstants::MONTHS) {
		return this->months;
	}
	if (field == $DatatypeConstants::DAYS) {
		return this->days;
	}
	if (field == $DatatypeConstants::HOURS) {
		return this->hours;
	}
	if (field == $DatatypeConstants::MINUTES) {
		return this->minutes;
	}
	if (field == $DatatypeConstants::SECONDS) {
		return this->seconds;
	}
	$var($String, methodName, "javax.xml.datatype.Duration#(getSet(DatatypeConstants.Field field)"_s);
	$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "UnknownField"_s, $$new($ObjectArray, {
		$of(methodName),
		$($of($nc(field)->toString()))
	}))));
}

int32_t DurationImpl::getYears() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::YEARS);
}

int32_t DurationImpl::getMonths() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::MONTHS);
}

int32_t DurationImpl::getDays() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::DAYS);
}

int32_t DurationImpl::getHours() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::HOURS);
}

int32_t DurationImpl::getMinutes() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::MINUTES);
}

int32_t DurationImpl::getSeconds() {
	$init($DatatypeConstants);
	return getInt($DatatypeConstants::SECONDS);
}

int32_t DurationImpl::getInt($DatatypeConstants$Field* field) {
	$var($Number, n, getField(field));
	if (n == nullptr) {
		return 0;
	} else {
		return $nc(n)->intValue();
	}
}

int64_t DurationImpl::getTimeInMillis($Calendar* startInstant) {
	$var($Calendar, cal, $cast($Calendar, $nc(startInstant)->clone()));
	addTo(cal);
	int64_t var$0 = getCalendarTimeInMillis(cal);
	return var$0 - getCalendarTimeInMillis(startInstant);
}

int64_t DurationImpl::getTimeInMillis($Date* startInstant) {
	$var($Calendar, cal, $new($GregorianCalendar));
	cal->setTime(startInstant);
	this->addTo(cal);
	int64_t var$0 = getCalendarTimeInMillis(cal);
	return var$0 - $nc(startInstant)->getTime();
}

$Duration* DurationImpl::normalizeWith($Calendar* startTimeInstant) {
	$useLocalCurrentObjectStackCache();
	$var($Calendar, c, $cast($Calendar, $nc(startTimeInstant)->clone()));
	$nc(c)->add($Calendar::YEAR, getYears() * this->signum$);
	c->add($Calendar::MONTH, getMonths() * this->signum$);
	c->add($Calendar::DAY_OF_MONTH, getDays() * this->signum$);
	int64_t var$0 = getCalendarTimeInMillis(c);
	int64_t diff = var$0 - getCalendarTimeInMillis(startTimeInstant);
	int32_t days = (int32_t)($div(diff, ((int64_t)1000 * (int64_t)60 * (int64_t)60 * (int64_t)24)));
	bool var$1 = days >= 0;
	$var($BigInteger, var$2, wrap($Math::abs(days)));
	$init($DatatypeConstants);
	$var($BigInteger, var$3, $cast($BigInteger, getField($DatatypeConstants::HOURS)));
	$var($BigInteger, var$4, $cast($BigInteger, getField($DatatypeConstants::MINUTES)));
	return $new(DurationImpl, var$1, ($BigInteger*)nullptr, ($BigInteger*)nullptr, var$2, var$3, var$4, $cast($BigDecimal, $(getField($DatatypeConstants::SECONDS))));
}

$Duration* DurationImpl::multiply(int32_t factor) {
	return multiply($($BigDecimal::valueOf((int64_t)factor)));
}

$Duration* DurationImpl::multiply($BigDecimal* factor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, factor, factor$renamed);
	$var($BigDecimal, carry, DurationImpl::ZERO);
	int32_t factorSign = $nc(factor)->signum();
	$assign(factor, factor->abs());
	$var($BigDecimalArray, buf, $new($BigDecimalArray, 6));
	for (int32_t i = 0; i < 5; ++i) {
		$var($BigDecimal, bd, getFieldAsBigDecimal($nc(DurationImpl::FIELDS)->get(i)));
		$assign(bd, $nc($($nc(bd)->multiply(factor)))->add(carry));
		$init($RoundingMode);
		buf->set(i, $(bd->setScale(0, $RoundingMode::DOWN)));
		$assign(bd, bd->subtract(buf->get(i)));
		if (i == 1) {
			if (bd->signum() != 0) {
				$throwNew($IllegalStateException);
			} else {
				$assign(carry, DurationImpl::ZERO);
			}
		} else {
			$assign(carry, bd->multiply($nc(DurationImpl::FACTORS)->get(i)));
		}
	}
	if (this->seconds != nullptr) {
		buf->set(5, $($nc($($nc(this->seconds)->multiply(factor)))->add(carry)));
	} else {
		buf->set(5, carry);
	}
	bool var$0 = this->signum$ * factorSign >= 0;
	$var($BigInteger, var$1, toBigInteger(buf->get(0), nullptr == this->years));
	$var($BigInteger, var$2, toBigInteger(buf->get(1), nullptr == this->months));
	$var($BigInteger, var$3, toBigInteger(buf->get(2), nullptr == this->days));
	$var($BigInteger, var$4, toBigInteger(buf->get(3), nullptr == this->hours));
	$var($BigInteger, var$5, toBigInteger(buf->get(4), nullptr == this->minutes));
	return $new(DurationImpl, var$0, var$1, var$2, var$3, var$4, var$5, ($nc(buf->get(5))->signum() == 0 && this->seconds == nullptr) ? ($BigDecimal*)nullptr : buf->get(5));
}

$BigDecimal* DurationImpl::getFieldAsBigDecimal($DatatypeConstants$Field* f) {
	$init($DatatypeConstants);
	if (f == $DatatypeConstants::SECONDS) {
		if (this->seconds != nullptr) {
			return this->seconds;
		} else {
			return DurationImpl::ZERO;
		}
	} else {
		$var($BigInteger, bi, $cast($BigInteger, getField(f)));
		if (bi == nullptr) {
			return DurationImpl::ZERO;
		} else {
			return $new($BigDecimal, bi);
		}
	}
}

$BigInteger* DurationImpl::toBigInteger($BigDecimal* value, bool canBeNull) {
	$init(DurationImpl);
	if (canBeNull && $nc(value)->signum() == 0) {
		return nullptr;
	} else {
		return value->unscaledValue();
	}
}

$Duration* DurationImpl::add($Duration* rhs) {
	$useLocalCurrentObjectStackCache();
	$var($Duration, lhs, this);
	$var($BigDecimalArray, buf, $new($BigDecimalArray, 6));
	$init($DatatypeConstants);
	$var($BigInteger, var$0, $cast($BigInteger, lhs->getField($DatatypeConstants::YEARS)));
	$var($BigInteger, var$1, $cast($BigInteger, $nc(rhs)->getField($DatatypeConstants::YEARS)));
	buf->set(0, $($nc($(sanitize(var$0, lhs->getSign())))->add($(sanitize(var$1, rhs->getSign())))));
	$var($BigInteger, var$2, $cast($BigInteger, lhs->getField($DatatypeConstants::MONTHS)));
	$var($BigInteger, var$3, $cast($BigInteger, $nc(rhs)->getField($DatatypeConstants::MONTHS)));
	buf->set(1, $($nc($(sanitize(var$2, lhs->getSign())))->add($(sanitize(var$3, rhs->getSign())))));
	$var($BigInteger, var$4, $cast($BigInteger, lhs->getField($DatatypeConstants::DAYS)));
	$var($BigInteger, var$5, $cast($BigInteger, $nc(rhs)->getField($DatatypeConstants::DAYS)));
	buf->set(2, $($nc($(sanitize(var$4, lhs->getSign())))->add($(sanitize(var$5, rhs->getSign())))));
	$var($BigInteger, var$6, $cast($BigInteger, lhs->getField($DatatypeConstants::HOURS)));
	$var($BigInteger, var$7, $cast($BigInteger, $nc(rhs)->getField($DatatypeConstants::HOURS)));
	buf->set(3, $($nc($(sanitize(var$6, lhs->getSign())))->add($(sanitize(var$7, rhs->getSign())))));
	$var($BigInteger, var$8, $cast($BigInteger, lhs->getField($DatatypeConstants::MINUTES)));
	$var($BigInteger, var$9, $cast($BigInteger, $nc(rhs)->getField($DatatypeConstants::MINUTES)));
	buf->set(4, $($nc($(sanitize(var$8, lhs->getSign())))->add($(sanitize(var$9, rhs->getSign())))));
	$var($BigDecimal, var$10, $cast($BigDecimal, lhs->getField($DatatypeConstants::SECONDS)));
	$var($BigDecimal, var$11, $cast($BigDecimal, $nc(rhs)->getField($DatatypeConstants::SECONDS)));
	buf->set(5, $($nc($(sanitize(var$10, lhs->getSign())))->add($(sanitize(var$11, rhs->getSign())))));
	alignSigns(buf, 0, 2);
	alignSigns(buf, 2, 6);
	int32_t s = 0;
	for (int32_t i = 0; i < 6; ++i) {
		if (s * $nc(buf->get(i))->signum() < 0) {
			$throwNew($IllegalStateException);
		}
		if (s == 0) {
			s = $nc(buf->get(i))->signum();
		}
	}
	bool var$12 = s >= 0;
	$var($BigDecimal, var$14, sanitize(buf->get(0), s));
	bool var$15 = lhs->getField($DatatypeConstants::YEARS) == nullptr;
	$var($BigInteger, var$13, toBigInteger(var$14, var$15 && $nc(rhs)->getField($DatatypeConstants::YEARS) == nullptr));
	$var($BigDecimal, var$17, sanitize(buf->get(1), s));
	bool var$18 = lhs->getField($DatatypeConstants::MONTHS) == nullptr;
	$var($BigInteger, var$16, toBigInteger(var$17, var$18 && $nc(rhs)->getField($DatatypeConstants::MONTHS) == nullptr));
	$var($BigDecimal, var$20, sanitize(buf->get(2), s));
	bool var$21 = lhs->getField($DatatypeConstants::DAYS) == nullptr;
	$var($BigInteger, var$19, toBigInteger(var$20, var$21 && $nc(rhs)->getField($DatatypeConstants::DAYS) == nullptr));
	$var($BigDecimal, var$23, sanitize(buf->get(3), s));
	bool var$24 = lhs->getField($DatatypeConstants::HOURS) == nullptr;
	$var($BigInteger, var$22, toBigInteger(var$23, var$24 && $nc(rhs)->getField($DatatypeConstants::HOURS) == nullptr));
	$var($BigDecimal, var$26, sanitize(buf->get(4), s));
	bool var$27 = lhs->getField($DatatypeConstants::MINUTES) == nullptr;
	$var($BigInteger, var$25, toBigInteger(var$26, var$27 && $nc(rhs)->getField($DatatypeConstants::MINUTES) == nullptr));
	bool var$29 = $nc(buf->get(5))->signum() == 0;
	bool var$28 = var$29 && lhs->getField($DatatypeConstants::SECONDS) == nullptr;
	return $new(DurationImpl, var$12, var$13, var$16, var$19, var$22, var$25, (var$28 && $nc(rhs)->getField($DatatypeConstants::SECONDS) == nullptr) ? ($BigDecimal*)nullptr : $(sanitize(buf->get(5), s)));
}

void DurationImpl::alignSigns($BigDecimalArray* buf, int32_t start, int32_t end) {
	$init(DurationImpl);
	$useLocalCurrentObjectStackCache();
	bool touched = false;
	do {
		touched = false;
		int32_t s = 0;
		for (int32_t i = start; i < end; ++i) {
			if (s * $nc($nc(buf)->get(i))->signum() < 0) {
				touched = true;
				$init($RoundingMode);
				$var($BigDecimal, borrow, $nc($($nc(buf->get(i))->abs()))->divide($nc(DurationImpl::FACTORS)->get(i - 1), 0, $RoundingMode::UP));
				if ($nc(buf->get(i))->signum() > 0) {
					$assign(borrow, $nc(borrow)->negate());
				}
				buf->set(i - 1, $($nc(buf->get(i - 1))->subtract(borrow)));
				buf->set(i, $($nc(buf->get(i))->add($($nc(borrow)->multiply($nc(DurationImpl::FACTORS)->get(i - 1))))));
			}
			if ($nc($nc(buf)->get(i))->signum() != 0) {
				s = $nc(buf->get(i))->signum();
			}
		}
	} while (touched);
}

$BigDecimal* DurationImpl::sanitize($BigInteger* value, int32_t signum) {
	$init(DurationImpl);
	if (signum == 0 || value == nullptr) {
		return DurationImpl::ZERO;
	}
	if (signum > 0) {
		return $new($BigDecimal, value);
	}
	return $new($BigDecimal, $($nc(value)->negate()));
}

$BigDecimal* DurationImpl::sanitize($BigDecimal* value, int32_t signum) {
	$init(DurationImpl);
	if (signum == 0 || value == nullptr) {
		return DurationImpl::ZERO;
	}
	if (signum > 0) {
		return value;
	}
	return $nc(value)->negate();
}

$Duration* DurationImpl::subtract($Duration* rhs) {
	return add($($nc(rhs)->negate()));
}

$Duration* DurationImpl::negate() {
	return $new(DurationImpl, this->signum$ <= 0, this->years, this->months, this->days, this->hours, this->minutes, this->seconds);
}

int32_t DurationImpl::signum() {
	return this->signum$;
}

void DurationImpl::addTo($Calendar* calendar) {
	$useLocalCurrentObjectStackCache();
	$nc(calendar)->add($Calendar::YEAR, getYears() * this->signum$);
	calendar->add($Calendar::MONTH, getMonths() * this->signum$);
	calendar->add($Calendar::DAY_OF_MONTH, getDays() * this->signum$);
	calendar->add($Calendar::HOUR, getHours() * this->signum$);
	calendar->add($Calendar::MINUTE, getMinutes() * this->signum$);
	calendar->add($Calendar::SECOND, getSeconds() * this->signum$);
	if (this->seconds != nullptr) {
		$init($RoundingMode);
		$var($BigDecimal, fraction, $nc(this->seconds)->subtract($($nc(this->seconds)->setScale(0, $RoundingMode::DOWN))));
		int32_t millisec = $nc($($nc(fraction)->movePointRight(3)))->intValue();
		calendar->add($Calendar::MILLISECOND, millisec * this->signum$);
	}
}

void DurationImpl::addTo($Date* date) {
	$var($Calendar, cal, $new($GregorianCalendar));
	cal->setTime(date);
	this->addTo(cal);
	$nc(date)->setTime(getCalendarTimeInMillis(cal));
}

int64_t DurationImpl::getCalendarTimeInMillis($Calendar* cal) {
	$init(DurationImpl);
	return $nc(cal)->getTimeInMillis();
}

$Object* DurationImpl::writeReplace() {
	return $of($new($DurationImpl$DurationStream, $(this->toString())));
}

void clinit$DurationImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($DatatypeConstants);
	$assignStatic(DurationImpl::FIELDS, $new($DatatypeConstants$FieldArray, {
		$DatatypeConstants::YEARS,
		$DatatypeConstants::MONTHS,
		$DatatypeConstants::DAYS,
		$DatatypeConstants::HOURS,
		$DatatypeConstants::MINUTES,
		$DatatypeConstants::SECONDS
	}));
	$assignStatic(DurationImpl::GMT, $TimeZone::getTimeZone("GMT"_s));
	$assignStatic(DurationImpl::ZERO, $BigDecimal::valueOf((int64_t)0));
	$assignStatic(DurationImpl::MaxIntAsBigInt, $BigInteger::valueOf((int64_t)$Integer::MAX_VALUE));
	$assignStatic(DurationImpl::TEST_POINTS, $new($XMLGregorianCalendarArray, {
		$($XMLGregorianCalendarImpl::parse("1696-09-01T00:00:00Z"_s)),
		$($XMLGregorianCalendarImpl::parse("1697-02-01T00:00:00Z"_s)),
		$($XMLGregorianCalendarImpl::parse("1903-03-01T00:00:00Z"_s)),
		$($XMLGregorianCalendarImpl::parse("1903-07-01T00:00:00Z"_s))
	}));
	$assignStatic(DurationImpl::FACTORS, $new($BigDecimalArray, {
		$($BigDecimal::valueOf((int64_t)12)),
		($BigDecimal*)nullptr,
		$($BigDecimal::valueOf((int64_t)24)),
		$($BigDecimal::valueOf((int64_t)60)),
		$($BigDecimal::valueOf((int64_t)60))
	}));
}

DurationImpl::DurationImpl() {
}

$Class* DurationImpl::load$($String* name, bool initialize) {
	$loadClass(DurationImpl, name, initialize, &_DurationImpl_ClassInfo_, clinit$DurationImpl, allocate$DurationImpl);
	return class$;
}

$Class* DurationImpl::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com