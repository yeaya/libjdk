#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_DayTimeDurationDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_DayTimeDurationDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.DayTimeDurationDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.DurationDV

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DurationDV.h>

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

class DayTimeDurationDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::DurationDV {
	$class(DayTimeDurationDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::DurationDV)
public:
	DayTimeDurationDV();
	void init$();
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual ::javax::xml::datatype::Duration* getDuration(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_DayTimeDurationDV_h_