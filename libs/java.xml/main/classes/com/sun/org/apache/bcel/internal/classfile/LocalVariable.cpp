#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _LocalVariable_FieldInfo_[] = {
	{"startPc", "I", nullptr, $PRIVATE, $field(LocalVariable, startPc)},
	{"length", "I", nullptr, $PRIVATE, $field(LocalVariable, length)},
	{"nameIndex", "I", nullptr, $PRIVATE, $field(LocalVariable, nameIndex)},
	{"signatureIndex", "I", nullptr, $PRIVATE, $field(LocalVariable, signatureIndex)},
	{"index", "I", nullptr, $PRIVATE, $field(LocalVariable, index)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(LocalVariable, constantPool)},
	{"origIndex", "I", nullptr, $PRIVATE, $field(LocalVariable, origIndex)},
	{}
};

$MethodInfo _LocalVariable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC, $method(LocalVariable, init$, void, LocalVariable*)},
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(LocalVariable, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(IIIIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(LocalVariable, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"<init>", "(IIIIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;I)V", nullptr, $PUBLIC, $method(LocalVariable, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, $ConstantPool*, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariable, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC, $method(LocalVariable, copy, LocalVariable*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(LocalVariable, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $method(LocalVariable, getConstantPool, $ConstantPool*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(LocalVariable, getIndex, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $method(LocalVariable, getLength, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LocalVariable, getName, $String*)},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $method(LocalVariable, getNameIndex, int32_t)},
	{"getOrigIndex", "()I", nullptr, $PUBLIC, $method(LocalVariable, getOrigIndex, int32_t)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LocalVariable, getSignature, $String*)},
	{"getSignatureIndex", "()I", nullptr, $PUBLIC, $method(LocalVariable, getSignatureIndex, int32_t)},
	{"getStartPC", "()I", nullptr, $PUBLIC, $method(LocalVariable, getStartPC, int32_t)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(LocalVariable, setConstantPool, void, $ConstantPool*)},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $method(LocalVariable, setIndex, void, int32_t)},
	{"setLength", "(I)V", nullptr, $PUBLIC, $method(LocalVariable, setLength, void, int32_t)},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $method(LocalVariable, setNameIndex, void, int32_t)},
	{"setSignatureIndex", "(I)V", nullptr, $PUBLIC, $method(LocalVariable, setSignatureIndex, void, int32_t)},
	{"setStartPC", "(I)V", nullptr, $PUBLIC, $method(LocalVariable, setStartPC, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalVariable, toString, $String*)},
	{"toStringShared", "(Z)Ljava/lang/String;", nullptr, 0, $method(LocalVariable, toStringShared, $String*, bool)},
	{}
};

$ClassInfo _LocalVariable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.LocalVariable",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_LocalVariable_FieldInfo_,
	_LocalVariable_MethodInfo_
};

$Object* allocate$LocalVariable($Class* clazz) {
	return $of($alloc(LocalVariable));
}

int32_t LocalVariable::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool LocalVariable::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* LocalVariable::clone() {
	 return this->$Cloneable::clone();
}

void LocalVariable::finalize() {
	this->$Cloneable::finalize();
}

void LocalVariable::init$(LocalVariable* localVariable) {
	int32_t var$0 = $nc(localVariable)->getStartPC();
	int32_t var$1 = localVariable->getLength();
	int32_t var$2 = localVariable->getNameIndex();
	int32_t var$3 = localVariable->getSignatureIndex();
	int32_t var$4 = localVariable->getIndex();
	LocalVariable::init$(var$0, var$1, var$2, var$3, var$4, $(localVariable->getConstantPool()));
	this->origIndex = $nc(localVariable)->getOrigIndex();
}

void LocalVariable::init$($DataInput* file, $ConstantPool* constant_pool) {
	int32_t var$0 = $nc(file)->readUnsignedShort();
	int32_t var$1 = file->readUnsignedShort();
	int32_t var$2 = file->readUnsignedShort();
	int32_t var$3 = file->readUnsignedShort();
	LocalVariable::init$(var$0, var$1, var$2, var$3, file->readUnsignedShort(), constant_pool);
}

void LocalVariable::init$(int32_t startPc, int32_t length, int32_t nameIndex, int32_t signatureIndex, int32_t index, $ConstantPool* constantPool) {
	this->startPc = startPc;
	this->length = length;
	this->nameIndex = nameIndex;
	this->signatureIndex = signatureIndex;
	this->index = index;
	$set(this, constantPool, constantPool);
	this->origIndex = index;
}

void LocalVariable::init$(int32_t startPc, int32_t length, int32_t nameIndex, int32_t signatureIndex, int32_t index, $ConstantPool* constantPool, int32_t origIndex) {
	this->startPc = startPc;
	this->length = length;
	this->nameIndex = nameIndex;
	this->signatureIndex = signatureIndex;
	this->index = index;
	$set(this, constantPool, constantPool);
	this->origIndex = origIndex;
}

void LocalVariable::accept($Visitor* v) {
	$nc(v)->visitLocalVariable(this);
}

void LocalVariable::dump($DataOutputStream* dataOutputStream) {
	$nc(dataOutputStream)->writeShort(this->startPc);
	dataOutputStream->writeShort(this->length);
	dataOutputStream->writeShort(this->nameIndex);
	dataOutputStream->writeShort(this->signatureIndex);
	dataOutputStream->writeShort(this->index);
}

$ConstantPool* LocalVariable::getConstantPool() {
	return this->constantPool;
}

int32_t LocalVariable::getLength() {
	return this->length;
}

$String* LocalVariable::getName() {
	$var($ConstantUtf8, c, nullptr);
	$assign(c, $cast($ConstantUtf8, $nc(this->constantPool)->getConstant(this->nameIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

int32_t LocalVariable::getNameIndex() {
	return this->nameIndex;
}

$String* LocalVariable::getSignature() {
	$var($ConstantUtf8, c, nullptr);
	$assign(c, $cast($ConstantUtf8, $nc(this->constantPool)->getConstant(this->signatureIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

int32_t LocalVariable::getSignatureIndex() {
	return this->signatureIndex;
}

int32_t LocalVariable::getIndex() {
	return this->index;
}

int32_t LocalVariable::getOrigIndex() {
	return this->origIndex;
}

int32_t LocalVariable::getStartPC() {
	return this->startPc;
}

$String* LocalVariable::toStringShared(bool typeTable) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getName());
	$var($String, signature, $Utility::signatureToString($(getSignature()), false));
	$var($String, label, $str({"LocalVariable"_s, (typeTable ? "Types"_s : ""_s)}));
	return $str({label, "(startPc = "_s, $$str(this->startPc), ", length = "_s, $$str(this->length), ", index = "_s, $$str(this->index), ":"_s, signature, " "_s, name, ")"_s});
}

void LocalVariable::setConstantPool($ConstantPool* constantPool) {
	$set(this, constantPool, constantPool);
}

void LocalVariable::setLength(int32_t length) {
	this->length = length;
}

void LocalVariable::setNameIndex(int32_t nameIndex) {
	this->nameIndex = nameIndex;
}

void LocalVariable::setSignatureIndex(int32_t signatureIndex) {
	this->signatureIndex = signatureIndex;
}

void LocalVariable::setIndex(int32_t index) {
	this->index = index;
}

void LocalVariable::setStartPC(int32_t startPc) {
	this->startPc = startPc;
}

$String* LocalVariable::toString() {
	return toStringShared(false);
}

LocalVariable* LocalVariable::copy() {
	try {
		return $cast(LocalVariable, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

LocalVariable::LocalVariable() {
}

$Class* LocalVariable::load$($String* name, bool initialize) {
	$loadClass(LocalVariable, name, initialize, &_LocalVariable_ClassInfo_, allocate$LocalVariable);
	return class$;
}

$Class* LocalVariable::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com