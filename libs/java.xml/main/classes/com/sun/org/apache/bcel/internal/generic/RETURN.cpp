#include <com/sun/org/apache/bcel/internal/generic/RETURN.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef RETURN

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

$MethodInfo _RETURN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RETURN, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(RETURN, accept, void, $Visitor*)},
	{}
};

$ClassInfo _RETURN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.RETURN",
	"com.sun.org.apache.bcel.internal.generic.ReturnInstruction",
	nullptr,
	nullptr,
	_RETURN_MethodInfo_
};

$Object* allocate$RETURN($Class* clazz) {
	return $of($alloc(RETURN));
}

void RETURN::init$() {
	$ReturnInstruction::init$($Const::RETURN);
}

void RETURN::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitReturnInstruction(this);
	v->visitRETURN(this);
}

RETURN::RETURN() {
}

$Class* RETURN::load$($String* name, bool initialize) {
	$loadClass(RETURN, name, initialize, &_RETURN_ClassInfo_, allocate$RETURN);
	return class$;
}

$Class* RETURN::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com