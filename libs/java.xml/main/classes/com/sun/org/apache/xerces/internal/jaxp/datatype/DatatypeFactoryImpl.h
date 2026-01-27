#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_DatatypeFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_DatatypeFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.DatatypeFactoryImpl
//$ extends javax.xml.datatype.DatatypeFactory

#include <javax/xml/datatype/DatatypeFactory.h>

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
namespace javax {
	namespace xml {
		namespace datatype {
			class Duration;
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

class DatatypeFactoryImpl : public ::javax::xml::datatype::DatatypeFactory {
	$class(DatatypeFactoryImpl, $NO_CLASS_INIT, ::javax::xml::datatype::DatatypeFactory)
public:
	DatatypeFactoryImpl();
	void init$();
	using ::javax::xml::datatype::DatatypeFactory::newDuration;
	virtual ::javax::xml::datatype::Duration* newDuration($String* lexicalRepresentation) override;
	virtual ::javax::xml::datatype::Duration* newDuration(int64_t durationInMilliseconds) override;
	virtual ::javax::xml::datatype::Duration* newDuration(bool isPositive, ::java::math::BigInteger* years, ::java::math::BigInteger* months, ::java::math::BigInteger* days, ::java::math::BigInteger* hours, ::java::math::BigInteger* minutes, ::java::math::BigDecimal* seconds) override;
	virtual ::javax::xml::datatype::Duration* newDurationDayTime($String* lexicalRepresentation) override;
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(int64_t durationInMilliseconds) override;
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(bool isPositive, ::java::math::BigInteger* day, ::java::math::BigInteger* hour, ::java::math::BigInteger* minute, ::java::math::BigInteger* second) override;
	virtual ::javax::xml::datatype::Duration* newDurationDayTime(bool isPositive, int32_t day, int32_t hour, int32_t minute, int32_t second) override;
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(bool isPositive, ::java::math::BigInteger* year, ::java::math::BigInteger* month) override;
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(bool isPositive, int32_t year, int32_t month) override;
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth($String* lexicalRepresentation) override;
	virtual ::javax::xml::datatype::Duration* newDurationYearMonth(int64_t durationInMilliseconds) override;
	using ::javax::xml::datatype::DatatypeFactory::newXMLGregorianCalendar;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar() override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar($String* lexicalRepresentation) override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar(::java::util::GregorianCalendar* cal) override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* newXMLGregorianCalendar(::java::math::BigInteger* year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::java::math::BigDecimal* fractionalSecond, int32_t timezone) override;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_DatatypeFactoryImpl_h_