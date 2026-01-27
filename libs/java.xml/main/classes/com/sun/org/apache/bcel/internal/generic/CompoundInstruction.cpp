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

$MethodInfo _CompoundInstruction_MethodInfo_[] = {
	{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompoundInstruction, getInstructionList, $InstructionList*)},
	{}
};

$ClassInfo _CompoundInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.CompoundInstruction",
	nullptr,
	nullptr,
	nullptr,
	_CompoundInstruction_MethodInfo_
};

$Object* allocate$CompoundInstruction($Class* clazz) {
	return $of($alloc(CompoundInstruction));
}

$Class* CompoundInstruction::load$($String* name, bool initialize) {
	$loadClass(CompoundInstruction, name, initialize, &_CompoundInstruction_ClassInfo_, allocate$CompoundInstruction);
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