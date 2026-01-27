#include <com/sun/org/apache/bcel/internal/generic/SWAP.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef SWAP

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
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

$MethodInfo _SWAP_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SWAP, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(SWAP, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SWAP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.SWAP",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_SWAP_MethodInfo_
};

$Object* allocate$SWAP($Class* clazz) {
	return $of($alloc(SWAP));
}

$String* SWAP::toString() {
	 return this->$StackInstruction::toString();
}

int32_t SWAP::consumeStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::consumeStack(cpg);
}

int32_t SWAP::produceStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::produceStack(cpg);
}

bool SWAP::equals(Object$* that) {
	 return this->$StackInstruction::equals(that);
}

int32_t SWAP::hashCode() {
	 return this->$StackInstruction::hashCode();
}

$Object* SWAP::clone() {
	 return this->$StackInstruction::clone();
}

void SWAP::finalize() {
	this->$StackInstruction::finalize();
}

void SWAP::init$() {
	$StackInstruction::init$($Const::SWAP);
}

void SWAP::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitStackInstruction(this);
	v->visitSWAP(this);
}

SWAP::SWAP() {
}

$Class* SWAP::load$($String* name, bool initialize) {
	$loadClass(SWAP, name, initialize, &_SWAP_ClassInfo_, allocate$SWAP);
	return class$;
}

$Class* SWAP::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com