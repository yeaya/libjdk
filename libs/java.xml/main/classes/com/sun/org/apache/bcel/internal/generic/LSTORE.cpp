#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef LSTORE
#undef LSTORE_0

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

$MethodInfo _LSTORE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LSTORE, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(LSTORE, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LSTORE, accept, void, $Visitor*)},
	{}
};

$ClassInfo _LSTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LSTORE",
	"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
	nullptr,
	nullptr,
	_LSTORE_MethodInfo_
};

$Object* allocate$LSTORE($Class* clazz) {
	return $of($alloc(LSTORE));
}

void LSTORE::init$() {
	$StoreInstruction::init$($Const::LSTORE, $Const::LSTORE_0);
}

void LSTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::LSTORE, $Const::LSTORE_0, n);
}

void LSTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitLSTORE(this);
}

LSTORE::LSTORE() {
}

$Class* LSTORE::load$($String* name, bool initialize) {
	$loadClass(LSTORE, name, initialize, &_LSTORE_ClassInfo_, allocate$LSTORE);
	return class$;
}

$Class* LSTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com