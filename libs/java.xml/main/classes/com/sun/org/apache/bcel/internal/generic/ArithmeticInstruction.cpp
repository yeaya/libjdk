#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef DADD
#undef DDIV
#undef DMUL
#undef DNEG
#undef DOUBLE
#undef DREM
#undef DSUB
#undef FADD
#undef FDIV
#undef FLOAT
#undef FMUL
#undef FNEG
#undef FREM
#undef FSUB
#undef IADD
#undef IAND
#undef IDIV
#undef IMUL
#undef INEG
#undef INT
#undef IOR
#undef IREM
#undef ISHL
#undef ISHR
#undef ISUB
#undef IUSHR
#undef IXOR
#undef LADD
#undef LAND
#undef LDIV
#undef LMUL
#undef LNEG
#undef LONG
#undef LOR
#undef LREM
#undef LSHL
#undef LSHR
#undef LSUB
#undef LUSHR
#undef LXOR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
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

$MethodInfo _ArithmeticInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ArithmeticInstruction, init$, void)},
	{"<init>", "(S)V", nullptr, $PROTECTED, $method(ArithmeticInstruction, init$, void, int16_t)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ArithmeticInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArithmeticInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_ArithmeticInstruction_MethodInfo_
};

$Object* allocate$ArithmeticInstruction($Class* clazz) {
	return $of($alloc(ArithmeticInstruction));
}

$String* ArithmeticInstruction::toString() {
	 return this->$Instruction::toString();
}

int32_t ArithmeticInstruction::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

int32_t ArithmeticInstruction::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool ArithmeticInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ArithmeticInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ArithmeticInstruction::clone() {
	 return this->$Instruction::clone();
}

void ArithmeticInstruction::finalize() {
	this->$Instruction::finalize();
}

void ArithmeticInstruction::init$() {
	$Instruction::init$();
}

void ArithmeticInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$Type* ArithmeticInstruction::getType($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int16_t _opcode = $Instruction::getOpcode();
	switch (_opcode) {
	case $Const::DADD:
		{}
	case $Const::DDIV:
		{}
	case $Const::DMUL:
		{}
	case $Const::DNEG:
		{}
	case $Const::DREM:
		{}
	case $Const::DSUB:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::FADD:
		{}
	case $Const::FDIV:
		{}
	case $Const::FMUL:
		{}
	case $Const::FNEG:
		{}
	case $Const::FREM:
		{}
	case $Const::FSUB:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::IADD:
		{}
	case $Const::IAND:
		{}
	case $Const::IDIV:
		{}
	case $Const::IMUL:
		{}
	case $Const::INEG:
		{}
	case $Const::IOR:
		{}
	case $Const::IREM:
		{}
	case $Const::ISHL:
		{}
	case $Const::ISHR:
		{}
	case $Const::ISUB:
		{}
	case $Const::IUSHR:
		{}
	case $Const::IXOR:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::LADD:
		{}
	case $Const::LAND:
		{}
	case $Const::LDIV:
		{}
	case $Const::LMUL:
		{}
	case $Const::LNEG:
		{}
	case $Const::LOR:
		{}
	case $Const::LREM:
		{}
	case $Const::LSHL:
		{}
	case $Const::LSHR:
		{}
	case $Const::LSUB:
		{}
	case $Const::LUSHR:
		{}
	case $Const::LXOR:
		{
			$init($Type);
			return $Type::LONG;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Unknown type "_s, $$str(_opcode)}));
		}
	}
}

ArithmeticInstruction::ArithmeticInstruction() {
}

$Class* ArithmeticInstruction::load$($String* name, bool initialize) {
	$loadClass(ArithmeticInstruction, name, initialize, &_ArithmeticInstruction_ClassInfo_, allocate$ArithmeticInstruction);
	return class$;
}

$Class* ArithmeticInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com