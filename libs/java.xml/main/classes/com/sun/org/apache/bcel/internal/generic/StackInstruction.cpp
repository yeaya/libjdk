#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef UNKNOWN

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

void StackInstruction::init$() {
	$Instruction::init$();
}

void StackInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$Type* StackInstruction::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::UNKNOWN;
}

StackInstruction::StackInstruction() {
}

$Class* StackInstruction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackInstruction, init$, void)},
		{"<init>", "(S)V", nullptr, $PROTECTED, $method(StackInstruction, init$, void, int16_t)},
		{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(StackInstruction, getType, $Type*, $ConstantPoolGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.StackInstruction",
		"com.sun.org.apache.bcel.internal.generic.Instruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StackInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackInstruction);
	});
	return class$;
}

$Class* StackInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com