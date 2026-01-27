#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl$DaysInMonth.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl$Parser.h>
#include <com/sun/org/apache/xerces/internal/util/DatatypeMessageFormatter.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/StringBuffer.h>
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
#include <javax/xml/namespace/QName.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef AD
#undef BC
#undef BILLION_B
#undef BILLION_I
#undef DATE
#undef DATETIME
#undef DAY
#undef DAYS
#undef DAY_OF_MONTH
#undef DECEMBER
#undef DECIMAL_ONE
#undef DECIMAL_SIXTY
#undef DECIMAL_TWELVE
#undef DECIMAL_TWENTY_FOUR
#undef DECIMAL_ZERO
#undef DEFAULT_TIMEZONE_OFFSET
#undef DST_OFFSET
#undef EQUAL
#undef ERA
#undef FEBRUARY
#undef FIELD_NAME
#undef FIELD_UNDEFINED
#undef FLOOR
#undef FOUR
#undef FOUR_HUNDRED
#undef GDAY
#undef GMONTH
#undef GMONTHDAY
#undef GREATER
#undef GYEAR
#undef GYEARMONTH
#undef HOUR
#undef HOURS
#undef HOUR_OF_DAY
#undef HUNDRED
#undef INDETERMINATE
#undef JANUARY
#undef LEAP_YEAR_DEFAULT
#undef LESSER
#undef MAX_TIMEZONE_OFFSET
#undef MILLISECOND
#undef MINUTE
#undef MINUTES
#undef MIN_TIMEZONE_OFFSET
#undef MIN_VALUE
#undef MONTH
#undef MONTHS
#undef NOT_FOUND
#undef ONE
#undef P
#undef PURE_GREGORIAN_CHANGE
#undef Q
#undef SECOND
#undef SECONDS
#undef SIXTY
#undef TIME
#undef TIMEZONE
#undef TWELVE
#undef TWENTY_FOUR
#undef UP
#undef YEAR
#undef YEARS
#undef ZERO
#undef ZONE_OFFSET

using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $XMLGregorianCalendarImpl$DaysInMonth = ::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl$DaysInMonth;
using $XMLGregorianCalendarImpl$Parser = ::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl$Parser;
using $DatatypeMessageFormatter = ::com::sun::org::apache::xerces::internal::util::DatatypeMessageFormatter;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $RoundingMode = ::java::math::RoundingMode;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $Duration = ::javax::xml::datatype::Duration;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;
using $QName = ::javax::xml::namespace$::QName;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _XMLGregorianCalendarImpl_FieldInfo_[] = {
	{"orig_eon", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_eon)},
	{"orig_year", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_year)},
	{"orig_month", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_month)},
	{"orig_day", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_day)},
	{"orig_hour", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_hour)},
	{"orig_minute", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_minute)},
	{"orig_second", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_second)},
	{"orig_fracSeconds", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_fracSeconds)},
	{"orig_timezone", "I", nullptr, $PRIVATE | $TRANSIENT, $field(XMLGregorianCalendarImpl, orig_timezone)},
	{"eon", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, eon)},
	{"year", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, year)},
	{"month", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, month)},
	{"day", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, day)},
	{"timezone", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, timezone)},
	{"hour", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, hour)},
	{"minute", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, minute)},
	{"second", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, second)},
	{"fractionalSecond", "Ljava/math/BigDecimal;", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl, fractionalSecond)},
	{"BILLION_B", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, BILLION_B)},
	{"BILLION_I", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, BILLION_I)},
	{"PURE_GREGORIAN_CHANGE", "Ljava/util/Date;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, PURE_GREGORIAN_CHANGE)},
	{"YEAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, YEAR)},
	{"MONTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, MONTH)},
	{"DAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, DAY)},
	{"HOUR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, HOUR)},
	{"MINUTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, MINUTE)},
	{"SECOND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, SECOND)},
	{"MILLISECOND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, MILLISECOND)},
	{"TIMEZONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, TIMEZONE)},
	{"FIELD_NAME", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, FIELD_NAME)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGregorianCalendarImpl, serialVersionUID)},
	{"LEAP_YEAR_DEFAULT", "Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, LEAP_YEAR_DEFAULT)},
	{"FOUR", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, FOUR)},
	{"HUNDRED", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, HUNDRED)},
	{"FOUR_HUNDRED", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, FOUR_HUNDRED)},
	{"SIXTY", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, SIXTY)},
	{"TWENTY_FOUR", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, TWENTY_FOUR)},
	{"TWELVE", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, TWELVE)},
	{"DECIMAL_ZERO", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, DECIMAL_ZERO)},
	{"DECIMAL_ONE", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, DECIMAL_ONE)},
	{"DECIMAL_TWELVE", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, DECIMAL_TWELVE)},
	{"DECIMAL_TWENTY_FOUR", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, DECIMAL_TWENTY_FOUR)},
	{"DECIMAL_SIXTY", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl, DECIMAL_SIXTY)},
	{}
};

