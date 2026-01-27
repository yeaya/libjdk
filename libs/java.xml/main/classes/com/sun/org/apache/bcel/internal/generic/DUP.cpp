#include <com/sun/org/apache/bcel/internal/generic/DUP.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DUP

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
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

$MethodInfo _DUP_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DUP, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DUP, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DUP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DUP",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction",
	nullptr,
	_DUP_MethodInfo_
};

$Object* allocate$DUP($Class* clazz) {
	return $of($alloc(DUP));
}

$String* DUP::toString() {
	 return this->$StackInstruction::toString();
}

int32_t DUP::produceStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::produceStack(cpg);
}

bool DUP::equals(Object$* that) {
	 return this->$StackInstruction::equals(that);
}

int32_t DUP::hashCode() {
	 return this->$StackInstruction::hashCode();
}

$Object* DUP::clone() {
	 return this->$StackInstruction::clone();
}

void DUP::finalize() {
	this->$StackInstruction::finalize();
}

void DUP::init$() {
	$StackInstruction::init$($Const::DUP);
}

void DUP::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitStackInstruction(this);
	v->visitDUP(this);
}

DUP::DUP() {
}

$Class* DUP::load$($String* name, bool initialize) {
	$loadClass(DUP, name, initialize, &_DUP_ClassInfo_, allocate$DUP);
	return class$;
}

$Class* DUP::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com