#include <com/sun/org/apache/bcel/internal/classfile/EnumElementValue.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ENUM_CONSTANT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _EnumElementValue_FieldInfo_[] = {
	{"typeIdx", "I", nullptr, $PRIVATE | $FINAL, $field(EnumElementValue, typeIdx)},
	{"valueIdx", "I", nullptr, $PRIVATE | $FINAL, $field(EnumElementValue, valueIdx)},
	{}
};

$MethodInfo _EnumElementValue_MethodInfo_[] = {
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(EnumElementValue, init$, void, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getEnumTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, getEnumTypeString, $String*)},
	{"getEnumValueString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, getEnumValueString, $String*)},
	{"getTypeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, getTypeIndex, int32_t)},
	{"getValueIndex", "()I", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, getValueIndex, int32_t)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValue, stringifyValue, $String*)},
	{}
};

$ClassInfo _EnumElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.EnumElementValue",
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	nullptr,
	_EnumElementValue_FieldInfo_,
	_EnumElementValue_MethodInfo_
};

$Object* allocate$EnumElementValue($Class* clazz) {
	return $of($alloc(EnumElementValue));
}

void EnumElementValue::init$(int32_t type, int32_t typeIdx, int32_t valueIdx, $ConstantPool* cpool) {
	$useLocalCurrentObjectStackCache();
	$ElementValue::init$(type, cpool);
	if (type != $ElementValue::ENUM_CONSTANT) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type enum can be built with this ctor - type specified: "_s, $$str(type)}));
	}
	this->typeIdx = typeIdx;
	this->valueIdx = valueIdx;
}

void EnumElementValue::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValue::getType());
	dos->writeShort(this->typeIdx);
	dos->writeShort(this->valueIdx);
}

$String* EnumElementValue::stringifyValue() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(this->valueIdx, $Const::CONSTANT_Utf8)));
	return $nc(cu8)->getBytes();
}

$String* EnumElementValue::getEnumTypeString() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(this->typeIdx, $Const::CONSTANT_Utf8)));
	return $nc(cu8)->getBytes();
}

$String* EnumElementValue::getEnumValueString() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(this->valueIdx, $Const::CONSTANT_Utf8)));
	return $nc(cu8)->getBytes();
}

int32_t EnumElementValue::getValueIndex() {
	return this->valueIdx;
}

int32_t EnumElementValue::getTypeIndex() {
	return this->typeIdx;
}

EnumElementValue::EnumElementValue() {
}

$Class* EnumElementValue::load$($String* name, bool initialize) {
	$loadClass(EnumElementValue, name, initialize, &_EnumElementValue_ClassInfo_, allocate$EnumElementValue);
	return class$;
}

$Class* EnumElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com