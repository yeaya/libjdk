#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationDayTimeImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationDayTimeImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.DurationDayTimeImpl
//$ extends com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>

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
						namespace jaxp {
							namespace datatype {

class DurationDayTimeImpl : public ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl {
	$class(DurationDayTimeImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl)
public:
	DurationDayTimeImpl();
	void init$(bool isPositive, ::java::math::BigInteger* days, ::java::math::BigInteger* hours, ::java::math::BigInteger* minutes, ::java::math::BigDecimal* seconds);
	void init$(bool isPositive, int32_t days, int32_t hours, int32_t minutes, int32_t seconds);
	void init$($String* lexicalRepresentation);
	void init$(int64_t durationInMilliseconds);
	void convertToCanonicalDayTime();
	virtual float getValue();
	static const int64_t serialVersionUID = (int64_t)0x0BB94E9233F66164;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationDayTimeImpl_h_