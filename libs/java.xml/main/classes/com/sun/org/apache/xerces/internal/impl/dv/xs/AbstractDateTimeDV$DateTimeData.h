#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV$DateTimeData_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV$DateTimeData_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV$DateTimeData
//$ extends com.sun.org.apache.xerces.internal.xs.datatypes.XSDateTime

#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {
									class AbstractDateTimeDV;
								}
							}
						}
					}
				}
			}
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class AbstractDateTimeDV$DateTimeData : public ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDateTime {
	$class(AbstractDateTimeDV$DateTimeData, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDateTime)
public:
	AbstractDateTimeDV$DateTimeData();
	void init$($String* originalValue, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV* type);
	void init$(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, double second, int32_t utc, $String* originalValue, bool normalized, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV* type);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t getDays() override;
	virtual ::javax::xml::datatype::Duration* getDuration() override;
	virtual int32_t getHours() override;
	virtual $String* getLexicalValue() override;
	virtual int32_t getMinutes() override;
	virtual int32_t getMonths() override;
	virtual double getSeconds() override;
	virtual int32_t getTimeZoneHours() override;
	virtual int32_t getTimeZoneMinutes() override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* getXMLGregorianCalendar() override;
	virtual int32_t getYears() override;
	virtual bool hasTimeZone() override;
	virtual int32_t hashCode() override;
	virtual bool isNormalized() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDateTime* normalize() override;
	virtual $String* toString() override;
	int32_t year = 0;
	int32_t month = 0;
	int32_t day = 0;
	int32_t hour = 0;
	int32_t minute = 0;
	int32_t utc = 0;
	double second = 0.0;
	int32_t timezoneHr = 0;
	int32_t timezoneMin = 0;
	$String* originalValue = nullptr;
	bool normalized = false;
	int32_t unNormYear = 0;
	int32_t unNormMonth = 0;
	int32_t unNormDay = 0;
	int32_t unNormHour = 0;
	int32_t unNormMinute = 0;
	double unNormSecond = 0.0;
	int32_t position = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV* type = nullptr;
	$volatile($String*) canonical = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_AbstractDateTimeDV$DateTimeData_h_