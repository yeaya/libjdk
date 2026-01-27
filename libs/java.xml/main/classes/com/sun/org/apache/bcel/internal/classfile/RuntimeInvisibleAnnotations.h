#ifndef _com_sun_org_apache_bcel_internal_classfile_RuntimeInvisibleAnnotations_h_
#define _com_sun_org_apache_bcel_internal_classfile_RuntimeInvisibleAnnotations_h_
//$ class com.sun.org.apache.bcel.internal.classfile.RuntimeInvisibleAnnotations
//$ extends com.sun.org.apache.bcel.internal.classfile.Annotations

#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
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

class RuntimeInvisibleAnnotations : public ::com::sun::org::apache::bcel::internal::classfile::Annotations {
	$class(RuntimeInvisibleAnnotations, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Annotations)
public:
	RuntimeInvisibleAnnotations();
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* dos) override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_RuntimeInvisibleAnnotations_h_