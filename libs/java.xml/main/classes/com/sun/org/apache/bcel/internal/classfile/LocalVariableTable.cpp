#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_LOCAL_VARIABLE_TABLE

using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$CompoundAttribute _LocalVariableTable_MethodAnnotations_getLocalVariable6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _LocalVariableTable_FieldInfo_[] = {
	{"localVariableTable", "[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PRIVATE, $field(LocalVariableTable, localVariableTable)},
	{}
};

$MethodInfo _LocalVariableTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC, $method(LocalVariableTable, init$, void, LocalVariableTable*)},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(LocalVariableTable, init$, void, int32_t, int32_t, $LocalVariableArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(LocalVariableTable, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableTable, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(LocalVariableTable, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalVariableTable, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getLocalVariable", "(I)Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(LocalVariableTable, getLocalVariable, $LocalVariable*, int32_t), nullptr, nullptr, _LocalVariableTable_MethodAnnotations_getLocalVariable6},
	{"getLocalVariable", "(II)Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTable, getLocalVariable, $LocalVariable*, int32_t, int32_t)},
	{"getLocalVariableTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTable, getLocalVariableTable, $LocalVariableArray*)},
	{"getTableLength", "()I", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTable, getTableLength, int32_t)},
	{"setLocalVariableTable", "([Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTable, setLocalVariableTable, void, $LocalVariableArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalVariableTable, toString, $String*)},
	{}
};

$ClassInfo _LocalVariableTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.LocalVariableTable",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_LocalVariableTable_FieldInfo_,
	_LocalVariableTable_MethodInfo_
};

$Object* allocate$LocalVariableTable($Class* clazz) {
	return $of($alloc(LocalVariableTable));
}

void LocalVariableTable::init$(LocalVariableTable* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($LocalVariableArray, var$2, c->getLocalVariableTable());
	LocalVariableTable::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void LocalVariableTable::init$(int32_t nameIndex, int32_t length, $LocalVariableArray* localVariableTable, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_LOCAL_VARIABLE_TABLE, nameIndex, length, constantPool);
	$set(this, localVariableTable, localVariableTable);
}

void LocalVariableTable::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	LocalVariableTable::init$(name_index, length, ($LocalVariableArray*)nullptr, constant_pool);
	int32_t local_variable_table_length = $nc(input)->readUnsignedShort();
	$set(this, localVariableTable, $new($LocalVariableArray, local_variable_table_length));
	for (int32_t i = 0; i < local_variable_table_length; ++i) {
		$nc(this->localVariableTable)->set(i, $$new($LocalVariable, input, constant_pool));
	}
}

void LocalVariableTable::accept($Visitor* v) {
	$nc(v)->visitLocalVariableTable(this);
}

void LocalVariableTable::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->localVariableTable)->length);
	{
		$var($LocalVariableArray, arr$, this->localVariableTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, variable, arr$->get(i$));
			{
				$nc(variable)->dump(file);
			}
		}
	}
}

$LocalVariableArray* LocalVariableTable::getLocalVariableTable() {
	return this->localVariableTable;
}

$LocalVariable* LocalVariableTable::getLocalVariable(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocalVariableArray, arr$, this->localVariableTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, variable, arr$->get(i$));
			{
				if ($nc(variable)->getIndex() == index) {
					return variable;
				}
			}
		}
	}
	return nullptr;
}

$LocalVariable* LocalVariableTable::getLocalVariable(int32_t index, int32_t pc) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocalVariableArray, arr$, this->localVariableTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, variable, arr$->get(i$));
			{
				if ($nc(variable)->getIndex() == index) {
					int32_t start_pc = variable->getStartPC();
					int32_t end_pc = start_pc + variable->getLength();
					if ((pc >= start_pc) && (pc <= end_pc)) {
						return variable;
					}
				}
			}
		}
	}
	return nullptr;
}

void LocalVariableTable::setLocalVariableTable($LocalVariableArray* local_variable_table) {
	$set(this, localVariableTable, local_variable_table);
}

$String* LocalVariableTable::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->localVariableTable)->length; ++i) {
		buf->append($of($nc(this->localVariableTable)->get(i)));
		if (i < $nc(this->localVariableTable)->length - 1) {
			buf->append(u'\n');
		}
	}
	return buf->toString();
}

$Attribute* LocalVariableTable::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(LocalVariableTable, c, $cast(LocalVariableTable, clone()));
	$set($nc(c), localVariableTable, $new($LocalVariableArray, $nc(this->localVariableTable)->length));
	for (int32_t i = 0; i < $nc(this->localVariableTable)->length; ++i) {
		$nc(c->localVariableTable)->set(i, $($nc($nc(this->localVariableTable)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

int32_t LocalVariableTable::getTableLength() {
	return this->localVariableTable == nullptr ? 0 : $nc(this->localVariableTable)->length;
}

LocalVariableTable::LocalVariableTable() {
}

$Class* LocalVariableTable::load$($String* name, bool initialize) {
	$loadClass(LocalVariableTable, name, initialize, &_LocalVariableTable_ClassInfo_, allocate$LocalVariableTable);
	return class$;
}

$Class* LocalVariableTable::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com