$MethodInfo _XMLGregorianCalendarImpl_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(XMLGregorianCalendarImpl, init$, void, $String*), "java.lang.IllegalArgumentException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLGregorianCalendarImpl, init$, void)},
	{"<init>", "(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)V", nullptr, $PROTECTED, $method(XMLGregorianCalendarImpl, init$, void, $BigInteger*, int32_t, int32_t, int32_t, int32_t, int32_t, $BigDecimal*, int32_t)},
	{"<init>", "(IIIIIIII)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"<init>", "(Ljava/util/GregorianCalendar;)V", nullptr, $PUBLIC, $method(XMLGregorianCalendarImpl, init$, void, $GregorianCalendar*)},
	{"add", "(Ljavax/xml/datatype/Duration;)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, add, void, $Duration*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, clear, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, clone, $Object*)},
	{"compare", "(Ljavax/xml/datatype/XMLGregorianCalendar;)I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, compare, int32_t, $XMLGregorianCalendar*)},
	{"compareField", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, compareField, int32_t, int32_t, int32_t)},
	{"compareField", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, compareField, int32_t, $BigInteger*, $BigInteger*)},
	{"compareField", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, compareField, int32_t, $BigDecimal*, $BigDecimal*)},
	{"createDate", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createDate, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, int32_t)},
	{"createDateTime", "(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createDateTime, $XMLGregorianCalendar*, $BigInteger*, int32_t, int32_t, int32_t, int32_t, int32_t, $BigDecimal*, int32_t)},
	{"createDateTime", "(IIIIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createDateTime, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"createDateTime", "(IIIIIIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createDateTime, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"createTime", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createTime, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, int32_t)},
	{"createTime", "(IIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createTime, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, $BigDecimal*, int32_t)},
	{"createTime", "(IIIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, createTime, $XMLGregorianCalendar*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"format", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, format, $String*, $String*)},
	{"getDay", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getDay, int32_t)},
	{"getDefaultLocale", "()Ljava/util/Locale;", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, getDefaultLocale, $Locale*)},
	{"getEon", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getEon, $BigInteger*)},
	{"getEonAndYear", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getEonAndYear, $BigInteger*)},
	{"getFractionalSecond", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getFractionalSecond, $BigDecimal*)},
	{"getHour", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getHour, int32_t)},
	{"getMillisecond", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getMillisecond, int32_t)},
	{"getMinute", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getMinute, int32_t)},
	{"getMonth", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getMonth, int32_t)},
	{"getSecond", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getSecond, int32_t)},
	{"getSeconds", "()Ljava/math/BigDecimal;", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, getSeconds, $BigDecimal*)},
	{"getTimeZone", "(I)Ljava/util/TimeZone;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getTimeZone, $TimeZone*, int32_t)},
	{"getTimezone", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getTimezone, int32_t)},
	{"getXMLSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getXMLSchemaType, $QName*)},
	{"getYear", "()I", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, getYear, int32_t)},
	{"internalCompare", "(Ljavax/xml/datatype/XMLGregorianCalendar;Ljavax/xml/datatype/XMLGregorianCalendar;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, internalCompare, int32_t, $XMLGregorianCalendar*, $XMLGregorianCalendar*)},
	{"invalidFieldValue", "(II)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, invalidFieldValue, void, int32_t, int32_t)},
	{"isDigit", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, isDigit, bool, char16_t)},
	{"isValid", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, isValid, bool)},
	{"maximumDayInMonthFor", "(Ljava/math/BigInteger;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, maximumDayInMonthFor, int32_t, $BigInteger*, int32_t)},
	{"maximumDayInMonthFor", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLGregorianCalendarImpl, maximumDayInMonthFor, int32_t, int32_t, int32_t)},
	{"normalize", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, normalize, $XMLGregorianCalendar*)},
	{"normalizeToTimezone", "(I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, normalizeToTimezone, $XMLGregorianCalendar*, int32_t)},
	{"parse", "(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLGregorianCalendarImpl, parse, $XMLGregorianCalendar*, $String*)},
	{"printNumber", "(Ljava/lang/StringBuilder;II)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, printNumber, void, $StringBuilder*, int32_t, int32_t)},
	{"printNumber", "(Ljava/lang/StringBuilder;Ljava/math/BigInteger;I)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, printNumber, void, $StringBuilder*, $BigInteger*, int32_t)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, reset, void)},
	{"sanitize", "(Ljava/lang/Number;I)Ljava/math/BigInteger;", nullptr, $STATIC, $staticMethod(XMLGregorianCalendarImpl, sanitize, $BigInteger*, $Number*, int32_t)},
	{"save", "()V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, save, void)},
	{"setDay", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setDay, void, int32_t)},
	{"setEon", "(Ljava/math/BigInteger;)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, setEon, void, $BigInteger*)},
	{"setFractionalSecond", "(Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setFractionalSecond, void, $BigDecimal*)},
	{"setHour", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, setHour, void, int32_t)},
	{"setHour", "(IZ)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, setHour, void, int32_t, bool)},
	{"setMillisecond", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, setMillisecond, void, int32_t)},
	{"setMinute", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, setMinute, void, int32_t)},
	{"setMonth", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setMonth, void, int32_t)},
	{"setSecond", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, setSecond, void, int32_t)},
	{"setTime", "(III)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setTime, void, int32_t, int32_t, int32_t)},
	{"setTime", "(IIILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setTime, void, int32_t, int32_t, int32_t, $BigDecimal*)},
	{"setTime", "(IIII)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setTime, void, int32_t, int32_t, int32_t, int32_t)},
	{"setTimezone", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setTimezone, void, int32_t)},
	{"setYear", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setYear, void, $BigInteger*)},
	{"setYear", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLGregorianCalendarImpl, setYear, void, int32_t)},
	{"testHour", "()V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl, testHour, void)},
	{"toGregorianCalendar", "()Ljava/util/GregorianCalendar;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, toGregorianCalendar, $GregorianCalendar*)},
	{"toGregorianCalendar", "(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, toGregorianCalendar, $GregorianCalendar*, $TimeZone*, $Locale*, $XMLGregorianCalendar*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toXMLFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLGregorianCalendarImpl, toXMLFormat, $String*)},
	{}
};

$InnerClassInfo _XMLGregorianCalendarImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$Parser", "com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl", "Parser", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth", "com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl", "DaysInMonth", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XMLGregorianCalendarImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl",
	"javax.xml.datatype.XMLGregorianCalendar",
	"java.io.Serializable",
	_XMLGregorianCalendarImpl_FieldInfo_,
	_XMLGregorianCalendarImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLGregorianCalendarImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$Parser,com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth"
};

$Object* allocate$XMLGregorianCalendarImpl($Class* clazz) {
	return $of($alloc(XMLGregorianCalendarImpl));
}

bool XMLGregorianCalendarImpl::equals(Object$* obj) {
	 return this->$XMLGregorianCalendar::equals(obj);
}

int32_t XMLGregorianCalendarImpl::hashCode() {
	 return this->$XMLGregorianCalendar::hashCode();
}

$String* XMLGregorianCalendarImpl::toString() {
	 return this->$XMLGregorianCalendar::toString();
}

void XMLGregorianCalendarImpl::finalize() {
	this->$XMLGregorianCalendar::finalize();
}

$BigInteger* XMLGregorianCalendarImpl::BILLION_B = nullptr;
$Date* XMLGregorianCalendarImpl::PURE_GREGORIAN_CHANGE = nullptr;
$StringArray* XMLGregorianCalendarImpl::FIELD_NAME = nullptr;
$XMLGregorianCalendar* XMLGregorianCalendarImpl::LEAP_YEAR_DEFAULT = nullptr;
$BigInteger* XMLGregorianCalendarImpl::FOUR = nullptr;
$BigInteger* XMLGregorianCalendarImpl::HUNDRED = nullptr;
$BigInteger* XMLGregorianCalendarImpl::FOUR_HUNDRED = nullptr;
$BigInteger* XMLGregorianCalendarImpl::SIXTY = nullptr;
$BigInteger* XMLGregorianCalendarImpl::TWENTY_FOUR = nullptr;
$BigInteger* XMLGregorianCalendarImpl::TWELVE = nullptr;
$BigDecimal* XMLGregorianCalendarImpl::DECIMAL_ZERO = nullptr;
$BigDecimal* XMLGregorianCalendarImpl::DECIMAL_ONE = nullptr;
$BigDecimal* XMLGregorianCalendarImpl::DECIMAL_TWELVE = nullptr;
$BigDecimal* XMLGregorianCalendarImpl::DECIMAL_TWENTY_FOUR = nullptr;
$BigDecimal* XMLGregorianCalendarImpl::DECIMAL_SIXTY = nullptr;

void XMLGregorianCalendarImpl::init$($String* lexicalRepresentation) {
	$useLocalCurrentObjectStackCache();
	$XMLGregorianCalendar::init$();
	this->orig_year = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_month = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_day = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_second = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_timezone = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
	$var($String, format, nullptr);
	$var($String, lexRep, lexicalRepresentation);
	int32_t NOT_FOUND = -1;
	int32_t lexRepLength = $nc(lexRep)->length();
	if (lexRep->indexOf((int32_t)u'T') != NOT_FOUND) {
		$assign(format, "%Y-%M-%DT%h:%m:%s%z"_s);
	} else if (lexRepLength >= 3 && lexRep->charAt(2) == u':') {
		$assign(format, "%h:%m:%s%z"_s);
	} else if (lexRep->startsWith("--"_s)) {
		if (lexRepLength >= 3 && lexRep->charAt(2) == u'-') {
			$assign(format, "---%D%z"_s);
		} else if (lexRepLength == 4 || lexRepLength == 5 || lexRepLength == 10) {
			$assign(format, "--%M%z"_s);
		} else {
			$assign(format, "--%M-%D%z"_s);
		}
	} else {
		int32_t countSeparator = 0;
		int32_t timezoneOffset = lexRep->indexOf((int32_t)u':');
		if (timezoneOffset != NOT_FOUND) {
			lexRepLength -= 6;
		}
		for (int32_t i = 1; i < lexRepLength; ++i) {
			if (lexRep->charAt(i) == u'-') {
				++countSeparator;
			}
		}
		if (countSeparator == 0) {
			$assign(format, "%Y%z"_s);
		} else if (countSeparator == 1) {
			$assign(format, "%Y-%M%z"_s);
		} else {
			$assign(format, "%Y-%M-%D%z"_s);
		}
	}
	$var($XMLGregorianCalendarImpl$Parser, p, $new($XMLGregorianCalendarImpl$Parser, this, format, lexRep));
	p->parse();
	if (!isValid()) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidXGCRepresentation"_s, $$new($ObjectArray, {$of(lexicalRepresentation)}))));
	}
	save();
}

void XMLGregorianCalendarImpl::save() {
	$set(this, orig_eon, this->eon);
	this->orig_year = this->year;
	this->orig_month = this->month;
	this->orig_day = this->day;
	this->orig_hour = this->hour;
	this->orig_minute = this->minute;
	this->orig_second = this->second;
	$set(this, orig_fracSeconds, this->fractionalSecond);
	this->orig_timezone = this->timezone;
}

void XMLGregorianCalendarImpl::init$() {
	$XMLGregorianCalendar::init$();
	this->orig_year = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_month = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_day = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_second = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_timezone = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
}

void XMLGregorianCalendarImpl::init$($BigInteger* year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, $BigDecimal* fractionalSecond, int32_t timezone) {
	$useLocalCurrentObjectStackCache();
	$XMLGregorianCalendar::init$();
	this->orig_year = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_month = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_day = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_second = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_timezone = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
	setYear(year);
	setMonth(month);
	setDay(day);
	setTime(hour, minute, second, fractionalSecond);
	setTimezone(timezone);
	if (!isValid()) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidXGCValue-fractional"_s, $$new($ObjectArray, {
			$of(year),
			$($of($Integer::valueOf(month))),
			$($of($Integer::valueOf(day))),
			$($of($Integer::valueOf(hour))),
			$($of($Integer::valueOf(minute))),
			$($of($Integer::valueOf(second))),
			$of(fractionalSecond),
			$($of($Integer::valueOf(timezone)))
		}))));
	}
	save();
}

