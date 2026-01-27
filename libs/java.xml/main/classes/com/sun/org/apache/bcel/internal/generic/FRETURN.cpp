#include <com/sun/org/apache/bcel/internal/generic/FRETURN.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef FRETURN

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

$MethodInfo _FRETURN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FRETURN, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FRETURN, accept, void, $Visitor*)},
	{}
};

$ClassInfo _FRETURN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FRETURN",
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	nullptr,
	nullptr,
	_FRETURN_MethodInfo_
};

$Object* allocate$FRETURN($Class* clazz) {
	return $of($alloc(FRETURN));
}

void FRETURN::init$() {
	$ReturnInstruction::init$($Const::FRETURN);
}

void FRETURN::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitReturnInstruction(this);
	v->visitFRETURN(this);
}

FRETURN::FRETURN() {
}

$Class* FRETURN::load$($String* name, bool initialize) {
	$loadClass(FRETURN, name, initialize, &_FRETURN_ClassInfo_, allocate$FRETURN);
	return class$;
}

$Class* FRETURN::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com