#include <com/sun/org/apache/bcel/internal/generic/DCMPG.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DCMPG
#undef DOUBLE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

$MethodInfo _DCMPG_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DCMPG, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DCMPG, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(DCMPG, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DCMPG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DCMPG",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_DCMPG_MethodInfo_
};

$Object* allocate$DCMPG($Class* clazz) {
	return $of($alloc(DCMPG));
}

$String* DCMPG::toString() {
	 return this->$Instruction::toString();
}

int32_t DCMPG::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

int32_t DCMPG::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool DCMPG::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t DCMPG::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* DCMPG::clone() {
	 return this->$Instruction::clone();
}

void DCMPG::finalize() {
	this->$Instruction::finalize();
}

void DCMPG::init$() {
	$Instruction::init$($Const::DCMPG, (int16_t)1);
}

$Type* DCMPG::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::DOUBLE;
}

void DCMPG::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitDCMPG(this);
}

DCMPG::DCMPG() {
}

$Class* DCMPG::load$($String* name, bool initialize) {
	$loadClass(DCMPG, name, initialize, &_DCMPG_ClassInfo_, allocate$DCMPG);
	return class$;
}

$Class* DCMPG::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com