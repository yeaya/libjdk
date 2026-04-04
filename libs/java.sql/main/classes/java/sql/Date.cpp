#include <java/sql/Date.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/time/Instant.h>
#include <java/time/LocalDate.h>
#include <java/util/Date.h>
#include <jcpp.h>

#undef DAY_LENGTH
#undef MAX_DAY
#undef MAX_MONTH
#undef MONTH_LENGTH
#undef YEAR_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Instant = ::java::time::Instant;
using $LocalDate = ::java::time::LocalDate;
using $Date = ::java::util::Date;

namespace java {
	namespace sql {

void Date::init$(int32_t year, int32_t month, int32_t day) {
	$Date::init$(year, month, day);
}

void Date::init$(int64_t date) {
	$Date::init$(date);
}

void Date::setTime(int64_t date) {
	$Date::setTime(date);
}

Date* Date::valueOf($String* s) {
	$init(Date);
	if (s == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	int32_t YEAR_LENGTH = 4;
	int32_t MONTH_LENGTH = 2;
	int32_t DAY_LENGTH = 2;
	int32_t MAX_MONTH = 12;
	int32_t MAX_DAY = 31;
	$var(Date, d, nullptr);
	int32_t firstDash = $nc(s)->indexOf(u'-');
	int32_t secondDash = s->indexOf(u'-', firstDash + 1);
	int32_t len = s->length();
	if ((firstDash > 0) && (secondDash > 0) && (secondDash < len - 1)) {
		if (firstDash == YEAR_LENGTH && (secondDash - firstDash > 1 && secondDash - firstDash <= MONTH_LENGTH + 1) && (len - secondDash > 1 && len - secondDash <= DAY_LENGTH + 1)) {
			int32_t year = $Integer::parseInt(s, 0, firstDash, 10);
			int32_t month = $Integer::parseInt(s, firstDash + 1, secondDash, 10);
			int32_t day = $Integer::parseInt(s, secondDash + 1, len, 10);
			if ((month >= 1 && month <= MAX_MONTH) && (day >= 1 && day <= MAX_DAY)) {
				$assign(d, $new(Date, year - 1900, month - 1, day));
			}
		}
	}
	if (d == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	return d;
}

$String* Date::toString() {
	int32_t year = $Date::getYear() + 1900;
	int32_t month = $Date::getMonth() + 1;
	int32_t day = $Date::getDate();
	$var($chars, buf, $new($chars, 10));
	formatDecimalInt(year, buf, 0, 4);
	buf->set(4, u'-');
	Date::formatDecimalInt(month, buf, 5, 2);
	buf->set(7, u'-');
	Date::formatDecimalInt(day, buf, 8, 2);
	return $new($String, buf);
}

void Date::formatDecimalInt(int32_t val, $chars* buf, int32_t offset, int32_t len) {
	$init(Date);
	int32_t charPos = offset + len;
	do {
		$nc(buf)->set(--charPos, (char16_t)(u'0' + (val % 10)));
		val /= 10;
	} while (charPos > offset);
}

int32_t Date::getHours() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

int32_t Date::getMinutes() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

int32_t Date::getSeconds() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void Date::setHours(int32_t i) {
	$throwNew($IllegalArgumentException);
}

void Date::setMinutes(int32_t i) {
	$throwNew($IllegalArgumentException);
}

void Date::setSeconds(int32_t i) {
	$throwNew($IllegalArgumentException);
}

Date* Date::valueOf($LocalDate* date) {
	$init(Date);
	int32_t var$0 = $nc(date)->getYear() - 1900;
	int32_t var$1 = date->getMonthValue() - 1;
	return $new(Date, var$0, var$1, date->getDayOfMonth());
}

$LocalDate* Date::toLocalDate() {
	int32_t var$0 = getYear() + 1900;
	int32_t var$1 = getMonth() + 1;
	return $LocalDate::of(var$0, var$1, getDate());
}

$Instant* Date::toInstant() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

Date::Date() {
}

$Class* Date::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Date, serialVersionUID)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getHoursmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute getHoursmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getHoursmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getMinutesmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute getMinutesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getMinutesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSecondsmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute getSecondsmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getSecondsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setHoursmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute setHoursmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setHoursmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinutesmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute setMinutesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setMinutesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSecondsmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{}
	};
	$CompoundAttribute setSecondsmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setSecondsmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, $PUBLIC | $DEPRECATED, $method(Date, init$, void, int32_t, int32_t, int32_t), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(Date, init$, void, int64_t)},
		{"formatDecimalInt", "(I[CII)V", nullptr, $STATIC, $staticMethod(Date, formatDecimalInt, void, int32_t, $chars*, int32_t, int32_t)},
		{"getHours", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, getHours, int32_t), nullptr, nullptr, getHoursmethodAnnotations$$},
		{"getMinutes", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, getMinutes, int32_t), nullptr, nullptr, getMinutesmethodAnnotations$$},
		{"getSeconds", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, getSeconds, int32_t), nullptr, nullptr, getSecondsmethodAnnotations$$},
		{"setHours", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, setHours, void, int32_t), nullptr, nullptr, setHoursmethodAnnotations$$},
		{"setMinutes", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, setMinutes, void, int32_t), nullptr, nullptr, setMinutesmethodAnnotations$$},
		{"setSeconds", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Date, setSeconds, void, int32_t), nullptr, nullptr, setSecondsmethodAnnotations$$},
		{"setTime", "(J)V", nullptr, $PUBLIC, $virtualMethod(Date, setTime, void, int64_t)},
		{"toInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Date, toInstant, $Instant*)},
		{"toLocalDate", "()Ljava/time/LocalDate;", nullptr, $PUBLIC, $virtualMethod(Date, toLocalDate, $LocalDate*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Date, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljava/sql/Date;", nullptr, $PUBLIC | $STATIC, $staticMethod(Date, valueOf, Date*, $String*)},
		{"valueOf", "(Ljava/time/LocalDate;)Ljava/sql/Date;", nullptr, $PUBLIC | $STATIC, $staticMethod(Date, valueOf, Date*, $LocalDate*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.Date",
		"java.util.Date",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Date, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Date));
	});
	return class$;
}

$Class* Date::class$ = nullptr;

	} // sql
} // java