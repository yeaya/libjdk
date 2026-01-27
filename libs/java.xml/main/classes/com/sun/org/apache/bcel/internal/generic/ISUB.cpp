#include <com/sun/org/apache/bcel/internal/generic/ISUB.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ISUB

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

$MethodInfo _ISUB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ISUB, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ISUB, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ISUB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ISUB",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	nullptr,
	nullptr,
	_ISUB_MethodInfo_
};

$Object* allocate$ISUB($Class* clazz) {
	return $of($alloc(ISUB));
}

void ISUB::init$() {
	$ArithmeticInstruction::init$($Const::ISUB);
}

void ISUB::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitISUB(this);
}

ISUB::ISUB() {
}

$Class* ISUB::load$($String* name, bool initialize) {
	$loadClass(ISUB, name, initialize, &_ISUB_ClassInfo_, allocate$ISUB);
	return class$;
}

$Class* ISUB::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com