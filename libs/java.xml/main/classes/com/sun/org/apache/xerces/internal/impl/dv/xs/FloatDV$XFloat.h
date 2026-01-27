#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_FloatDV$XFloat_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_FloatDV$XFloat_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV$XFloat
//$ extends com.sun.org.apache.xerces.internal.xs.datatypes.XSFloat

#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSFloat.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class FloatDV$XFloat : public ::com::sun::org::apache::xerces::internal::xs::datatypes::XSFloat {
	$class(FloatDV$XFloat, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::datatypes::XSFloat)
public:
	FloatDV$XFloat();
	void init$($String* s);
	int32_t compareTo(::com::sun::org::apache::xerces::internal::impl::dv::xs::FloatDV$XFloat* val);
	virtual bool equals(Object$* val) override;
	virtual float getValue() override;
	virtual int32_t hashCode() override;
	bool isIdentical(::com::sun::org::apache::xerces::internal::impl::dv::xs::FloatDV$XFloat* val);
	virtual $String* toString() override;
	float value = 0.0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_FloatDV$XFloat_h_