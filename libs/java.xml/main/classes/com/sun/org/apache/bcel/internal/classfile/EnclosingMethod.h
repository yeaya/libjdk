#ifndef _com_sun_org_apache_bcel_internal_classfile_EnclosingMethod_h_
#define _com_sun_org_apache_bcel_internal_classfile_EnclosingMethod_h_
//$ class com.sun.org.apache.bcel.internal.classfile.EnclosingMethod
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantClass;
							class ConstantNameAndType;
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

class EnclosingMethod : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(EnclosingMethod, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	EnclosingMethod();
	void init$(int32_t nameIndex, int32_t len, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	void init$(int32_t nameIndex, int32_t len, int32_t classIdx, int32_t methodIdx, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	::com::sun::org::apache::bcel::internal::classfile::ConstantClass* getEnclosingClass();
	int32_t getEnclosingClassIndex();
	::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType* getEnclosingMethod();
	int32_t getEnclosingMethodIndex();
	void setEnclosingClassIndex(int32_t idx);
	void setEnclosingMethodIndex(int32_t idx);
	int32_t classIndex = 0;
	int32_t methodIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_EnclosingMethod_h_