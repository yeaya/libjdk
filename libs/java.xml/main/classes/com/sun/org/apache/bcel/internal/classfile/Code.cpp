#include <com/sun/org/apache/bcel/internal/classfile/Code.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_CODE

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $CodeExceptionArray = $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
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

$FieldInfo _Code_FieldInfo_[] = {
	{"maxStack", "I", nullptr, $PRIVATE, $field(Code, maxStack)},
	{"maxLocals", "I", nullptr, $PRIVATE, $field(Code, maxLocals)},
	{"code", "[B", nullptr, $PRIVATE, $field(Code, code)},
	{"exceptionTable", "[Lcom/sun/org/apache/bcel/internal/classfile/CodeException;", nullptr, $PRIVATE, $field(Code, exceptionTable)},
	{"attributes", "[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $field(Code, attributes)},
	{}
};

$MethodInfo _Code_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC, $method(Code, init$, void, Code*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(Code, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(IIII[B[Lcom/sun/org/apache/bcel/internal/classfile/CodeException;[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(Code, init$, void, int32_t, int32_t, int32_t, int32_t, $bytes*, $CodeExceptionArray*, $AttributeArray*, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Code, accept, void, $Visitor*)},
	{"calculateLength", "()I", nullptr, $PRIVATE, $method(Code, calculateLength, int32_t)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(Code, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Code, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $method(Code, getAttributes, $AttributeArray*)},
	{"getCode", "()[B", nullptr, $PUBLIC, $method(Code, getCode, $bytes*)},
	{"getExceptionTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/CodeException;", nullptr, $PUBLIC, $method(Code, getExceptionTable, $CodeExceptionArray*)},
	{"getInternalLength", "()I", nullptr, $PRIVATE, $method(Code, getInternalLength, int32_t)},
	{"getLineNumberTable", "()Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;", nullptr, $PUBLIC, $method(Code, getLineNumberTable, $LineNumberTable*)},
	{"getLocalVariableTable", "()Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;", nullptr, $PUBLIC, $method(Code, getLocalVariableTable, $LocalVariableTable*)},
	{"getMaxLocals", "()I", nullptr, $PUBLIC, $method(Code, getMaxLocals, int32_t)},
	{"getMaxStack", "()I", nullptr, $PUBLIC, $method(Code, getMaxStack, int32_t)},
	{"setAttributes", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $method(Code, setAttributes, void, $AttributeArray*)},
	{"setCode", "([B)V", nullptr, $PUBLIC, $method(Code, setCode, void, $bytes*)},
	{"setExceptionTable", "([Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC, $method(Code, setExceptionTable, void, $CodeExceptionArray*)},
	{"setMaxLocals", "(I)V", nullptr, $PUBLIC, $method(Code, setMaxLocals, void, int32_t)},
	{"setMaxStack", "(I)V", nullptr, $PUBLIC, $method(Code, setMaxStack, void, int32_t)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(Code, toString, $String*, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Code, toString, $String*)},
	{}
};

$ClassInfo _Code_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Code",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Code_FieldInfo_,
	_Code_MethodInfo_
};

$Object* allocate$Code($Class* clazz) {
	return $of($alloc(Code));
}

void Code::init$(Code* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getMaxStack();
	int32_t var$3 = c->getMaxLocals();
	$var($bytes, var$4, c->getCode());
	$var($CodeExceptionArray, var$5, c->getExceptionTable());
	$var($AttributeArray, var$6, c->getAttributes());
	Code::init$(var$0, var$1, var$2, var$3, var$4, var$5, var$6, $(c->getConstantPool()));
}

void Code::init$(int32_t name_index, int32_t length, $DataInput* file, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = name_index;
	int32_t var$1 = length;
	int32_t var$2 = $nc(file)->readUnsignedShort();
	Code::init$(var$0, var$1, var$2, file->readUnsignedShort(), ($bytes*)nullptr, ($CodeExceptionArray*)nullptr, ($AttributeArray*)nullptr, constant_pool);
	int32_t code_length = $nc(file)->readInt();
	$set(this, code, $new($bytes, code_length));
	file->readFully(this->code);
	int32_t exception_table_length = file->readUnsignedShort();
	$set(this, exceptionTable, $new($CodeExceptionArray, exception_table_length));
	for (int32_t i = 0; i < exception_table_length; ++i) {
		$nc(this->exceptionTable)->set(i, $$new($CodeException, file));
	}
	int32_t attributes_count = file->readUnsignedShort();
	$set(this, attributes, $new($AttributeArray, attributes_count));
	for (int32_t i = 0; i < attributes_count; ++i) {
		$nc(this->attributes)->set(i, $($Attribute::readAttribute(file, constant_pool)));
	}
	$Attribute::setLength(length);
}

void Code::init$(int32_t name_index, int32_t length, int32_t maxStack, int32_t maxLocals, $bytes* code, $CodeExceptionArray* exceptionTable, $AttributeArray* attributes, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_CODE, name_index, length, constant_pool);
	this->maxStack = maxStack;
	this->maxLocals = maxLocals;
	$set(this, code, code != nullptr ? code : $new($bytes, 0));
	$set(this, exceptionTable, exceptionTable != nullptr ? exceptionTable : $new($CodeExceptionArray, 0));
	$set(this, attributes, attributes != nullptr ? attributes : $new($AttributeArray, 0));
	$Attribute::setLength(calculateLength());
}

void Code::accept($Visitor* v) {
	$nc(v)->visitCode(this);
}

void Code::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort(this->maxStack);
	file->writeShort(this->maxLocals);
	file->writeInt($nc(this->code)->length);
	file->write(this->code, 0, $nc(this->code)->length);
	file->writeShort($nc(this->exceptionTable)->length);
	{
		$var($CodeExceptionArray, arr$, this->exceptionTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeException, exception, arr$->get(i$));
			{
				$nc(exception)->dump(file);
			}
		}
	}
	file->writeShort($nc(this->attributes)->length);
	{
		$var($AttributeArray, arr$, this->attributes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$nc(attribute)->dump(file);
			}
		}
	}
}

$AttributeArray* Code::getAttributes() {
	return this->attributes;
}

$LineNumberTable* Code::getLineNumberTable() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, this->attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($LineNumberTable, attribute)) {
					return $cast($LineNumberTable, attribute);
				}
			}
		}
	}
	return nullptr;
}

