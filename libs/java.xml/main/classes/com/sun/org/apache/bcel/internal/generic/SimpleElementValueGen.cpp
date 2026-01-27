#include <com/sun/org/apache/bcel/internal/generic/SimpleElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/SimpleElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef PRIMITIVE_BOOLEAN
#undef PRIMITIVE_BYTE
#undef PRIMITIVE_CHAR
#undef PRIMITIVE_DOUBLE
#undef PRIMITIVE_FLOAT
#undef PRIMITIVE_INT
#undef PRIMITIVE_LONG
#undef PRIMITIVE_SHORT
#undef STRING

using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $SimpleElementValue = ::com::sun::org::apache::bcel::internal::classfile::SimpleElementValue;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _SimpleElementValueGen_FieldInfo_[] = {
	{"idx", "I", nullptr, $PRIVATE, $field(SimpleElementValueGen, idx)},
	{}
};

$MethodInfo _SimpleElementValueGen_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(SimpleElementValueGen, init$, void, int32_t, int32_t, $ConstantPoolGen*)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;I)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, int32_t)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;J)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, int64_t)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;D)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, double)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;F)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, float)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;S)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, int16_t)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;B)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, int8_t)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;C)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, char16_t)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, bool)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, int32_t, $ConstantPoolGen*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/SimpleElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(SimpleElementValueGen, init$, void, $SimpleElementValue*, $ConstantPoolGen*, bool)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, getElementValue, $ElementValue*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, getIndex, int32_t)},
	{"getValueInt", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, getValueInt, int32_t)},
	{"getValueString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, getValueString, $String*)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleElementValueGen, stringifyValue, $String*)},
	{}
};

$ClassInfo _SimpleElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.SimpleElementValueGen",
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	nullptr,
	_SimpleElementValueGen_FieldInfo_,
	_SimpleElementValueGen_MethodInfo_
};

$Object* allocate$SimpleElementValueGen($Class* clazz) {
	return $of($alloc(SimpleElementValueGen));
}

void SimpleElementValueGen::init$(int32_t type, int32_t idx, $ConstantPoolGen* cpGen) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = idx;
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, int32_t value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addInteger(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, int64_t value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addLong(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, double value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addDouble(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, float value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addFloat(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, int16_t value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addInteger(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, int8_t value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addInteger(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, char16_t value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addInteger(value);
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, bool value) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$(type, cpGen);
	if (value) {
		this->idx = $nc($(getConstantPool()))->addInteger(1);
	} else {
		this->idx = $nc($(getConstantPool()))->addInteger(0);
	}
}

void SimpleElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen, $String* value) {
	$ElementValueGen::init$(type, cpGen);
	this->idx = $nc($(getConstantPool()))->addUtf8(value);
}

void SimpleElementValueGen::init$($SimpleElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$($nc(value)->getElementValueType(), cpool);
	if (!copyPoolEntries) {
		this->idx = $nc(value)->getIndex();
	} else {
		switch ($nc(value)->getElementValueType()) {
		case $ElementValueGen::STRING:
			{
				this->idx = $nc(cpool)->addUtf8($(value->getValueString()));
				break;
			}
		case $ElementValueGen::PRIMITIVE_INT:
			{
				this->idx = $nc(cpool)->addInteger(value->getValueInt());
				break;
			}
		case $ElementValueGen::PRIMITIVE_BYTE:
			{
				this->idx = $nc(cpool)->addInteger(value->getValueByte());
				break;
			}
		case $ElementValueGen::PRIMITIVE_CHAR:
			{
				this->idx = $nc(cpool)->addInteger(value->getValueChar());
				break;
			}
		case $ElementValueGen::PRIMITIVE_LONG:
			{
				this->idx = $nc(cpool)->addLong(value->getValueLong());
				break;
			}
		case $ElementValueGen::PRIMITIVE_FLOAT:
			{
				this->idx = $nc(cpool)->addFloat(value->getValueFloat());
				break;
			}
		case $ElementValueGen::PRIMITIVE_DOUBLE:
			{
				this->idx = $nc(cpool)->addDouble(value->getValueDouble());
				break;
			}
		case $ElementValueGen::PRIMITIVE_BOOLEAN:
			{
				if (value->getValueBoolean()) {
					this->idx = $nc(cpool)->addInteger(1);
				} else {
					this->idx = $nc(cpool)->addInteger(0);
				}
				break;
			}
		case $ElementValueGen::PRIMITIVE_SHORT:
			{
				this->idx = $nc(cpool)->addInteger(value->getValueShort());
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"SimpleElementValueGen class does not know how to copy this type "_s, $$str($ElementValueGen::getElementValueType())}));
			}
		}
	}
}

