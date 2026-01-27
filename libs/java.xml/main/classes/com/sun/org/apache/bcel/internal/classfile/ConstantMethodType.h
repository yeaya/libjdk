#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantMethodType_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantMethodType_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantMethodType
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

class ConstantMethodType : public ::com::sun::org::apache::bcel::internal::classfile::Constant {
	$class(ConstantMethodType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant)
public:
	ConstantMethodType();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t descriptor_index);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getDescriptorIndex();
	void setDescriptorIndex(int32_t descriptor_index);
	virtual $String* toString() override;
	int32_t descriptorIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantMethodType_h_