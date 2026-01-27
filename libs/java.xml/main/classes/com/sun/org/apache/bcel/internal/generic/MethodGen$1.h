#ifndef _com_sun_org_apache_bcel_internal_generic_MethodGen$1_h_
#define _com_sun_org_apache_bcel_internal_generic_MethodGen$1_h_
//$ class com.sun.org.apache.bcel.internal.generic.MethodGen$1
//$ extends com.sun.org.apache.bcel.internal.util.BCELComparator

#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class MethodGen$1 : public ::com::sun::org::apache::bcel::internal::util::BCELComparator {
	$class(MethodGen$1, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::util::BCELComparator)
public:
	MethodGen$1();
	using ::com::sun::org::apache::bcel::internal::util::BCELComparator::hashCode;
	using ::com::sun::org::apache::bcel::internal::util::BCELComparator::equals;
	void init$();
	virtual bool equals(Object$* o1, Object$* o2) override;
	virtual int32_t hashCode(Object$* o) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_MethodGen$1_h_