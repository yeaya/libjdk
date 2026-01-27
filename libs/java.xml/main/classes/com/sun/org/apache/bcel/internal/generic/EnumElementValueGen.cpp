#include <com/sun/org/apache/bcel/internal/generic/EnumElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnumElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ENUM_CONSTANT

using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $EnumElementValue = ::com::sun::org::apache::bcel::internal::classfile::EnumElementValue;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $DataOutputStream = ::java::io::DataOutputStream;
using $PrintStream = ::java::io::PrintStream;
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
						namespace generic {

$FieldInfo _EnumElementValueGen_FieldInfo_[] = {
	{"typeIdx", "I", nullptr, $PRIVATE, $field(EnumElementValueGen, typeIdx)},
	{"valueIdx", "I", nullptr, $PRIVATE, $field(EnumElementValueGen, valueIdx)},
	{}
};

$MethodInfo _EnumElementValueGen_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(EnumElementValueGen, init$, void, int32_t, int32_t, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(EnumElementValueGen, init$, void, $ObjectType*, $String*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/EnumElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(EnumElementValueGen, init$, void, $EnumElementValue*, $ConstantPoolGen*, bool)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, getElementValue, $ElementValue*)},
	{"getEnumTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, getEnumTypeString, $String*)},
	{"getEnumValueString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, getEnumValueString, $String*)},
	{"getTypeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, getTypeIndex, int32_t)},
	{"getValueIndex", "()I", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, getValueIndex, int32_t)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumElementValueGen, stringifyValue, $String*)},
	{}
};

$ClassInfo _EnumElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.EnumElementValueGen",
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	nullptr,
	_EnumElementValueGen_FieldInfo_,
	_EnumElementValueGen_MethodInfo_
};

$Object* allocate$EnumElementValueGen($Class* clazz) {
	return $of($alloc(EnumElementValueGen));
}

void EnumElementValueGen::init$(int32_t typeIdx, int32_t valueIdx, $ConstantPoolGen* cpool) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$($ElementValueGen::ENUM_CONSTANT, cpool);
	if ($ElementValueGen::getElementValueType() != $ElementValueGen::ENUM_CONSTANT) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type enum can be built with this ctor - type specified: "_s, $$str($ElementValueGen::getElementValueType())}));
	}
	this->typeIdx = typeIdx;
	this->valueIdx = valueIdx;
}

$ElementValue* EnumElementValueGen::getElementValue() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"Duplicating value: "_s, $(getEnumTypeString()), ":"_s}));
	$nc($System::err)->println($$concat(var$0, $(getEnumValueString())));
	int32_t var$1 = $ElementValueGen::getElementValueType();
	int32_t var$2 = this->typeIdx;
	int32_t var$3 = this->valueIdx;
	return $new($EnumElementValue, var$1, var$2, var$3, $($nc($(getConstantPool()))->getConstantPool()));
}

void EnumElementValueGen::init$($ObjectType* t, $String* value, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::ENUM_CONSTANT, cpool);
	this->typeIdx = $nc(cpool)->addUtf8($($nc(t)->getSignature()));
	this->valueIdx = cpool->addUtf8(value);
}

void EnumElementValueGen::init$($EnumElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$($ElementValueGen::ENUM_CONSTANT, cpool);
	if (copyPoolEntries) {
		this->typeIdx = $nc(cpool)->addUtf8($($nc(value)->getEnumTypeString()));
		this->valueIdx = cpool->addUtf8($($nc(value)->getEnumValueString()));
	} else {
		this->typeIdx = $nc(value)->getTypeIndex();
		this->valueIdx = value->getValueIndex();
	}
}

void EnumElementValueGen::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	dos->writeShort(this->typeIdx);
	dos->writeShort(this->valueIdx);
}

$String* EnumElementValueGen::stringifyValue() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($(getConstantPool()))->getConstant(this->valueIdx)));
	return $nc(cu8)->getBytes();
}

$String* EnumElementValueGen::getEnumTypeString() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($ConstantUtf8, $($nc($(getConstantPool()))->getConstant(this->typeIdx)))))->getBytes();
}

$String* EnumElementValueGen::getEnumValueString() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($ConstantUtf8, $($nc($(getConstantPool()))->getConstant(this->valueIdx)))))->getBytes();
}

int32_t EnumElementValueGen::getValueIndex() {
	return this->valueIdx;
}

int32_t EnumElementValueGen::getTypeIndex() {
	return this->typeIdx;
}

EnumElementValueGen::EnumElementValueGen() {
}

$Class* EnumElementValueGen::load$($String* name, bool initialize) {
	$loadClass(EnumElementValueGen, name, initialize, &_EnumElementValueGen_ClassInfo_, allocate$EnumElementValueGen);
	return class$;
}

$Class* EnumElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com