#ifndef _com_sun_org_apache_bcel_internal_classfile_BootstrapMethods_h_
#define _com_sun_org_apache_bcel_internal_classfile_BootstrapMethods_h_
//$ class com.sun.org.apache.bcel.internal.classfile.BootstrapMethods
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class BootstrapMethod;
							class ConstantPool;
							class Visitor;
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

class BootstrapMethods : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(BootstrapMethods, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	BootstrapMethods();
	void init$(::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods* c);
	void init$(int32_t name_index, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod>* bootstrapMethods, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod>* getBootstrapMethods();
	void setBootstrapMethods($Array<::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod>* bootstrapMethods);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::BootstrapMethod>* bootstrapMethods = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_BootstrapMethods_h_