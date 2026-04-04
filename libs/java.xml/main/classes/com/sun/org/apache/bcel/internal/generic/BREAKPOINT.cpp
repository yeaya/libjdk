#include <com/sun/org/apache/bcel/internal/generic/BREAKPOINT.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef BREAKPOINT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
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

void BREAKPOINT::init$() {
	$Instruction::init$($Const::BREAKPOINT, (int16_t)1);
}

void BREAKPOINT::accept($Visitor* v) {
	$nc(v)->visitBREAKPOINT(this);
}

BREAKPOINT::BREAKPOINT() {
}

$Class* BREAKPOINT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BREAKPOINT, init$, void)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(BREAKPOINT, accept, void, $Visitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.BREAKPOINT",
		"com.sun.org.apache.bcel.internal.generic.Instruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BREAKPOINT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BREAKPOINT);
	});
	return class$;
}

$Class* BREAKPOINT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com