#include <javax/xml/datatype/XMLGregorianCalendar.h>

#include <java/lang/Cloneable.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef EQUAL
#undef FIELD_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $Duration = ::javax::xml::datatype::Duration;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace datatype {

$MethodInfo _XMLGregorianCalendar_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLGregorianCalendar, init$, void)},
	{"add", "(Ljavax/xml/datatype/Duration;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, add, void, $Duration*)},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, clear, void)},
	{"compare", "(Ljavax/xml/datatype/XMLGregorianCalendar;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, compare, int32_t, XMLGregorianCalendar*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, equals, bool, Object$*)},
	{"getDay", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getDay, int32_t)},
	{"getEon", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getEon, $BigInteger*)},
	{"getEonAndYear", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getEonAndYear, $BigInteger*)},
	{"getFractionalSecond", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getFractionalSecond, $BigDecimal*)},
	{"getHour", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getHour, int32_t)},
	{"getMillisecond", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, getMillisecond, int32_t)},
	{"getMinute", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getMinute, int32_t)},
	{"getMonth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getMonth, int32_t)},
	{"getSecond", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getSecond, int32_t)},
	{"getTimeZone", "(I)Ljava/util/TimeZone;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getTimeZone, $TimeZone*, int32_t)},
	{"getTimezone", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getTimezone, int32_t)},
	{"getXMLSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getXMLSchemaType, $QName*)},
	{"getYear", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, getYear, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, hashCode, int32_t)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, isValid, bool)},
	{"normalize", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, normalize, XMLGregorianCalendar*)},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, reset, void)},
	{"setDay", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setDay, void, int32_t)},
	{"setFractionalSecond", "(Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setFractionalSecond, void, $BigDecimal*)},
	{"setHour", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setHour, void, int32_t)},
	{"setMillisecond", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setMillisecond, void, int32_t)},
	{"setMinute", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setMinute, void, int32_t)},
	{"setMonth", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setMonth, void, int32_t)},
	{"setSecond", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setSecond, void, int32_t)},
	{"setTime", "(III)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, setTime, void, int32_t, int32_t, int32_t)},
	{"setTime", "(IIILjava/math/BigDecimal;)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, setTime, void, int32_t, int32_t, int32_t, $BigDecimal*)},
	{"setTime", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, setTime, void, int32_t, int32_t, int32_t, int32_t)},
	{"setTimezone", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setTimezone, void, int32_t)},
	{"setYear", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setYear, void, $BigInteger*)},
	{"setYear", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, setYear, void, int32_t)},
	{"toGregorianCalendar", "()Ljava/util/GregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, toGregorianCalendar, $GregorianCalendar*)},
	{"toGregorianCalendar", "(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, toGregorianCalendar, $GregorianCalendar*, $TimeZone*, $Locale*, XMLGregorianCalendar*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendar, toString, $String*)},
	{"toXMLFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGregorianCalendar, toXMLFormat, $String*)},
	{}
};

$ClassInfo _XMLGregorianCalendar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.datatype.XMLGregorianCalendar",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_XMLGregorianCalendar_MethodInfo_
};

$Object* allocate$XMLGregorianCalendar($Class* clazz) {
	return $of($alloc(XMLGregorianCalendar));
}

$Object* XMLGregorianCalendar::clone() {
	 return this->$Cloneable::clone();
}

void XMLGregorianCalendar::init$() {
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second) {
	setTime(hour, minute, second, ($BigDecimal*)nullptr);
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second, $BigDecimal* fractional) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
	setFractionalSecond(fractional);
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
	setMillisecond(millisecond);
}

int32_t XMLGregorianCalendar::getMillisecond() {
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, fractionalSeconds, getFractionalSecond());
	if (fractionalSeconds == nullptr) {
		return $DatatypeConstants::FIELD_UNDEFINED;
	}
	return $nc($($nc($(getFractionalSecond()))->movePointRight(3)))->intValue();
}

bool XMLGregorianCalendar::equals(Object$* obj) {
	if (obj == nullptr || !($instanceOf(XMLGregorianCalendar, obj))) {
		return false;
	}
	if ($equals(obj, this)) {
		return true;
	}
	return compare($cast(XMLGregorianCalendar, obj)) == $DatatypeConstants::EQUAL;
}

int32_t XMLGregorianCalendar::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t timezone = getTimezone();
	if (timezone == $DatatypeConstants::FIELD_UNDEFINED) {
		timezone = 0;
	}
	$var(XMLGregorianCalendar, gc, this);
	if (timezone != 0) {
		$assign(gc, this->normalize());
	}
	$var($ints, elements, $new($ints, {
		gc->getYear(),
		gc->getMonth(),
		gc->getDay(),
		gc->getHour(),
		gc->getMinute(),
		gc->getSecond(),
		gc->getMillisecond()
	}));
	return $Arrays::hashCode(elements);
}

$String* XMLGregorianCalendar::toString() {
	return toXMLFormat();
}

XMLGregorianCalendar::XMLGregorianCalendar() {
}

$Class* XMLGregorianCalendar::load$($String* name, bool initialize) {
	$loadClass(XMLGregorianCalendar, name, initialize, &_XMLGregorianCalendar_ClassInfo_, allocate$XMLGregorianCalendar);
	return class$;
}

$Class* XMLGregorianCalendar::class$ = nullptr;

		} // datatype
	} // xml
} // javax