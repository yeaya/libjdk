#include <com/sun/org/apache/bcel/internal/classfile/MethodParameter.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_MANDATED
#undef ACC_SYNTHETIC

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _MethodParameter_FieldInfo_[] = {
	{"nameIndex", "I", nullptr, $PRIVATE, $field(MethodParameter, nameIndex)},
	{"accessFlags", "I", nullptr, $PRIVATE, $field(MethodParameter, accessFlags)},
	{}
};

$MethodInfo _MethodParameter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodParameter, init$, void)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(MethodParameter, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MethodParameter, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;", nullptr, $PUBLIC, $virtualMethod(MethodParameter, copy, MethodParameter*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $method(MethodParameter, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAccessFlags", "()I", nullptr, $PUBLIC, $virtualMethod(MethodParameter, getAccessFlags, int32_t)},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(MethodParameter, getNameIndex, int32_t)},
	{"getParameterName", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodParameter, getParameterName, $String*, $ConstantPool*)},
	{"isFinal", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodParameter, isFinal, bool)},
	{"isMandated", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodParameter, isMandated, bool)},
	{"isSynthetic", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodParameter, isSynthetic, bool)},
	{"setAccessFlags", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodParameter, setAccessFlags, void, int32_t)},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodParameter, setNameIndex, void, int32_t)},
	{}
};

$ClassInfo _MethodParameter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.MethodParameter",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MethodParameter_FieldInfo_,
	_MethodParameter_MethodInfo_
};

$Object* allocate$MethodParameter($Class* clazz) {
	return $of($alloc(MethodParameter));
}

void MethodParameter::init$() {
}

void MethodParameter::init$($DataInput* input) {
	this->nameIndex = $nc(input)->readUnsignedShort();
	this->accessFlags = input->readUnsignedShort();
}

int32_t MethodParameter::getNameIndex() {
	return this->nameIndex;
}

void MethodParameter::setNameIndex(int32_t name_index) {
	this->nameIndex = name_index;
}

$String* MethodParameter::getParameterName($ConstantPool* constant_pool) {
	if (this->nameIndex == 0) {
		return nullptr;
	}
	return $nc(($cast($ConstantUtf8, $($nc(constant_pool)->getConstant(this->nameIndex, $Const::CONSTANT_Utf8)))))->getBytes();
}

int32_t MethodParameter::getAccessFlags() {
	return this->accessFlags;
}

void MethodParameter::setAccessFlags(int32_t access_flags) {
	this->accessFlags = access_flags;
}

bool MethodParameter::isFinal() {
	return ((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_FINAL)) != 0;
}

bool MethodParameter::isSynthetic() {
	return ((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_SYNTHETIC)) != 0;
}

bool MethodParameter::isMandated() {
	return ((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_MANDATED)) != 0;
}

void MethodParameter::accept($Visitor* v) {
	$nc(v)->visitMethodParameter(this);
}

void MethodParameter::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->nameIndex);
	file->writeShort(this->accessFlags);
}

MethodParameter* MethodParameter::copy() {
	try {
		return $cast(MethodParameter, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

MethodParameter::MethodParameter() {
}

$Class* MethodParameter::load$($String* name, bool initialize) {
	$loadClass(MethodParameter, name, initialize, &_MethodParameter_ClassInfo_, allocate$MethodParameter);
	return class$;
}

$Class* MethodParameter::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com