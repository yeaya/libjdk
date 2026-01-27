#include <com/sun/org/apache/bcel/internal/generic/LALOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef LALOAD

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

$MethodInfo _LALOAD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LALOAD, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LALOAD, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LALOAD",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_LALOAD_MethodInfo_
};

$Object* allocate$LALOAD($Class* clazz) {
	return $of($alloc(LALOAD));
}

$String* LALOAD::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t LALOAD::produceStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::produceStack(cpg);
}

bool LALOAD::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t LALOAD::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* LALOAD::clone() {
	 return this->$ArrayInstruction::clone();
}

void LALOAD::finalize() {
	this->$ArrayInstruction::finalize();
}

void LALOAD::init$() {
	$ArrayInstruction::init$($Const::LALOAD);
}

void LALOAD::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitLALOAD(this);
}

LALOAD::LALOAD() {
}

$Class* LALOAD::load$($String* name, bool initialize) {
	$loadClass(LALOAD, name, initialize, &_LALOAD_ClassInfo_, allocate$LALOAD);
	return class$;
}

$Class* LALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com