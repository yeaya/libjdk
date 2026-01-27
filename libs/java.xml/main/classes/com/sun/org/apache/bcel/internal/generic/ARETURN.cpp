#include <com/sun/org/apache/bcel/internal/generic/ARETURN.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ARETURN

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
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

$MethodInfo _ARETURN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ARETURN, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ARETURN, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ARETURN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ARETURN",
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	nullptr,
	nullptr,
	_ARETURN_MethodInfo_
};

$Object* allocate$ARETURN($Class* clazz) {
	return $of($alloc(ARETURN));
}

void ARETURN::init$() {
	$ReturnInstruction::init$($Const::ARETURN);
}

void ARETURN::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitReturnInstruction(this);
	v->visitARETURN(this);
}

ARETURN::ARETURN() {
}

$Class* ARETURN::load$($String* name, bool initialize) {
	$loadClass(ARETURN, name, initialize, &_ARETURN_ClassInfo_, allocate$ARETURN);
	return class$;
}

$Class* ARETURN::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com