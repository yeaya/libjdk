#include <javax/xml/datatype/Duration.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/Number.h>
#include <java/lang/StringBuffer.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <javax/xml/datatype/DatatypeConstants$Field.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef DAYS
#undef DEBUG
#undef DURATION
#undef DURATION_DAYTIME
#undef DURATION_YEARMONTH
#undef EQUAL
#undef GREATER
#undef HOURS
#undef LESSER
#undef MINUTES
#undef MONTHS
#undef SECONDS
#undef YEARS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeConstants$Field = ::javax::xml::datatype::DatatypeConstants$Field;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace datatype {

$FieldInfo _Duration_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Duration, DEBUG)},
	{}
};

$MethodInfo _Duration_MethodInfo_[] = {
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Duration, init$, void)},
	{"add", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, add, Duration*, Duration*)},
	{"addTo", "(Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, addTo, void, $Calendar*)},
	{"addTo", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $virtualMethod(Duration, addTo, void, $Date*)},
	{"compare", "(Ljavax/xml/datatype/Duration;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, compare, int32_t, Duration*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Duration, equals, bool, Object$*)},
	{"getCalendarTimeInMillis", "(Ljava/util/Calendar;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Duration, getCalendarTimeInMillis, int64_t, $Calendar*)},
	{"getDays", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getDays, int32_t)},
	{"getField", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, getField, $Number*, $DatatypeConstants$Field*)},
	{"getHours", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getHours, int32_t)},
	{"getMinutes", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getMinutes, int32_t)},
	{"getMonths", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getMonths, int32_t)},
	{"getSeconds", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getSeconds, int32_t)},
	{"getSign", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, getSign, int32_t)},
	{"getTimeInMillis", "(Ljava/util/Calendar;)J", nullptr, $PUBLIC, $virtualMethod(Duration, getTimeInMillis, int64_t, $Calendar*)},
	{"getTimeInMillis", "(Ljava/util/Date;)J", nullptr, $PUBLIC, $virtualMethod(Duration, getTimeInMillis, int64_t, $Date*)},
	{"getXMLSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(Duration, getXMLSchemaType, $QName*)},
	{"getYears", "()I", nullptr, $PUBLIC, $virtualMethod(Duration, getYears, int32_t)},
	{"isLongerThan", "(Ljavax/xml/datatype/Duration;)Z", nullptr, $PUBLIC, $virtualMethod(Duration, isLongerThan, bool, Duration*)},
	{"isSet", "(Ljavax/xml/datatype/DatatypeConstants$Field;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, isSet, bool, $DatatypeConstants$Field*)},
	{"isShorterThan", "(Ljavax/xml/datatype/Duration;)Z", nullptr, $PUBLIC, $virtualMethod(Duration, isShorterThan, bool, Duration*)},
	{"multiply", "(I)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(Duration, multiply, Duration*, int32_t)},
	{"multiply", "(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, multiply, Duration*, $BigDecimal*)},
	{"negate", "()Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, negate, Duration*)},
	{"normalizeWith", "(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Duration, normalizeWith, Duration*, $Calendar*)},
	{"subtract", "(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(Duration, subtract, Duration*, Duration*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Duration, toString, $String*)},
	{"toString", "(Ljava/math/BigDecimal;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Duration, toString, $String*, $BigDecimal*)},
	{}
};

$ClassInfo _Duration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.datatype.Duration",
	"java.lang.Object",
	nullptr,
	_Duration_FieldInfo_,
	_Duration_MethodInfo_
};

$Object* allocate$Duration($Class* clazz) {
	return $of($alloc(Duration));
}

int32_t Duration::hashCode() {
	 return this->$Object::hashCode();
}

void Duration::init$() {
}

$QName* Duration::getXMLSchemaType() {
	$useLocalCurrentObjectStackCache();
	$init($DatatypeConstants);
	bool yearSet = isSet($DatatypeConstants::YEARS);
	bool monthSet = isSet($DatatypeConstants::MONTHS);
	bool daySet = isSet($DatatypeConstants::DAYS);
	bool hourSet = isSet($DatatypeConstants::HOURS);
	bool minuteSet = isSet($DatatypeConstants::MINUTES);
	bool secondSet = isSet($DatatypeConstants::SECONDS);
	if (yearSet && monthSet && daySet && hourSet && minuteSet && secondSet) {
		return $DatatypeConstants::DURATION;
	}
	if (!yearSet && !monthSet && daySet && hourSet && minuteSet && secondSet) {
		return $DatatypeConstants::DURATION_DAYTIME;
	}
	if (yearSet && monthSet && !daySet && !hourSet && !minuteSet && !secondSet) {
		return $DatatypeConstants::DURATION_YEARMONTH;
	}
	$throwNew($IllegalStateException, $$str({"javax.xml.datatype.Duration#getXMLSchemaType(): this Duration does not match one of the XML Schema date/time datatypes: year set = "_s, $$str(yearSet), " month set = "_s, $$str(monthSet), " day set = "_s, $$str(daySet), " hour set = "_s, $$str(hourSet), " minute set = "_s, $$str(minuteSet), " second set = "_s, $$str(secondSet)}));
}

int32_t Duration::getYears() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::YEARS)))->intValue();
}

int32_t Duration::getMonths() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::MONTHS)))->intValue();
}

