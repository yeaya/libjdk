#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantModule.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPackage.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ConstantArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Constant>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantInvokeDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantMethodHandle = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle;
using $ConstantMethodType = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType;
using $ConstantModule = ::com::sun::org::apache::bcel::internal::classfile::ConstantModule;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPackage = ::com::sun::org::apache::bcel::internal::classfile::ConstantPackage;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

int32_t ConstantPool::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ConstantPool::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* ConstantPool::clone() {
	 return this->$Cloneable::clone();
}

void ConstantPool::finalize() {
	this->$Cloneable::finalize();
}

void ConstantPool::init$($ConstantArray* constantPool) {
	$set(this, constantPool, constantPool);
}

void ConstantPool::init$($DataInput* input) {
	$useLocalObjectStack();
	int8_t tag = 0;
	int32_t constant_pool_count = $nc(input)->readUnsignedShort();
	$set(this, constantPool, $new($ConstantArray, constant_pool_count));
	for (int32_t i = 1; i < constant_pool_count; ++i) {
		$nc(this->constantPool)->set(i, $($Constant::readConstant(input)));
		tag = $nc($nc(this->constantPool)->get(i))->getTag();
		if ((tag == $Const::CONSTANT_Double) || (tag == $Const::CONSTANT_Long)) {
			++i;
		}
	}
}

void ConstantPool::accept($Visitor* v) {
	$nc(v)->visitConstantPool(this);
}

$String* ConstantPool::constantToString($Constant* c$renamed) {
	$useLocalObjectStack();
	$var($Constant, c, c$renamed);
	$var($String, str, nullptr);
	int32_t i = 0;
	int8_t tag = $nc(c)->getTag();
	{
		$var($ConstantMethodHandle, cmh, nullptr);
		$var($ConstantMethodType, cmt, nullptr);
		$var($ConstantInvokeDynamic, cid, nullptr);
		switch (tag) {
		case $Const::CONSTANT_Class:
			i = $cast($ConstantClass, c)->getNameIndex();
			$assign(c, getConstant(i, $Const::CONSTANT_Utf8));
			$assign(str, $Utility::compactClassName($($nc($cast($ConstantUtf8, c))->getBytes()), false));
			break;
		case $Const::CONSTANT_String:
			i = $cast($ConstantString, c)->getStringIndex();
			$assign(c, getConstant(i, $Const::CONSTANT_Utf8));
			$assign(str, $str({"\""_s, $(escape($($nc($cast($ConstantUtf8, c))->getBytes()))), "\""_s}));
			break;
		case $Const::CONSTANT_Utf8:
			$assign(str, $cast($ConstantUtf8, c)->getBytes());
			break;
		case $Const::CONSTANT_Double:
			$assign(str, $String::valueOf($cast($ConstantDouble, c)->getBytes()));
			break;
		case $Const::CONSTANT_Float:
			$assign(str, $String::valueOf($cast($ConstantFloat, c)->getBytes()));
			break;
		case $Const::CONSTANT_Long:
			$assign(str, $String::valueOf($cast($ConstantLong, c)->getBytes()));
			break;
		case $Const::CONSTANT_Integer:
			$assign(str, $String::valueOf($cast($ConstantInteger, c)->getBytes()));
			break;
		case $Const::CONSTANT_NameAndType:
			{
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append($(constantToString($cast($ConstantNameAndType, c)->getNameIndex(), $Const::CONSTANT_Utf8)));
				var$0->append(" "_s);
				var$0->append($(constantToString($cast($ConstantNameAndType, c)->getSignatureIndex(), $Const::CONSTANT_Utf8)));
				$assign(str, $str(var$0));
				break;
			}
		case $Const::CONSTANT_InterfaceMethodref:
		case $Const::CONSTANT_Methodref:
		case $Const::CONSTANT_Fieldref:
			{
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append($(constantToString($cast($ConstantCP, c)->getClassIndex(), $Const::CONSTANT_Class)));
				var$1->append("."_s);
				var$1->append($(constantToString($cast($ConstantCP, c)->getNameAndTypeIndex(), $Const::CONSTANT_NameAndType)));
				$assign(str, $str(var$1));
				break;
			}
		case $Const::CONSTANT_MethodHandle:
			{
				$assign(cmh, $cast($ConstantMethodHandle, c));
				$var($StringBuilder, var$2, $new($StringBuilder));
				var$2->append($($Const::getMethodHandleName($nc(cmh)->getReferenceKind())));
				var$2->append(" "_s);
				int32_t var$3 = cmh->getReferenceIndex();
				var$2->append($(constantToString(var$3, $$nc(getConstant(cmh->getReferenceIndex()))->getTag())));
				$assign(str, $str(var$2));
				break;
			}
		case $Const::CONSTANT_MethodType:
			$assign(cmt, $cast($ConstantMethodType, c));
			$assign(str, constantToString($nc(cmt)->getDescriptorIndex(), $Const::CONSTANT_Utf8));
			break;
		case $Const::CONSTANT_InvokeDynamic:
			{
				$assign(cid, $cast($ConstantInvokeDynamic, c));
				$var($StringBuilder, var$4, $new($StringBuilder));
				var$4->append($nc(cid)->getBootstrapMethodAttrIndex());
				var$4->append(":"_s);
				var$4->append($(constantToString(cid->getNameAndTypeIndex(), $Const::CONSTANT_NameAndType)));
				$assign(str, $str(var$4));
				break;
			}
		case $Const::CONSTANT_Module:
			i = $cast($ConstantModule, c)->getNameIndex();
			$assign(c, getConstant(i, $Const::CONSTANT_Utf8));
			$assign(str, $Utility::compactClassName($($nc($cast($ConstantUtf8, c))->getBytes()), false));
			break;
		case $Const::CONSTANT_Package:
			i = $cast($ConstantPackage, c)->getNameIndex();
			$assign(c, getConstant(i, $Const::CONSTANT_Utf8));
			$assign(str, $Utility::compactClassName($($nc($cast($ConstantUtf8, c))->getBytes()), false));
			break;
		default:
			$throwNew($IllegalArgumentException, $$str({"Unknown constant type "_s, $$str(tag)}));
		}
	}
	return str;
}

