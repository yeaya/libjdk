#include <com/sun/org/apache/bcel/internal/generic/DSUB.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DSUB

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

$MethodInfo _DSUB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSUB, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DSUB, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DSUB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DSUB",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	nullptr,
	nullptr,
	_DSUB_MethodInfo_
};

$Object* allocate$DSUB($Class* clazz) {
	return $of($alloc(DSUB));
}

void DSUB::init$() {
	$ArithmeticInstruction::init$($Const::DSUB);
}

void DSUB::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitDSUB(this);
}

DSUB::DSUB() {
}

$Class* DSUB::load$($String* name, bool initialize) {
	$loadClass(DSUB, name, initialize, &_DSUB_ClassInfo_, allocate$DSUB);
	return class$;
}

$Class* DSUB::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com