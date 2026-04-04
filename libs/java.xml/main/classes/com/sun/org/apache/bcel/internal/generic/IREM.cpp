#include <com/sun/org/apache/bcel/internal/generic/IREM.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ARITHMETIC_EXCEPTION
#undef IREM

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
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

$String* IREM::toString() {
	 return this->$ArithmeticInstruction::toString();
}

bool IREM::equals(Object$* that) {
	 return this->$ArithmeticInstruction::equals(that);
}

int32_t IREM::hashCode() {
	 return this->$ArithmeticInstruction::hashCode();
}

$Object* IREM::clone() {
	 return this->$ArithmeticInstruction::clone();
}

void IREM::finalize() {
	this->$ArithmeticInstruction::finalize();
}

void IREM::init$() {
	$ArithmeticInstruction::init$($Const::IREM);
}

$ClassArray* IREM::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::ARITHMETIC_EXCEPTION});
}

void IREM::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitArithmeticInstruction(this);
	v->visitIREM(this);
}

IREM::IREM() {
}

$Class* IREM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "()V", nullptr, $PUBLIC, $method(IREM, init$, void)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IREM, accept, void, $Visitor*)},
		{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(IREM, getExceptions, $ClassArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.IREM",
		"com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction",
		"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
		nullptr,
		methodInfos$$
	};
	$loadClass(IREM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IREM));
	});
	return class$;
}

$Class* IREM::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com