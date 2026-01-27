#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

$FieldInfo _CodeException_FieldInfo_[] = {
	{"startPc", "I", nullptr, $PRIVATE, $field(CodeException, startPc)},
	{"endPc", "I", nullptr, $PRIVATE, $field(CodeException, endPc)},
	{"handlerPc", "I", nullptr, $PRIVATE, $field(CodeException, handlerPc)},
	{"catchType", "I", nullptr, $PRIVATE, $field(CodeException, catchType)},
	{}
};

$MethodInfo _CodeException_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC, $method(CodeException, init$, void, CodeException*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(CodeException, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(CodeException, init$, void, int32_t, int32_t, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(CodeException, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/CodeException;", nullptr, $PUBLIC, $method(CodeException, copy, CodeException*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(CodeException, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getCatchType", "()I", nullptr, $PUBLIC, $method(CodeException, getCatchType, int32_t)},
	{"getEndPC", "()I", nullptr, $PUBLIC, $method(CodeException, getEndPC, int32_t)},
	{"getHandlerPC", "()I", nullptr, $PUBLIC, $method(CodeException, getHandlerPC, int32_t)},
	{"getStartPC", "()I", nullptr, $PUBLIC, $method(CodeException, getStartPC, int32_t)},
	{"setCatchType", "(I)V", nullptr, $PUBLIC, $method(CodeException, setCatchType, void, int32_t)},
	{"setEndPC", "(I)V", nullptr, $PUBLIC, $method(CodeException, setEndPC, void, int32_t)},
	{"setHandlerPC", "(I)V", nullptr, $PUBLIC, $method(CodeException, setHandlerPC, void, int32_t)},
	{"setStartPC", "(I)V", nullptr, $PUBLIC, $method(CodeException, setStartPC, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CodeException, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(CodeException, toString, $String*, $ConstantPool*, bool)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(CodeException, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _CodeException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.CodeException",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_CodeException_FieldInfo_,
	_CodeException_MethodInfo_
};

$Object* allocate$CodeException($Class* clazz) {
	return $of($alloc(CodeException));
}

int32_t CodeException::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool CodeException::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* CodeException::clone() {
	 return this->$Cloneable::clone();
}

void CodeException::finalize() {
	this->$Cloneable::finalize();
}

void CodeException::init$(CodeException* c) {
	int32_t var$0 = $nc(c)->getStartPC();
	int32_t var$1 = c->getEndPC();
	int32_t var$2 = c->getHandlerPC();
	CodeException::init$(var$0, var$1, var$2, c->getCatchType());
}

void CodeException::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedShort();
	int32_t var$1 = file->readUnsignedShort();
	int32_t var$2 = file->readUnsignedShort();
	CodeException::init$(var$0, var$1, var$2, file->readUnsignedShort());
}

void CodeException::init$(int32_t startPc, int32_t endPc, int32_t handlerPc, int32_t catchType) {
	this->startPc = startPc;
	this->endPc = endPc;
	this->handlerPc = handlerPc;
	this->catchType = catchType;
}

void CodeException::accept($Visitor* v) {
	$nc(v)->visitCodeException(this);
}

void CodeException::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->startPc);
	file->writeShort(this->endPc);
	file->writeShort(this->handlerPc);
	file->writeShort(this->catchType);
}

int32_t CodeException::getCatchType() {
	return this->catchType;
}

int32_t CodeException::getEndPC() {
	return this->endPc;
}

int32_t CodeException::getHandlerPC() {
	return this->handlerPc;
}

int32_t CodeException::getStartPC() {
	return this->startPc;
}

void CodeException::setCatchType(int32_t catchType) {
	this->catchType = catchType;
}

void CodeException::setEndPC(int32_t endPc) {
	this->endPc = endPc;
}

void CodeException::setHandlerPC(int32_t handlerPc) {
	this->handlerPc = handlerPc;
}

void CodeException::setStartPC(int32_t startPc) {
	this->startPc = startPc;
}

$String* CodeException::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"CodeException(startPc = "_s, $$str(this->startPc), ", endPc = "_s, $$str(this->endPc), ", handlerPc = "_s, $$str(this->handlerPc), ", catchType = "_s, $$str(this->catchType), ")"_s});
}

$String* CodeException::toString($ConstantPool* cp, bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, nullptr);
	if (this->catchType == 0) {
		$assign(str, "<Any exception>(0)"_s);
	} else {
		$assign(str, $str({$($Utility::compactClassName($($nc(cp)->getConstantString(this->catchType, $Const::CONSTANT_Class)), false)), (verbose ? $$str({"("_s, $$str(this->catchType), ")"_s}) : ""_s)}));
	}
	return $str({$$str(this->startPc), "\t"_s, $$str(this->endPc), "\t"_s, $$str(this->handlerPc), "\t"_s, str});
}

$String* CodeException::toString($ConstantPool* cp) {
	return toString(cp, true);
}

CodeException* CodeException::copy() {
	try {
		return $cast(CodeException, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

CodeException::CodeException() {
}

$Class* CodeException::load$($String* name, bool initialize) {
	$loadClass(CodeException, name, initialize, &_CodeException_ClassInfo_, allocate$CodeException);
	return class$;
}

$Class* CodeException::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com