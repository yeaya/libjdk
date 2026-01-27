#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_YearDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_YearDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.YearDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>

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

class YearDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV {
	$class(YearDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV)
public:
	YearDV();
	void init$();
	virtual $String* dateToString(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual ::javax::xml::datatype::XMLGregorianCalendar* getXMLGregorianCalendar(::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* date) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData* parse($String* str);
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_YearDV_h_