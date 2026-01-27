#include <com/sun/org/apache/bcel/internal/generic/IRETURN.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IRETURN

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

$MethodInfo _IRETURN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IRETURN, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IRETURN, accept, void, $Visitor*)},
	{}
};

$ClassInfo _IRETURN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IRETURN",
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	nullptr,
	nullptr,
	_IRETURN_MethodInfo_
};

$Object* allocate$IRETURN($Class* clazz) {
	return $of($alloc(IRETURN));
}

void IRETURN::init$() {
	$ReturnInstruction::init$($Const::IRETURN);
}

void IRETURN::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitReturnInstruction(this);
	v->visitIRETURN(this);
}

IRETURN::IRETURN() {
}

$Class* IRETURN::load$($String* name, bool initialize) {
	$loadClass(IRETURN, name, initialize, &_IRETURN_ClassInfo_, allocate$IRETURN);
	return class$;
}

$Class* IRETURN::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com