void XMLGregorianCalendarImpl::init$(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t timezone) {
	$useLocalCurrentObjectStackCache();
	$XMLGregorianCalendar::init$();
	this->orig_year = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_month = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_day = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_second = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_timezone = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
	setYear(year);
	setMonth(month);
	setDay(day);
	setTime(hour, minute, second);
	setTimezone(timezone);
	$var($BigDecimal, realMilliseconds, nullptr);
	if (millisecond != $DatatypeConstants::FIELD_UNDEFINED) {
		$assign(realMilliseconds, $BigDecimal::valueOf(millisecond, 3));
	}
	setFractionalSecond(realMilliseconds);
	if (!isValid()) {
		$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidXGCValue-milli"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(year))),
			$($of($Integer::valueOf(month))),
			$($of($Integer::valueOf(day))),
			$($of($Integer::valueOf(hour))),
			$($of($Integer::valueOf(minute))),
			$($of($Integer::valueOf(second))),
			$($of($Integer::valueOf(millisecond))),
			$($of($Integer::valueOf(timezone)))
		}))));
	}
	save();
}

void XMLGregorianCalendarImpl::init$($GregorianCalendar* cal) {
	$XMLGregorianCalendar::init$();
	this->orig_year = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_month = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_day = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_second = $DatatypeConstants::FIELD_UNDEFINED;
	this->orig_timezone = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
	int32_t year1 = $nc(cal)->get($Calendar::YEAR);
	if (cal->get($Calendar::ERA) == $GregorianCalendar::BC) {
		year1 = -year1;
	}
	this->setYear(year1);
	this->setMonth(cal->get($Calendar::MONTH) + 1);
	this->setDay(cal->get($Calendar::DAY_OF_MONTH));
	int32_t var$0 = cal->get($Calendar::HOUR_OF_DAY);
	int32_t var$1 = cal->get($Calendar::MINUTE);
	int32_t var$2 = cal->get($Calendar::SECOND);
	this->setTime(var$0, var$1, var$2, cal->get($Calendar::MILLISECOND));
	int32_t var$3 = cal->get($Calendar::ZONE_OFFSET);
	int32_t offsetInMinutes = $div((var$3 + cal->get($Calendar::DST_OFFSET)), (60 * 1000));
	this->setTimezone(offsetInMinutes);
	save();
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createDateTime($BigInteger* year, int32_t month, int32_t day, int32_t hours, int32_t minutes, int32_t seconds, $BigDecimal* fractionalSecond, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, year, month, day, hours, minutes, seconds, fractionalSecond, timezone);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, year, month, day, hour, minute, second, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createDateTime(int32_t year, int32_t month, int32_t day, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, year, month, day, hours, minutes, seconds, milliseconds, timezone);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createDate(int32_t year, int32_t month, int32_t day, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, year, month, day, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, timezone);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, hours, minutes, seconds, $DatatypeConstants::FIELD_UNDEFINED, timezone);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createTime(int32_t hours, int32_t minutes, int32_t seconds, $BigDecimal* fractionalSecond, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, ($BigInteger*)nullptr, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, hours, minutes, seconds, fractionalSecond, timezone);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::createTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, hours, minutes, seconds, milliseconds, timezone);
}

$BigInteger* XMLGregorianCalendarImpl::getEon() {
	return this->eon;
}

int32_t XMLGregorianCalendarImpl::getYear() {
	return this->year;
}

$BigInteger* XMLGregorianCalendarImpl::getEonAndYear() {
	if (this->year != $DatatypeConstants::FIELD_UNDEFINED && this->eon != nullptr) {
		return $nc(this->eon)->add($($BigInteger::valueOf((int64_t)this->year)));
	}
	if (this->year != $DatatypeConstants::FIELD_UNDEFINED && this->eon == nullptr) {
		return $BigInteger::valueOf((int64_t)this->year);
	}
	return nullptr;
}

int32_t XMLGregorianCalendarImpl::getMonth() {
	return this->month;
}

int32_t XMLGregorianCalendarImpl::getDay() {
	return this->day;
}

int32_t XMLGregorianCalendarImpl::getTimezone() {
	return this->timezone;
}

int32_t XMLGregorianCalendarImpl::getHour() {
	return this->hour;
}

int32_t XMLGregorianCalendarImpl::getMinute() {
	return this->minute;
}

int32_t XMLGregorianCalendarImpl::getSecond() {
	return this->second;
}

$BigDecimal* XMLGregorianCalendarImpl::getSeconds() {
	if (this->second == $DatatypeConstants::FIELD_UNDEFINED) {
		return XMLGregorianCalendarImpl::DECIMAL_ZERO;
	}
	$var($BigDecimal, result, $BigDecimal::valueOf((int64_t)this->second));
	if (this->fractionalSecond != nullptr) {
		return $nc(result)->add(this->fractionalSecond);
	} else {
		return result;
	}
}

int32_t XMLGregorianCalendarImpl::getMillisecond() {
	if (this->fractionalSecond == nullptr) {
		return $DatatypeConstants::FIELD_UNDEFINED;
	} else {
		return $nc($($nc(this->fractionalSecond)->movePointRight(3)))->intValue();
	}
}

$BigDecimal* XMLGregorianCalendarImpl::getFractionalSecond() {
	return this->fractionalSecond;
}

void XMLGregorianCalendarImpl::setYear($BigInteger* year) {
	$useLocalCurrentObjectStackCache();
	if (year == nullptr) {
		$set(this, eon, nullptr);
		this->year = $DatatypeConstants::FIELD_UNDEFINED;
	} else {
		$var($BigInteger, temp, $nc(year)->remainder(XMLGregorianCalendarImpl::BILLION_B));
		this->year = $nc(temp)->intValue();
		setEon($(year->subtract(temp)));
	}
}

void XMLGregorianCalendarImpl::setYear(int32_t year) {
	$useLocalCurrentObjectStackCache();
	if (year == $DatatypeConstants::FIELD_UNDEFINED) {
		this->year = $DatatypeConstants::FIELD_UNDEFINED;
		$set(this, eon, nullptr);
	} else if ($Math::abs(year) < XMLGregorianCalendarImpl::BILLION_I) {
		this->year = year;
		$set(this, eon, nullptr);
	} else {
		$var($BigInteger, theYear, $BigInteger::valueOf((int64_t)year));
		$var($BigInteger, remainder, $nc(theYear)->remainder(XMLGregorianCalendarImpl::BILLION_B));
		this->year = $nc(remainder)->intValue();
		setEon($(theYear->subtract(remainder)));
	}
}

void XMLGregorianCalendarImpl::setEon($BigInteger* eon) {
	$init($BigInteger);
	if (eon != nullptr && eon->compareTo($BigInteger::ZERO) == 0) {
		$set(this, eon, nullptr);
	} else {
		$set(this, eon, eon);
	}
}

void XMLGregorianCalendarImpl::setMonth(int32_t month) {
	if (month < $DatatypeConstants::JANUARY || $DatatypeConstants::DECEMBER < month) {
		if (month != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::MONTH, month);
		}
	}
	this->month = month;
}

void XMLGregorianCalendarImpl::setDay(int32_t day) {
	if (day < 1 || 31 < day) {
		if (day != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::DAY, day);
		}
	}
	this->day = day;
}

void XMLGregorianCalendarImpl::setTimezone(int32_t offset) {
	if (offset < -14 * 60 || 14 * 60 < offset) {
		if (offset != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::TIMEZONE, offset);
		}
	}
	this->timezone = offset;
}

void XMLGregorianCalendarImpl::setTime(int32_t hour, int32_t minute, int32_t second) {
	setTime(hour, minute, second, ($BigDecimal*)nullptr);
}

void XMLGregorianCalendarImpl::invalidFieldValue(int32_t field, int32_t value) {
	$useLocalCurrentObjectStackCache();
	$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidFieldValue"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(value))),
		$of($nc(XMLGregorianCalendarImpl::FIELD_NAME)->get(field))
	}))));
}

