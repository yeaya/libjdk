#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef ARETURN
#undef DOUBLE
#undef DRETURN
#undef FLOAT
#undef FRETURN
#undef ILLEGAL_MONITOR_STATE
#undef INT
#undef IRETURN
#undef LONG
#undef LRETURN
#undef OBJECT
#undef RETURN
#undef VOID

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _ReturnInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ReturnInstruction, init$, void)},
	{"<init>", "(S)V", nullptr, $PROTECTED, $method(ReturnInstruction, init$, void, int16_t)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ReturnInstruction, getExceptions, $ClassArray*)},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ReturnInstruction, getType, $Type*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ReturnInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReturnInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_ReturnInstruction_MethodInfo_
};

$Object* allocate$ReturnInstruction($Class* clazz) {
	return $of($alloc(ReturnInstruction));
}

$String* ReturnInstruction::toString() {
	 return this->$Instruction::toString();
}

int32_t ReturnInstruction::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

bool ReturnInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ReturnInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ReturnInstruction::clone() {
	 return this->$Instruction::clone();
}

void ReturnInstruction::finalize() {
	this->$Instruction::finalize();
}

void ReturnInstruction::init$() {
	$Instruction::init$();
}

void ReturnInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$Type* ReturnInstruction::getType() {
	$useLocalCurrentObjectStackCache();
	int16_t _opcode = $Instruction::getOpcode();
	switch (_opcode) {
	case $Const::IRETURN:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::LRETURN:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::FRETURN:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::DRETURN:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::ARETURN:
		{
			$init($Type);
			return $Type::OBJECT;
		}
	case $Const::RETURN:
		{
			$init($Type);
			return $Type::VOID;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Unknown type "_s, $$str(_opcode)}));
		}
	}
}

$ClassArray* ReturnInstruction::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::ILLEGAL_MONITOR_STATE});
}

$Type* ReturnInstruction::getType($ConstantPoolGen* cp) {
	return getType();
}

ReturnInstruction::ReturnInstruction() {
}

$Class* ReturnInstruction::load$($String* name, bool initialize) {
	$loadClass(ReturnInstruction, name, initialize, &_ReturnInstruction_ClassInfo_, allocate$ReturnInstruction);
	return class$;
}

$Class* ReturnInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com