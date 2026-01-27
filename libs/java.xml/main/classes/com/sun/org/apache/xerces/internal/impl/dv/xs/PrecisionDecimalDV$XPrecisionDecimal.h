#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV$XPrecisionDecimal_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV$XPrecisionDecimal_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV$XPrecisionDecimal
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
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

class PrecisionDecimalDV$XPrecisionDecimal : public ::java::lang::Object {
	$class(PrecisionDecimalDV$XPrecisionDecimal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrecisionDecimalDV$XPrecisionDecimal();
	void init$($String* content);
	static $String* canonicalToStringForHashCode($String* ivalue, $String* fvalue, int32_t sign, int32_t pvalue);
	int32_t compare(::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal* val);
	int32_t compareDecimal($String* iValue, $String* fValue, $String* otherIValue, $String* otherFValue);
	int32_t compareFractionalPart(::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal* oval);
	int32_t compareTo(::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal* val);
	virtual bool equals(Object$* val) override;
	virtual int32_t hashCode() override;
	void initD($String* content);
	int32_t intComp(::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal* val);
	bool isIdentical(::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV$XPrecisionDecimal* decimal);
	void makeCanonical();
	virtual $String* toString() override;
	void truncateTrailingZeros(::java::lang::StringBuffer* fValue, ::java::lang::StringBuffer* otherFValue);
	int32_t sign = 0;
	int32_t totalDigits = 0;
	int32_t intDigits = 0;
	int32_t fracDigits = 0;
	$String* ivalue = nullptr;
	$String* fvalue = nullptr;
	int32_t pvalue = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV$XPrecisionDecimal_h_