void XMLGregorianCalendarImpl::testHour() {
	if (getHour() == 24) {
		bool var$0 = getMinute() != 0;
		if (var$0 || getSecond() != 0) {
			invalidFieldValue(XMLGregorianCalendarImpl::HOUR, getHour());
		}
		setHour(0, false);
		add($$new($DurationImpl, true, 0, 0, 1, 0, 0, 0));
	}
}

void XMLGregorianCalendarImpl::setHour(int32_t hour) {
	setHour(hour, true);
}

void XMLGregorianCalendarImpl::setHour(int32_t hour, bool validate) {
	if (hour < 0 || hour > 24) {
		if (hour != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::HOUR, hour);
		}
	}
	this->hour = hour;
	if (validate) {
		testHour();
	}
}

void XMLGregorianCalendarImpl::setMinute(int32_t minute) {
	if (minute < 0 || 59 < minute) {
		if (minute != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::MINUTE, minute);
		}
	}
	this->minute = minute;
}

void XMLGregorianCalendarImpl::setSecond(int32_t second) {
	if (second < 0 || 60 < second) {
		if (second != $DatatypeConstants::FIELD_UNDEFINED) {
			invalidFieldValue(XMLGregorianCalendarImpl::SECOND, second);
		}
	}
	this->second = second;
}

void XMLGregorianCalendarImpl::setTime(int32_t hour, int32_t minute, int32_t second, $BigDecimal* fractional) {
	setHour(hour, false);
	setMinute(minute);
	if (second != 60) {
		setSecond(second);
	} else if ((hour == 23 && minute == 59) || (hour == 0 && minute == 0)) {
		setSecond(second);
	} else {
		invalidFieldValue(XMLGregorianCalendarImpl::SECOND, second);
	}
	setFractionalSecond(fractional);
	testHour();
}

void XMLGregorianCalendarImpl::setTime(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) {
	setHour(hour, false);
	setMinute(minute);
	if (second != 60) {
		setSecond(second);
	} else if ((hour == 23 && minute == 59) || (hour == 0 && minute == 0)) {
		setSecond(second);
	} else {
		invalidFieldValue(XMLGregorianCalendarImpl::SECOND, second);
	}
	setMillisecond(millisecond);
	testHour();
}

int32_t XMLGregorianCalendarImpl::compare($XMLGregorianCalendar* rhs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLGregorianCalendar, lhs, this);
	int32_t result = $DatatypeConstants::INDETERMINATE;
	$var(XMLGregorianCalendarImpl, P, $cast(XMLGregorianCalendarImpl, lhs));
	$var(XMLGregorianCalendarImpl, Q, $cast(XMLGregorianCalendarImpl, rhs));
	int32_t var$0 = P->getTimezone();
	if (var$0 == $nc(Q)->getTimezone()) {
		return internalCompare(P, Q);
	} else {
		bool var$2 = P->getTimezone() != $DatatypeConstants::FIELD_UNDEFINED;
		if (var$2 && Q->getTimezone() != $DatatypeConstants::FIELD_UNDEFINED) {
			$assign(P, $cast(XMLGregorianCalendarImpl, P->normalize()));
			$assign(Q, $cast(XMLGregorianCalendarImpl, Q->normalize()));
			return internalCompare(P, Q);
		} else if (P->getTimezone() != $DatatypeConstants::FIELD_UNDEFINED) {
			if (P->getTimezone() != 0) {
				$assign(P, $cast(XMLGregorianCalendarImpl, P->normalize()));
			}
			$var($XMLGregorianCalendar, MinQ, Q->normalizeToTimezone($DatatypeConstants::MIN_TIMEZONE_OFFSET));
			result = internalCompare(P, MinQ);
			if (result == $DatatypeConstants::LESSER) {
				return result;
			}
			$var($XMLGregorianCalendar, MaxQ, Q->normalizeToTimezone($DatatypeConstants::MAX_TIMEZONE_OFFSET));
			result = internalCompare(P, MaxQ);
			if (result == $DatatypeConstants::GREATER) {
				return result;
			} else {
				return $DatatypeConstants::INDETERMINATE;
			}
		} else {
			if (Q->getTimezone() != 0) {
				$assign(Q, $cast(XMLGregorianCalendarImpl, Q->normalizeToTimezone(Q->getTimezone())));
			}
			$var($XMLGregorianCalendar, MaxP, P->normalizeToTimezone($DatatypeConstants::MAX_TIMEZONE_OFFSET));
			result = internalCompare(MaxP, Q);
			if (result == $DatatypeConstants::LESSER) {
				return result;
			}
			$var($XMLGregorianCalendar, MinP, P->normalizeToTimezone($DatatypeConstants::MIN_TIMEZONE_OFFSET));
			result = internalCompare(MinP, Q);
			if (result == $DatatypeConstants::GREATER) {
				return result;
			} else {
				return $DatatypeConstants::INDETERMINATE;
			}
		}
	}
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::normalize() {
	$var($XMLGregorianCalendar, normalized, normalizeToTimezone(this->timezone));
	if (getTimezone() == $DatatypeConstants::FIELD_UNDEFINED) {
		$nc(normalized)->setTimezone($DatatypeConstants::FIELD_UNDEFINED);
	}
	if (getMillisecond() == $DatatypeConstants::FIELD_UNDEFINED) {
		$nc(normalized)->setMillisecond($DatatypeConstants::FIELD_UNDEFINED);
	}
	return normalized;
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::normalizeToTimezone(int32_t timezone) {
	$useLocalCurrentObjectStackCache();
	int32_t minutes = timezone;
	$var($XMLGregorianCalendar, result, $cast($XMLGregorianCalendar, this->clone()));
	minutes = -minutes;
	$var($Duration, d, $new($DurationImpl, minutes >= 0, 0, 0, 0, 0, minutes < 0 ? -minutes : minutes, 0));
	$nc(result)->add(d);
	result->setTimezone(0);
	return result;
}

int32_t XMLGregorianCalendarImpl::internalCompare($XMLGregorianCalendar* P, $XMLGregorianCalendar* Q) {
	$init(XMLGregorianCalendarImpl);
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	if ($nc(P)->getEon() == $nc(Q)->getEon()) {
		int32_t var$0 = P->getYear();
		result = compareField(var$0, Q->getYear());
		if (result != $DatatypeConstants::EQUAL) {
			return result;
		}
	} else {
		$var($BigInteger, var$1, P->getEonAndYear());
		result = compareField(var$1, $(Q->getEonAndYear()));
		if (result != $DatatypeConstants::EQUAL) {
			return result;
		}
	}
	int32_t var$2 = $nc(P)->getMonth();
	result = compareField(var$2, $nc(Q)->getMonth());
	if (result != $DatatypeConstants::EQUAL) {
		return result;
	}
	int32_t var$3 = $nc(P)->getDay();
	result = compareField(var$3, $nc(Q)->getDay());
	if (result != $DatatypeConstants::EQUAL) {
		return result;
	}
	int32_t var$4 = $nc(P)->getHour();
	result = compareField(var$4, $nc(Q)->getHour());
	if (result != $DatatypeConstants::EQUAL) {
		return result;
	}
	int32_t var$5 = $nc(P)->getMinute();
	result = compareField(var$5, $nc(Q)->getMinute());
	if (result != $DatatypeConstants::EQUAL) {
		return result;
	}
	int32_t var$6 = $nc(P)->getSecond();
	result = compareField(var$6, $nc(Q)->getSecond());
	if (result != $DatatypeConstants::EQUAL) {
		return result;
	}
	$var($BigDecimal, var$7, $nc(P)->getFractionalSecond());
	result = compareField(var$7, $($nc(Q)->getFractionalSecond()));
	return result;
}

int32_t XMLGregorianCalendarImpl::compareField(int32_t Pfield, int32_t Qfield) {
	$init(XMLGregorianCalendarImpl);
	if (Pfield == Qfield) {
		return $DatatypeConstants::EQUAL;
	} else if (Pfield == $DatatypeConstants::FIELD_UNDEFINED || Qfield == $DatatypeConstants::FIELD_UNDEFINED) {
		return $DatatypeConstants::INDETERMINATE;
	} else {
		return (Pfield < Qfield ? $DatatypeConstants::LESSER : $DatatypeConstants::GREATER);
	}
}

int32_t XMLGregorianCalendarImpl::compareField($BigInteger* Pfield, $BigInteger* Qfield) {
	$init(XMLGregorianCalendarImpl);
	if (Pfield == nullptr) {
		return (Qfield == nullptr ? $DatatypeConstants::EQUAL : $DatatypeConstants::INDETERMINATE);
	}
	if (Qfield == nullptr) {
		return $DatatypeConstants::INDETERMINATE;
	}
	return $nc(Pfield)->compareTo(Qfield);
}

int32_t XMLGregorianCalendarImpl::compareField($BigDecimal* Pfield$renamed, $BigDecimal* Qfield$renamed) {
	$init(XMLGregorianCalendarImpl);
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, Pfield, Pfield$renamed);
	$var($BigDecimal, Qfield, Qfield$renamed);
	if (Pfield == Qfield) {
		return $DatatypeConstants::EQUAL;
	}
	if (Pfield == nullptr) {
		$assign(Pfield, XMLGregorianCalendarImpl::DECIMAL_ZERO);
	}
	if (Qfield == nullptr) {
		$assign(Qfield, XMLGregorianCalendarImpl::DECIMAL_ZERO);
	}
	return $nc(Pfield)->compareTo(Qfield);
}

