#include <javax/xml/datatype/DatatypeConstants.h>

#include <javax/xml/XMLConstants.h>
#include <javax/xml/datatype/DatatypeConstants$Field.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef APRIL
#undef AUGUST
#undef DATE
#undef DATETIME
#undef DAYS
#undef DECEMBER
#undef DURATION
#undef DURATION_DAYTIME
#undef DURATION_YEARMONTH
#undef EQUAL
#undef FEBRUARY
#undef FIELD_UNDEFINED
#undef GDAY
#undef GMONTH
#undef GMONTHDAY
#undef GREATER
#undef GYEAR
#undef GYEARMONTH
#undef HOURS
#undef INDETERMINATE
#undef JANUARY
#undef JULY
#undef JUNE
#undef LESSER
#undef MARCH
#undef MAX_TIMEZONE_OFFSET
#undef MAY
#undef MINUTES
#undef MIN_TIMEZONE_OFFSET
#undef MONTHS
#undef NOVEMBER
#undef OCTOBER
#undef SECONDS
#undef SEPTEMBER
#undef TIME
#undef W3C_XML_SCHEMA_NS_URI
#undef W3C_XPATH_DATATYPE_NS_URI
#undef YEARS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;
using $DatatypeConstants$Field = ::javax::xml::datatype::DatatypeConstants$Field;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace datatype {

$FieldInfo _DatatypeConstants_FieldInfo_[] = {
	{"JANUARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, JANUARY)},
	{"FEBRUARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, FEBRUARY)},
	{"MARCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, MARCH)},
	{"APRIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, APRIL)},
	{"MAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, MAY)},
	{"JUNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, JUNE)},
	{"JULY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, JULY)},
	{"AUGUST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, AUGUST)},
	{"SEPTEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, SEPTEMBER)},
	{"OCTOBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, OCTOBER)},
	{"NOVEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, NOVEMBER)},
	{"DECEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, DECEMBER)},
	{"LESSER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, LESSER)},
	{"EQUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, EQUAL)},
	{"GREATER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, GREATER)},
	{"INDETERMINATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, INDETERMINATE)},
	{"FIELD_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, FIELD_UNDEFINED)},
	{"YEARS", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, YEARS)},
	{"MONTHS", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, MONTHS)},
	{"DAYS", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DAYS)},
	{"HOURS", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, HOURS)},
	{"MINUTES", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, MINUTES)},
	{"SECONDS", "Ljavax/xml/datatype/DatatypeConstants$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, SECONDS)},
	{"DATETIME", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DATETIME)},
	{"TIME", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, TIME)},
	{"DATE", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DATE)},
	{"GYEARMONTH", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, GYEARMONTH)},
	{"GMONTHDAY", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, GMONTHDAY)},
	{"GYEAR", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, GYEAR)},
	{"GMONTH", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, GMONTH)},
	{"GDAY", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, GDAY)},
	{"DURATION", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DURATION)},
	{"DURATION_DAYTIME", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DURATION_DAYTIME)},
	{"DURATION_YEARMONTH", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeConstants, DURATION_YEARMONTH)},
	{"MAX_TIMEZONE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, MAX_TIMEZONE_OFFSET)},
	{"MIN_TIMEZONE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DatatypeConstants, MIN_TIMEZONE_OFFSET)},
	{}
};

$MethodInfo _DatatypeConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DatatypeConstants, init$, void)},
	{}
};

$InnerClassInfo _DatatypeConstants_InnerClassesInfo_[] = {
	{"javax.xml.datatype.DatatypeConstants$Field", "javax.xml.datatype.DatatypeConstants", "Field", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DatatypeConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.datatype.DatatypeConstants",
	"java.lang.Object",
	nullptr,
	_DatatypeConstants_FieldInfo_,
	_DatatypeConstants_MethodInfo_,
	nullptr,
	nullptr,
	_DatatypeConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.datatype.DatatypeConstants$Field"
};

$Object* allocate$DatatypeConstants($Class* clazz) {
	return $of($alloc(DatatypeConstants));
}

$DatatypeConstants$Field* DatatypeConstants::YEARS = nullptr;
$DatatypeConstants$Field* DatatypeConstants::MONTHS = nullptr;
$DatatypeConstants$Field* DatatypeConstants::DAYS = nullptr;
$DatatypeConstants$Field* DatatypeConstants::HOURS = nullptr;
$DatatypeConstants$Field* DatatypeConstants::MINUTES = nullptr;
$DatatypeConstants$Field* DatatypeConstants::SECONDS = nullptr;
$QName* DatatypeConstants::DATETIME = nullptr;
$QName* DatatypeConstants::TIME = nullptr;
$QName* DatatypeConstants::DATE = nullptr;
$QName* DatatypeConstants::GYEARMONTH = nullptr;
$QName* DatatypeConstants::GMONTHDAY = nullptr;
$QName* DatatypeConstants::GYEAR = nullptr;
$QName* DatatypeConstants::GMONTH = nullptr;
$QName* DatatypeConstants::GDAY = nullptr;
$QName* DatatypeConstants::DURATION = nullptr;
$QName* DatatypeConstants::DURATION_DAYTIME = nullptr;
$QName* DatatypeConstants::DURATION_YEARMONTH = nullptr;

void DatatypeConstants::init$() {
}

void clinit$DatatypeConstants($Class* class$) {
	$assignStatic(DatatypeConstants::YEARS, $new($DatatypeConstants$Field, "YEARS"_s, 0));
	$assignStatic(DatatypeConstants::MONTHS, $new($DatatypeConstants$Field, "MONTHS"_s, 1));
	$assignStatic(DatatypeConstants::DAYS, $new($DatatypeConstants$Field, "DAYS"_s, 2));
	$assignStatic(DatatypeConstants::HOURS, $new($DatatypeConstants$Field, "HOURS"_s, 3));
	$assignStatic(DatatypeConstants::MINUTES, $new($DatatypeConstants$Field, "MINUTES"_s, 4));
	$assignStatic(DatatypeConstants::SECONDS, $new($DatatypeConstants$Field, "SECONDS"_s, 5));
	$init($XMLConstants);
	$assignStatic(DatatypeConstants::DATETIME, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "dateTime"_s));
	$assignStatic(DatatypeConstants::TIME, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "time"_s));
	$assignStatic(DatatypeConstants::DATE, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "date"_s));
	$assignStatic(DatatypeConstants::GYEARMONTH, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "gYearMonth"_s));
	$assignStatic(DatatypeConstants::GMONTHDAY, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "gMonthDay"_s));
	$assignStatic(DatatypeConstants::GYEAR, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "gYear"_s));
	$assignStatic(DatatypeConstants::GMONTH, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "gMonth"_s));
	$assignStatic(DatatypeConstants::GDAY, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "gDay"_s));
	$assignStatic(DatatypeConstants::DURATION, $new($QName, $XMLConstants::W3C_XML_SCHEMA_NS_URI, "duration"_s));
	$assignStatic(DatatypeConstants::DURATION_DAYTIME, $new($QName, $XMLConstants::W3C_XPATH_DATATYPE_NS_URI, "dayTimeDuration"_s));
	$assignStatic(DatatypeConstants::DURATION_YEARMONTH, $new($QName, $XMLConstants::W3C_XPATH_DATATYPE_NS_URI, "yearMonthDuration"_s));
}

DatatypeConstants::DatatypeConstants() {
}

$Class* DatatypeConstants::load$($String* name, bool initialize) {
	$loadClass(DatatypeConstants, name, initialize, &_DatatypeConstants_ClassInfo_, clinit$DatatypeConstants, allocate$DatatypeConstants);
	return class$;
}

$Class* DatatypeConstants::class$ = nullptr;

		} // datatype
	} // xml
} // javax