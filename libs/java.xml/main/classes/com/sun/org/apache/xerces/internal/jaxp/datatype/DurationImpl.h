#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl
//$ extends javax.xml.datatype.Duration
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/xml/datatype/Duration.h>

#pragma push_macro("FACTORS")
#undef FACTORS
#pragma push_macro("FIELDS")
#undef FIELDS
#pragma push_macro("GMT")
#undef GMT
#pragma push_macro("TEST_POINTS")
#undef TEST_POINTS
#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace lang {
		class Number;
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
		class Calendar;
		class Date;
		class TimeZone;
	}
}
namespace javax {
	namespace xml {
		namespace datatype {
			class DatatypeConstants$Field;
			class XMLGregorianCalendar;
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

class DurationImpl : public ::javax::xml::datatype::Duration, public ::java::io::Serializable {
	$class(DurationImpl, 0, ::javax::xml::datatype::Duration, ::java::io::Serializable)
public:
	DurationImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* duration) override;
	virtual void finalize() override;
	void init$(bool isPositive, ::java::math::BigInteger* years, ::java::math::BigInteger* months, ::java::math::BigInteger* days, ::java::math::BigInteger* hours, ::java::math::BigInteger* minutes, ::java::math::BigDecimal* seconds);
	void init$(bool isPositive, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds);
	void init$(int64_t durationInMilliSeconds);
	void init$($String* lexicalRepresentation);
	virtual ::javax::xml::datatype::Duration* add(::javax::xml::datatype::Duration* rhs) override;
	virtual void addTo(::java::util::Calendar* calendar) override;
	virtual void addTo(::java::util::Date* date) override;
	static void alignSigns($Array<::java::math::BigDecimal>* buf, int32_t start, int32_t end);
	virtual int32_t calcSignum(bool isPositive);
	void checkMaxValue(::java::lang::Number* field, ::javax::xml::datatype::DatatypeConstants$Field* fieldType);
	virtual int32_t compare(::javax::xml::datatype::Duration* rhs) override;
	int32_t compareDates(::javax::xml::datatype::Duration* duration1, ::javax::xml::datatype::Duration* duration2);
	int32_t compareResults(int32_t resultA, int32_t resultB);
	static int64_t getCalendarTimeInMillis(::java::util::Calendar* cal);
	virtual int32_t getDays() override;
	virtual ::java::lang::Number* getField(::javax::xml::datatype::DatatypeConstants$Field* field) override;
	::java::math::BigDecimal* getFieldAsBigDecimal(::javax::xml::datatype::DatatypeConstants$Field* f);
	virtual int32_t getHours() override;
	int32_t getInt(::javax::xml::datatype::DatatypeConstants$Field* field);
	virtual int32_t getMinutes() override;
	virtual int32_t getMonths() override;
	virtual int32_t getSeconds() override;
	virtual int32_t getSign() override;
	virtual int64_t getTimeInMillis(::java::util::Calendar* startInstant) override;
	virtual int64_t getTimeInMillis(::java::util::Date* startInstant) override;
	virtual int32_t getYears() override;
	virtual int32_t hashCode() override;
	static bool isDigit(char16_t ch);
	static bool isDigitOrPeriod(char16_t ch);
	virtual bool isSet(::javax::xml::datatype::DatatypeConstants$Field* field) override;
	virtual ::javax::xml::datatype::Duration* multiply(int32_t factor) override;
	virtual ::javax::xml::datatype::Duration* multiply(::java::math::BigDecimal* factor) override;
	virtual ::javax::xml::datatype::Duration* negate() override;
	virtual ::javax::xml::datatype::Duration* normalizeWith(::java::util::Calendar* startTimeInstant) override;
	static void organizeParts($String* whole, $StringArray* parts, $ints* partsIndex, int32_t len, $String* tokens);
	static ::java::math::BigDecimal* parseBigDecimal($String* whole, $String* part, int32_t index);
	static ::java::math::BigInteger* parseBigInteger($String* whole, $String* part, int32_t index);
	static $String* parsePiece($String* whole, $ints* idx);
	static ::java::math::BigDecimal* sanitize(::java::math::BigInteger* value, int32_t signum);
	static ::java::math::BigDecimal* sanitize(::java::math::BigDecimal* value, int32_t signum);
	virtual int32_t signum();
	virtual ::javax::xml::datatype::Duration* subtract(::javax::xml::datatype::Duration* rhs) override;
	static void testNonNegative(::java::math::BigInteger* n, ::javax::xml::datatype::DatatypeConstants$Field* f);
	static void testNonNegative(::java::math::BigDecimal* n, ::javax::xml::datatype::DatatypeConstants$Field* f);
	static ::java::math::BigInteger* toBigInteger(::java::math::BigDecimal* value, bool canBeNull);
	virtual $String* toString() override;
	$String* toString(::java::math::BigDecimal* bd);
	static ::java::math::BigInteger* wrap(int32_t i);
	$Object* writeReplace();
	static $Array<::javax::xml::datatype::DatatypeConstants$Field>* FIELDS;
	static ::java::util::TimeZone* GMT;
	static ::java::math::BigDecimal* ZERO;
	static ::java::math::BigInteger* MaxIntAsBigInt;
	int32_t signum$ = 0;
	::java::math::BigInteger* years = nullptr;
	::java::math::BigInteger* months = nullptr;
	::java::math::BigInteger* days = nullptr;
	::java::math::BigInteger* hours = nullptr;
	::java::math::BigInteger* minutes = nullptr;
	::java::math::BigDecimal* seconds = nullptr;
	static $Array<::javax::xml::datatype::XMLGregorianCalendar>* TEST_POINTS;
	static $Array<::java::math::BigDecimal>* FACTORS;
	static const int64_t serialVersionUID = (int64_t)1;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FACTORS")
#pragma pop_macro("FIELDS")
#pragma pop_macro("GMT")
#pragma pop_macro("TEST_POINTS")
#pragma pop_macro("ZERO")

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl_h_