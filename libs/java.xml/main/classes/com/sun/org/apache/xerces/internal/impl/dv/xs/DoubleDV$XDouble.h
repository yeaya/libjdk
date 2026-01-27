#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV$XDouble_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV$XDouble_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV$XDouble
//$ extends com.sun.org.apache.xerces.internal.xs.datatypes.XSDouble

#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDouble.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class DoubleDV$XDouble : public ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDouble {
	$class(DoubleDV$XDouble, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDouble)
public:
	DoubleDV$XDouble();
	void init$($String* s);
	int32_t compareTo(::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV$XDouble* val);
	virtual bool equals(Object$* val) override;
	virtual double getValue() override;
	virtual int32_t hashCode() override;
	bool isIdentical(::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV$XDouble* val);
	virtual $String* toString() override;
	double value = 0.0;
	$String* canonical = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV$XDouble_h_