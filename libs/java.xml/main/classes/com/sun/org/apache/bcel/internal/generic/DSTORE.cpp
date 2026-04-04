#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DSTORE
#undef DSTORE_0

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
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

void DSTORE::init$() {
	$StoreInstruction::init$($Const::DSTORE, $Const::DSTORE_0);
}

void DSTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::DSTORE, $Const::DSTORE_0, n);
}

void DSTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitDSTORE(this);
}

DSTORE::DSTORE() {
}

$Class* DSTORE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DSTORE, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(DSTORE, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DSTORE, accept, void, $Visitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.DSTORE",
		"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DSTORE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DSTORE));
	});
	return class$;
}

$Class* DSTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com