$XMLGregorianCalendar* XMLGregorianCalendarImpl::parse($String* lexicalRepresentation) {
	$init(XMLGregorianCalendarImpl);
	return $new(XMLGregorianCalendarImpl, lexicalRepresentation);
}

$String* XMLGregorianCalendarImpl::toXMLFormat() {
	$useLocalCurrentObjectStackCache();
	$var($QName, typekind, getXMLSchemaType());
	$var($String, formatString, nullptr);
	$init($DatatypeConstants);
	if (typekind == $DatatypeConstants::DATETIME) {
		$assign(formatString, "%Y-%M-%DT%h:%m:%s%z"_s);
	} else {
		if (typekind == $DatatypeConstants::DATE) {
			$assign(formatString, "%Y-%M-%D%z"_s);
		} else {
			if (typekind == $DatatypeConstants::TIME) {
				$assign(formatString, "%h:%m:%s%z"_s);
			} else {
				if (typekind == $DatatypeConstants::GMONTH) {
					$assign(formatString, "--%M%z"_s);
				} else {
					if (typekind == $DatatypeConstants::GDAY) {
						$assign(formatString, "---%D%z"_s);
					} else {
						if (typekind == $DatatypeConstants::GYEAR) {
							$assign(formatString, "%Y%z"_s);
						} else {
							if (typekind == $DatatypeConstants::GYEARMONTH) {
								$assign(formatString, "%Y-%M%z"_s);
							} else {
								if (typekind == $DatatypeConstants::GMONTHDAY) {
									$assign(formatString, "--%M-%D%z"_s);
								}
							}
						}
					}
				}
			}
		}
	}
	return format(formatString);
}

$QName* XMLGregorianCalendarImpl::getXMLSchemaType() {
	$useLocalCurrentObjectStackCache();
	int32_t mask = (((((this->year != $DatatypeConstants::FIELD_UNDEFINED ? 32 : 0) | (this->month != $DatatypeConstants::FIELD_UNDEFINED ? 16 : 0)) | (this->day != $DatatypeConstants::FIELD_UNDEFINED ? 8 : 0)) | (this->hour != $DatatypeConstants::FIELD_UNDEFINED ? 4 : 0)) | (this->minute != $DatatypeConstants::FIELD_UNDEFINED ? 2 : 0)) | (this->second != $DatatypeConstants::FIELD_UNDEFINED ? 1 : 0);
	switch (mask) {
	case 63:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::DATETIME;
		}
	case 56:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::DATE;
		}
	case 7:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::TIME;
		}
	case 48:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::GYEARMONTH;
		}
	case 24:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::GMONTHDAY;
		}
	case 32:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::GYEAR;
		}
	case 16:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::GMONTH;
		}
	case 8:
		{
			$init($DatatypeConstants);
			return $DatatypeConstants::GDAY;
		}
	default:
		{
			$var($String, var$0, $$str({$($of(this)->getClass()->getName()), "#getXMLSchemaType() :"_s}));
			$throwNew($IllegalStateException, $$concat(var$0, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidXGCFields"_s, nullptr))));
		}
	}
}

bool XMLGregorianCalendarImpl::isValid() {
	$useLocalCurrentObjectStackCache();
	if (this->month != $DatatypeConstants::FIELD_UNDEFINED && this->day != $DatatypeConstants::FIELD_UNDEFINED) {
		if (this->year != $DatatypeConstants::FIELD_UNDEFINED) {
			if (this->eon == nullptr) {
				if (this->day > maximumDayInMonthFor(this->year, this->month)) {
					return false;
				}
			} else if (this->day > maximumDayInMonthFor($(getEonAndYear()), this->month)) {
				return false;
			}
		} else if (this->day > maximumDayInMonthFor(2000, this->month)) {
			return false;
		}
	}
	if (this->hour == 24 && (this->minute != 0 || this->second != 0 || (this->fractionalSecond != nullptr && $nc(this->fractionalSecond)->compareTo(XMLGregorianCalendarImpl::DECIMAL_ZERO) != 0))) {
		return false;
	}
	if (this->eon == nullptr && this->year == 0) {
		return false;
	}
	return true;
}

