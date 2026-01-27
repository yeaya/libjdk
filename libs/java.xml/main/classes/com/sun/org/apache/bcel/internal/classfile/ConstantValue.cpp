#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef ATTR_CONSTANT_VALUE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantValue_FieldInfo_[] = {
	{"constantValueIndex", "I", nullptr, $PRIVATE, $field(ConstantValue, constantValueIndex)},
	{}
};

$MethodInfo _ConstantValue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC, $method(ConstantValue, init$, void, ConstantValue*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ConstantValue, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ConstantValue, init$, void, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantValue, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ConstantValue, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantValue, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantValueIndex", "()I", nullptr, $PUBLIC, $method(ConstantValue, getConstantValueIndex, int32_t)},
	{"setConstantValueIndex", "(I)V", nullptr, $PUBLIC, $method(ConstantValue, setConstantValueIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantValue, toString, $String*)},
	{}
};

$ClassInfo _ConstantValue_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantValue",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_ConstantValue_FieldInfo_,
	_ConstantValue_MethodInfo_
};

$Object* allocate$ConstantValue($Class* clazz) {
	return $of($alloc(ConstantValue));
}

void ConstantValue::init$(ConstantValue* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getConstantValueIndex();
	ConstantValue::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void ConstantValue::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	ConstantValue::init$(name_index, length, $nc(input)->readUnsignedShort(), constant_pool);
}

void ConstantValue::init$(int32_t name_index, int32_t length, int32_t constantValueIndex, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_CONSTANT_VALUE, name_index, length, constant_pool);
	this->constantValueIndex = constantValueIndex;
}

void ConstantValue::accept($Visitor* v) {
	$nc(v)->visitConstantValue(this);
}

void ConstantValue::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->constantValueIndex);
}

int32_t ConstantValue::getConstantValueIndex() {
	return this->constantValueIndex;
}

void ConstantValue::setConstantValueIndex(int32_t constantValueIndex) {
	this->constantValueIndex = constantValueIndex;
}

$String* ConstantValue::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Constant, c, $nc($($Attribute::getConstantPool()))->getConstant(this->constantValueIndex));
	$var($String, buf, nullptr);
	int32_t i = 0;
	switch ($nc(c)->getTag()) {
	case $Const::CONSTANT_Long:
		{
			$assign(buf, $String::valueOf($nc(($cast($ConstantLong, c)))->getBytes()));
			break;
		}
	case $Const::CONSTANT_Float:
		{
			$assign(buf, $String::valueOf($nc(($cast($ConstantFloat, c)))->getBytes()));
			break;
		}
	case $Const::CONSTANT_Double:
		{
			$assign(buf, $String::valueOf($nc(($cast($ConstantDouble, c)))->getBytes()));
			break;
		}
	case $Const::CONSTANT_Integer:
		{
			$assign(buf, $String::valueOf($nc(($cast($ConstantInteger, c)))->getBytes()));
			break;
		}
	case $Const::CONSTANT_String:
		{
			i = $nc(($cast($ConstantString, c)))->getStringIndex();
			$assign(c, $nc($($Attribute::getConstantPool()))->getConstant(i, $Const::CONSTANT_Utf8));
			$assign(buf, $str({"\""_s, $($Utility::convertString($($nc(($cast($ConstantUtf8, c)))->getBytes()))), "\""_s}));
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"Type of ConstValue invalid: "_s, c}));
		}
	}
	return buf;
}

$Attribute* ConstantValue::copy($ConstantPool* _constant_pool) {
	$var(ConstantValue, c, $cast(ConstantValue, clone()));
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

ConstantValue::ConstantValue() {
}

$Class* ConstantValue::load$($String* name, bool initialize) {
	$loadClass(ConstantValue, name, initialize, &_ConstantValue_ClassInfo_, allocate$ConstantValue);
	return class$;
}

$Class* ConstantValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com