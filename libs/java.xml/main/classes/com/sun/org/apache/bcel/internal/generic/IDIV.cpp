#include <com/sun/org/apache/bcel/internal/generic/IDIV.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ARITHMETIC_EXCEPTION
#undef IDIV

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
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

$MethodInfo _IDIV_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IDIV, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IDIV, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(IDIV, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IDIV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IDIV",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_IDIV_MethodInfo_
};

$Object* allocate$IDIV($Class* clazz) {
	return $of($alloc(IDIV));
}

$String* IDIV::toString() {
	 return this->$ArithmeticInstruction::toString();
}

bool IDIV::equals(Object$* that) {
	 return this->$ArithmeticInstruction::equals(that);
}

int32_t IDIV::hashCode() {
	 return this->$ArithmeticInstruction::hashCode();
}

$Object* IDIV::clone() {
	 return this->$ArithmeticInstruction::clone();
}

void IDIV::finalize() {
	this->$ArithmeticInstruction::finalize();
}

void IDIV::init$() {
	$ArithmeticInstruction::init$($Const::IDIV);
}

$ClassArray* IDIV::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::ARITHMETIC_EXCEPTION});
}

void IDIV::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitIDIV(this);
}

IDIV::IDIV() {
}

$Class* IDIV::load$($String* name, bool initialize) {
	$loadClass(IDIV, name, initialize, &_IDIV_ClassInfo_, allocate$IDIV);
	return class$;
}

$Class* IDIV::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com