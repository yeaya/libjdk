#include <com/sun/org/apache/bcel/internal/generic/CodeExceptionGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _CodeExceptionGen_FieldInfo_[] = {
	{"startPc", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(CodeExceptionGen, startPc)},
	{"endPc", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(CodeExceptionGen, endPc)},
	{"handlerPc", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(CodeExceptionGen, handlerPc)},
	{"catchType", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PRIVATE, $field(CodeExceptionGen, catchType)},
	{}
};

$MethodInfo _CodeExceptionGen_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)V", nullptr, $PUBLIC, $method(CodeExceptionGen, init$, void, $InstructionHandle*, $InstructionHandle*, $InstructionHandle*, $ObjectType*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CodeExceptionGen, clone, $Object*)},
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(CodeExceptionGen, containsTarget, bool, $InstructionHandle*)},
	{"getCatchType", "()Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $method(CodeExceptionGen, getCatchType, $ObjectType*)},
	{"getCodeException", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/CodeException;", nullptr, $PUBLIC, $method(CodeExceptionGen, getCodeException, $CodeException*, $ConstantPoolGen*)},
	{"getEndPC", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(CodeExceptionGen, getEndPC, $InstructionHandle*)},
	{"getHandlerPC", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(CodeExceptionGen, getHandlerPC, $InstructionHandle*)},
	{"getStartPC", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(CodeExceptionGen, getStartPC, $InstructionHandle*)},
	{"setCatchType", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)V", nullptr, $PUBLIC, $method(CodeExceptionGen, setCatchType, void, $ObjectType*)},
	{"setEndPC", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(CodeExceptionGen, setEndPC, void, $InstructionHandle*)},
	{"setHandlerPC", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(CodeExceptionGen, setHandlerPC, void, $InstructionHandle*)},
	{"setStartPC", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(CodeExceptionGen, setStartPC, void, $InstructionHandle*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CodeExceptionGen, toString, $String*)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(CodeExceptionGen, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _CodeExceptionGen_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.CodeExceptionGen",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.InstructionTargeter,java.lang.Cloneable",
	_CodeExceptionGen_FieldInfo_,
	_CodeExceptionGen_MethodInfo_
};

$Object* allocate$CodeExceptionGen($Class* clazz) {
	return $of($alloc(CodeExceptionGen));
}

int32_t CodeExceptionGen::hashCode() {
	 return this->$InstructionTargeter::hashCode();
}

bool CodeExceptionGen::equals(Object$* arg0) {
	 return this->$InstructionTargeter::equals(arg0);
}

void CodeExceptionGen::finalize() {
	this->$InstructionTargeter::finalize();
}

void CodeExceptionGen::init$($InstructionHandle* startPc, $InstructionHandle* endPc, $InstructionHandle* handlerPc, $ObjectType* catchType) {
	setStartPC(startPc);
	setEndPC(endPc);
	setHandlerPC(handlerPc);
	$set(this, catchType, catchType);
}

$CodeException* CodeExceptionGen::getCodeException($ConstantPoolGen* cp) {
	int32_t var$0 = $nc(this->startPc)->getPosition();
	int32_t var$2 = $nc(this->endPc)->getPosition();
	int32_t var$1 = var$2 + $nc($($nc(this->endPc)->getInstruction()))->getLength();
	int32_t var$3 = $nc(this->handlerPc)->getPosition();
	return $new($CodeException, var$0, var$1, var$3, (this->catchType == nullptr) ? 0 : $nc(cp)->addClass(this->catchType));
}

void CodeExceptionGen::setStartPC($InstructionHandle* start_pc) {
	$BranchInstruction::notifyTarget(this->startPc, start_pc, this);
	$set(this, startPc, start_pc);
}

void CodeExceptionGen::setEndPC($InstructionHandle* end_pc) {
	$BranchInstruction::notifyTarget(this->endPc, end_pc, this);
	$set(this, endPc, end_pc);
}

void CodeExceptionGen::setHandlerPC($InstructionHandle* handler_pc) {
	$BranchInstruction::notifyTarget(this->handlerPc, handler_pc, this);
	$set(this, handlerPc, handler_pc);
}

void CodeExceptionGen::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	bool targeted = false;
	if (this->startPc == old_ih) {
		targeted = true;
		setStartPC(new_ih);
	}
	if (this->endPc == old_ih) {
		targeted = true;
		setEndPC(new_ih);
	}
	if (this->handlerPc == old_ih) {
		targeted = true;
		setHandlerPC(new_ih);
	}
	if (!targeted) {
		$throwNew($ClassGenException, $$str({"Not targeting "_s, old_ih, ", but {"_s, this->startPc, ", "_s, this->endPc, ", "_s, this->handlerPc, "}"_s}));
	}
}

bool CodeExceptionGen::containsTarget($InstructionHandle* ih) {
	return (this->startPc == ih) || (this->endPc == ih) || (this->handlerPc == ih);
}

void CodeExceptionGen::setCatchType($ObjectType* catchType) {
	$set(this, catchType, catchType);
}

$ObjectType* CodeExceptionGen::getCatchType() {
	return this->catchType;
}

$InstructionHandle* CodeExceptionGen::getStartPC() {
	return this->startPc;
}

$InstructionHandle* CodeExceptionGen::getEndPC() {
	return this->endPc;
}

$InstructionHandle* CodeExceptionGen::getHandlerPC() {
	return this->handlerPc;
}

$String* CodeExceptionGen::toString() {
	return $str({"CodeExceptionGen("_s, this->startPc, ", "_s, this->endPc, ", "_s, this->handlerPc, ")"_s});
}

$Object* CodeExceptionGen::clone() {
	try {
		return $of($InstructionTargeter::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

CodeExceptionGen::CodeExceptionGen() {
}

$Class* CodeExceptionGen::load$($String* name, bool initialize) {
	$loadClass(CodeExceptionGen, name, initialize, &_CodeExceptionGen_ClassInfo_, allocate$CodeExceptionGen);
	return class$;
}

$Class* CodeExceptionGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com