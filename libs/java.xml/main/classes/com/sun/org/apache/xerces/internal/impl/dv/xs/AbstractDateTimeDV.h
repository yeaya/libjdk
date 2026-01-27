#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>

#pragma push_macro("DAY")
#undef DAY
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MONTH")
#undef MONTH
#pragma push_macro("YEAR")
#undef YEAR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {
									class AbstractDateTimeDV$DateTimeData;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace javax {
	namespace xml {
		namespace datatype {
			class DatatypeFactory;
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
						namespace impl {
							namespace dv {
								namespace xs {

class AbstractDateTimeDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(AbstractDateTimeDV, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	AbstractDateTimeDV();
	void init$();
	void append(::java::lang::StringBuffer* message, int32_t value, int32_t nch);
	void append(::java::lang::StringBuffer* message, double value);
	void append2(::java::lang::StringBuffer* message, double value);
	void append3(::java::lang::StringBuffer* message, double value);
	void cloneDate(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* finalValue, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* tempDate);
	virtual int32_t compare(Object$* value1, Object$* value2) override;
	virtual int16_t compareDates(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date1, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date2, bool strict);
	virtual int16_t compareOrder(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date1, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date2);
	virtual $String* dateToString(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual int32_t fQuotient(int32_t a, int32_t b);
	virtual int32_t fQuotient(int32_t temp, int32_t low, int32_t high);
	virtual int32_t findUTCSign($String* buffer, int32_t start, int32_t end);
	virtual int16_t getAllowedFacets() override;
	virtual int32_t getDate($String* buffer, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual ::javax::xml::datatype::Duration* getDuration(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	::java::math::BigDecimal* getFractionalSecondsAsBigDecimal(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	virtual void getTime($String* buffer, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	virtual void getTimeZone($String* buffer, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data, int32_t sign, int32_t end);
	virtual ::javax::xml::datatype::XMLGregorianCalendar* getXMLGregorianCalendar(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	virtual int32_t getYearMonth($String* buffer, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual int32_t indexOf($String* buffer, int32_t start, int32_t end, char16_t ch);
	virtual bool isIdentical(Object$* value1, Object$* value2) override;
	bool isLeapYear(int32_t year);
	bool isNextCharUTCSign($String* buffer, int32_t start, int32_t end);
	virtual int32_t maxDayInMonthFor(int32_t year, int32_t month);
	virtual int32_t mod(int32_t a, int32_t b, int32_t quotient);
	virtual int32_t modulo(int32_t temp, int32_t low, int32_t high);
	virtual void normalize(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual int32_t parseInt($String* buffer, int32_t start, int32_t end);
	virtual int32_t parseIntYear($String* buffer, int32_t end);
	virtual double parseSecond($String* buffer, int32_t start, int32_t end);
	virtual void parseTimeZone($String* buffer, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual void resetDateObj(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	virtual void saveUnnormalized(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date);
	virtual void validateDateTime(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* data);
	static const bool DEBUG = false;
	static const int32_t YEAR = 2000;
	static const int32_t MONTH = 1;
	static const int32_t DAY = 1;
	static ::javax::xml::datatype::DatatypeFactory* datatypeFactory;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DAY")
#pragma pop_macro("DEBUG")
#pragma pop_macro("MONTH")
#pragma pop_macro("YEAR")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV_h_