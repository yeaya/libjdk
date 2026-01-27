#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl
//$ extends javax.xml.datatype.XMLGregorianCalendar
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>

#pragma push_macro("BILLION_B")
#undef BILLION_B
#pragma push_macro("BILLION_I")
#undef BILLION_I
#pragma push_macro("DAY")
#undef DAY
#pragma push_macro("DECIMAL_ONE")
#undef DECIMAL_ONE
#pragma push_macro("DECIMAL_SIXTY")
#undef DECIMAL_SIXTY
#pragma push_macro("DECIMAL_TWELVE")
#undef DECIMAL_TWELVE
#pragma push_macro("DECIMAL_TWENTY_FOUR")
#undef DECIMAL_TWENTY_FOUR
#pragma push_macro("DECIMAL_ZERO")
#undef DECIMAL_ZERO
#pragma push_macro("FIELD_NAME")
#undef FIELD_NAME
#pragma push_macro("FOUR")
#undef FOUR
#pragma push_macro("FOUR_HUNDRED")
#undef FOUR_HUNDRED
#pragma push_macro("HOUR")
#undef HOUR
#pragma push_macro("HUNDRED")
#undef HUNDRED
#pragma push_macro("LEAP_YEAR_DEFAULT")
#undef LEAP_YEAR_DEFAULT
#pragma push_macro("MILLISECOND")
#undef MILLISECOND
#pragma push_macro("MINUTE")
#undef MINUTE
#pragma push_macro("MONTH")
#undef MONTH
#pragma push_macro("P")
#undef P
#pragma push_macro("PURE_GREGORIAN_CHANGE")
#undef PURE_GREGORIAN_CHANGE
#pragma push_macro("Q")
#undef Q
#pragma push_macro("SECOND")
#undef SECOND
#pragma push_macro("SIXTY")
#undef SIXTY
#pragma push_macro("TIMEZONE")
#undef TIMEZONE
#pragma push_macro("TWELVE")
#undef TWELVE
#pragma push_macro("TWENTY_FOUR")
#undef TWENTY_FOUR
#pragma push_macro("YEAR")
#undef YEAR

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Number;
		class StringBuilder;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Date;
		class GregorianCalendar;
		class Locale;
		class TimeZone;
	}
}
namespace javax {
	namespace xml {
		namespace datatype {
			class Duration;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

class XMLGregorianCalendarImpl : public ::javax::xml::datatype::XMLGregorianCalendar, public ::java::io::Serializable {
	$class(XMLGregorianCalendarImpl, 0, ::javax::xml::datatype::XMLGregorianCalendar, ::java::io::Serializable)
public:
	XMLGregorianCalendarImpl();
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* lexicalRepresentation);
	void init$();
	void init$(::java::math::BigInteger* year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::java::math::BigDecimal* fractionalSecond, int32_t timezone);
	void init$(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t timezone);
	void init$(::java::util::GregorianCalendar* cal);
	virtual void add(::javax::xml::datatype::Duration* duration) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual int32_t compare(::javax::xml::datatype::XMLGregorianCalendar* rhs) override;
	static int32_t compareField(int32_t Pfield, int32_t Qfield);
	static int32_t compareField(::java::math::BigInteger* Pfield, ::java::math::BigInteger* Qfield);
	static int32_t compareField(::java::math::BigDecimal* Pfield, ::java::math::BigDecimal* Qfield);
	static ::javax::xml::datatype::XMLGregorianCalendar* createDate(int32_t year, int32_t month, int32_t day, int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* createDateTime(::java::math::BigInteger* year, int32_t month, int32_t day, int32_t hours, int32_t minutes, int32_t seconds, ::java::math::BigDecimal* fractionalSecond, int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* createDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
	static ::javax::xml::datatype::XMLGregorianCalendar* createDateTime(int32_t year, int32_t month, int32_t day, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* createTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* createTime(int32_t hours, int32_t minutes, int32_t seconds, ::java::math::BigDecimal* fractionalSecond, int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* createTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone);
	$String* format($String* format);
	virtual int32_t getDay() override;
	::java::util::Locale* getDefaultLocale();
	virtual ::java::math::BigInteger* getEon() override;
	virtual ::java::math::BigInteger* getEonAndYear() override;
	virtual ::java::math::BigDecimal* getFractionalSecond() override;
	virtual int32_t getHour() override;
	virtual int32_t getMillisecond() override;
	virtual int32_t getMinute() override;
	virtual int32_t getMonth() override;
	virtual int32_t getSecond() override;
	::java::math::BigDecimal* getSeconds();
	virtual ::java::util::TimeZone* getTimeZone(int32_t defaultZoneoffset) override;
	virtual int32_t getTimezone() override;
	virtual ::javax::xml::namespace$::QName* getXMLSchemaType() override;
	virtual int32_t getYear() override;
	static int32_t internalCompare(::javax::xml::datatype::XMLGregorianCalendar* P, ::javax::xml::datatype::XMLGregorianCalendar* Q);
	void invalidFieldValue(int32_t field, int32_t value);
	static bool isDigit(char16_t ch);
	virtual bool isValid() override;
	static int32_t maximumDayInMonthFor(::java::math::BigInteger* year, int32_t month);
	static int32_t maximumDayInMonthFor(int32_t year, int32_t month);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* normalize() override;
	::javax::xml::datatype::XMLGregorianCalendar* normalizeToTimezone(int32_t timezone);
	static ::javax::xml::datatype::XMLGregorianCalendar* parse($String* lexicalRepresentation);
	void printNumber(::java::lang::StringBuilder* out, int32_t number, int32_t nDigits);
	void printNumber(::java::lang::StringBuilder* out, ::java::math::BigInteger* number, int32_t nDigits);
	void readObject(::java::io::ObjectInputStream* ois);
	virtual void reset() override;
	static ::java::math::BigInteger* sanitize(::java::lang::Number* value, int32_t signum);
	void save();
	virtual void setDay(int32_t day) override;
	void setEon(::java::math::BigInteger* eon);
	virtual void setFractionalSecond(::java::math::BigDecimal* fractional) override;
	virtual void setHour(int32_t hour) override;
	void setHour(int32_t hour, bool validate);
	virtual void setMillisecond(int32_t millisecond) override;
	virtual void setMinute(int32_t minute) override;
	virtual void setMonth(int32_t month) override;
	virtual void setSecond(int32_t second) override;
	virtual void setTime(int32_t hour, int32_t minute, int32_t second) override;
	virtual void setTime(int32_t hour, int32_t minute, int32_t second, ::java::math::BigDecimal* fractional) override;
	virtual void setTime(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) override;
	virtual void setTimezone(int32_t offset) override;
	virtual void setYear(::java::math::BigInteger* year) override;
	virtual void setYear(int32_t year) override;
	void testHour();
	virtual ::java::util::GregorianCalendar* toGregorianCalendar() override;
	virtual ::java::util::GregorianCalendar* toGregorianCalendar(::java::util::TimeZone* timezone, ::java::util::Locale* aLocale, ::javax::xml::datatype::XMLGregorianCalendar* defaults) override;
	virtual $String* toString() override;
	virtual $String* toXMLFormat() override;
	::java::math::BigInteger* orig_eon = nullptr;
	int32_t orig_year = 0;
	int32_t orig_month = 0;
	int32_t orig_day = 0;
	int32_t orig_hour = 0;
	int32_t orig_minute = 0;
	int32_t orig_second = 0;
	::java::math::BigDecimal* orig_fracSeconds = nullptr;
	int32_t orig_timezone = 0;
	::java::math::BigInteger* eon = nullptr;
	int32_t year = 0;
	int32_t month = 0;
	int32_t day = 0;
	int32_t timezone = 0;
	int32_t hour = 0;
	int32_t minute = 0;
	int32_t second = 0;
	::java::math::BigDecimal* fractionalSecond = nullptr;
	static ::java::math::BigInteger* BILLION_B;
	static const int32_t BILLION_I = 0x3B9ACA00;
	static ::java::util::Date* PURE_GREGORIAN_CHANGE;
	static const int32_t YEAR = 0;
	static const int32_t MONTH = 1;
	static const int32_t DAY = 2;
	static const int32_t HOUR = 3;
	static const int32_t MINUTE = 4;
	static const int32_t SECOND = 5;
	static const int32_t MILLISECOND = 6;
	static const int32_t TIMEZONE = 7;
	static $StringArray* FIELD_NAME;
	static const int64_t serialVersionUID = (int64_t)1;
	static ::javax::xml::datatype::XMLGregorianCalendar* LEAP_YEAR_DEFAULT;
	static ::java::math::BigInteger* FOUR;
	static ::java::math::BigInteger* HUNDRED;
	static ::java::math::BigInteger* FOUR_HUNDRED;
	static ::java::math::BigInteger* SIXTY;
	static ::java::math::BigInteger* TWENTY_FOUR;
	static ::java::math::BigInteger* TWELVE;
	static ::java::math::BigDecimal* DECIMAL_ZERO;
	static ::java::math::BigDecimal* DECIMAL_ONE;
	static ::java::math::BigDecimal* DECIMAL_TWELVE;
	static ::java::math::BigDecimal* DECIMAL_TWENTY_FOUR;
	static ::java::math::BigDecimal* DECIMAL_SIXTY;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BILLION_B")
#pragma pop_macro("BILLION_I")
#pragma pop_macro("DAY")
#pragma pop_macro("DECIMAL_ONE")
#pragma pop_macro("DECIMAL_SIXTY")
#pragma pop_macro("DECIMAL_TWELVE")
#pragma pop_macro("DECIMAL_TWENTY_FOUR")
#pragma pop_macro("DECIMAL_ZERO")
#pragma pop_macro("FIELD_NAME")
#pragma pop_macro("FOUR")
#pragma pop_macro("FOUR_HUNDRED")
#pragma pop_macro("HOUR")
#pragma pop_macro("HUNDRED")
#pragma pop_macro("LEAP_YEAR_DEFAULT")
#pragma pop_macro("MILLISECOND")
#pragma pop_macro("MINUTE")
#pragma pop_macro("MONTH")
#pragma pop_macro("P")
#pragma pop_macro("PURE_GREGORIAN_CHANGE")
#pragma pop_macro("Q")
#pragma pop_macro("SECOND")
#pragma pop_macro("SIXTY")
#pragma pop_macro("TIMEZONE")
#pragma pop_macro("TWELVE")
#pragma pop_macro("TWENTY_FOUR")
#pragma pop_macro("YEAR")

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl_h_