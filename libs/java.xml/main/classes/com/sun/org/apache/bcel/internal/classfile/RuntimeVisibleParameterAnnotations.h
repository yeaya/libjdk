#ifndef _com_sun_org_apache_bcel_internal_classfile_RuntimeVisibleParameterAnnotations_h_
#define _com_sun_org_apache_bcel_internal_classfile_RuntimeVisibleParameterAnnotations_h_
//$ class com.sun.org.apache.bcel.internal.classfile.RuntimeVisibleParameterAnnotations
//$ extends com.sun.org.apache.bcel.internal.classfile.ParameterAnnotations

#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>

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
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class RuntimeVisibleParameterAnnotations : public ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations {
	$class(RuntimeVisibleParameterAnnotations, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations)
public:
	RuntimeVisibleParameterAnnotations();
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_RuntimeVisibleParameterAnnotations_h_