#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ASTORE
#undef ASTORE_0

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

$MethodInfo _ASTORE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ASTORE, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ASTORE, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ASTORE, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ASTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ASTORE",
	"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
	nullptr,
	nullptr,
	_ASTORE_MethodInfo_
};

$Object* allocate$ASTORE($Class* clazz) {
	return $of($alloc(ASTORE));
}

void ASTORE::init$() {
	$StoreInstruction::init$($Const::ASTORE, $Const::ASTORE_0);
}

void ASTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::ASTORE, $Const::ASTORE_0, n);
}

void ASTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitASTORE(this);
}

ASTORE::ASTORE() {
}

$Class* ASTORE::load$($String* name, bool initialize) {
	$loadClass(ASTORE, name, initialize, &_ASTORE_ClassInfo_, allocate$ASTORE);
	return class$;
}

$Class* ASTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com