#ifndef _javax_xml_datatype_DatatypeFactory_h_
#define _javax_xml_datatype_DatatypeFactory_h_
//$ class javax.xml.datatype.DatatypeFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DATATYPEFACTORY_IMPLEMENTATION_CLASS")
#undef DATATYPEFACTORY_IMPLEMENTATION_CLASS
#pragma push_macro("DATATYPEFACTORY_PROPERTY")
#undef DATATYPEFACTORY_PROPERTY
#pragma push_macro("XDTSCHEMA_DTD")
#undef XDTSCHEMA_DTD
#pragma push_macro("XDTSCHEMA_YMD")
#undef XDTSCHEMA_YMD

namespace java {
	namespace lang {
		class ClassLoader;
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
		class GregorianCalendar;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace xml {
		namespace datatype {
			class Duration;
			class XMLGregorianCalendar;
		}
	}
}

namespace javax {
	namespace xml {
		namespace datatype {

class $import DatatypeFactory : public ::java::lang::Object {
	$class(DatatypeFactory, 0, ::java::lang::Object)
public:
	DatatypeFactory();
	void init$();
	static ::javax::xml::datatype::DatatypeFactory* newDefaultInstance();
	virtual ::javax::xml::datatype::Duration* newDuration($String* lexicalRepresentation) {return nullptr;}
	virtual ::javax::xml::datatype::Duration* newDuration(int64_t durationInMilliSeconds) {return nullptr;}
	virtual ::javax::xml::datatype::Duration* newDuration(bool isPositive, ::java::math::BigInteger* years, ::java::math::BigInteger* months, ::java::math::BigInteger* days, ::java::math::BigInteger* hours, ::java::math::BigInteger* minutes, ::java::math::BigDecimal* seconds) {return nullptr;}
	virtual ::javax::xml::datatype::Duration* newDuration(bool isPositive, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds);
	virtual ::javax::xml::datatype::Duration* newDurationDayTime($String* lexicalRepresentation);
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(int64_t durationInMilliseconds);
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(bool isPositive, ::java::math::BigInteger* day, ::java::math::BigInteger* hour, ::java::math::BigInteger* minute, ::java::math::BigInteger* second);
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(bool isPositive, int32_t day, int32_t hour, int32_t minute, int32_t second);
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth($String* lexicalRepresentation);
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(int64_t durationInMilliseconds);
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(bool isPositive, ::java::math::BigInteger* year, ::java::math::BigInteger* month);
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(bool isPositive, int32_t year, int32_t month);
	static ::javax::xml::datatype::DatatypeFactory* newInstance();
	static ::javax::xml::datatype::DatatypeFactory* newInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar() {return nullptr;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar($String* lexicalRepresentation) {return nullptr;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar(::java::util::GregorianCalendar* cal) {return nullptr;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar(::java::math::BigInteger* year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::java::math::BigDecimal* fractionalSecond, int32_t timezone) {return nullptr;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t timezone);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendarDate(int32_t year, int32_t month, int32_t day, int32_t timezone);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t timezone);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, ::java::math::BigDecimal* fractionalSecond, int32_t timezone);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone);
	static $String* DATATYPEFACTORY_PROPERTY;
	static $String* DATATYPEFACTORY_IMPLEMENTATION_CLASS;
	static ::java::util::regex::Pattern* XDTSCHEMA_YMD;
	static ::java::util::regex::Pattern* XDTSCHEMA_DTD;
};

		} // datatype
	} // xml
} // javax

#pragma pop_macro("DATATYPEFACTORY_IMPLEMENTATION_CLASS")
#pragma pop_macro("DATATYPEFACTORY_PROPERTY")
#pragma pop_macro("XDTSCHEMA_DTD")
#pragma pop_macro("XDTSCHEMA_YMD")

#endif // _javax_xml_datatype_DatatypeFactory_h_