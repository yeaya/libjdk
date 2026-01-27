#ifndef _com_sun_org_apache_bcel_internal_classfile_LocalVariableTypeTable_h_
#define _com_sun_org_apache_bcel_internal_classfile_LocalVariableTypeTable_h_
//$ class com.sun.org.apache.bcel.internal.classfile.LocalVariableTypeTable
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

class LocalVariableTypeTable : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(LocalVariableTypeTable, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	LocalVariableTypeTable();
	void init$(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable* c);
	void init$(int32_t name_index, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* local_variable_table, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t nameIdx, int32_t len, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	::com::sun::org::apache::bcel::internal::classfile::LocalVariable* getLocalVariable(int32_t index);
	$Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* getLocalVariableTypeTable();
	int32_t getTableLength();
	void setLocalVariableTable($Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* local_variable_table);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>* localVariableTypeTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_LocalVariableTypeTable_h_