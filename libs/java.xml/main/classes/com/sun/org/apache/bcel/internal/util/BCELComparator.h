#ifndef _com_sun_org_apache_bcel_internal_util_BCELComparator_h_
#define _com_sun_org_apache_bcel_internal_util_BCELComparator_h_
//$ interface com.sun.org.apache.bcel.internal.util.BCELComparator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("THAT")
#undef THAT
#pragma push_macro("THIS")
#undef THIS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class BCELComparator : public ::java::lang::Object {
	$interface(BCELComparator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	using ::java::lang::Object::equals;
	virtual bool equals(Object$* THIS, Object$* THAT) {return false;}
	using ::java::lang::Object::hashCode;
	virtual int32_t hashCode(Object$* THIS) {return 0;}
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("THAT")
#pragma pop_macro("THIS")

#endif // _com_sun_org_apache_bcel_internal_util_BCELComparator_h_