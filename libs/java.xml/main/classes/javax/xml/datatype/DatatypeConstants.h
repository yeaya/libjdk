#ifndef _javax_xml_datatype_DatatypeConstants_h_
#define _javax_xml_datatype_DatatypeConstants_h_
//$ class javax.xml.datatype.DatatypeConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("APRIL")
#undef APRIL
#pragma push_macro("AUGUST")
#undef AUGUST
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DATETIME")
#undef DATETIME
#pragma push_macro("DAYS")
#undef DAYS
#pragma push_macro("DECEMBER")
#undef DECEMBER
#pragma push_macro("DURATION")
#undef DURATION
#pragma push_macro("DURATION_DAYTIME")
#undef DURATION_DAYTIME
#pragma push_macro("DURATION_YEARMONTH")
#undef DURATION_YEARMONTH
#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("FEBRUARY")
#undef FEBRUARY
#pragma push_macro("FIELD_UNDEFINED")
#undef FIELD_UNDEFINED
#pragma push_macro("GDAY")
#undef GDAY
#pragma push_macro("GMONTH")
#undef GMONTH
#pragma push_macro("GMONTHDAY")
#undef GMONTHDAY
#pragma push_macro("GREATER")
#undef GREATER
#pragma push_macro("GYEAR")
#undef GYEAR
#pragma push_macro("GYEARMONTH")
#undef GYEARMONTH
#pragma push_macro("HOURS")
#undef HOURS
#pragma push_macro("INDETERMINATE")
#undef INDETERMINATE
#pragma push_macro("JANUARY")
#undef JANUARY
#pragma push_macro("JULY")
#undef JULY
#pragma push_macro("JUNE")
#undef JUNE
#pragma push_macro("LESSER")
#undef LESSER
#pragma push_macro("MARCH")
#undef MARCH
#pragma push_macro("MAX_TIMEZONE_OFFSET")
#undef MAX_TIMEZONE_OFFSET
#pragma push_macro("MAY")
#undef MAY
#pragma push_macro("MINUTES")
#undef MINUTES
#pragma push_macro("MIN_TIMEZONE_OFFSET")
#undef MIN_TIMEZONE_OFFSET
#pragma push_macro("MONTHS")
#undef MONTHS
#pragma push_macro("NOVEMBER")
#undef NOVEMBER
#pragma push_macro("OCTOBER")
#undef OCTOBER
#pragma push_macro("SECONDS")
#undef SECONDS
#pragma push_macro("SEPTEMBER")
#undef SEPTEMBER
#pragma push_macro("TIME")
#undef TIME
#pragma push_macro("YEARS")
#undef YEARS

namespace javax {
	namespace xml {
		namespace datatype {
			class DatatypeConstants$Field;
		}
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}

namespace javax {
	namespace xml {
		namespace datatype {

class $export DatatypeConstants : public ::java::lang::Object {
	$class(DatatypeConstants, 0, ::java::lang::Object)
public:
	DatatypeConstants();
	void init$();
	static const int32_t JANUARY = 1;
	static const int32_t FEBRUARY = 2;
	static const int32_t MARCH = 3;
	static const int32_t APRIL = 4;
	static const int32_t MAY = 5;
	static const int32_t JUNE = 6;
	static const int32_t JULY = 7;
	static const int32_t AUGUST = 8;
	static const int32_t SEPTEMBER = 9;
	static const int32_t OCTOBER = 10;
	static const int32_t NOVEMBER = 11;
	static const int32_t DECEMBER = 12;
	static const int32_t LESSER = (-1);
	static const int32_t EQUAL = 0;
	static const int32_t GREATER = 1;
	static const int32_t INDETERMINATE = 2;
	static const int32_t FIELD_UNDEFINED = 0x80000000; // Integer.MIN_VALUE
	static ::javax::xml::datatype::DatatypeConstants$Field* YEARS;
	static ::javax::xml::datatype::DatatypeConstants$Field* MONTHS;
	static ::javax::xml::datatype::DatatypeConstants$Field* DAYS;
	static ::javax::xml::datatype::DatatypeConstants$Field* HOURS;
	static ::javax::xml::datatype::DatatypeConstants$Field* MINUTES;
	static ::javax::xml::datatype::DatatypeConstants$Field* SECONDS;
	static ::javax::xml::namespace$::QName* DATETIME;
	static ::javax::xml::namespace$::QName* TIME;
	static ::javax::xml::namespace$::QName* DATE;
	static ::javax::xml::namespace$::QName* GYEARMONTH;
	static ::javax::xml::namespace$::QName* GMONTHDAY;
	static ::javax::xml::namespace$::QName* GYEAR;
	static ::javax::xml::namespace$::QName* GMONTH;
	static ::javax::xml::namespace$::QName* GDAY;
	static ::javax::xml::namespace$::QName* DURATION;
	static ::javax::xml::namespace$::QName* DURATION_DAYTIME;
	static ::javax::xml::namespace$::QName* DURATION_YEARMONTH;
	static const int32_t MAX_TIMEZONE_OFFSET = -840; // -14 * 60
	static const int32_t MIN_TIMEZONE_OFFSET = 840; // 14 * 60
};

		} // datatype
	} // xml
} // javax

#pragma pop_macro("APRIL")
#pragma pop_macro("AUGUST")
#pragma pop_macro("DATE")
#pragma pop_macro("DATETIME")
#pragma pop_macro("DAYS")
#pragma pop_macro("DECEMBER")
#pragma pop_macro("DURATION")
#pragma pop_macro("DURATION_DAYTIME")
#pragma pop_macro("DURATION_YEARMONTH")
#pragma pop_macro("EQUAL")
#pragma pop_macro("FEBRUARY")
#pragma pop_macro("FIELD_UNDEFINED")
#pragma pop_macro("GDAY")
#pragma pop_macro("GMONTH")
#pragma pop_macro("GMONTHDAY")
#pragma pop_macro("GREATER")
#pragma pop_macro("GYEAR")
#pragma pop_macro("GYEARMONTH")
#pragma pop_macro("HOURS")
#pragma pop_macro("INDETERMINATE")
#pragma pop_macro("JANUARY")
#pragma pop_macro("JULY")
#pragma pop_macro("JUNE")
#pragma pop_macro("LESSER")
#pragma pop_macro("MARCH")
#pragma pop_macro("MAX_TIMEZONE_OFFSET")
#pragma pop_macro("MAY")
#pragma pop_macro("MINUTES")
#pragma pop_macro("MIN_TIMEZONE_OFFSET")
#pragma pop_macro("MONTHS")
#pragma pop_macro("NOVEMBER")
#pragma pop_macro("OCTOBER")
#pragma pop_macro("SECONDS")
#pragma pop_macro("SEPTEMBER")
#pragma pop_macro("TIME")
#pragma pop_macro("YEARS")

#endif // _javax_xml_datatype_DatatypeConstants_h_