#include <com/sun/org/apache/bcel/internal/generic/ISHL.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ISHL

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

$MethodInfo _ISHL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ISHL, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ISHL, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ISHL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ISHL",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	nullptr,
	nullptr,
	_ISHL_MethodInfo_
};

$Object* allocate$ISHL($Class* clazz) {
	return $of($alloc(ISHL));
}

void ISHL::init$() {
	$ArithmeticInstruction::init$($Const::ISHL);
}

void ISHL::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitISHL(this);
}

ISHL::ISHL() {
}

$Class* ISHL::load$($String* name, bool initialize) {
	$loadClass(ISHL, name, initialize, &_ISHL_ClassInfo_, allocate$ISHL);
	return class$;
}

$Class* ISHL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com