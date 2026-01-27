#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_DurationDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_DurationDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.DurationDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <java/lang/Array.h>

#pragma push_macro("DATETIMES")
#undef DATETIMES
#pragma push_macro("DAYTIMEDURATION_TYPE")
#undef DAYTIMEDURATION_TYPE
#pragma push_macro("DURATION_TYPE")
#undef DURATION_TYPE
#pragma push_macro("YEARMONTHDURATION_TYPE")
#undef YEARMONTHDURATION_TYPE

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
			class Duration;
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

class DurationDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV {
	$class(DurationDV, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV)
public:
	DurationDV();
	void init$();
	::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* addDuration(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* addto, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* duration);
	virtual int16_t compareDates(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date1, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date2, bool strict) override;
	int16_t compareResults(int16_t resultA, int16_t resultB, bool strict);
	virtual $String* dateToString(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual ::javax::xml::datatype::Duration* getDuration(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* parse($String* str, int32_t durationType);
	virtual double parseSecond($String* buffer, int32_t start, int32_t end) override;
	static const int32_t DURATION_TYPE = 0;
	static const int32_t YEARMONTHDURATION_TYPE = 1;
	static const int32_t DAYTIMEDURATION_TYPE = 2;
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData>* DATETIMES;
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

#pragma pop_macro("DATETIMES")
#pragma pop_macro("DAYTIMEDURATION_TYPE")
#pragma pop_macro("DURATION_TYPE")
#pragma pop_macro("YEARMONTHDURATION_TYPE")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_DurationDV_h_