#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef D2F
#undef D2I
#undef D2L
#undef DOUBLE
#undef F2D
#undef F2I
#undef F2L
#undef FLOAT
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef INT
#undef L2D
#undef L2F
#undef L2I
#undef LONG
#undef SHORT

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

$MethodInfo _ConversionInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ConversionInstruction, init$, void)},
	{"<init>", "(S)V", nullptr, $PROTECTED, $method(ConversionInstruction, init$, void, int16_t)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ConversionInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConversionInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_ConversionInstruction_MethodInfo_
};

$Object* allocate$ConversionInstruction($Class* clazz) {
	return $of($alloc(ConversionInstruction));
}

$String* ConversionInstruction::toString() {
	 return this->$Instruction::toString();
}

int32_t ConversionInstruction::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

int32_t ConversionInstruction::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool ConversionInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ConversionInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ConversionInstruction::clone() {
	 return this->$Instruction::clone();
}

void ConversionInstruction::finalize() {
	this->$Instruction::finalize();
}

void ConversionInstruction::init$() {
	$Instruction::init$();
}

void ConversionInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$Type* ConversionInstruction::getType($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int16_t _opcode = $Instruction::getOpcode();
	switch (_opcode) {
	case $Const::D2I:
		{}
	case $Const::F2I:
		{}
	case $Const::L2I:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::D2F:
		{}
	case $Const::I2F:
		{}
	case $Const::L2F:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::D2L:
		{}
	case $Const::F2L:
		{}
	case $Const::I2L:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::F2D:
		{}
	case $Const::I2D:
		{}
	case $Const::L2D:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::I2B:
		{
			$init($Type);
			return $Type::BYTE;
		}
	case $Const::I2C:
		{
			$init($Type);
			return $Type::CHAR;
		}
	case $Const::I2S:
		{
			$init($Type);
			return $Type::SHORT;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Unknown type "_s, $$str(_opcode)}));
		}
	}
}

ConversionInstruction::ConversionInstruction() {
}

$Class* ConversionInstruction::load$($String* name, bool initialize) {
	$loadClass(ConversionInstruction, name, initialize, &_ConversionInstruction_ClassInfo_, allocate$ConversionInstruction);
	return class$;
}

$Class* ConversionInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com