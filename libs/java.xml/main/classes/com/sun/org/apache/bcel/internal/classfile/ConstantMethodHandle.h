#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantMethodHandle_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantMethodHandle_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantMethodHandle
//$ extends com.sun.org.apache.bcel.internal.classfile.Constant

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>

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

class ConstantMethodHandle : public ::com::sun::org::apache::bcel::internal::classfile::Constant {
	$class(ConstantMethodHandle, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant)
public:
	ConstantMethodHandle();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t reference_kind, int32_t reference_index);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getReferenceIndex();
	int32_t getReferenceKind();
	void setReferenceIndex(int32_t reference_index);
	void setReferenceKind(int32_t reference_kind);
	virtual $String* toString() override;
	int32_t referenceKind = 0;
	int32_t referenceIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantMethodHandle_h_