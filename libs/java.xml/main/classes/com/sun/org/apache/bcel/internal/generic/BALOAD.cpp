#include <com/sun/org/apache/bcel/internal/generic/BALOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef BALOAD

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

$MethodInfo _BALOAD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(BALOAD, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(BALOAD, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.BALOAD",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_BALOAD_MethodInfo_
};

$Object* allocate$BALOAD($Class* clazz) {
	return $of($alloc(BALOAD));
}

$String* BALOAD::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t BALOAD::produceStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::produceStack(cpg);
}

bool BALOAD::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t BALOAD::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* BALOAD::clone() {
	 return this->$ArrayInstruction::clone();
}

void BALOAD::finalize() {
	this->$ArrayInstruction::finalize();
}

void BALOAD::init$() {
	$ArrayInstruction::init$($Const::BALOAD);
}

void BALOAD::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitBALOAD(this);
}

BALOAD::BALOAD() {
}

$Class* BALOAD::load$($String* name, bool initialize) {
	$loadClass(BALOAD, name, initialize, &_BALOAD_ClassInfo_, allocate$BALOAD);
	return class$;
}

$Class* BALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com