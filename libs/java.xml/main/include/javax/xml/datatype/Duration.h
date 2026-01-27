#ifndef _javax_xml_datatype_Duration_h_
#define _javax_xml_datatype_Duration_h_
//$ class javax.xml.datatype.Duration
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Date;
	}
}
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

class $import Duration : public ::java::lang::Object {
	$class(Duration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Duration();
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::xml::datatype::Duration* add(::javax::xml::datatype::Duration* rhs) {return nullptr;}
	virtual void addTo(::java::util::Calendar* calendar) {}
	virtual void addTo(::java::util::Date* date);
	virtual int32_t compare(::javax::xml::datatype::Duration* duration) {return 0;}
	virtual bool equals(Object$* duration) override;
	static int64_t getCalendarTimeInMillis(::java::util::Calendar* cal);
	virtual int32_t getDays();
	virtual ::java::lang::Number* getField(::javax::xml::datatype::DatatypeConstants$Field* field) {return nullptr;}
	virtual int32_t getHours();
	virtual int32_t getMinutes();
	virtual int32_t getMonths();
	virtual int32_t getSeconds();
	virtual int32_t getSign() {return 0;}
	virtual int64_t getTimeInMillis(::java::util::Calendar* startInstant);
	virtual int64_t getTimeInMillis(::java::util::Date* startInstant);
	virtual ::javax::xml::namespace$::QName* getXMLSchemaType();
	virtual int32_t getYears();
	virtual bool isLongerThan(::javax::xml::datatype::Duration* duration);
	virtual bool isSet(::javax::xml::datatype::DatatypeConstants$Field* field) {return false;}
	virtual bool isShorterThan(::javax::xml::datatype::Duration* duration);
	virtual ::javax::xml::datatype::Duration* multiply(int32_t factor);
	virtual ::javax::xml::datatype::Duration* multiply(::java::math::BigDecimal* factor) {return nullptr;}
	virtual ::javax::xml::datatype::Duration* negate() {return nullptr;}
	virtual ::javax::xml::datatype::Duration* normalizeWith(::java::util::Calendar* startTimeInstant) {return nullptr;}
	virtual ::javax::xml::datatype::Duration* subtract(::javax::xml::datatype::Duration* rhs);
	virtual $String* toString() override;
	$String* toString(::java::math::BigDecimal* bd);
	static const bool DEBUG = true;
};

		} // datatype
	} // xml
} // javax

#pragma pop_macro("DEBUG")

#endif // _javax_xml_datatype_Duration_h_