void XMLGregorianCalendarImpl::add($Duration* duration) {
	$useLocalCurrentObjectStackCache();
	$var($booleans, fieldUndefined, $new($booleans, {
		false,
		false,
		false,
		false,
		false,
		false
	}));
	int32_t signum = $nc(duration)->getSign();
	int32_t startMonth = getMonth();
	if (startMonth == $DatatypeConstants::FIELD_UNDEFINED) {
		startMonth = $DatatypeConstants::JANUARY;
		fieldUndefined->set(XMLGregorianCalendarImpl::MONTH, true);
	}
	$init($DatatypeConstants);
	$var($BigInteger, dMonths, sanitize($(duration->getField($DatatypeConstants::MONTHS)), signum));
	$var($BigInteger, temp, $nc($($BigInteger::valueOf((int64_t)startMonth)))->add(dMonths));
	setMonth($nc($($nc($($nc(temp)->subtract($BigInteger::ONE)))->mod(XMLGregorianCalendarImpl::TWELVE)))->intValue() + 1);
	$init($RoundingMode);
	$var($BigInteger, carry, $nc($($$new($BigDecimal, $($nc(temp)->subtract($BigInteger::ONE)))->divide(XMLGregorianCalendarImpl::DECIMAL_TWELVE, $RoundingMode::FLOOR)))->toBigInteger());
	$var($BigInteger, startYear, getEonAndYear());
	if (startYear == nullptr) {
		fieldUndefined->set(XMLGregorianCalendarImpl::YEAR, true);
		$assign(startYear, $BigInteger::ZERO);
	}
	$var($BigInteger, dYears, sanitize($(duration->getField($DatatypeConstants::YEARS)), signum));
	$var($BigInteger, endYear, $nc($($nc(startYear)->add(dYears)))->add(carry));
	setYear(endYear);
	$var($BigDecimal, startSeconds, nullptr);
	if (getSecond() == $DatatypeConstants::FIELD_UNDEFINED) {
		fieldUndefined->set(XMLGregorianCalendarImpl::SECOND, true);
		$assign(startSeconds, XMLGregorianCalendarImpl::DECIMAL_ZERO);
	} else {
		$assign(startSeconds, getSeconds());
	}
	$var($BigDecimal, dSeconds, $DurationImpl::sanitize($cast($BigDecimal, $(duration->getField($DatatypeConstants::SECONDS))), signum));
	$var($BigDecimal, tempBD, $nc(startSeconds)->add(dSeconds));
	$var($BigDecimal, fQuotient, $new($BigDecimal, $($nc($($$new($BigDecimal, $($nc(tempBD)->toBigInteger()))->divide(XMLGregorianCalendarImpl::DECIMAL_SIXTY, $RoundingMode::FLOOR)))->toBigInteger())));
	$var($BigDecimal, endSeconds, $nc(tempBD)->subtract($(fQuotient->multiply(XMLGregorianCalendarImpl::DECIMAL_SIXTY))));
	$assign(carry, fQuotient->toBigInteger());
	setSecond($nc(endSeconds)->intValue());
	$var($BigDecimal, tempFracSeconds, $nc(endSeconds)->subtract($$new($BigDecimal, $($BigInteger::valueOf((int64_t)getSecond())))));
	if ($nc(tempFracSeconds)->compareTo(XMLGregorianCalendarImpl::DECIMAL_ZERO) < 0) {
		setFractionalSecond($($nc(XMLGregorianCalendarImpl::DECIMAL_ONE)->add(tempFracSeconds)));
		if (getSecond() == 0) {
			setSecond(59);
			$assign(carry, $nc(carry)->subtract($BigInteger::ONE));
		} else {
			setSecond(getSecond() - 1);
		}
	} else {
		setFractionalSecond(tempFracSeconds);
	}
	int32_t startMinutes = getMinute();
	if (startMinutes == $DatatypeConstants::FIELD_UNDEFINED) {
		fieldUndefined->set(XMLGregorianCalendarImpl::MINUTE, true);
		startMinutes = 0;
	}
	$var($BigInteger, dMinutes, sanitize($(duration->getField($DatatypeConstants::MINUTES)), signum));
	$assign(temp, $nc($($nc($($BigInteger::valueOf((int64_t)startMinutes)))->add(dMinutes)))->add(carry));
	setMinute($nc($($nc(temp)->mod(XMLGregorianCalendarImpl::SIXTY)))->intValue());
	$assign(carry, $nc($($$new($BigDecimal, temp)->divide(XMLGregorianCalendarImpl::DECIMAL_SIXTY, $RoundingMode::FLOOR)))->toBigInteger());
	int32_t startHours = getHour();
	if (startHours == $DatatypeConstants::FIELD_UNDEFINED) {
		fieldUndefined->set(XMLGregorianCalendarImpl::HOUR, true);
		startHours = 0;
	}
	$var($BigInteger, dHours, sanitize($(duration->getField($DatatypeConstants::HOURS)), signum));
	$assign(temp, $nc($($nc($($BigInteger::valueOf((int64_t)startHours)))->add(dHours)))->add(carry));
	setHour($nc($($nc(temp)->mod(XMLGregorianCalendarImpl::TWENTY_FOUR)))->intValue(), false);
	$assign(carry, $nc($($$new($BigDecimal, temp)->divide(XMLGregorianCalendarImpl::DECIMAL_TWENTY_FOUR, $RoundingMode::FLOOR)))->toBigInteger());
	$var($BigInteger, tempDays, nullptr);
	int32_t startDay = getDay();
	if (startDay == $DatatypeConstants::FIELD_UNDEFINED) {
		fieldUndefined->set(XMLGregorianCalendarImpl::DAY, true);
		startDay = 1;
	}
	$var($BigInteger, dDays, sanitize($(duration->getField($DatatypeConstants::DAYS)), signum));
	$var($BigInteger, var$0, getEonAndYear());
	int32_t maxDayInMonth = maximumDayInMonthFor(var$0, getMonth());
	if (startDay > maxDayInMonth) {
		$assign(tempDays, $BigInteger::valueOf((int64_t)maxDayInMonth));
	} else if (startDay < 1) {
		$assign(tempDays, $BigInteger::ONE);
	} else {
		$assign(tempDays, $BigInteger::valueOf((int64_t)startDay));
	}
	$var($BigInteger, endDays, $nc($($nc(tempDays)->add(dDays)))->add(carry));
	int32_t monthCarry = 0;
	int32_t intTemp = 0;
	while (true) {
		if ($nc(endDays)->compareTo($BigInteger::ONE) < 0) {
			$var($BigInteger, mdimf, nullptr);
			if (this->month >= 2) {
				$var($BigInteger, var$1, getEonAndYear());
				$assign(mdimf, $BigInteger::valueOf((int64_t)maximumDayInMonthFor(var$1, getMonth() - 1)));
			} else {
				$assign(mdimf, $BigInteger::valueOf((int64_t)maximumDayInMonthFor($($nc($(getEonAndYear()))->subtract($BigInteger::ONE)), 12)));
			}
			$assign(endDays, endDays->add(mdimf));
			monthCarry = -1;
		} else {
			$var($BigInteger, var$3, getEonAndYear());
			if (endDays->compareTo($($BigInteger::valueOf((int64_t)maximumDayInMonthFor(var$3, getMonth())))) > 0) {
				$var($BigInteger, var$4, getEonAndYear());
				$assign(endDays, endDays->add($($BigInteger::valueOf((int64_t)(-(int64_t)maximumDayInMonthFor(var$4, getMonth()))))));
				monthCarry = 1;
			} else {
				break;
			}
		}
		intTemp = getMonth() + monthCarry;
		int32_t endMonth = $mod((intTemp - 1), (13 - 1));
		int32_t quotient = 0;
		if (endMonth < 0) {
			endMonth = (13 - 1) + endMonth + 1;
			quotient = $nc($($nc($($BigDecimal::valueOf((int64_t)(intTemp - 1))))->divide(XMLGregorianCalendarImpl::DECIMAL_TWELVE, $RoundingMode::UP)))->intValue();
		} else {
			quotient = $div((intTemp - 1), (13 - 1));
			endMonth += 1;
		}
		setMonth(endMonth);
		if (quotient != 0) {
			setYear($($nc($(getEonAndYear()))->add($($BigInteger::valueOf((int64_t)quotient)))));
		}
	}
	setDay($nc(endDays)->intValue());
	for (int32_t i = XMLGregorianCalendarImpl::YEAR; i <= XMLGregorianCalendarImpl::SECOND; ++i) {
		if (fieldUndefined->get(i)) {
			switch (i) {
			case XMLGregorianCalendarImpl::YEAR:
				{
					setYear($DatatypeConstants::FIELD_UNDEFINED);
					break;
				}
			case XMLGregorianCalendarImpl::MONTH:
				{
					setMonth($DatatypeConstants::FIELD_UNDEFINED);
					break;
				}
			case XMLGregorianCalendarImpl::DAY:
				{
					setDay($DatatypeConstants::FIELD_UNDEFINED);
					break;
				}
			case XMLGregorianCalendarImpl::HOUR:
				{
					setHour($DatatypeConstants::FIELD_UNDEFINED, false);
					break;
				}
			case XMLGregorianCalendarImpl::MINUTE:
				{
					setMinute($DatatypeConstants::FIELD_UNDEFINED);
					break;
				}
			case XMLGregorianCalendarImpl::SECOND:
				{
					setSecond($DatatypeConstants::FIELD_UNDEFINED);
					setFractionalSecond(nullptr);
					break;
				}
			}
		}
	}
}

int32_t XMLGregorianCalendarImpl::maximumDayInMonthFor($BigInteger* year, int32_t month) {
	$init(XMLGregorianCalendarImpl);
	$useLocalCurrentObjectStackCache();
	if (month != $DatatypeConstants::FEBRUARY) {
		$init($XMLGregorianCalendarImpl$DaysInMonth);
		return $nc($XMLGregorianCalendarImpl$DaysInMonth::table)->get(month);
	} else {
		$init($BigInteger);
		bool var$2 = $nc($($nc(year)->mod(XMLGregorianCalendarImpl::FOUR_HUNDRED)))->equals($BigInteger::ZERO);
		if (!var$2) {
			bool var$3 = !$nc($($nc(year)->mod(XMLGregorianCalendarImpl::HUNDRED)))->equals($BigInteger::ZERO);
			var$2 = (var$3 && $nc($(year->mod(XMLGregorianCalendarImpl::FOUR)))->equals($BigInteger::ZERO));
		}
		if (var$2) {
			return 29;
		} else {
			$init($XMLGregorianCalendarImpl$DaysInMonth);
			return $nc($XMLGregorianCalendarImpl$DaysInMonth::table)->get(month);
		}
	}
}

int32_t XMLGregorianCalendarImpl::maximumDayInMonthFor(int32_t year, int32_t month) {
	$init(XMLGregorianCalendarImpl);
	if (month != $DatatypeConstants::FEBRUARY) {
		$init($XMLGregorianCalendarImpl$DaysInMonth);
		return $nc($XMLGregorianCalendarImpl$DaysInMonth::table)->get(month);
	} else if (((year % 400) == 0) || (((year % 100) != 0) && ((year % 4) == 0))) {
		return 29;
	} else {
		$init($XMLGregorianCalendarImpl$DaysInMonth);
		return $nc($XMLGregorianCalendarImpl$DaysInMonth::table)->get($DatatypeConstants::FEBRUARY);
	}
}