$String* ConstantPool::escape($String* str) {
	$init(ConstantPool);
	$useLocalObjectStack();
	int32_t len = $nc(str)->length();
	$var($StringBuilder, buf, $new($StringBuilder, len + 5));
	$var($chars, ch, str->toCharArray());
	for (int32_t i = 0; i < len; ++i) {
		switch (ch->get(i)) {
		case u'\n':
			buf->append("\\n"_s);
			break;
		case u'\r':
			buf->append("\\r"_s);
			break;
		case u'\t':
			buf->append("\\t"_s);
			break;
		case u'\b':
			buf->append("\\b"_s);
			break;
		case u'\"':
			buf->append("\\\""_s);
			break;
		default:
			buf->append(ch->get(i));
		}
	}
	return buf->toString();
}

$String* ConstantPool::constantToString(int32_t index, int8_t tag) {
	$var($Constant, c, getConstant(index, tag));
	return constantToString(c);
}

void ConstantPool::dump($DataOutputStream* file) {
	$nc(file)->writeShort($nc(this->constantPool)->length);
	for (int32_t i = 1; i < $nc(this->constantPool)->length; ++i) {
		if (this->constantPool->get(i) != nullptr) {
			$nc(this->constantPool->get(i))->dump(file);
		}
	}
}

$Constant* ConstantPool::getConstant(int32_t index) {
	$useLocalObjectStack();
	if (index >= $nc(this->constantPool)->length || index < 0) {
		$throwNew($ClassFormatException, $$str({"Invalid constant pool reference: "_s, $$str(index), ". Constant pool size is: "_s, $$str(this->constantPool->length)}));
	}
	return this->constantPool->get(index);
}

$Constant* ConstantPool::getConstant(int32_t index, int8_t tag) {
	$useLocalObjectStack();
	$var($Constant, c, nullptr);
	$assign(c, getConstant(index));
	if (c == nullptr) {
		$throwNew($ClassFormatException, $$str({"Constant pool at index "_s, $$str(index), " is null."_s}));
	}
	if ($nc(c)->getTag() != tag) {
		$throwNew($ClassFormatException, $$str({"Expected class `"_s, $($Const::getConstantName(tag)), "\' at index "_s, $$str(index), " and got "_s, c}));
	}
	return c;
}

