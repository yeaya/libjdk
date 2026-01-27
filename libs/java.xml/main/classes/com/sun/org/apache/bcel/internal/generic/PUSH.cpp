#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef ACONST_NULL
#undef DCONST_0
#undef DCONST_1
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef ICONST_0
#undef LCONST_0
#undef LCONST_1
#undef PUSH

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BIPUSH = ::com::sun::org::apache::bcel::internal::generic::BIPUSH;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $LDC2_W = ::com::sun::org::apache::bcel::internal::generic::LDC2_W;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $SIPUSH = ::com::sun::org::apache::bcel::internal::generic::SIPUSH;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _PUSH_FieldInfo_[] = {
	{"instruction", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(PUSH, instruction)},
	{}
};

$MethodInfo _PUSH_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;I)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, bool)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;F)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, float)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;J)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, int64_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;D)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, double)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, $ObjectType*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/Number;)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, $Number*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/Character;)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, $Character*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(PUSH, init$, void, $ConstantPoolGen*, $Boolean*)},
	{"getInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(PUSH, getInstruction, $Instruction*)},
	{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(PUSH, getInstructionList, $InstructionList*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PUSH, toString, $String*)},
	{}
};

$ClassInfo _PUSH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.PUSH",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.CompoundInstruction,com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction",
	_PUSH_FieldInfo_,
	_PUSH_MethodInfo_
};

$Object* allocate$PUSH($Class* clazz) {
	return $of($alloc(PUSH));
}

int32_t PUSH::hashCode() {
	 return this->$CompoundInstruction::hashCode();
}

bool PUSH::equals(Object$* arg0) {
	 return this->$CompoundInstruction::equals(arg0);
}

$Object* PUSH::clone() {
	 return this->$CompoundInstruction::clone();
}

void PUSH::finalize() {
	this->$CompoundInstruction::finalize();
}

void PUSH::init$($ConstantPoolGen* cp, int32_t value) {
	if ((value >= -1) && (value <= 5)) {
		$set(this, instruction, $InstructionConst::getInstruction($Const::ICONST_0 + value));
	} else if ($Instruction::isValidByte(value)) {
		$set(this, instruction, $new($BIPUSH, (int8_t)value));
	} else if ($Instruction::isValidShort(value)) {
		$set(this, instruction, $new($SIPUSH, (int16_t)value));
	} else {
		$set(this, instruction, $new($LDC, $nc(cp)->addInteger(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, bool value) {
	$set(this, instruction, $InstructionConst::getInstruction($Const::ICONST_0 + (value ? 1 : 0)));
}

void PUSH::init$($ConstantPoolGen* cp, float value) {
	if (value == 0.0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::FCONST_0);
	} else if (value == 1.0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::FCONST_1);
	} else if (value == 2.0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::FCONST_2);
	} else {
		$set(this, instruction, $new($LDC, $nc(cp)->addFloat(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, int64_t value) {
	if (value == 0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::LCONST_0);
	} else if (value == 1) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::LCONST_1);
	} else {
		$set(this, instruction, $new($LDC2_W, $nc(cp)->addLong(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, double value) {
	if (value == 0.0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::DCONST_0);
	} else if (value == 1.0) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::DCONST_1);
	} else {
		$set(this, instruction, $new($LDC2_W, $nc(cp)->addDouble(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, $String* value) {
	if (value == nullptr) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::ACONST_NULL);
	} else {
		$set(this, instruction, $new($LDC, $nc(cp)->addString(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, $ObjectType* value) {
	if (value == nullptr) {
		$init($InstructionConst);
		$set(this, instruction, $InstructionConst::ACONST_NULL);
	} else {
		$set(this, instruction, $new($LDC, $nc(cp)->addClass(value)));
	}
}

void PUSH::init$($ConstantPoolGen* cp, $Number* value) {
	$useLocalCurrentObjectStackCache();
	if (($instanceOf($Integer, value)) || ($instanceOf($Short, value)) || ($instanceOf($Byte, value))) {
		$set(this, instruction, $$new(PUSH, cp, $nc(value)->intValue())->instruction);
	} else if ($instanceOf($Double, value)) {
		$set(this, instruction, $$new(PUSH, cp, $nc(value)->doubleValue())->instruction);
	} else if ($instanceOf($Float, value)) {
		$set(this, instruction, $$new(PUSH, cp, $nc(value)->floatValue())->instruction);
	} else if ($instanceOf($Long, value)) {
		$set(this, instruction, $$new(PUSH, cp, $nc(value)->longValue())->instruction);
	} else {
		$throwNew($ClassGenException, $$str({"What\'s this: "_s, value}));
	}
}

void PUSH::init$($ConstantPoolGen* cp, $Character* value) {
	PUSH::init$(cp, (int32_t)$nc(value)->charValue());
}

void PUSH::init$($ConstantPoolGen* cp, $Boolean* value) {
	PUSH::init$(cp, $nc(value)->booleanValue());
}

$InstructionList* PUSH::getInstructionList() {
	return $new($InstructionList, this->instruction);
}

$Instruction* PUSH::getInstruction() {
	return this->instruction;
}

$String* PUSH::toString() {
	return $str({this->instruction, " (PUSH)"_s});
}

PUSH::PUSH() {
}

$Class* PUSH::load$($String* name, bool initialize) {
	$loadClass(PUSH, name, initialize, &_PUSH_ClassInfo_, allocate$PUSH);
	return class$;
}

$Class* PUSH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com