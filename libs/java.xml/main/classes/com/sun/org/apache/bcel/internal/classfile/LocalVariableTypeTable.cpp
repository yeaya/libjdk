#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_LOCAL_VARIABLE_TYPE_TABLE

using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _LocalVariableTypeTable_FieldInfo_[] = {
	{"localVariableTypeTable", "[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PRIVATE, $field(LocalVariableTypeTable, localVariableTypeTable)},
	{}
};

$MethodInfo _LocalVariableTypeTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC, $method(LocalVariableTypeTable, init$, void, LocalVariableTypeTable*)},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(LocalVariableTypeTable, init$, void, int32_t, int32_t, $LocalVariableArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(LocalVariableTypeTable, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableTypeTable, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(LocalVariableTypeTable, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalVariableTypeTable, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getLocalVariable", "(I)Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTypeTable, getLocalVariable, $LocalVariable*, int32_t)},
	{"getLocalVariableTypeTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTypeTable, getLocalVariableTypeTable, $LocalVariableArray*)},
	{"getTableLength", "()I", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTypeTable, getTableLength, int32_t)},
	{"setLocalVariableTable", "([Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC | $FINAL, $method(LocalVariableTypeTable, setLocalVariableTable, void, $LocalVariableArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalVariableTypeTable, toString, $String*)},
	{}
};

$ClassInfo _LocalVariableTypeTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.LocalVariableTypeTable",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_LocalVariableTypeTable_FieldInfo_,
	_LocalVariableTypeTable_MethodInfo_
};

$Object* allocate$LocalVariableTypeTable($Class* clazz) {
	return $of($alloc(LocalVariableTypeTable));
}

void LocalVariableTypeTable::init$(LocalVariableTypeTable* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($LocalVariableArray, var$2, c->getLocalVariableTypeTable());
	LocalVariableTypeTable::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void LocalVariableTypeTable::init$(int32_t name_index, int32_t length, $LocalVariableArray* local_variable_table, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_LOCAL_VARIABLE_TYPE_TABLE, name_index, length, constant_pool);
	$set(this, localVariableTypeTable, local_variable_table);
}

void LocalVariableTypeTable::init$(int32_t nameIdx, int32_t len, $DataInput* input, $ConstantPool* cpool) {
	$useLocalCurrentObjectStackCache();
	LocalVariableTypeTable::init$(nameIdx, len, ($LocalVariableArray*)nullptr, cpool);
	int32_t local_variable_type_table_length = $nc(input)->readUnsignedShort();
	$set(this, localVariableTypeTable, $new($LocalVariableArray, local_variable_type_table_length));
	for (int32_t i = 0; i < local_variable_type_table_length; ++i) {
		$nc(this->localVariableTypeTable)->set(i, $$new($LocalVariable, input, cpool));
	}
}

void LocalVariableTypeTable::accept($Visitor* v) {
	$nc(v)->visitLocalVariableTypeTable(this);
}

void LocalVariableTypeTable::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->localVariableTypeTable)->length);
	{
		$var($LocalVariableArray, arr$, this->localVariableTypeTable);
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

$LocalVariableArray* LocalVariableTypeTable::getLocalVariableTypeTable() {
	return this->localVariableTypeTable;
}

$LocalVariable* LocalVariableTypeTable::getLocalVariable(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocalVariableArray, arr$, this->localVariableTypeTable);
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

void LocalVariableTypeTable::setLocalVariableTable($LocalVariableArray* local_variable_table) {
	$set(this, localVariableTypeTable, local_variable_table);
}

$String* LocalVariableTypeTable::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->localVariableTypeTable)->length; ++i) {
		buf->append($($nc($nc(this->localVariableTypeTable)->get(i))->toStringShared(true)));
		if (i < $nc(this->localVariableTypeTable)->length - 1) {
			buf->append(u'\n');
		}
	}
	return buf->toString();
}

$Attribute* LocalVariableTypeTable::copy($ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(LocalVariableTypeTable, c, $cast(LocalVariableTypeTable, clone()));
	$set($nc(c), localVariableTypeTable, $new($LocalVariableArray, $nc(this->localVariableTypeTable)->length));
	for (int32_t i = 0; i < $nc(this->localVariableTypeTable)->length; ++i) {
		$nc(c->localVariableTypeTable)->set(i, $($nc($nc(this->localVariableTypeTable)->get(i))->copy()));
	}
	c->setConstantPool(constant_pool);
	return c;
}

int32_t LocalVariableTypeTable::getTableLength() {
	return this->localVariableTypeTable == nullptr ? 0 : $nc(this->localVariableTypeTable)->length;
}

LocalVariableTypeTable::LocalVariableTypeTable() {
}

$Class* LocalVariableTypeTable::load$($String* name, bool initialize) {
	$loadClass(LocalVariableTypeTable, name, initialize, &_LocalVariableTypeTable_ClassInfo_, allocate$LocalVariableTypeTable);
	return class$;
}

$Class* LocalVariableTypeTable::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com