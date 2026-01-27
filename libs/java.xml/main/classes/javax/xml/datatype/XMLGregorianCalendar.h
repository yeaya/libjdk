#ifndef _javax_xml_datatype_XMLGregorianCalendar_h_
#define _javax_xml_datatype_XMLGregorianCalendar_h_
//$ class javax.xml.datatype.XMLGregorianCalendar
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}
namespace java {
	namespace util {
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

namespace javax {
	namespace xml {
		namespace datatype {

class $export XMLGregorianCalendar : public ::java::lang::Cloneable {
	$class(XMLGregorianCalendar, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XMLGregorianCalendar();
	virtual $Object* clone() override;
	void init$();
	virtual void add(::javax::xml::datatype::Duration* duration) {}
	virtual void clear() {}
	virtual int32_t compare(::javax::xml::datatype::XMLGregorianCalendar* xmlGregorianCalendar) {return 0;}
	virtual bool equals(Object$* obj) override;
	virtual int32_t getDay() {return 0;}
	virtual ::java::math::BigInteger* getEon() {return nullptr;}
	virtual ::java::math::BigInteger* getEonAndYear() {return nullptr;}
	virtual ::java::math::BigDecimal* getFractionalSecond() {return nullptr;}
	virtual int32_t getHour() {return 0;}
	virtual int32_t getMillisecond();
	virtual int32_t getMinute() {return 0;}
	virtual int32_t getMonth() {return 0;}
	virtual int32_t getSecond() {return 0;}
	virtual ::java::util::TimeZone* getTimeZone(int32_t defaultZoneoffset) {return nullptr;}
	virtual int32_t getTimezone() {return 0;}
	virtual ::javax::xml::namespace$::QName* getXMLSchemaType() {return nullptr;}
	virtual int32_t getYear() {return 0;}
	virtual int32_t hashCode() override;
	virtual bool isValid() {return false;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* normalize() {return nullptr;}
	virtual void reset() {}
	virtual void setDay(int32_t day) {}
	virtual void setFractionalSecond(::java::math::BigDecimal* fractional) {}
	virtual void setHour(int32_t hour) {}
	virtual void setMillisecond(int32_t millisecond) {}
	virtual void setMinute(int32_t minute) {}
	virtual void setMonth(int32_t month) {}
	virtual void setSecond(int32_t second) {}
	virtual void setTime(int32_t hour, int32_t minute, int32_t second);
	virtual void setTime(int32_t hour, int32_t minute, int32_t second, ::java::math::BigDecimal* fractional);
	virtual void setTime(int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
	virtual void setTimezone(int32_t offset) {}
	virtual void setYear(::java::math::BigInteger* year) {}
	virtual void setYear(int32_t year) {}
	virtual ::java::util::GregorianCalendar* toGregorianCalendar() {return nullptr;}
	virtual ::java::util::GregorianCalendar* toGregorianCalendar(::java::util::TimeZone* timezone, ::java::util::Locale* aLocale, ::javax::xml::datatype::XMLGregorianCalendar* defaults) {return nullptr;}
	virtual $String* toString() override;
	virtual $String* toXMLFormat() {return nullptr;}
};

		} // datatype
	} // xml
} // javax

#endif // _javax_xml_datatype_XMLGregorianCalendar_h_