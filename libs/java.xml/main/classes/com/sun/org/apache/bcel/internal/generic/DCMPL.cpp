#include <com/sun/org/apache/bcel/internal/generic/DCMPL.h>

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

#undef DCMPL
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

$MethodInfo _DCMPL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DCMPL, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DCMPL, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(DCMPL, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DCMPL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DCMPL",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_DCMPL_MethodInfo_
};

$Object* allocate$DCMPL($Class* clazz) {
	return $of($alloc(DCMPL));
}

$String* DCMPL::toString() {
	 return this->$Instruction::toString();
}

int32_t DCMPL::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

int32_t DCMPL::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool DCMPL::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t DCMPL::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* DCMPL::clone() {
	 return this->$Instruction::clone();
}

void DCMPL::finalize() {
	this->$Instruction::finalize();
}

void DCMPL::init$() {
	$Instruction::init$($Const::DCMPL, (int16_t)1);
}

$Type* DCMPL::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::DOUBLE;
}

void DCMPL::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitDCMPL(this);
}

DCMPL::DCMPL() {
}

$Class* DCMPL::load$($String* name, bool initialize) {
	$loadClass(DCMPL, name, initialize, &_DCMPL_ClassInfo_, allocate$DCMPL);
	return class$;
}

$Class* DCMPL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com