#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantInvokeDynamic_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantInvokeDynamic_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantInvokeDynamic
//$ extends com.sun.org.apache.bcel.internal.classfile.ConstantCP

#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
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
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ConstantInvokeDynamic : public ::com::sun::org::apache::bcel::internal::classfile::ConstantCP {
	$class(ConstantInvokeDynamic, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ConstantCP)
public:
	ConstantInvokeDynamic();
	using ::com::sun::org::apache::bcel::internal::classfile::ConstantCP::getClass;
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t bootstrap_method_attr_index, int32_t name_and_type_index);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	int32_t getBootstrapMethodAttrIndex();
	virtual $String* toString() override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantInvokeDynamic_h_