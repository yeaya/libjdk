#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantCP_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantCP_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantCP
//$ extends com.sun.org.apache.bcel.internal.classfile.Constant

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>

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

class ConstantCP : public ::com::sun::org::apache::bcel::internal::classfile::Constant {
	$class(ConstantCP, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant)
public:
	ConstantCP();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantCP* c);
	void init$(int8_t tag, ::java::io::DataInput* file);
	void init$(int8_t tag, int32_t class_index, int32_t name_and_type_index);
	virtual void dump(::java::io::DataOutputStream* file) override;
	virtual $String* getClass(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	int32_t getClassIndex();
	int32_t getNameAndTypeIndex();
	void setClassIndex(int32_t class_index);
	void setNameAndTypeIndex(int32_t name_and_type_index);
	virtual $String* toString() override;
	int32_t class_index = 0;
	int32_t name_and_type_index = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantCP_h_