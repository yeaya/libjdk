#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_MonthDayDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_MonthDayDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.MonthDayDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>

#pragma push_macro("MONTHDAY_SIZE")
#undef MONTHDAY_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidationContext;
							}
						}
					}
				}
			}
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
namespace javax {
	namespace xml {
		namespace datatype {
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

class MonthDayDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV {
	$class(MonthDayDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV)
public:
	MonthDayDV();
	void init$();
	virtual $String* dateToString(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* getXMLGregorianCalendar(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* parse($String* str);
	static const int32_t MONTHDAY_SIZE = 7;
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

#pragma pop_macro("MONTHDAY_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_MonthDayDV_h_