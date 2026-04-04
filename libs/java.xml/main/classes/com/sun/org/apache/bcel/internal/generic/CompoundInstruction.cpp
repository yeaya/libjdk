#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <jcpp.h>

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* CompoundInstruction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompoundInstruction, getInstructionList, $InstructionList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.CompoundInstruction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CompoundInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompoundInstruction);
	});
	return class$;
}

$Class* CompoundInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com