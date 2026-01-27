#include <com/sun/org/apache/bcel/internal/generic/LDIV.h>

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
#undef LDIV

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

$MethodInfo _LDIV_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LDIV, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LDIV, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(LDIV, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LDIV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LDIV",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_LDIV_MethodInfo_
};

$Object* allocate$LDIV($Class* clazz) {
	return $of($alloc(LDIV));
}

$String* LDIV::toString() {
	 return this->$ArithmeticInstruction::toString();
}

bool LDIV::equals(Object$* that) {
	 return this->$ArithmeticInstruction::equals(that);
}

int32_t LDIV::hashCode() {
	 return this->$ArithmeticInstruction::hashCode();
}

$Object* LDIV::clone() {
	 return this->$ArithmeticInstruction::clone();
}

void LDIV::finalize() {
	this->$ArithmeticInstruction::finalize();
}

void LDIV::init$() {
	$ArithmeticInstruction::init$($Const::LDIV);
}

$ClassArray* LDIV::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::ARITHMETIC_EXCEPTION});
}

void LDIV::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitLDIV(this);
}

LDIV::LDIV() {
}

$Class* LDIV::load$($String* name, bool initialize) {
	$loadClass(LDIV, name, initialize, &_LDIV_ClassInfo_, allocate$LDIV);
	return class$;
}

$Class* LDIV::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com