int32_t Duration::getDays() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::DAYS)))->intValue();
}

int32_t Duration::getHours() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::HOURS)))->intValue();
}

int32_t Duration::getMinutes() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::MINUTES)))->intValue();
}

int32_t Duration::getSeconds() {
	$init($DatatypeConstants);
	return $nc($(getField($DatatypeConstants::SECONDS)))->intValue();
}

int64_t Duration::getTimeInMillis($Calendar* startInstant) {
	$var($Calendar, cal, $cast($Calendar, $nc(startInstant)->clone()));
	addTo(cal);
	int64_t var$0 = getCalendarTimeInMillis(cal);
	return var$0 - getCalendarTimeInMillis(startInstant);
}

int64_t Duration::getTimeInMillis($Date* startInstant) {
	$var($Calendar, cal, $new($GregorianCalendar));
	cal->setTime(startInstant);
	this->addTo(cal);
	int64_t var$0 = getCalendarTimeInMillis(cal);
	return var$0 - $nc(startInstant)->getTime();
}

void Duration::addTo($Date* date) {
	$useLocalCurrentObjectStackCache();
	if (date == nullptr) {
		$throwNew($NullPointerException, $$str({"Cannot call "_s, $($of(this)->getClass()->getName()), "#addTo(Date date) with date == null."_s}));
	}
	$var($Calendar, cal, $new($GregorianCalendar));
	cal->setTime(date);
	this->addTo(cal);
	$nc(date)->setTime(getCalendarTimeInMillis(cal));
}

Duration* Duration::subtract(Duration* rhs) {
	return add($($nc(rhs)->negate()));
}

Duration* Duration::multiply(int32_t factor) {
	$useLocalCurrentObjectStackCache();
	return multiply($$new($BigDecimal, $($String::valueOf(factor))));
}

bool Duration::isLongerThan(Duration* duration) {
	return compare(duration) == $DatatypeConstants::GREATER;
}

bool Duration::isShorterThan(Duration* duration) {
	return compare(duration) == $DatatypeConstants::LESSER;
}

bool Duration::equals(Object$* duration) {
	if (duration == nullptr || !($instanceOf(Duration, duration))) {
		return false;
	}
	return compare($cast(Duration, duration)) == $DatatypeConstants::EQUAL;
}

$String* Duration::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer));
	if (getSign() < 0) {
		buf->append(u'-');
	}
	buf->append(u'P');
	$init($DatatypeConstants);
	$var($BigInteger, years, $cast($BigInteger, getField($DatatypeConstants::YEARS)));
	if (years != nullptr) {
		buf->append($$str({years, "Y"_s}));
	}
	$var($BigInteger, months, $cast($BigInteger, getField($DatatypeConstants::MONTHS)));
	if (months != nullptr) {
		buf->append($$str({months, "M"_s}));
	}
	$var($BigInteger, days, $cast($BigInteger, getField($DatatypeConstants::DAYS)));
	if (days != nullptr) {
		buf->append($$str({days, "D"_s}));
	}
	$var($BigInteger, hours, $cast($BigInteger, getField($DatatypeConstants::HOURS)));
	$var($BigInteger, minutes, $cast($BigInteger, getField($DatatypeConstants::MINUTES)));
	$var($BigDecimal, seconds, $cast($BigDecimal, getField($DatatypeConstants::SECONDS)));
	if (hours != nullptr || minutes != nullptr || seconds != nullptr) {
		buf->append(u'T');
		if (hours != nullptr) {
			buf->append($$str({hours, "H"_s}));
		}
		if (minutes != nullptr) {
			buf->append($$str({minutes, "M"_s}));
		}
		if (seconds != nullptr) {
			buf->append($$str({$(toString(seconds)), "S"_s}));
		}
	}
	return buf->toString();
}

$String* Duration::toString($BigDecimal* bd) {
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

int64_t Duration::getCalendarTimeInMillis($Calendar* cal) {
	return $nc($($nc(cal)->getTime()))->getTime();
}

Duration::Duration() {
}

$Class* Duration::load$($String* name, bool initialize) {
	$loadClass(Duration, name, initialize, &_Duration_ClassInfo_, allocate$Duration);
	return class$;
}

$Class* Duration::class$ = nullptr;

		} // datatype
	} // xml
} // javax