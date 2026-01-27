#include <com/sun/org/apache/bcel/internal/generic/DUP2.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DUP2

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

$MethodInfo _DUP2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DUP2, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DUP2, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DUP2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DUP2",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction",
	nullptr,
	_DUP2_MethodInfo_
};

$Object* allocate$DUP2($Class* clazz) {
	return $of($alloc(DUP2));
}

$String* DUP2::toString() {
	 return this->$StackInstruction::toString();
}

int32_t DUP2::produceStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::produceStack(cpg);
}

bool DUP2::equals(Object$* that) {
	 return this->$StackInstruction::equals(that);
}

int32_t DUP2::hashCode() {
	 return this->$StackInstruction::hashCode();
}

$Object* DUP2::clone() {
	 return this->$StackInstruction::clone();
}

void DUP2::finalize() {
	this->$StackInstruction::finalize();
}

void DUP2::init$() {
	$StackInstruction::init$($Const::DUP2);
}

void DUP2::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitStackInstruction(this);
	v->visitDUP2(this);
}

DUP2::DUP2() {
}

$Class* DUP2::load$($String* name, bool initialize) {
	$loadClass(DUP2, name, initialize, &_DUP2_ClassInfo_, allocate$DUP2);
	return class$;
}

$Class* DUP2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com