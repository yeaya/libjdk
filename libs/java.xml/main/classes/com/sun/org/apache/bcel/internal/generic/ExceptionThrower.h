#ifndef _com_sun_org_apache_bcel_internal_generic_ExceptionThrower_h_
#define _com_sun_org_apache_bcel_internal_generic_ExceptionThrower_h_
//$ interface com.sun.org.apache.bcel.internal.generic.ExceptionThrower
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ExceptionThrower : public ::java::lang::Object {
	$interface(ExceptionThrower, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ClassArray* getExceptions() {return nullptr;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ExceptionThrower_h_