$GregorianCalendar* XMLGregorianCalendarImpl::toGregorianCalendar() {
	$useLocalCurrentObjectStackCache();
	$var($GregorianCalendar, result, nullptr);
	int32_t DEFAULT_TIMEZONE_OFFSET = $DatatypeConstants::FIELD_UNDEFINED;
	$var($TimeZone, tz, getTimeZone(DEFAULT_TIMEZONE_OFFSET));
	$var($Locale, locale, getDefaultLocale());
	$assign(result, $new($GregorianCalendar, tz, locale));
	result->clear();
	result->setGregorianChange(XMLGregorianCalendarImpl::PURE_GREGORIAN_CHANGE);
	if (this->year != $DatatypeConstants::FIELD_UNDEFINED) {
		if (this->eon == nullptr) {
			result->set($Calendar::ERA, this->year < 0 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
			result->set($Calendar::YEAR, $Math::abs(this->year));
		} else {
			$var($BigInteger, eonAndYear, getEonAndYear());
			result->set($Calendar::ERA, $nc(eonAndYear)->signum() == -1 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
			result->set($Calendar::YEAR, $nc($($nc(eonAndYear)->abs()))->intValue());
		}
	}
	if (this->month != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::MONTH, this->month - 1);
	}
	if (this->day != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::DAY_OF_MONTH, this->day);
	}
	if (this->hour != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::HOUR_OF_DAY, this->hour);
	}
	if (this->minute != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::MINUTE, this->minute);
	}
	if (this->second != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::SECOND, this->second);
	}
	if (this->fractionalSecond != nullptr) {
		result->set($Calendar::MILLISECOND, getMillisecond());
	}
	return result;
}

$Locale* XMLGregorianCalendarImpl::getDefaultLocale() {
	$useLocalCurrentObjectStackCache();
	$var($String, lang, $SecuritySupport::getSystemProperty("user.language.format"_s));
	$var($String, country, $SecuritySupport::getSystemProperty("user.country.format"_s));
	$var($String, variant, $SecuritySupport::getSystemProperty("user.variant.format"_s));
	$var($Locale, locale, nullptr);
	if (lang != nullptr) {
		if (country != nullptr) {
			if (variant != nullptr) {
				$assign(locale, $new($Locale, lang, country, variant));
			} else {
				$assign(locale, $new($Locale, lang, country));
			}
		} else {
			$assign(locale, $new($Locale, lang));
		}
	}
	if (locale == nullptr) {
		$assign(locale, $Locale::getDefault());
	}
	return locale;
}

$GregorianCalendar* XMLGregorianCalendarImpl::toGregorianCalendar($TimeZone* timezone, $Locale* aLocale$renamed, $XMLGregorianCalendar* defaults) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, aLocale, aLocale$renamed);
	$var($GregorianCalendar, result, nullptr);
	$var($TimeZone, tz, timezone);
	if (tz == nullptr) {
		int32_t defaultZoneoffset = $DatatypeConstants::FIELD_UNDEFINED;
		if (defaults != nullptr) {
			defaultZoneoffset = defaults->getTimezone();
		}
		$assign(tz, getTimeZone(defaultZoneoffset));
	}
	if (aLocale == nullptr) {
		$assign(aLocale, $Locale::getDefault());
	}
	$assign(result, $new($GregorianCalendar, tz, aLocale));
	result->clear();
	result->setGregorianChange(XMLGregorianCalendarImpl::PURE_GREGORIAN_CHANGE);
	if (this->year != $DatatypeConstants::FIELD_UNDEFINED) {
		if (this->eon == nullptr) {
			result->set($Calendar::ERA, this->year < 0 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
			result->set($Calendar::YEAR, $Math::abs(this->year));
		} else {
			$var($BigInteger, eonAndYear, getEonAndYear());
			result->set($Calendar::ERA, $nc(eonAndYear)->signum() == -1 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
			result->set($Calendar::YEAR, $nc($($nc(eonAndYear)->abs()))->intValue());
		}
	} else if (defaults != nullptr) {
		int32_t defaultYear = defaults->getYear();
		if (defaultYear != $DatatypeConstants::FIELD_UNDEFINED) {
			if (defaults->getEon() == nullptr) {
				result->set($Calendar::ERA, defaultYear < 0 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
				result->set($Calendar::YEAR, $Math::abs(defaultYear));
			} else {
				$var($BigInteger, defaultEonAndYear, defaults->getEonAndYear());
				result->set($Calendar::ERA, $nc(defaultEonAndYear)->signum() == -1 ? $GregorianCalendar::BC : $GregorianCalendar::AD);
				result->set($Calendar::YEAR, $nc($($nc(defaultEonAndYear)->abs()))->intValue());
			}
		}
	}
	if (this->month != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::MONTH, this->month - 1);
	} else {
		int32_t defaultMonth = (defaults != nullptr) ? $nc(defaults)->getMonth() : $DatatypeConstants::FIELD_UNDEFINED;
		if (defaultMonth != $DatatypeConstants::FIELD_UNDEFINED) {
			result->set($Calendar::MONTH, defaultMonth - 1);
		}
	}
	if (this->day != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::DAY_OF_MONTH, this->day);
	} else {
		int32_t defaultDay = (defaults != nullptr) ? $nc(defaults)->getDay() : $DatatypeConstants::FIELD_UNDEFINED;
		if (defaultDay != $DatatypeConstants::FIELD_UNDEFINED) {
			result->set($Calendar::DAY_OF_MONTH, defaultDay);
		}
	}
	if (this->hour != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::HOUR_OF_DAY, this->hour);
	} else {
		int32_t defaultHour = (defaults != nullptr) ? $nc(defaults)->getHour() : $DatatypeConstants::FIELD_UNDEFINED;
		if (defaultHour != $DatatypeConstants::FIELD_UNDEFINED) {
			result->set($Calendar::HOUR_OF_DAY, defaultHour);
		}
	}
	if (this->minute != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::MINUTE, this->minute);
	} else {
		int32_t defaultMinute = (defaults != nullptr) ? $nc(defaults)->getMinute() : $DatatypeConstants::FIELD_UNDEFINED;
		if (defaultMinute != $DatatypeConstants::FIELD_UNDEFINED) {
			result->set($Calendar::MINUTE, defaultMinute);
		}
	}
	if (this->second != $DatatypeConstants::FIELD_UNDEFINED) {
		result->set($Calendar::SECOND, this->second);
	} else {
		int32_t defaultSecond = (defaults != nullptr) ? $nc(defaults)->getSecond() : $DatatypeConstants::FIELD_UNDEFINED;
		if (defaultSecond != $DatatypeConstants::FIELD_UNDEFINED) {
			result->set($Calendar::SECOND, defaultSecond);
		}
	}
	if (this->fractionalSecond != nullptr) {
		result->set($Calendar::MILLISECOND, getMillisecond());
	} else {
		$var($BigDecimal, defaultFractionalSecond, (defaults != nullptr) ? $nc(defaults)->getFractionalSecond() : ($BigDecimal*)nullptr);
		if (defaultFractionalSecond != nullptr) {
			result->set($Calendar::MILLISECOND, defaults->getMillisecond());
		}
	}
	return result;
}

$TimeZone* XMLGregorianCalendarImpl::getTimeZone(int32_t defaultZoneoffset) {
	$useLocalCurrentObjectStackCache();
	$var($TimeZone, result, nullptr);
	int32_t zoneoffset = getTimezone();
	if (zoneoffset == $DatatypeConstants::FIELD_UNDEFINED) {
		zoneoffset = defaultZoneoffset;
	}
	if (zoneoffset == $DatatypeConstants::FIELD_UNDEFINED) {
		$assign(result, $TimeZone::getDefault());
	} else {
		char16_t sign = zoneoffset < 0 ? u'-' : u'+';
		if (sign == u'-') {
			zoneoffset = -zoneoffset;
		}
		int32_t hour = zoneoffset / 60;
		int32_t minutes = zoneoffset - (hour * 60);
		$var($StringBuffer, customTimezoneId, $new($StringBuffer, 8));
		customTimezoneId->append("GMT"_s);
		customTimezoneId->append(sign);
		customTimezoneId->append(hour);
		if (minutes != 0) {
			if (minutes < 10) {
				customTimezoneId->append(u'0');
			}
			customTimezoneId->append(minutes);
		}
		$assign(result, $TimeZone::getTimeZone($(customTimezoneId->toString())));
	}
	return result;
}

$Object* XMLGregorianCalendarImpl::clone() {
	return $of($new(XMLGregorianCalendarImpl, $(getEonAndYear()), this->month, this->day, this->hour, this->minute, this->second, this->fractionalSecond, this->timezone));
}

