#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef BALOAD
#undef BASTORE
#undef BYTE
#undef CALOAD
#undef CASTORE
#undef CHAR
#undef DALOAD
#undef DASTORE
#undef DOUBLE
#undef EXCS_ARRAY_EXCEPTION
#undef FALOAD
#undef FASTORE
#undef FLOAT
#undef IALOAD
#undef IASTORE
#undef INT
#undef LALOAD
#undef LASTORE
#undef LONG
#undef OBJECT
#undef SALOAD
#undef SASTORE
#undef SHORT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
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

$MethodInfo _ArrayInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ArrayInstruction, init$, void)},
	{"<init>", "(S)V", nullptr, $PROTECTED, $method(ArrayInstruction, init$, void, int16_t)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ArrayInstruction, getExceptions, $ClassArray*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ArrayInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.TypedInstruction",
	nullptr,
	_ArrayInstruction_MethodInfo_
};

$Object* allocate$ArrayInstruction($Class* clazz) {
	return $of($alloc(ArrayInstruction));
}

$String* ArrayInstruction::toString() {
	 return this->$Instruction::toString();
}

bool ArrayInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ArrayInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ArrayInstruction::clone() {
	 return this->$Instruction::clone();
}

void ArrayInstruction::finalize() {
	this->$Instruction::finalize();
}

void ArrayInstruction::init$() {
	$Instruction::init$();
}

void ArrayInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$ClassArray* ArrayInstruction::getExceptions() {
	$init($ExceptionConst$EXCS);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_ARRAY_EXCEPTION, $$new($ClassArray, 0));
}

$Type* ArrayInstruction::getType($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int16_t _opcode = $Instruction::getOpcode();
	switch (_opcode) {
	case $Const::IALOAD:
		{}
	case $Const::IASTORE:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::CALOAD:
		{}
	case $Const::CASTORE:
		{
			$init($Type);
			return $Type::CHAR;
		}
	case $Const::BALOAD:
		{}
	case $Const::BASTORE:
		{
			$init($Type);
			return $Type::BYTE;
		}
	case $Const::SALOAD:
		{}
	case $Const::SASTORE:
		{
			$init($Type);
			return $Type::SHORT;
		}
	case $Const::LALOAD:
		{}
	case $Const::LASTORE:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::DALOAD:
		{}
	case $Const::DASTORE:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::FALOAD:
		{}
	case $Const::FASTORE:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::AALOAD:
		{}
	case $Const::AASTORE:
		{
			$init($Type);
			return $Type::OBJECT;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Unknown case in switch"_s, $$str(_opcode)}));
		}
	}
}

ArrayInstruction::ArrayInstruction() {
}

$Class* ArrayInstruction::load$($String* name, bool initialize) {
	$loadClass(ArrayInstruction, name, initialize, &_ArrayInstruction_ClassInfo_, allocate$ArrayInstruction);
	return class$;
}

$Class* ArrayInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com