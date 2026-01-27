#ifndef _com_sun_org_apache_bcel_internal_classfile_LocalVariable_h_
#define _com_sun_org_apache_bcel_internal_classfile_LocalVariable_h_
//$ class com.sun.org.apache.bcel.internal.classfile.LocalVariable
//$ extends java.lang.Cloneable
//$ implements com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Cloneable.h>

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

class LocalVariable : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(LocalVariable, $NO_CLASS_INIT, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	LocalVariable();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::classfile::LocalVariable* localVariable);
	void init$(::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t startPc, int32_t length, int32_t nameIndex, int32_t signatureIndex, int32_t index, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t startPc, int32_t length, int32_t nameIndex, int32_t signatureIndex, int32_t index, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool, int32_t origIndex);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::LocalVariable* copy();
	void dump(::java::io::DataOutputStream* dataOutputStream);
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	int32_t getIndex();
	int32_t getLength();
	$String* getName();
	int32_t getNameIndex();
	int32_t getOrigIndex();
	$String* getSignature();
	int32_t getSignatureIndex();
	int32_t getStartPC();
	void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void setIndex(int32_t index);
	void setLength(int32_t length);
	void setNameIndex(int32_t nameIndex);
	void setSignatureIndex(int32_t signatureIndex);
	void setStartPC(int32_t startPc);
	virtual $String* toString() override;
	$String* toStringShared(bool typeTable);
	int32_t startPc = 0;
	int32_t length = 0;
	int32_t nameIndex = 0;
	int32_t signatureIndex = 0;
	int32_t index = 0;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	int32_t origIndex = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_LocalVariable_h_