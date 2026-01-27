#ifndef _com_sun_org_apache_bcel_internal_generic_Type$3_h_
#define _com_sun_org_apache_bcel_internal_generic_Type$3_h_
//$ class com.sun.org.apache.bcel.internal.generic.Type$3
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class Type$3 : public ::java::lang::ThreadLocal {
	$class(Type$3, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Type$3();
	void init$();
	virtual $Object* initialValue() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_Type$3_h_