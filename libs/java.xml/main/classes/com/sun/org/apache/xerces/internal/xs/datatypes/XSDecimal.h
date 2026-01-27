#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_XSDecimal_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_XSDecimal_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.XSDecimal
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
						namespace xs {
							namespace datatypes {

class XSDecimal : public ::java::lang::Object {
	$interface(XSDecimal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::math::BigDecimal* getBigDecimal() {return nullptr;}
	virtual ::java::math::BigInteger* getBigInteger() {return nullptr;}
	virtual int8_t getByte() {return 0;}
	virtual int32_t getInt() {return 0;}
	virtual int64_t getLong() {return 0;}
	virtual int16_t getShort() {return 0;}
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_XSDecimal_h_