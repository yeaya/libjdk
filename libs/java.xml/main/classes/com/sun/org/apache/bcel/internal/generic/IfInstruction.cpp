#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _IfInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(IfInstruction, init$, void)},
	{"<init>", "(SLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PROTECTED, $method(IfInstruction, init$, void, int16_t, $InstructionHandle*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IfInstruction, negate, IfInstruction*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IfInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	"com.sun.org.apache.bcel.internal.generic.BranchInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_IfInstruction_MethodInfo_
};

$Object* allocate$IfInstruction($Class* clazz) {
	return $of($alloc(IfInstruction));
}

$String* IfInstruction::toString() {
	 return this->$BranchInstruction::toString();
}

int32_t IfInstruction::consumeStack($ConstantPoolGen* cpg) {
	 return this->$BranchInstruction::consumeStack(cpg);
}

bool IfInstruction::equals(Object$* that) {
	 return this->$BranchInstruction::equals(that);
}

int32_t IfInstruction::hashCode() {
	 return this->$BranchInstruction::hashCode();
}

$Object* IfInstruction::clone() {
	 return this->$BranchInstruction::clone();
}

void IfInstruction::finalize() {
	this->$BranchInstruction::finalize();
}

void IfInstruction::init$() {
	$BranchInstruction::init$();
}

void IfInstruction::init$(int16_t opcode, $InstructionHandle* target) {
	$BranchInstruction::init$(opcode, target);
}

IfInstruction::IfInstruction() {
}

$Class* IfInstruction::load$($String* name, bool initialize) {
	$loadClass(IfInstruction, name, initialize, &_IfInstruction_ClassInfo_, allocate$IfInstruction);
	return class$;
}

$Class* IfInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com