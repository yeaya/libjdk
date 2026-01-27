#include <com/sun/org/apache/bcel/internal/generic/LSHR.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef LSHR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
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

$MethodInfo _LSHR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LSHR, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LSHR, accept, void, $Visitor*)},
	{}
};

$ClassInfo _LSHR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LSHR",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	nullptr,
	nullptr,
	_LSHR_MethodInfo_
};

$Object* allocate$LSHR($Class* clazz) {
	return $of($alloc(LSHR));
}

void LSHR::init$() {
	$ArithmeticInstruction::init$($Const::LSHR);
}

void LSHR::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitLSHR(this);
}

LSHR::LSHR() {
}

$Class* LSHR::load$($String* name, bool initialize) {
	$loadClass(LSHR, name, initialize, &_LSHR_ClassInfo_, allocate$LSHR);
	return class$;
}

$Class* LSHR::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com