void XMLGregorianCalendarImpl::clear() {
	$set(this, eon, nullptr);
	this->year = $DatatypeConstants::FIELD_UNDEFINED;
	this->month = $DatatypeConstants::FIELD_UNDEFINED;
	this->day = $DatatypeConstants::FIELD_UNDEFINED;
	this->timezone = $DatatypeConstants::FIELD_UNDEFINED;
	this->hour = $DatatypeConstants::FIELD_UNDEFINED;
	this->minute = $DatatypeConstants::FIELD_UNDEFINED;
	this->second = $DatatypeConstants::FIELD_UNDEFINED;
	$set(this, fractionalSecond, nullptr);
}

void XMLGregorianCalendarImpl::setMillisecond(int32_t millisecond) {
	if (millisecond == $DatatypeConstants::FIELD_UNDEFINED) {
		$set(this, fractionalSecond, nullptr);
	} else {
		if (millisecond < 0 || 999 < millisecond) {
			if (millisecond != $DatatypeConstants::FIELD_UNDEFINED) {
				invalidFieldValue(XMLGregorianCalendarImpl::MILLISECOND, millisecond);
			}
		}
		$set(this, fractionalSecond, $BigDecimal::valueOf(millisecond, 3));
	}
}

void XMLGregorianCalendarImpl::setFractionalSecond($BigDecimal* fractional) {
	$useLocalCurrentObjectStackCache();
	if (fractional != nullptr) {
		bool var$0 = (fractional->compareTo(XMLGregorianCalendarImpl::DECIMAL_ZERO) < 0);
		if (var$0 || (fractional->compareTo(XMLGregorianCalendarImpl::DECIMAL_ONE) > 0)) {
			$throwNew($IllegalArgumentException, $($DatatypeMessageFormatter::formatMessage(nullptr, "InvalidFractional"_s, $$new($ObjectArray, {$($of(fractional->toString()))}))));
		}
	}
	$set(this, fractionalSecond, fractional);
}

bool XMLGregorianCalendarImpl::isDigit(char16_t ch) {
	$init(XMLGregorianCalendarImpl);
	return u'0' <= ch && ch <= u'9';
}

$String* XMLGregorianCalendarImpl::format($String* format) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t fidx = 0;
	int32_t flen = $nc(format)->length();
	while (fidx < flen) {
		char16_t fch = format->charAt(fidx++);
		if (fch != u'%') {
			buf->append(fch);
			continue;
		}
		{
			int32_t offset = 0;
			switch (format->charAt(fidx++)) {
			case u'Y':
				{
					if (this->eon == nullptr) {
						int32_t absYear = this->year;
						if (absYear < 0) {
							buf->append(u'-');
							absYear = -this->year;
						}
						printNumber(buf, absYear, 4);
					} else {
						printNumber(buf, $(getEonAndYear()), 4);
					}
					break;
				}
			case u'M':
				{
					printNumber(buf, getMonth(), 2);
					break;
				}
			case u'D':
				{
					printNumber(buf, getDay(), 2);
					break;
				}
			case u'h':
				{
					printNumber(buf, getHour(), 2);
					break;
				}
			case u'm':
				{
					printNumber(buf, getMinute(), 2);
					break;
				}
			case u's':
				{
					printNumber(buf, getSecond(), 2);
					if (getFractionalSecond() != nullptr) {
						$var($String, frac, $nc($(getFractionalSecond()))->toPlainString());
						buf->append($($nc(frac)->substring(1, frac->length())));
					}
					break;
				}
			case u'z':
				{
					offset = getTimezone();
					if (offset == 0) {
						buf->append(u'Z');
					} else if (offset != $DatatypeConstants::FIELD_UNDEFINED) {
						if (offset < 0) {
							buf->append(u'-');
							offset *= -1;
						} else {
							buf->append(u'+');
						}
						printNumber(buf, offset / 60, 2);
						buf->append(u':');
						printNumber(buf, offset % 60, 2);
					}
					break;
				}
			default:
				{
					$throwNew($InternalError);
				}
			}
		}
	}
	return buf->toString();
}

void XMLGregorianCalendarImpl::printNumber($StringBuilder* out, int32_t number, int32_t nDigits) {
	$var($String, s, $String::valueOf(number));
	for (int32_t i = s->length(); i < nDigits; ++i) {
		$nc(out)->append(u'0');
	}
	$nc(out)->append(s);
}

void XMLGregorianCalendarImpl::printNumber($StringBuilder* out, $BigInteger* number, int32_t nDigits) {
	$var($String, s, $nc(number)->toString());
	for (int32_t i = $nc(s)->length(); i < nDigits; ++i) {
		$nc(out)->append(u'0');
	}
	$nc(out)->append(s);
}

$BigInteger* XMLGregorianCalendarImpl::sanitize($Number* value, int32_t signum) {
	$init(XMLGregorianCalendarImpl);
	if (signum == 0 || value == nullptr) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	}
	return (signum < 0) ? $nc(($cast($BigInteger, value)))->negate() : $cast($BigInteger, value);
}

void XMLGregorianCalendarImpl::reset() {
	$set(this, eon, this->orig_eon);
	this->year = this->orig_year;
	this->month = this->orig_month;
	this->day = this->orig_day;
	this->hour = this->orig_hour;
	this->minute = this->orig_minute;
	this->second = this->orig_second;
	$set(this, fractionalSecond, this->orig_fracSeconds);
	this->timezone = this->orig_timezone;
}

void XMLGregorianCalendarImpl::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	save();
}

void clinit$XMLGregorianCalendarImpl($Class* class$) {
	$assignStatic(XMLGregorianCalendarImpl::BILLION_B, $new($BigInteger, "1000000000"_s));
	$assignStatic(XMLGregorianCalendarImpl::PURE_GREGORIAN_CHANGE, $new($Date, $Long::MIN_VALUE));
	$assignStatic(XMLGregorianCalendarImpl::FIELD_NAME, $new($StringArray, {
		"Year"_s,
		"Month"_s,
		"Day"_s,
		"Hour"_s,
		"Minute"_s,
		"Second"_s,
		"Millisecond"_s,
		"Timezone"_s
	}));
	$assignStatic(XMLGregorianCalendarImpl::LEAP_YEAR_DEFAULT, XMLGregorianCalendarImpl::createDateTime(400, $DatatypeConstants::JANUARY, 1, 0, 0, 0, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED));
	$assignStatic(XMLGregorianCalendarImpl::FOUR, $BigInteger::valueOf((int64_t)4));
	$assignStatic(XMLGregorianCalendarImpl::HUNDRED, $BigInteger::valueOf((int64_t)100));
	$assignStatic(XMLGregorianCalendarImpl::FOUR_HUNDRED, $BigInteger::valueOf((int64_t)400));
	$assignStatic(XMLGregorianCalendarImpl::SIXTY, $BigInteger::valueOf((int64_t)60));
	$assignStatic(XMLGregorianCalendarImpl::TWENTY_FOUR, $BigInteger::valueOf((int64_t)24));
	$assignStatic(XMLGregorianCalendarImpl::TWELVE, $BigInteger::valueOf((int64_t)12));
	$assignStatic(XMLGregorianCalendarImpl::DECIMAL_ZERO, $BigDecimal::valueOf((int64_t)0));
	$assignStatic(XMLGregorianCalendarImpl::DECIMAL_ONE, $BigDecimal::valueOf((int64_t)1));
	$assignStatic(XMLGregorianCalendarImpl::DECIMAL_TWELVE, $BigDecimal::valueOf((int64_t)12));
	$assignStatic(XMLGregorianCalendarImpl::DECIMAL_TWENTY_FOUR, $BigDecimal::valueOf((int64_t)24));
	$assignStatic(XMLGregorianCalendarImpl::DECIMAL_SIXTY, $BigDecimal::valueOf((int64_t)60));
}

XMLGregorianCalendarImpl::XMLGregorianCalendarImpl() {
}

$Class* XMLGregorianCalendarImpl::load$($String* name, bool initialize) {
	$loadClass(XMLGregorianCalendarImpl, name, initialize, &_XMLGregorianCalendarImpl_ClassInfo_, clinit$XMLGregorianCalendarImpl, allocate$XMLGregorianCalendarImpl);
	return class$;
}

$Class* XMLGregorianCalendarImpl::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com