$ElementValue* SimpleElementValueGen::getElementValue() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $ElementValueGen::getElementValueType();
	int32_t var$1 = this->idx;
	return $new($SimpleElementValue, var$0, var$1, $($nc($(getConstantPool()))->getConstantPool()));
}

int32_t SimpleElementValueGen::getIndex() {
	return this->idx;
}

$String* SimpleElementValueGen::getValueString() {
	$useLocalCurrentObjectStackCache();
	if ($ElementValueGen::getElementValueType() != $ElementValueGen::STRING) {
		$throwNew($IllegalStateException, "Dont call getValueString() on a non STRING ElementValue"_s);
	}
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($(getConstantPool()))->getConstant(this->idx)));
	return $nc(c)->getBytes();
}

int32_t SimpleElementValueGen::getValueInt() {
	$useLocalCurrentObjectStackCache();
	if ($ElementValueGen::getElementValueType() != $ElementValueGen::PRIMITIVE_INT) {
		$throwNew($IllegalStateException, "Dont call getValueString() on a non STRING ElementValue"_s);
	}
	$var($ConstantInteger, c, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
	return $nc(c)->getBytes();
}

$String* SimpleElementValueGen::stringifyValue() {
	$useLocalCurrentObjectStackCache();
	{
		$var($ConstantInteger, c, nullptr)
		$var($ConstantLong, j, nullptr)
		$var($ConstantDouble, d, nullptr)
		$var($ConstantFloat, f, nullptr)
		$var($ConstantInteger, s, nullptr)
		$var($ConstantInteger, b, nullptr)
		$var($ConstantInteger, ch, nullptr)
		$var($ConstantInteger, bo, nullptr)
		$var($ConstantUtf8, cu8, nullptr)
		switch ($ElementValueGen::getElementValueType()) {
		case $ElementValueGen::PRIMITIVE_INT:
			{
				$assign(c, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Integer::toString($nc(c)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_LONG:
			{
				$assign(j, $cast($ConstantLong, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Long::toString($nc(j)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_DOUBLE:
			{
				$assign(d, $cast($ConstantDouble, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Double::toString($nc(d)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_FLOAT:
			{
				$assign(f, $cast($ConstantFloat, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Float::toString($nc(f)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_SHORT:
			{
				$assign(s, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Integer::toString($nc(s)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_BYTE:
			{
				$assign(b, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Integer::toString($nc(b)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_CHAR:
			{
				$assign(ch, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $Integer::toString($nc(ch)->getBytes());
			}
		case $ElementValueGen::PRIMITIVE_BOOLEAN:
			{
				$assign(bo, $cast($ConstantInteger, $nc($(getConstantPool()))->getConstant(this->idx)));
				if ($nc(bo)->getBytes() == 0) {
					return "false"_s;
				}
				return "true"_s;
			}
		case $ElementValueGen::STRING:
			{
				$assign(cu8, $cast($ConstantUtf8, $nc($(getConstantPool()))->getConstant(this->idx)));
				return $nc(cu8)->getBytes();
			}
		default:
			{
				$throwNew($IllegalStateException, $$str({"SimpleElementValueGen class does not know how to stringify type "_s, $$str($ElementValueGen::getElementValueType())}));
			}
		}
	}
}

void SimpleElementValueGen::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	switch ($ElementValueGen::getElementValueType()) {
	case $ElementValueGen::PRIMITIVE_INT:
		{}
	case $ElementValueGen::PRIMITIVE_BYTE:
		{}
	case $ElementValueGen::PRIMITIVE_CHAR:
		{}
	case $ElementValueGen::PRIMITIVE_FLOAT:
		{}
	case $ElementValueGen::PRIMITIVE_LONG:
		{}
	case $ElementValueGen::PRIMITIVE_BOOLEAN:
		{}
	case $ElementValueGen::PRIMITIVE_SHORT:
		{}
	case $ElementValueGen::PRIMITIVE_DOUBLE:
		{}
	case $ElementValueGen::STRING:
		{
			dos->writeShort(this->idx);
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"SimpleElementValueGen doesnt know how to write out type "_s, $$str($ElementValueGen::getElementValueType())}));
		}
	}
}

SimpleElementValueGen::SimpleElementValueGen() {
}

$Class* SimpleElementValueGen::load$($String* name, bool initialize) {
	$loadClass(SimpleElementValueGen, name, initialize, &_SimpleElementValueGen_ClassInfo_, allocate$SimpleElementValueGen);
	return class$;
}

$Class* SimpleElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com