#include <java/sql/Time.h>

#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/sql/Date.h>
#include <java/time/Instant.h>
#include <java/time/LocalTime.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $1Date = ::java::sql::Date;
using $Instant = ::java::time::Instant;
using $LocalTime = ::java::time::LocalTime;
using $Date = ::java::util::Date;

namespace java {
	namespace sql {

$NamedAttribute Time_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$0},
	{}
};

$NamedAttribute Time_Attribute_var$1[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_getDate2[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$1},
	{}
};

$NamedAttribute Time_Attribute_var$2[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_getDay3[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$2},
	{}
};

$NamedAttribute Time_Attribute_var$3[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_getMonth4[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$3},
	{}
};

$NamedAttribute Time_Attribute_var$4[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_getYear5[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$4},
	{}
};

$NamedAttribute Time_Attribute_var$5[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_setDate6[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$5},
	{}
};

$NamedAttribute Time_Attribute_var$6[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_setMonth7[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$6},
	{}
};

$NamedAttribute Time_Attribute_var$7[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Time_MethodAnnotations_setYear9[] = {
	{"Ljava/lang/Deprecated;", Time_Attribute_var$7},
	{}
};

$FieldInfo _Time_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Time, serialVersionUID)},
	{}
};

$MethodInfo _Time_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC | $DEPRECATED, $method(Time, init$, void, int32_t, int32_t, int32_t), nullptr, nullptr, _Time_MethodAnnotations_init$0},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(Time, init$, void, int64_t)},
	{"getDate", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, getDate, int32_t), nullptr, nullptr, _Time_MethodAnnotations_getDate2},
	{"getDay", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, getDay, int32_t), nullptr, nullptr, _Time_MethodAnnotations_getDay3},
	{"getMonth", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, getMonth, int32_t), nullptr, nullptr, _Time_MethodAnnotations_getMonth4},
	{"getYear", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, getYear, int32_t), nullptr, nullptr, _Time_MethodAnnotations_getYear5},
	{"setDate", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, setDate, void, int32_t), nullptr, nullptr, _Time_MethodAnnotations_setDate6},
	{"setMonth", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, setMonth, void, int32_t), nullptr, nullptr, _Time_MethodAnnotations_setMonth7},
	{"setTime", "(J)V", nullptr, $PUBLIC, $virtualMethod(Time, setTime, void, int64_t)},
	{"setYear", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Time, setYear, void, int32_t), nullptr, nullptr, _Time_MethodAnnotations_setYear9},
	{"toInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Time, toInstant, $Instant*)},
	{"toLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC, $virtualMethod(Time, toLocalTime, $LocalTime*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Time, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/Time;", nullptr, $PUBLIC | $STATIC, $staticMethod(Time, valueOf, Time*, $String*)},
	{"valueOf", "(Ljava/time/LocalTime;)Ljava/sql/Time;", nullptr, $PUBLIC | $STATIC, $staticMethod(Time, valueOf, Time*, $LocalTime*)},
	{}
};

$ClassInfo _Time_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.Time",
	"java.util.Date",
	nullptr,
	_Time_FieldInfo_,
	_Time_MethodInfo_
};

$Object* allocate$Time($Class* clazz) {
	return $of($alloc(Time));
}

void Time::init$(int32_t hour, int32_t minute, int32_t second) {
	$Date::init$(70, 0, 1, hour, minute, second);
}

void Time::init$(int64_t time) {
	$Date::init$(time);
}

void Time::setTime(int64_t time) {
	$Date::setTime(time);
}

Time* Time::valueOf($String* s) {
	$init(Time);
	if (s == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	int32_t hour = 0;
	int32_t minute = 0;
	int32_t second = 0;
	int32_t firstColon = $nc(s)->indexOf((int32_t)u':');
	int32_t secondColon = s->indexOf((int32_t)u':', firstColon + 1);
	int32_t len = s->length();
	if (firstColon > 0 && secondColon > 0 && secondColon < len - 1) {
		hour = $Integer::parseInt(s, 0, firstColon, 10);
		minute = $Integer::parseInt(s, firstColon + 1, secondColon, 10);
		second = $Integer::parseInt(s, secondColon + 1, len, 10);
	} else {
		$throwNew($IllegalArgumentException);
	}
	return $new(Time, hour, minute, second);
}

$String* Time::toString() {
	int32_t hour = $Date::getHours();
	int32_t minute = $Date::getMinutes();
	int32_t second = $Date::getSeconds();
	$var($chars, buf, $new($chars, 8));
	$1Date::formatDecimalInt(hour, buf, 0, 2);
	buf->set(2, u':');
	$1Date::formatDecimalInt(minute, buf, 3, 2);
	buf->set(5, u':');
	$1Date::formatDecimalInt(second, buf, 6, 2);
	return $new($String, buf);
}

int32_t Time::getYear() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

int32_t Time::getMonth() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

int32_t Time::getDay() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

int32_t Time::getDate() {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void Time::setYear(int32_t i) {
	$throwNew($IllegalArgumentException);
}

void Time::setMonth(int32_t i) {
	$throwNew($IllegalArgumentException);
}

void Time::setDate(int32_t i) {
	$throwNew($IllegalArgumentException);
}

Time* Time::valueOf($LocalTime* time) {
	$init(Time);
	int32_t var$0 = $nc(time)->getHour();
	int32_t var$1 = time->getMinute();
	return $new(Time, var$0, var$1, time->getSecond());
}

$LocalTime* Time::toLocalTime() {
	int32_t var$0 = getHours();
	int32_t var$1 = getMinutes();
	return $LocalTime::of(var$0, var$1, getSeconds());
}

$Instant* Time::toInstant() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

Time::Time() {
}

$Class* Time::load$($String* name, bool initialize) {
	$loadClass(Time, name, initialize, &_Time_ClassInfo_, allocate$Time);
	return class$;
}

$Class* Time::class$ = nullptr;

	} // sql
} // java