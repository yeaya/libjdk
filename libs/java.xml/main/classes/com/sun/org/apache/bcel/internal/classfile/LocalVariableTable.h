#ifndef _com_sun_org_apache_bcel_internal_classfile_LocalVariableTable_h_
#define _com_sun_org_apache_bcel_internal_classfile_LocalVariableTable_h_
//$ class com.sun.org.apache.bcel.internal.classfile.LocalVariableTable
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
							class ConstantPool;
							class LocalVariable;
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

class LocalVariableTable : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(LocalVariableTable, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	LocalVariableTable();
	void init$(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* c);
	void init$(int32_t nameIndex, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* localVariableTable, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	::com::sun::org::apache::bcel::internal::classfile::LocalVariable* getLocalVariable(int32_t index);
	::com::sun::org::apache::bcel::internal::classfile::LocalVariable* getLocalVariable(int32_t index, int32_t pc);
	$Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* getLocalVariableTable();
	int32_t getTableLength();
	void setLocalVariableTable($Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* local_variable_table);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* localVariableTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_LocalVariableTable_h_