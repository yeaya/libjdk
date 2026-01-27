#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantNameAndType_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantNameAndType_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantNameAndType
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

class ConstantNameAndType : public ::com::sun::org::apache::bcel::internal::classfile::Constant {
	$class(ConstantNameAndType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant)
public:
	ConstantNameAndType();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType* c);
	void init$(::java::io::DataInput* file);
	void init$(int32_t nameIndex, int32_t signatureIndex);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$String* getName(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	int32_t getNameIndex();
	$String* getSignature(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	int32_t getSignatureIndex();
	void setNameIndex(int32_t nameIndex);
	void setSignatureIndex(int32_t signatureIndex);
	virtual $String* toString() override;
	int32_t nameIndex = 0;
	int32_t signatureIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantNameAndType_h_