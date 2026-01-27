#include <com/sun/org/apache/bcel/internal/generic/FALOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef FALOAD

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

$MethodInfo _FALOAD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(FALOAD, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FALOAD, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FALOAD",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_FALOAD_MethodInfo_
};

$Object* allocate$FALOAD($Class* clazz) {
	return $of($alloc(FALOAD));
}

$String* FALOAD::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t FALOAD::produceStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::produceStack(cpg);
}

bool FALOAD::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t FALOAD::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* FALOAD::clone() {
	 return this->$ArrayInstruction::clone();
}

void FALOAD::finalize() {
	this->$ArrayInstruction::finalize();
}

void FALOAD::init$() {
	$ArrayInstruction::init$($Const::FALOAD);
}

void FALOAD::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitFALOAD(this);
}

FALOAD::FALOAD() {
}

$Class* FALOAD::load$($String* name, bool initialize) {
	$loadClass(FALOAD, name, initialize, &_FALOAD_ClassInfo_, allocate$FALOAD);
	return class$;
}

$Class* FALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com