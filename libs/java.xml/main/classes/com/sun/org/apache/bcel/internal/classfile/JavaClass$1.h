#ifndef _com_sun_org_apache_bcel_internal_classfile_JavaClass$1_h_
#define _com_sun_org_apache_bcel_internal_classfile_JavaClass$1_h_
//$ class com.sun.org.apache.bcel.internal.classfile.JavaClass$1
//$ extends com.sun.org.apache.bcel.internal.util.BCELComparator

#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class JavaClass$1 : public ::com::sun::org::apache::bcel::internal::util::BCELComparator {
	$class(JavaClass$1, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::util::BCELComparator)
public:
	JavaClass$1();
	using ::com::sun::org::apache::bcel::internal::util::BCELComparator::hashCode;
	using ::com::sun::org::apache::bcel::internal::util::BCELComparator::equals;
	void init$();
	virtual bool equals(Object$* o1, Object$* o2) override;
	virtual int32_t hashCode(Object$* o) override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_JavaClass$1_h_