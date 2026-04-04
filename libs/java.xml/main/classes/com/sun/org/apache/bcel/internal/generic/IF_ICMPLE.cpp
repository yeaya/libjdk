#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPLE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $IF_ICMPGT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT;
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

void IF_ICMPLE::init$() {
	$IfInstruction::init$();
}

void IF_ICMPLE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPLE, target);
}

$IfInstruction* IF_ICMPLE::negate() {
	return $new($IF_ICMPGT, $($IfInstruction::getTarget()));
}

void IF_ICMPLE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPLE(this);
}

IF_ICMPLE::IF_ICMPLE() {
}

$Class* IF_ICMPLE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IF_ICMPLE, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPLE, init$, void, $InstructionHandle*)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPLE, accept, void, $Visitor*)},
		{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPLE, negate, $IfInstruction*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.IF_ICMPLE",
		"com.sun.org.apache.bcel.internal.generic.IfInstruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IF_ICMPLE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IF_ICMPLE));
	});
	return class$;
}

$Class* IF_ICMPLE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com