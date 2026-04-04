#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_EXCEPTIONS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
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

void ExceptionTable::init$(ExceptionTable* c) {
	$useLocalObjectStack();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($ints, var$2, c->getExceptionIndexTable());
	ExceptionTable::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void ExceptionTable::init$(int32_t name_index, int32_t length, $ints* exceptionIndexTable, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_EXCEPTIONS, name_index, length, constant_pool);
	$set(this, exceptionIndexTable, exceptionIndexTable != nullptr ? exceptionIndexTable : $new($ints, 0));
}

void ExceptionTable::init$(int32_t nameIndex, int32_t length, $DataInput* input, $ConstantPool* constantPool) {
	ExceptionTable::init$(nameIndex, length, ($ints*)nullptr, constantPool);
	int32_t number_of_exceptions = $nc(input)->readUnsignedShort();
	$set(this, exceptionIndexTable, $new($ints, number_of_exceptions));
	for (int32_t i = 0; i < number_of_exceptions; ++i) {
		this->exceptionIndexTable->set(i, input->readUnsignedShort());
	}
}

void ExceptionTable::accept($Visitor* v) {
	$nc(v)->visitExceptionTable(this);
}

void ExceptionTable::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->exceptionIndexTable)->length);
	{
		$var($ints, arr$, this->exceptionIndexTable);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				file->writeShort(index);
			}
		}
	}
}

$ints* ExceptionTable::getExceptionIndexTable() {
	return this->exceptionIndexTable;
}

int32_t ExceptionTable::getNumberOfExceptions() {
	return this->exceptionIndexTable == nullptr ? 0 : this->exceptionIndexTable->length;
}

$StringArray* ExceptionTable::getExceptionNames() {
	$useLocalObjectStack();
	$var($StringArray, names, $new($StringArray, $nc(this->exceptionIndexTable)->length));
	for (int32_t i = 0; i < $nc(this->exceptionIndexTable)->length; ++i) {
		names->set(i, $($$nc($$nc($Attribute::getConstantPool())->getConstantString(this->exceptionIndexTable->get(i), $Const::CONSTANT_Class))->replace(u'/', u'.')));
	}
	return names;
}

void ExceptionTable::setExceptionIndexTable($ints* exceptionIndexTable) {
	$set(this, exceptionIndexTable, exceptionIndexTable != nullptr ? exceptionIndexTable : $new($ints, 0));
}

$String* ExceptionTable::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, str, nullptr);
	buf->append("Exceptions: "_s);
	for (int32_t i = 0; i < $nc(this->exceptionIndexTable)->length; ++i) {
		$assign(str, $$nc($Attribute::getConstantPool())->getConstantString(this->exceptionIndexTable->get(i), $Const::CONSTANT_Class));
		buf->append($($Utility::compactClassName(str, false)));
		if (i < $nc(this->exceptionIndexTable)->length - 1) {
			buf->append(", "_s);
		}
	}
	return buf->toString();
}

$Attribute* ExceptionTable::copy($ConstantPool* _constant_pool) {
	$var(ExceptionTable, c, $cast(ExceptionTable, clone()));
	if (this->exceptionIndexTable != nullptr) {
		$set($nc(c), exceptionIndexTable, $new($ints, this->exceptionIndexTable->length));
		$System::arraycopy(this->exceptionIndexTable, 0, c->exceptionIndexTable, 0, this->exceptionIndexTable->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

ExceptionTable::ExceptionTable() {
}

$Class* ExceptionTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exceptionIndexTable", "[I", nullptr, $PRIVATE, $field(ExceptionTable, exceptionIndexTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC, $method(ExceptionTable, init$, void, ExceptionTable*)},
		{"<init>", "(II[ILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ExceptionTable, init$, void, int32_t, int32_t, $ints*, $ConstantPool*)},
		{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ExceptionTable, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ExceptionTable, accept, void, $Visitor*)},
		{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ExceptionTable, copy, $Attribute*, $ConstantPool*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ExceptionTable, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getExceptionIndexTable", "()[I", nullptr, $PUBLIC, $method(ExceptionTable, getExceptionIndexTable, $ints*)},
		{"getExceptionNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(ExceptionTable, getExceptionNames, $StringArray*)},
		{"getNumberOfExceptions", "()I", nullptr, $PUBLIC, $method(ExceptionTable, getNumberOfExceptions, int32_t)},
		{"setExceptionIndexTable", "([I)V", nullptr, $PUBLIC, $method(ExceptionTable, setExceptionIndexTable, void, $ints*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExceptionTable, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.ExceptionTable",
		"com.sun.org.apache.bcel.internal.classfile.Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExceptionTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExceptionTable));
	});
	return class$;
}

$Class* ExceptionTable::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com