$ConstantArray* ConstantPool::getConstantPool() {
	return this->constantPool;
}

$String* ConstantPool::getConstantString(int32_t index, int8_t tag) {
	$useLocalObjectStack();
	$var($Constant, c, nullptr);
	int32_t i = 0;
	$assign(c, getConstant(index, tag));
	switch (tag) {
	case $Const::CONSTANT_Class:
		i = $nc($cast($ConstantClass, c))->getNameIndex();
		break;
	case $Const::CONSTANT_String:
		i = $nc($cast($ConstantString, c))->getStringIndex();
		break;
	case $Const::CONSTANT_Module:
		i = $nc($cast($ConstantModule, c))->getNameIndex();
		break;
	case $Const::CONSTANT_Package:
		i = $nc($cast($ConstantPackage, c))->getNameIndex();
		break;
	default:
		$throwNew($IllegalArgumentException, $$str({"getConstantString called with illegal tag "_s, $$str(tag)}));
	}
	$assign(c, getConstant(i, $Const::CONSTANT_Utf8));
	return $nc($cast($ConstantUtf8, c))->getBytes();
}

int32_t ConstantPool::getLength() {
	return this->constantPool == nullptr ? 0 : this->constantPool->length;
}

void ConstantPool::setConstant(int32_t index, $Constant* constant) {
	$nc(this->constantPool)->set(index, constant);
}

void ConstantPool::setConstantPool($ConstantArray* constantPool) {
	$set(this, constantPool, constantPool);
}

$String* ConstantPool::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 1; i < $nc(this->constantPool)->length; ++i) {
		buf->append(i)->append(")"_s)->append(this->constantPool->get(i))->append("\n"_s);
	}
	return buf->toString();
}

ConstantPool* ConstantPool::copy() {
	$useLocalObjectStack();
	$var(ConstantPool, c, nullptr);
	try {
		$assign(c, $cast(ConstantPool, clone()));
		$set($nc(c), constantPool, $new($ConstantArray, $nc(this->constantPool)->length));
		for (int32_t i = 1; i < $nc(this->constantPool)->length; ++i) {
			if (this->constantPool->get(i) != nullptr) {
				$nc(c->constantPool)->set(i, $($nc(this->constantPool->get(i))->copy()));
			}
		}
	} catch ($CloneNotSupportedException& e) {
	}
	return c;
}

ConstantPool::ConstantPool() {
}

$Class* ConstantPool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"constantPool", "[Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PRIVATE, $field(ConstantPool, constantPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "([Lcom/sun/org/apache/bcel/internal/classfile/Constant;)V", nullptr, $PUBLIC, $method(ConstantPool, init$, void, $ConstantArray*)},
		{"<init>", "(Ljava/io/DataInput;)V", nullptr, $PUBLIC, $method(ConstantPool, init$, void, $DataInput*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantPool, accept, void, $Visitor*)},
		{"constantToString", "(Lcom/sun/org/apache/bcel/internal/classfile/Constant;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, constantToString, $String*, $Constant*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
		{"constantToString", "(IB)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, constantToString, $String*, int32_t, int8_t), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
		{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, copy, ConstantPool*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantPool, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"escape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ConstantPool, escape, $String*, $String*)},
		{"getConstant", "(I)Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getConstant, $Constant*, int32_t)},
		{"getConstant", "(IB)Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getConstant, $Constant*, int32_t, int8_t), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
		{"getConstantPool", "()[Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getConstantPool, $ConstantArray*)},
		{"getConstantString", "(IB)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getConstantString, $String*, int32_t, int8_t), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getLength, int32_t)},
		{"setConstant", "(ILcom/sun/org/apache/bcel/internal/classfile/Constant;)V", nullptr, $PUBLIC, $virtualMethod(ConstantPool, setConstant, void, int32_t, $Constant*)},
		{"setConstantPool", "([Lcom/sun/org/apache/bcel/internal/classfile/Constant;)V", nullptr, $PUBLIC, $virtualMethod(ConstantPool, setConstantPool, void, $ConstantArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.ConstantPool",
		"java.lang.Object",
		"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConstantPool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConstantPool));
	});
	return class$;
}

$Class* ConstantPool::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com