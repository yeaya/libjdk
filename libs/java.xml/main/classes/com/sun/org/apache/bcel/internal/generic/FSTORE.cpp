#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef FSTORE
#undef FSTORE_0

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

void FSTORE::init$() {
	$StoreInstruction::init$($Const::FSTORE, $Const::FSTORE_0);
}

void FSTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::FSTORE, $Const::FSTORE_0, n);
}

void FSTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitFSTORE(this);
}

FSTORE::FSTORE() {
}

$Class* FSTORE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FSTORE, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(FSTORE, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FSTORE, accept, void, $Visitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.FSTORE",
		"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FSTORE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FSTORE));
	});
	return class$;
}

$Class* FSTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com