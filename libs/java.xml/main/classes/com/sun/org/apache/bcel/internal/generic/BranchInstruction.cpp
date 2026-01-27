#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _BranchInstruction_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(BranchInstruction, index)},
	{"target", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(BranchInstruction, target)},
	{"position", "I", nullptr, $PRIVATE, $field(BranchInstruction, position)},
	{}
};

$MethodInfo _BranchInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(BranchInstruction, init$, void)},
	{"<init>", "(SLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PROTECTED, $method(BranchInstruction, init$, void, int16_t, $InstructionHandle*)},
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, containsTarget, bool, $InstructionHandle*)},
	{"dispose", "()V", nullptr, 0, $virtualMethod(BranchInstruction, dispose, void)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(BranchInstruction, getIndex, int32_t)},
	{"getPosition", "()I", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, getPosition, int32_t)},
	{"getTarget", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, getTarget, $InstructionHandle*)},
	{"getTargetOffset", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)I", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, getTargetOffset, int32_t, $InstructionHandle*)},
	{"getTargetOffset", "()I", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, getTargetOffset, int32_t)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"notifyTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;)V", nullptr, $STATIC, $staticMethod(BranchInstruction, notifyTarget, void, $InstructionHandle*, $InstructionHandle*, $InstructionTargeter*)},
	{"setIndex", "(I)V", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, setIndex, void, int32_t)},
	{"setOpcode", "(S)V", nullptr, 0, $virtualMethod(BranchInstruction, setOpcode, void, int16_t)},
	{"setPosition", "(I)V", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, setPosition, void, int32_t)},
	{"setTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, setTarget, void, $InstructionHandle*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, toString, $String*, bool)},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(BranchInstruction, updatePosition, int32_t, int32_t, int32_t)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(BranchInstruction, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _BranchInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.BranchInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.InstructionTargeter",
	_BranchInstruction_FieldInfo_,
	_BranchInstruction_MethodInfo_
};

$Object* allocate$BranchInstruction($Class* clazz) {
	return $of($alloc(BranchInstruction));
}

$String* BranchInstruction::toString() {
	 return this->$Instruction::toString();
}

bool BranchInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t BranchInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* BranchInstruction::clone() {
	 return this->$Instruction::clone();
}

void BranchInstruction::finalize() {
	this->$Instruction::finalize();
}

void BranchInstruction::init$() {
	$Instruction::init$();
}

void BranchInstruction::init$(int16_t opcode, $InstructionHandle* target) {
	$Instruction::init$(opcode, (int16_t)3);
	setTarget(target);
}

void BranchInstruction::dump($DataOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->writeByte($Instruction::getOpcode());
	this->index = getTargetOffset();
	if (!isValidShort(this->index)) {
		$throwNew($ClassGenException, $$str({"Branch target offset too large for short: "_s, $$str(this->index)}));
	}
	out->writeShort(this->index);
}

int32_t BranchInstruction::getTargetOffset($InstructionHandle* _target) {
	$useLocalCurrentObjectStackCache();
	if (_target == nullptr) {
		$throwNew($ClassGenException, $$str({"Target of "_s, $($Instruction::toString(true)), " is invalid null handle"_s}));
	}
	int32_t t = $nc(_target)->getPosition();
	if (t < 0) {
		$throwNew($ClassGenException, $$str({"Invalid branch target position offset for "_s, $($Instruction::toString(true)), ":"_s, $$str(t), ":"_s, _target}));
	}
	return t - this->position;
}

int32_t BranchInstruction::getTargetOffset() {
	return getTargetOffset(this->target);
}

int32_t BranchInstruction::updatePosition(int32_t offset, int32_t max_offset) {
	this->position += offset;
	return 0;
}

$String* BranchInstruction::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $Instruction::toString(verbose));
	$var($String, t, "null"_s);
	if (verbose) {
		if (this->target != nullptr) {
			if ($equals($nc(this->target)->getInstruction(), this)) {
				$assign(t, "<points to itself>"_s);
			} else if ($nc(this->target)->getInstruction() == nullptr) {
				$assign(t, "<null instruction!!!?>"_s);
			} else {
				$assign(t, $str({""_s, $$str($nc(this->target)->getPosition())}));
			}
		}
	} else if (this->target != nullptr) {
		this->index = $nc(this->target)->getPosition();
		$assign(t, $str({""_s, $$str(this->index)}));
	}
	return $str({s, " -> "_s, t});
}

void BranchInstruction::initFromFile($ByteSequence* bytes, bool wide) {
	$Instruction::setLength(3);
	this->index = $nc(bytes)->readShort();
}

int32_t BranchInstruction::getIndex() {
	return this->index;
}

$InstructionHandle* BranchInstruction::getTarget() {
	return this->target;
}

void BranchInstruction::setTarget($InstructionHandle* target) {
	notifyTarget(this->target, target, this);
	$set(this, target, target);
}

void BranchInstruction::notifyTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih, $InstructionTargeter* t) {
	$init(BranchInstruction);
	if (old_ih != nullptr) {
		old_ih->removeTargeter(t);
	}
	if (new_ih != nullptr) {
		new_ih->addTargeter(t);
	}
}

void BranchInstruction::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	if (this->target == old_ih) {
		setTarget(new_ih);
	} else {
		$throwNew($ClassGenException, $$str({"Not targeting "_s, old_ih, ", but "_s, this->target}));
	}
}

bool BranchInstruction::containsTarget($InstructionHandle* ih) {
	return this->target == ih;
}

void BranchInstruction::setOpcode(int16_t opcode) {
	if (this->target == nullptr) {
		$Instruction::setOpcode(opcode);
	} else {
		$var($InstructionHandle, t, this->target);
		setTarget(nullptr);
		$Instruction::setOpcode(opcode);
		setTarget(t);
	}
}

void BranchInstruction::dispose() {
	setTarget(nullptr);
	this->index = -1;
	this->position = -1;
}

int32_t BranchInstruction::getPosition() {
	return this->position;
}

void BranchInstruction::setPosition(int32_t position) {
	this->position = position;
}

void BranchInstruction::setIndex(int32_t index) {
	this->index = index;
}

BranchInstruction::BranchInstruction() {
}

$Class* BranchInstruction::load$($String* name, bool initialize) {
	$loadClass(BranchInstruction, name, initialize, &_BranchInstruction_ClassInfo_, allocate$BranchInstruction);
	return class$;
}

$Class* BranchInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com