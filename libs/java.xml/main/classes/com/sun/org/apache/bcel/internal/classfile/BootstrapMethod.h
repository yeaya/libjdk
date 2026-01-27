#ifndef _com_sun_org_apache_bcel_internal_classfile_BootstrapMethod_h_
#define _com_sun_org_apache_bcel_internal_classfile_BootstrapMethod_h_
//$ class com.sun.org.apache.bcel.internal.classfile.BootstrapMethod
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInput;
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class BootstrapMethod : public ::java::lang::Cloneable {
	$class(BootstrapMethod, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	BootstrapMethod();
	void init$(::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod* c);
	void init$(::java::io::DataInput* input);
	void init$(int32_t bootstrap_method_ref, int32_t num_bootstrap_arguments);
	void init$(int32_t bootstrapMethodRef, $ints* bootstrapArguments);
	virtual ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod* copy();
	void dump(::java::io::DataOutputStream* file);
	virtual $ints* getBootstrapArguments();
	virtual int32_t getBootstrapMethodRef();
	virtual int32_t getNumBootstrapArguments();
	virtual void setBootstrapArguments($ints* bootstrapArguments);
	virtual void setBootstrapMethodRef(int32_t bootstrapMethodRef);
	virtual $String* toString() override;
	$String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	int32_t bootstrapMethodRef = 0;
	$ints* bootstrapArguments = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_BootstrapMethod_h_