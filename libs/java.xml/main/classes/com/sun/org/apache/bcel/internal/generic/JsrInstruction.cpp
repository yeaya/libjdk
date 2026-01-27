#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnaddressType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $ReturnaddressType = ::com::sun::org::apache::bcel::internal::generic::ReturnaddressType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _JsrInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(SLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, 0, $method(JsrInstruction, init$, void, int16_t, $InstructionHandle*)},
	{"<init>", "()V", nullptr, 0, $method(JsrInstruction, init$, void)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(JsrInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"physicalSuccessor", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(JsrInstruction, physicalSuccessor, $InstructionHandle*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JsrInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.JsrInstruction",
	"com.sun.org.apache.bcel.internal.generic.BranchInstruction",
	"com.sun.org.apache.bcel.internal.generic.UnconditionalBranch,com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_JsrInstruction_MethodInfo_
};

$Object* allocate$JsrInstruction($Class* clazz) {
	return $of($alloc(JsrInstruction));
}

$String* JsrInstruction::toString() {
	 return this->$BranchInstruction::toString();
}

int32_t JsrInstruction::produceStack($ConstantPoolGen* cpg) {
	 return this->$BranchInstruction::produceStack(cpg);
}

bool JsrInstruction::equals(Object$* that) {
	 return this->$BranchInstruction::equals(that);
}

int32_t JsrInstruction::hashCode() {
	 return this->$BranchInstruction::hashCode();
}

$Object* JsrInstruction::clone() {
	 return this->$BranchInstruction::clone();
}

void JsrInstruction::finalize() {
	this->$BranchInstruction::finalize();
}

void JsrInstruction::init$(int16_t opcode, $InstructionHandle* target) {
	$BranchInstruction::init$(opcode, target);
}

void JsrInstruction::init$() {
	$BranchInstruction::init$();
}

$Type* JsrInstruction::getType($ConstantPoolGen* cp) {
	return $new($ReturnaddressType, $(physicalSuccessor()));
}

$InstructionHandle* JsrInstruction::physicalSuccessor() {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, ih, $BranchInstruction::getTarget());
	while ($nc(ih)->getPrev() != nullptr) {
		$assign(ih, ih->getPrev());
	}
	while (!$equals($nc(ih)->getInstruction(), this)) {
		$assign(ih, ih->getNext());
	}
	$var($InstructionHandle, toThis, ih);
	while (ih != nullptr) {
		$assign(ih, ih->getNext());
		if ((ih != nullptr) && ($equals(ih->getInstruction(), this))) {
			$throwNew($IllegalStateException, "physicalSuccessor() called on a shared JsrInstruction."_s);
		}
	}
	return $nc(toThis)->getNext();
}

JsrInstruction::JsrInstruction() {
}

$Class* JsrInstruction::load$($String* name, bool initialize) {
	$loadClass(JsrInstruction, name, initialize, &_JsrInstruction_ClassInfo_, allocate$JsrInstruction);
	return class$;
}

$Class* JsrInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com