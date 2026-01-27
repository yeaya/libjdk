#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_DecimalDV$XDecimal_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_DecimalDV$XDecimal_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV$XDecimal
//$ extends com.sun.org.apache.xerces.internal.xs.datatypes.XSDecimal

#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDecimal.h>

namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
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

class DecimalDV$XDecimal : public ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDecimal {
	$class(DecimalDV$XDecimal, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDecimal)
public:
	DecimalDV$XDecimal();
	void init$($String* content);
	void init$($String* content, bool integer);
	int32_t compareTo(::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV$XDecimal* val);
	virtual bool equals(Object$* val) override;
	virtual ::java::math::BigDecimal* getBigDecimal() override;
	virtual ::java::math::BigInteger* getBigInteger() override;
	virtual int8_t getByte() override;
	virtual int32_t getInt() override;
	virtual int64_t getLong() override;
	virtual int16_t getShort() override;
	virtual int32_t hashCode() override;
	void initD($String* content);
	void initI($String* content);
	int32_t intComp(::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV$XDecimal* val);
	void makeCanonical();
	virtual $String* toString() override;
	int32_t sign = 0;
	int32_t totalDigits = 0;
	int32_t intDigits = 0;
	int32_t fracDigits = 0;
	$String* ivalue = nullptr;
	$String* fvalue = nullptr;
	bool integer = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_DecimalDV$XDecimal_h_