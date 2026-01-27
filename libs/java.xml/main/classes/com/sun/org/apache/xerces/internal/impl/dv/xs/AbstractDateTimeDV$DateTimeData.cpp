#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DurationDV.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $DurationDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DurationDV;
using $XSDateTime = ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDateTime;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _AbstractDateTimeDV$DateTimeData_FieldInfo_[] = {
	{"year", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, year)},
	{"month", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, month)},
	{"day", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, day)},
	{"hour", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, hour)},
	{"minute", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, minute)},
	{"utc", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, utc)},
	{"second", "D", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, second)},
	{"timezoneHr", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, timezoneHr)},
	{"timezoneMin", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, timezoneMin)},
	{"originalValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AbstractDateTimeDV$DateTimeData, originalValue)},
	{"normalized", "Z", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, normalized)},
	{"unNormYear", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormYear)},
	{"unNormMonth", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormMonth)},
	{"unNormDay", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormDay)},
	{"unNormHour", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormHour)},
	{"unNormMinute", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormMinute)},
	{"unNormSecond", "D", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, unNormSecond)},
	{"position", "I", nullptr, 0, $field(AbstractDateTimeDV$DateTimeData, position)},
	{"type", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV;", nullptr, $FINAL, $field(AbstractDateTimeDV$DateTimeData, type)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(AbstractDateTimeDV$DateTimeData, canonical)},
	{}
};

$MethodInfo _AbstractDateTimeDV$DateTimeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV;)V", nullptr, $PUBLIC, $method(AbstractDateTimeDV$DateTimeData, init$, void, $String*, $AbstractDateTimeDV*)},
	{"<init>", "(IIIIIDILjava/lang/String;ZLcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV;)V", nullptr, $PUBLIC, $method(AbstractDateTimeDV$DateTimeData, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, double, int32_t, $String*, bool, $AbstractDateTimeDV*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, clone, $Object*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, equals, bool, Object$*)},
	{"getDays", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getDays, int32_t)},
	{"getDuration", "()Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getDuration, $Duration*)},
	{"getHours", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getHours, int32_t)},
	{"getLexicalValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getLexicalValue, $String*)},
	{"getMinutes", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getMinutes, int32_t)},
	{"getMonths", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getMonths, int32_t)},
	{"getSeconds", "()D", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getSeconds, double)},
	{"getTimeZoneHours", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getTimeZoneHours, int32_t)},
	{"getTimeZoneMinutes", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getTimeZoneMinutes, int32_t)},
	{"getXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getXMLGregorianCalendar, $XMLGregorianCalendar*)},
	{"getYears", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, getYears, int32_t)},
	{"hasTimeZone", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, hasTimeZone, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, hashCode, int32_t)},
	{"isNormalized", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, isNormalized, bool)},
	{"normalize", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, normalize, $XSDateTime*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDateTimeDV$DateTimeData, toString, $String*)},
	{}
};

$InnerClassInfo _AbstractDateTimeDV$DateTimeData_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV$DateTimeData", "com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV", "DateTimeData", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractDateTimeDV$DateTimeData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV$DateTimeData",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDateTime",
	_AbstractDateTimeDV$DateTimeData_FieldInfo_,
	_AbstractDateTimeDV$DateTimeData_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDateTimeDV$DateTimeData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV"
};

$Object* allocate$AbstractDateTimeDV$DateTimeData($Class* clazz) {
	return $of($alloc(AbstractDateTimeDV$DateTimeData));
}

void AbstractDateTimeDV$DateTimeData::init$($String* originalValue, $AbstractDateTimeDV* type) {
	this->normalized = true;
	$set(this, originalValue, originalValue);
	$set(this, type, type);
}

void AbstractDateTimeDV$DateTimeData::init$(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, double second, int32_t utc, $String* originalValue, bool normalized, $AbstractDateTimeDV* type) {
	this->normalized = true;
	this->year = year;
	this->month = month;
	this->day = day;
	this->hour = hour;
	this->minute = minute;
	this->second = second;
	this->utc = utc;
	$set(this, type, type);
	$set(this, originalValue, originalValue);
}

bool AbstractDateTimeDV$DateTimeData::equals(Object$* obj) {
	if (!($instanceOf(AbstractDateTimeDV$DateTimeData, obj))) {
		return false;
	}
	return $nc(this->type)->compareDates(this, $cast(AbstractDateTimeDV$DateTimeData, obj), true) == 0;
}