$LocalVariableTable* Code::getLocalVariableTable() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, this->attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($LocalVariableTable, attribute)) {
					return $cast($LocalVariableTable, attribute);
				}
			}
		}
	}
	return nullptr;
}

$bytes* Code::getCode() {
	return this->code;
}

$CodeExceptionArray* Code::getExceptionTable() {
	return this->exceptionTable;
}

int32_t Code::getMaxLocals() {
	return this->maxLocals;
}

int32_t Code::getMaxStack() {
	return this->maxStack;
}

int32_t Code::getInternalLength() {
	return 2 + 2 + 4 + $nc(this->code)->length + 2 + 8 * (this->exceptionTable == nullptr ? 0 : $nc(this->exceptionTable)->length) + 2;
}

int32_t Code::calculateLength() {
	$useLocalCurrentObjectStackCache();
	int32_t len = 0;
	if (this->attributes != nullptr) {
		{
			$var($AttributeArray, arr$, this->attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attribute, arr$->get(i$));
				{
					len += $nc(attribute)->getLength() + 6;
				}
			}
		}
	}
	return len + getInternalLength();
}

void Code::setAttributes($AttributeArray* attributes) {
	$set(this, attributes, attributes != nullptr ? attributes : $new($AttributeArray, 0));
	$Attribute::setLength(calculateLength());
}

void Code::setCode($bytes* code) {
	$set(this, code, code != nullptr ? code : $new($bytes, 0));
	$Attribute::setLength(calculateLength());
}

void Code::setExceptionTable($CodeExceptionArray* exceptionTable) {
	$set(this, exceptionTable, exceptionTable != nullptr ? exceptionTable : $new($CodeExceptionArray, 0));
	$Attribute::setLength(calculateLength());
}

void Code::setMaxLocals(int32_t maxLocals) {
	this->maxLocals = maxLocals;
}

void Code::setMaxStack(int32_t maxStack) {
	this->maxStack = maxStack;
}

$String* Code::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, 100));
	buf->append("Code(maxStack = "_s)->append(this->maxStack)->append(", maxLocals = "_s)->append(this->maxLocals)->append(", code_length = "_s)->append($nc(this->code)->length)->append(")\n"_s)->append($($Utility::codeToString(this->code, $($Attribute::getConstantPool()), 0, -1, verbose)));
	if ($nc(this->exceptionTable)->length > 0) {
		buf->append("\nException handler(s) = \n"_s)->append("From\tTo\tHandler\tType\n"_s);
		{
			$var($CodeExceptionArray, arr$, this->exceptionTable);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($CodeException, exception, arr$->get(i$));
				{
					buf->append($($nc(exception)->toString($($Attribute::getConstantPool()), verbose)))->append("\n"_s);
				}
			}
		}
	}
	if ($nc(this->attributes)->length > 0) {
		buf->append("\nAttribute(s) = "_s);
		{
			$var($AttributeArray, arr$, this->attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attribute, arr$->get(i$));
				{
					buf->append("\n"_s)->append($($nc(attribute)->getName()))->append(":"_s);
					buf->append("\n"_s)->append($of(attribute));
				}
			}
		}
	}
	return buf->toString();
}

$String* Code::toString() {
	return toString(true);
}

$Attribute* Code::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(Code, c, $cast(Code, clone()));
	if (this->code != nullptr) {
		$set($nc(c), code, $new($bytes, $nc(this->code)->length));
		$System::arraycopy(this->code, 0, c->code, 0, $nc(this->code)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	$set(c, exceptionTable, $new($CodeExceptionArray, $nc(this->exceptionTable)->length));
	for (int32_t i = 0; i < $nc(this->exceptionTable)->length; ++i) {
		$nc(c->exceptionTable)->set(i, $($nc($nc(this->exceptionTable)->get(i))->copy()));
	}
	$set(c, attributes, $new($AttributeArray, $nc(this->attributes)->length));
	for (int32_t i = 0; i < $nc(this->attributes)->length; ++i) {
		$nc(c->attributes)->set(i, $($nc($nc(this->attributes)->get(i))->copy(_constant_pool)));
	}
	return c;
}

Code::Code() {
}

$Class* Code::load$($String* name, bool initialize) {
	$loadClass(Code, name, initialize, &_Code_ClassInfo_, allocate$Code);
	return class$;
}

$Class* Code::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com