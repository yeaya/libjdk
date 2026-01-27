#ifndef _com_sun_org_apache_bcel_internal_classfile_Code_h_
#define _com_sun_org_apache_bcel_internal_classfile_Code_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Code
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class CodeException;
							class ConstantPool;
							class LineNumberTable;
							class LocalVariableTable;
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

class Code : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(Code, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	Code();
	void init$(::com::sun::org::apache::bcel::internal::classfile::Code* c);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, int32_t maxStack, int32_t maxLocals, $bytes* code, $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>* exceptionTable, $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	int32_t calculateLength();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAttributes();
	$bytes* getCode();
	$Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>* getExceptionTable();
	int32_t getInternalLength();
	::com::sun::org::apache::bcel::internal::classfile::LineNumberTable* getLineNumberTable();
	::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* getLocalVariableTable();
	int32_t getMaxLocals();
	int32_t getMaxStack();
	void setAttributes($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes);
	void setCode($bytes* code);
	void setExceptionTable($Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>* exceptionTable);
	void setMaxLocals(int32_t maxLocals);
	void setMaxStack(int32_t maxStack);
	$String* toString(bool verbose);
	virtual $String* toString() override;
	int32_t maxStack = 0;
	int32_t maxLocals = 0;
	$bytes* code = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>* exceptionTable = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Code_h_