#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFGT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $IFLE = ::com::sun::org::apache::bcel::internal::generic::IFLE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void IFGT::init$() {
	$IfInstruction::init$();
}

void IFGT::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFGT, target);
}

$IfInstruction* IFGT::negate() {
	return $new($IFLE, $($IfInstruction::getTarget()));
}

void IFGT::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFGT(this);
}

IFGT::IFGT() {
}

$Class* IFGT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IFGT, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IFGT, init$, void, $InstructionHandle*)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IFGT, accept, void, $Visitor*)},
		{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IFGT, negate, $IfInstruction*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.IFGT",
		"com.sun.org.apache.bcel.internal.generic.IfInstruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IFGT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IFGT));
	});
	return class$;
}

$Class* IFGT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com