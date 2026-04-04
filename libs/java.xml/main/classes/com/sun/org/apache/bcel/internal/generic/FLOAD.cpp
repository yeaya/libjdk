#include <com/sun/org/apache/bcel/internal/generic/FLOAD.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef FLOAD
#undef FLOAD_0

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
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

void FLOAD::init$() {
	$LoadInstruction::init$($Const::FLOAD, $Const::FLOAD_0);
}

void FLOAD::init$(int32_t n) {
	$LoadInstruction::init$($Const::FLOAD, $Const::FLOAD_0, n);
}

void FLOAD::accept($Visitor* v) {
	$LoadInstruction::accept(v);
	$nc(v)->visitFLOAD(this);
}

FLOAD::FLOAD() {
}

$Class* FLOAD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FLOAD, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(FLOAD, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FLOAD, accept, void, $Visitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.FLOAD",
		"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FLOAD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FLOAD));
	});
	return class$;
}

$Class* FLOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com