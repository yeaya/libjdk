#ifndef _com_sun_org_apache_bcel_internal_classfile_Signature_h_
#define _com_sun_org_apache_bcel_internal_classfile_Signature_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Signature
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class Signature$MyByteArrayInputStream;
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
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Signature : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(Signature, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	Signature();
	void init$(::com::sun::org::apache::bcel::internal::classfile::Signature* c);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, int32_t signatureIndex, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$String* getSignature();
	int32_t getSignatureIndex();
	static bool identStart(int32_t ch);
	static bool isActualParameterList($String* s);
	static bool isFormalParameterList($String* s);
	static void matchGJIdent(::com::sun::org::apache::bcel::internal::classfile::Signature$MyByteArrayInputStream* in, ::java::lang::StringBuilder* buf);
	static void matchIdent(::com::sun::org::apache::bcel::internal::classfile::Signature$MyByteArrayInputStream* in, ::java::lang::StringBuilder* buf);
	void setSignatureIndex(int32_t signatureIndex);
	virtual $String* toString() override;
	static $String* translate($String* s);
	int32_t signatureIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Signature_h_