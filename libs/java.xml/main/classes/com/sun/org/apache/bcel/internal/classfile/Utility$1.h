#ifndef _com_sun_org_apache_bcel_internal_classfile_Utility$1_h_
#define _com_sun_org_apache_bcel_internal_classfile_Utility$1_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Utility$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Utility$1 : public ::java::lang::ThreadLocal {
	$class(Utility$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Utility$1();
	void init$();
	virtual $Object* initialValue() override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Utility$1_h_