#include <com/sun/org/apache/bcel/internal/generic/AALOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef AALOAD

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

$MethodInfo _AALOAD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AALOAD, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(AALOAD, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.AALOAD",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_AALOAD_MethodInfo_
};

$Object* allocate$AALOAD($Class* clazz) {
	return $of($alloc(AALOAD));
}

$String* AALOAD::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t AALOAD::produceStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::produceStack(cpg);
}

bool AALOAD::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t AALOAD::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* AALOAD::clone() {
	 return this->$ArrayInstruction::clone();
}

void AALOAD::finalize() {
	this->$ArrayInstruction::finalize();
}

void AALOAD::init$() {
	$ArrayInstruction::init$($Const::AALOAD);
}

void AALOAD::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitAALOAD(this);
}

AALOAD::AALOAD() {
}

$Class* AALOAD::load$($String* name, bool initialize) {
	$loadClass(AALOAD, name, initialize, &_AALOAD_ClassInfo_, allocate$AALOAD);
	return class$;
}

$Class* AALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com