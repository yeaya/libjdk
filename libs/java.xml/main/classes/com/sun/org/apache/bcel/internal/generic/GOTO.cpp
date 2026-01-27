#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef GOTO
#undef GOTO_W
#undef MAX_VALUE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $UnconditionalBranch = ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch;
using $VariableLengthInstruction = ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _GOTO_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(GOTO, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(GOTO, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(GOTO, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(GOTO, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(GOTO, updatePosition, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _GOTO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.GOTO",
	"com.sun.org.apache.bcel.internal.generic.GotoInstruction",
	"com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction",
	nullptr,
	_GOTO_MethodInfo_
};

$Object* allocate$GOTO($Class* clazz) {
	return $of($alloc(GOTO));
}

$String* GOTO::toString() {
	 return this->$GotoInstruction::toString();
}

bool GOTO::equals(Object$* that) {
	 return this->$GotoInstruction::equals(that);
}

int32_t GOTO::hashCode() {
	 return this->$GotoInstruction::hashCode();
}

$Object* GOTO::clone() {
	 return this->$GotoInstruction::clone();
}

void GOTO::finalize() {
	this->$GotoInstruction::finalize();
}

void GOTO::init$() {
	$GotoInstruction::init$();
}

void GOTO::init$($InstructionHandle* target) {
	$GotoInstruction::init$($Const::GOTO, target);
}

void GOTO::dump($DataOutputStream* out) {
	$GotoInstruction::setIndex(getTargetOffset());
	int16_t _opcode = getOpcode();
	if (_opcode == $Const::GOTO) {
		$GotoInstruction::dump(out);
	} else {
		$GotoInstruction::setIndex(getTargetOffset());
		$nc(out)->writeByte(_opcode);
		out->writeInt($GotoInstruction::getIndex());
	}
}

int32_t GOTO::updatePosition(int32_t offset, int32_t max_offset) {
	int32_t i = getTargetOffset();
	setPosition(getPosition() + offset);
	if ($Math::abs(i) >= ($Short::MAX_VALUE - max_offset)) {
		$GotoInstruction::setOpcode($Const::GOTO_W);
		int16_t old_length = (int16_t)$GotoInstruction::getLength();
		$GotoInstruction::setLength(5);
		return $GotoInstruction::getLength() - old_length;
	}
	return 0;
}

void GOTO::accept($Visitor* v) {
	$nc(v)->visitVariableLengthInstruction(this);
	v->visitUnconditionalBranch(this);
	v->visitBranchInstruction(this);
	v->visitGotoInstruction(this);
	v->visitGOTO(this);
}

GOTO::GOTO() {
}

$Class* GOTO::load$($String* name, bool initialize) {
	$loadClass(GOTO, name, initialize, &_GOTO_ClassInfo_, allocate$GOTO);
	return class$;
}

$Class* GOTO::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com