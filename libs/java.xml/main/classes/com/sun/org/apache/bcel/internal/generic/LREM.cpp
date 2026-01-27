#include <com/sun/org/apache/bcel/internal/generic/LREM.h>

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
#undef LREM

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

$MethodInfo _LREM_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LREM, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LREM, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(LREM, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LREM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LREM",
	"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_LREM_MethodInfo_
};

$Object* allocate$LREM($Class* clazz) {
	return $of($alloc(LREM));
}

$String* LREM::toString() {
	 return this->$ArithmeticInstruction::toString();
}

bool LREM::equals(Object$* that) {
	 return this->$ArithmeticInstruction::equals(that);
}

int32_t LREM::hashCode() {
	 return this->$ArithmeticInstruction::hashCode();
}

$Object* LREM::clone() {
	 return this->$ArithmeticInstruction::clone();
}

void LREM::finalize() {
	this->$ArithmeticInstruction::finalize();
}

void LREM::init$() {
	$ArithmeticInstruction::init$($Const::LREM);
}

$ClassArray* LREM::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::ARITHMETIC_EXCEPTION});
}

void LREM::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitLREM(this);
}

LREM::LREM() {
}

$Class* LREM::load$($String* name, bool initialize) {
	$loadClass(LREM, name, initialize, &_LREM_ClassInfo_, allocate$LREM);
	return class$;
}

$Class* LREM::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com