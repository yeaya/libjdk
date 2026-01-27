#include <com/sun/org/apache/bcel/internal/generic/IALOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IALOAD

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
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

$MethodInfo _IALOAD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IALOAD, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IALOAD, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IALOAD",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_IALOAD_MethodInfo_
};

$Object* allocate$IALOAD($Class* clazz) {
	return $of($alloc(IALOAD));
}

$String* IALOAD::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t IALOAD::produceStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::produceStack(cpg);
}

bool IALOAD::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t IALOAD::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* IALOAD::clone() {
	 return this->$ArrayInstruction::clone();
}

void IALOAD::finalize() {
	this->$ArrayInstruction::finalize();
}

void IALOAD::init$() {
	$ArrayInstruction::init$($Const::IALOAD);
}

void IALOAD::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitIALOAD(this);
}

IALOAD::IALOAD() {
}

$Class* IALOAD::load$($String* name, bool initialize) {
	$loadClass(IALOAD, name, initialize, &_IALOAD_ClassInfo_, allocate$IALOAD);
	return class$;
}

$Class* IALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com