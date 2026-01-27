#include <com/sun/org/apache/bcel/internal/generic/LAND.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef LAND

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

$MethodInfo _LAND_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LAND, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LAND, accept, void, $Visitor*)},
	{}
};

$ClassInfo _LAND_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LAND",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	nullptr,
	nullptr,
	_LAND_MethodInfo_
};

$Object* allocate$LAND($Class* clazz) {
	return $of($alloc(LAND));
}

void LAND::init$() {
	$ArithmeticInstruction::init$($Const::LAND);
}

void LAND::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitLAND(this);
}

LAND::LAND() {
}

$Class* LAND::load$($String* name, bool initialize) {
	$loadClass(LAND, name, initialize, &_LAND_ClassInfo_, allocate$LAND);
	return class$;
}

$Class* LAND::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com