#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
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

$MethodInfo _GotoInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(SLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, 0, $method(GotoInstruction, init$, void, int16_t, $InstructionHandle*)},
	{"<init>", "()V", nullptr, 0, $method(GotoInstruction, init$, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GotoInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.GotoInstruction",
	"com.sun.org.apache.bcel.internal.generic.BranchInstruction",
	"com.sun.org.apache.bcel.internal.generic.UnconditionalBranch",
	nullptr,
	_GotoInstruction_MethodInfo_
};

$Object* allocate$GotoInstruction($Class* clazz) {
	return $of($alloc(GotoInstruction));
}

$String* GotoInstruction::toString() {
	 return this->$BranchInstruction::toString();
}

bool GotoInstruction::equals(Object$* that) {
	 return this->$BranchInstruction::equals(that);
}

int32_t GotoInstruction::hashCode() {
	 return this->$BranchInstruction::hashCode();
}

$Object* GotoInstruction::clone() {
	 return this->$BranchInstruction::clone();
}

void GotoInstruction::finalize() {
	this->$BranchInstruction::finalize();
}

void GotoInstruction::init$(int16_t opcode, $InstructionHandle* target) {
	$BranchInstruction::init$(opcode, target);
}

void GotoInstruction::init$() {
	$BranchInstruction::init$();
}

GotoInstruction::GotoInstruction() {
}

$Class* GotoInstruction::load$($String* name, bool initialize) {
	$loadClass(GotoInstruction, name, initialize, &_GotoInstruction_ClassInfo_, allocate$GotoInstruction);
	return class$;
}

$Class* GotoInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com