int32_t AbstractDateTimeDV$DateTimeData::hashCode() {
	$useLocalCurrentObjectStackCache();
	$var(AbstractDateTimeDV$DateTimeData, tempDate, $new(AbstractDateTimeDV$DateTimeData, nullptr, this->type));
	$nc(this->type)->cloneDate(this, tempDate);
	$nc(this->type)->normalize(tempDate);
	return $nc($($nc(this->type)->dateToString(tempDate)))->hashCode();
}

$String* AbstractDateTimeDV$DateTimeData::toString() {
	if (this->canonical == nullptr) {
		$set(this, canonical, $nc(this->type)->dateToString(this));
	}
	return this->canonical;
}

int32_t AbstractDateTimeDV$DateTimeData::getYears() {
	if ($instanceOf($DurationDV, this->type)) {
		return 0;
	}
	return this->normalized ? this->year : this->unNormYear;
}

int32_t AbstractDateTimeDV$DateTimeData::getMonths() {
	if ($instanceOf($DurationDV, this->type)) {
		return this->year * 12 + this->month;
	}
	return this->normalized ? this->month : this->unNormMonth;
}

int32_t AbstractDateTimeDV$DateTimeData::getDays() {
	if ($instanceOf($DurationDV, this->type)) {
		return 0;
	}
	return this->normalized ? this->day : this->unNormDay;
}

int32_t AbstractDateTimeDV$DateTimeData::getHours() {
	if ($instanceOf($DurationDV, this->type)) {
		return 0;
	}
	return this->normalized ? this->hour : this->unNormHour;
}

int32_t AbstractDateTimeDV$DateTimeData::getMinutes() {
	if ($instanceOf($DurationDV, this->type)) {
		return 0;
	}
	return this->normalized ? this->minute : this->unNormMinute;
}

double AbstractDateTimeDV$DateTimeData::getSeconds() {
	if ($instanceOf($DurationDV, this->type)) {
		return this->day * 24 * 60 * 60 + this->hour * 60 * 60 + this->minute * 60 + this->second;
	}
	return this->normalized ? this->second : this->unNormSecond;
}

bool AbstractDateTimeDV$DateTimeData::hasTimeZone() {
	return this->utc != 0;
}

int32_t AbstractDateTimeDV$DateTimeData::getTimeZoneHours() {
	return this->timezoneHr;
}

int32_t AbstractDateTimeDV$DateTimeData::getTimeZoneMinutes() {
	return this->timezoneMin;
}

$String* AbstractDateTimeDV$DateTimeData::getLexicalValue() {
	return this->originalValue;
}

$XSDateTime* AbstractDateTimeDV$DateTimeData::normalize() {
	if (!this->normalized) {
		$var(AbstractDateTimeDV$DateTimeData, dt, $cast(AbstractDateTimeDV$DateTimeData, this->clone()));
		$nc(dt)->normalized = true;
		return dt;
	}
	return this;
}

bool AbstractDateTimeDV$DateTimeData::isNormalized() {
	return this->normalized;
}

$Object* AbstractDateTimeDV$DateTimeData::clone() {
	$var(AbstractDateTimeDV$DateTimeData, dt, $new(AbstractDateTimeDV$DateTimeData, this->year, this->month, this->day, this->hour, this->minute, this->second, this->utc, this->originalValue, this->normalized, this->type));
	$set(dt, canonical, this->canonical);
	dt->position = this->position;
	dt->timezoneHr = this->timezoneHr;
	dt->timezoneMin = this->timezoneMin;
	dt->unNormYear = this->unNormYear;
	dt->unNormMonth = this->unNormMonth;
	dt->unNormDay = this->unNormDay;
	dt->unNormHour = this->unNormHour;
	dt->unNormMinute = this->unNormMinute;
	dt->unNormSecond = this->unNormSecond;
	return $of(dt);
}

$XMLGregorianCalendar* AbstractDateTimeDV$DateTimeData::getXMLGregorianCalendar() {
	return $nc(this->type)->getXMLGregorianCalendar(this);
}

$Duration* AbstractDateTimeDV$DateTimeData::getDuration() {
	return $nc(this->type)->getDuration(this);
}

AbstractDateTimeDV$DateTimeData::AbstractDateTimeDV$DateTimeData() {
}

$Class* AbstractDateTimeDV$DateTimeData::load$($String* name, bool initialize) {
	$loadClass(AbstractDateTimeDV$DateTimeData, name, initialize, &_AbstractDateTimeDV$DateTimeData_ClassInfo_, allocate$AbstractDateTimeDV$DateTimeData);
	return class$;
}

$Class* AbstractDateTimeDV$DateTimeData::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com