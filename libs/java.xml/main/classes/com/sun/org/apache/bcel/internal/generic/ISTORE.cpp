#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ISTORE
#undef ISTORE_0

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

$MethodInfo _ISTORE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ISTORE, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ISTORE, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ISTORE, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ISTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ISTORE",
	"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
	nullptr,
	nullptr,
	_ISTORE_MethodInfo_
};

$Object* allocate$ISTORE($Class* clazz) {
	return $of($alloc(ISTORE));
}

void ISTORE::init$() {
	$StoreInstruction::init$($Const::ISTORE, $Const::ISTORE_0);
}

void ISTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::ISTORE, $Const::ISTORE_0, n);
}

void ISTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitISTORE(this);
}

ISTORE::ISTORE() {
}

$Class* ISTORE::load$($String* name, bool initialize) {
	$loadClass(ISTORE, name, initialize, &_ISTORE_ClassInfo_, allocate$ISTORE);
	return class$;
}

$Class* ISTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com