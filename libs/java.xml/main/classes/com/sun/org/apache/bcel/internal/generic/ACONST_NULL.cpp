#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ACONST_NULL
#undef NULL

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
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

$MethodInfo _ACONST_NULL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ACONST_NULL, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ACONST_NULL, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ACONST_NULL, getType, $Type*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ACONST_NULL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ACONST_NULL",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.TypedInstruction",
	nullptr,
	_ACONST_NULL_MethodInfo_
};

$Object* allocate$ACONST_NULL($Class* clazz) {
	return $of($alloc(ACONST_NULL));
}

$String* ACONST_NULL::toString() {
	 return this->$Instruction::toString();
}

int32_t ACONST_NULL::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool ACONST_NULL::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ACONST_NULL::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ACONST_NULL::clone() {
	 return this->$Instruction::clone();
}

void ACONST_NULL::finalize() {
	this->$Instruction::finalize();
}

void ACONST_NULL::init$() {
	$Instruction::init$($Const::ACONST_NULL, (int16_t)1);
}

$Type* ACONST_NULL::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::NULL;
}

void ACONST_NULL::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitTypedInstruction(this);
	v->visitACONST_NULL(this);
}

ACONST_NULL::ACONST_NULL() {
}

$Class* ACONST_NULL::load$($String* name, bool initialize) {
	$loadClass(ACONST_NULL, name, initialize, &_ACONST_NULL_ClassInfo_, allocate$ACONST_NULL);
	return class$;
}

$Class* ACONST_NULL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com