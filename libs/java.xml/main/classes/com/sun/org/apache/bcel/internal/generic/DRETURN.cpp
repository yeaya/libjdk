#include <com/sun/org/apache/bcel/internal/generic/DRETURN.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DRETURN

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

$MethodInfo _DRETURN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DRETURN, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DRETURN, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DRETURN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DRETURN",
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	nullptr,
	nullptr,
	_DRETURN_MethodInfo_
};

$Object* allocate$DRETURN($Class* clazz) {
	return $of($alloc(DRETURN));
}

void DRETURN::init$() {
	$ReturnInstruction::init$($Const::DRETURN);
}

void DRETURN::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitReturnInstruction(this);
	v->visitDRETURN(this);
}

DRETURN::DRETURN() {
}

$Class* DRETURN::load$($String* name, bool initialize) {
	$loadClass(DRETURN, name, initialize, &_DRETURN_ClassInfo_, allocate$DRETURN);
	return class$;
}

$Class* DRETURN::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com