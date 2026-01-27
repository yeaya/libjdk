#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationYearMonthImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationYearMonthImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.DurationYearMonthImpl
//$ extends com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>

namespace java {
	namespace math {
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

class DurationYearMonthImpl : public ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl {
	$class(DurationYearMonthImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl)
public:
	DurationYearMonthImpl();
	void init$(bool isPositive, ::java::math::BigInteger* years, ::java::math::BigInteger* months);
	void init$(bool isPositive, int32_t years, int32_t months);
	void init$(int64_t durationInMilliseconds);
	void init$($String* lexicalRepresentation);
	void convertToCanonicalYearMonth();
	virtual int32_t getValue();
	static const int64_t serialVersionUID = (int64_t)0xC284FA89FD20528A;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationYearMonthImpl_h_