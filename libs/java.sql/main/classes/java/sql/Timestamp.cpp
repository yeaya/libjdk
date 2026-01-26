#include <java/sql/Timestamp.h>

#include <java/lang/CharSequence.h>
#include <java/sql/Date.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/util/Date.h>
#include <jcpp.h>

#undef DAY_LENGTH
#undef MAX_DAY
#undef MAX_MONTH
#undef MILLIS_PER_SECOND
#undef MONTH_LENGTH
#undef YEAR_LENGTH

using $ArithmeticException = ::java::lang::ArithmeticException;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $1Date = ::java::sql::Date;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $Date = ::java::util::Date;

namespace java {
	namespace sql {

$NamedAttribute Timestamp_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Timestamp_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Timestamp_Attribute_var$0},
	{}
};

$FieldInfo _Timestamp_FieldInfo_[] = {
	{"nanos", "I", nullptr, $PRIVATE, $field(Timestamp, nanos)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Timestamp, serialVersionUID)},
	{"MILLIS_PER_SECOND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timestamp, MILLIS_PER_SECOND)},
	{}
};

$MethodInfo _Timestamp_MethodInfo_[] = {
	{"<init>", "(IIIIIII)V", nullptr, $PUBLIC | $DEPRECATED, $method(Timestamp, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t), nullptr, nullptr, _Timestamp_MethodAnnotations_init$0},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(Timestamp, init$, void, int64_t)},
	{"after", "(Ljava/sql/Timestamp;)Z", nullptr, $PUBLIC, $virtualMethod(Timestamp, after, bool, Timestamp*)},
	{"before", "(Ljava/sql/Timestamp;)Z", nullptr, $PUBLIC, $virtualMethod(Timestamp, before, bool, Timestamp*)},
	{"compareTo", "(Ljava/sql/Timestamp;)I", nullptr, $PUBLIC, $virtualMethod(Timestamp, compareTo, int32_t, Timestamp*)},
	{"compareTo", "(Ljava/util/Date;)I", nullptr, $PUBLIC, $virtualMethod(Timestamp, compareTo, int32_t, $Date*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Timestamp, compareTo, int32_t, Object$*)},
	{"equals", "(Ljava/sql/Timestamp;)Z", nullptr, $PUBLIC, $virtualMethod(Timestamp, equals, bool, Timestamp*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Timestamp, equals, bool, Object$*)},
	{"from", "(Ljava/time/Instant;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $STATIC, $staticMethod(Timestamp, from, Timestamp*, $Instant*)},
	{"getNanos", "()I", nullptr, $PUBLIC, $virtualMethod(Timestamp, getNanos, int32_t)},
	{"getTime", "()J", nullptr, $PUBLIC, $virtualMethod(Timestamp, getTime, int64_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Timestamp, hashCode, int32_t)},
	{"setNanos", "(I)V", nullptr, $PUBLIC, $virtualMethod(Timestamp, setNanos, void, int32_t)},
	{"setTime", "(J)V", nullptr, $PUBLIC, $virtualMethod(Timestamp, setTime, void, int64_t)},
	{"toInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Timestamp, toInstant, $Instant*)},
	{"toLocalDateTime", "()Ljava/time/LocalDateTime;", nullptr, $PUBLIC, $virtualMethod(Timestamp, toLocalDateTime, $LocalDateTime*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Timestamp, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $STATIC, $staticMethod(Timestamp, valueOf, Timestamp*, $String*)},
	{"valueOf", "(Ljava/time/LocalDateTime;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $STATIC, $staticMethod(Timestamp, valueOf, Timestamp*, $LocalDateTime*)},
	{}
};

$ClassInfo _Timestamp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.Timestamp",
	"java.util.Date",
	nullptr,
	_Timestamp_FieldInfo_,
	_Timestamp_MethodInfo_
};

$Object* allocate$Timestamp($Class* clazz) {
	return $of($alloc(Timestamp));
}

void Timestamp::init$(int32_t year, int32_t month, int32_t date, int32_t hour, int32_t minute, int32_t second, int32_t nano) {
	$Date::init$(year, month, date, hour, minute, second);
	if (nano > 0x3B9AC9FF || nano < 0) {
		$throwNew($IllegalArgumentException, "nanos > 999999999 or < 0"_s);
	}
	this->nanos = nano;
}

void Timestamp::init$(int64_t time) {
	$Date::init$((time / 1000) * 1000);
	this->nanos = (int32_t)((time % 1000) * 0x000F4240);
	if (this->nanos < 0) {
		this->nanos = 0x3B9ACA00 + this->nanos;
		$Date::setTime(((time / 1000) - 1) * 1000);
	}
}

void Timestamp::setTime(int64_t time) {
	$Date::setTime((time / 1000) * 1000);
	this->nanos = (int32_t)((time % 1000) * 0x000F4240);
	if (this->nanos < 0) {
		this->nanos = 0x3B9ACA00 + this->nanos;
		$Date::setTime(((time / 1000) - 1) * 1000);
	}
}

int64_t Timestamp::getTime() {
	int64_t time = $Date::getTime();
	return (time + (this->nanos / 0x000F4240));
}

Timestamp* Timestamp::valueOf($String* s$renamed) {
	$init(Timestamp);
	$useLocalCurrentObjectStackCache();
	$var($String, s, s$renamed);
	int32_t YEAR_LENGTH = 4;
	int32_t MONTH_LENGTH = 2;
	int32_t DAY_LENGTH = 2;
	int32_t MAX_MONTH = 12;
	int32_t MAX_DAY = 31;
	int32_t year = 0;
	int32_t month = 0;
	int32_t day = 0;
	int32_t hour = 0;
	int32_t minute = 0;
	int32_t second = 0;
	int32_t a_nanos = 0;
	int32_t firstDash = 0;
	int32_t secondDash = 0;
	int32_t dividingSpace = 0;
	int32_t firstColon = 0;
	int32_t secondColon = 0;
	int32_t period = 0;
	$var($String, formatError, "Timestamp format must be yyyy-mm-dd hh:mm:ss[.fffffffff]"_s);
	if (s == nullptr) {
		$throwNew($IllegalArgumentException, "null string"_s);
	}
	$assign(s, $nc(s)->trim());
	dividingSpace = s->indexOf((int32_t)u' ');
	if (dividingSpace < 0) {
		$throwNew($IllegalArgumentException, formatError);
	}
	firstDash = s->indexOf((int32_t)u'-');
	secondDash = s->indexOf((int32_t)u'-', firstDash + 1);
	firstColon = s->indexOf((int32_t)u':', dividingSpace + 1);
	secondColon = s->indexOf((int32_t)u':', firstColon + 1);
	period = s->indexOf((int32_t)u'.', secondColon + 1);
	bool parsedDate = false;
	if (firstDash > 0 && secondDash > 0 && secondDash < dividingSpace - 1) {
		if (firstDash == YEAR_LENGTH && (secondDash - firstDash > 1 && secondDash - firstDash <= MONTH_LENGTH + 1) && (dividingSpace - secondDash > 1 && dividingSpace - secondDash <= DAY_LENGTH + 1)) {
			year = $Integer::parseInt(s, 0, firstDash, 10);
			month = $Integer::parseInt(s, firstDash + 1, secondDash, 10);
			day = $Integer::parseInt(s, secondDash + 1, dividingSpace, 10);
			if ((month >= 1 && month <= MAX_MONTH) && (day >= 1 && day <= MAX_DAY)) {
				parsedDate = true;
			}
		}
	}
	if (!parsedDate) {
		$throwNew($IllegalArgumentException, formatError);
	}
	int32_t len = s->length();
	if (firstColon > 0 && secondColon > 0 && secondColon < len - 1) {
		hour = $Integer::parseInt(s, dividingSpace + 1, firstColon, 10);
		minute = $Integer::parseInt(s, firstColon + 1, secondColon, 10);
		if (period > 0 && period < len - 1) {
			second = $Integer::parseInt(s, secondColon + 1, period, 10);
			int32_t nanoPrecision = len - (period + 1);
			if (nanoPrecision > 9) {
				$throwNew($IllegalArgumentException, formatError);
			}
			if (!$Character::isDigit(s->charAt(period + 1))) {
				$throwNew($IllegalArgumentException, formatError);
			}
			int32_t tmpNanos = $Integer::parseInt(s, period + 1, len, 10);
			while (nanoPrecision < 9) {
				tmpNanos *= 10;
				++nanoPrecision;
			}
			a_nanos = tmpNanos;
		} else if (period > 0) {
			$throwNew($IllegalArgumentException, formatError);
		} else {
			second = $Integer::parseInt(s, secondColon + 1, len, 10);
		}
	} else {
		$throwNew($IllegalArgumentException, formatError);
	}
	return $new(Timestamp, year - 1900, month - 1, day, hour, minute, second, a_nanos);
}

$String* Timestamp::toString() {
	int32_t year = $Date::getYear() + 1900;
	int32_t month = $Date::getMonth() + 1;
	int32_t day = $Date::getDate();
	int32_t hour = $Date::getHours();
	int32_t minute = $Date::getMinutes();
	int32_t second = $Date::getSeconds();
	int32_t trailingZeros = 0;
	int32_t tmpNanos = this->nanos;
	if (tmpNanos == 0) {
		trailingZeros = 8;
	} else {
		while (tmpNanos % 10 == 0) {
			tmpNanos /= 10;
			++trailingZeros;
		}
	}
	int32_t count = 10000;
	int32_t yearSize = 4;
	do {
		if (year < count) {
			break;
		}
		++yearSize;
		count *= 10;
	} while (count < 0x3B9ACA00);
	$var($chars, buf, $new($chars, 25 + yearSize - trailingZeros));
	$1Date::formatDecimalInt(year, buf, 0, yearSize);
	buf->set(yearSize, u'-');
	$1Date::formatDecimalInt(month, buf, yearSize + 1, 2);
	buf->set(yearSize + 3, u'-');
	$1Date::formatDecimalInt(day, buf, yearSize + 4, 2);
	buf->set(yearSize + 6, u' ');
	$1Date::formatDecimalInt(hour, buf, yearSize + 7, 2);
	buf->set(yearSize + 9, u':');
	$1Date::formatDecimalInt(minute, buf, yearSize + 10, 2);
	buf->set(yearSize + 12, u':');
	$1Date::formatDecimalInt(second, buf, yearSize + 13, 2);
	buf->set(yearSize + 15, u'.');
	$1Date::formatDecimalInt(tmpNanos, buf, yearSize + 16, 9 - trailingZeros);
	return $new($String, buf);
}

int32_t Timestamp::getNanos() {
	return this->nanos;
}

void Timestamp::setNanos(int32_t n) {
	if (n > 0x3B9AC9FF || n < 0) {
		$throwNew($IllegalArgumentException, "nanos > 999999999 or < 0"_s);
	}
	this->nanos = n;
}

bool Timestamp::equals(Timestamp* ts) {
	if ($Date::equals(ts)) {
		if (this->nanos == $nc(ts)->nanos) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

bool Timestamp::equals(Object$* ts) {
	if ($instanceOf(Timestamp, ts)) {
		return this->equals($cast(Timestamp, ts));
	} else {
		return false;
	}
}

bool Timestamp::before(Timestamp* ts) {
	return compareTo(ts) < 0;
}

bool Timestamp::after(Timestamp* ts) {
	return compareTo(ts) > 0;
}

int32_t Timestamp::compareTo(Timestamp* ts) {
	int64_t thisTime = this->getTime();
	int64_t anotherTime = $nc(ts)->getTime();
	int32_t i = (thisTime < anotherTime ? -1 : (thisTime == anotherTime ? 0 : 1));
	if (i == 0) {
		if (this->nanos > ts->nanos) {
			return 1;
		} else if (this->nanos < ts->nanos) {
			return -1;
		}
	}
	return i;
}

int32_t Timestamp::compareTo($Date* o) {
	if ($instanceOf(Timestamp, o)) {
		return compareTo($cast(Timestamp, o));
	} else {
		$var(Timestamp, ts, $new(Timestamp, $nc(o)->getTime()));
		return this->compareTo(ts);
	}
}

int32_t Timestamp::hashCode() {
	return $Date::hashCode();
}

Timestamp* Timestamp::valueOf($LocalDateTime* dateTime) {
	$init(Timestamp);
	int32_t var$0 = $nc(dateTime)->getYear() - 1900;
	int32_t var$1 = dateTime->getMonthValue() - 1;
	int32_t var$2 = dateTime->getDayOfMonth();
	int32_t var$3 = dateTime->getHour();
	int32_t var$4 = dateTime->getMinute();
	int32_t var$5 = dateTime->getSecond();
	return $new(Timestamp, var$0, var$1, var$2, var$3, var$4, var$5, dateTime->getNano());
}

$LocalDateTime* Timestamp::toLocalDateTime() {
	int32_t var$0 = getYear() + 1900;
	int32_t var$1 = getMonth() + 1;
	int32_t var$2 = getDate();
	int32_t var$3 = getHours();
	int32_t var$4 = getMinutes();
	int32_t var$5 = getSeconds();
	return $LocalDateTime::of(var$0, var$1, var$2, var$3, var$4, var$5, getNanos());
}

Timestamp* Timestamp::from($Instant* instant) {
	$init(Timestamp);
	try {
		$var(Timestamp, stamp, $new(Timestamp, $nc(instant)->getEpochSecond() * Timestamp::MILLIS_PER_SECOND));
		stamp->nanos = $nc(instant)->getNano();
		return stamp;
	} catch ($ArithmeticException& ex) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

$Instant* Timestamp::toInstant() {
	return $Instant::ofEpochSecond($div($Date::getTime(), Timestamp::MILLIS_PER_SECOND), this->nanos);
}

int32_t Timestamp::compareTo(Object$* o) {
	return this->compareTo($cast($Date, o));
}

Timestamp::Timestamp() {
}

$Class* Timestamp::load$($String* name, bool initialize) {
	$loadClass(Timestamp, name, initialize, &_Timestamp_ClassInfo_, allocate$Timestamp);
	return class$;
}

$Class* Timestamp::class$ = nullptr;

	} // sql
} // java