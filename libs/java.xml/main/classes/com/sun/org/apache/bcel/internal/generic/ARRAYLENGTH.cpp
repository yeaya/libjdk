#include <com/sun/org/apache/bcel/internal/generic/ARRAYLENGTH.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ARRAYLENGTH
#undef NULL_POINTER_EXCEPTION

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
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

$MethodInfo _ARRAYLENGTH_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ARRAYLENGTH, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ARRAYLENGTH, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ARRAYLENGTH, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ARRAYLENGTH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ARRAYLENGTH",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_ARRAYLENGTH_MethodInfo_
};

$Object* allocate$ARRAYLENGTH($Class* clazz) {
	return $of($alloc(ARRAYLENGTH));
}

$String* ARRAYLENGTH::toString() {
	 return this->$Instruction::toString();
}

int32_t ARRAYLENGTH::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

int32_t ARRAYLENGTH::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool ARRAYLENGTH::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ARRAYLENGTH::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ARRAYLENGTH::clone() {
	 return this->$Instruction::clone();
}

void ARRAYLENGTH::finalize() {
	this->$Instruction::finalize();
}

void ARRAYLENGTH::init$() {
	$Instruction::init$($Const::ARRAYLENGTH, (int16_t)1);
}

$ClassArray* ARRAYLENGTH::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::NULL_POINTER_EXCEPTION});
}

void ARRAYLENGTH::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitStackProducer(this);
	v->visitARRAYLENGTH(this);
}

ARRAYLENGTH::ARRAYLENGTH() {
}

$Class* ARRAYLENGTH::load$($String* name, bool initialize) {
	$loadClass(ARRAYLENGTH, name, initialize, &_ARRAYLENGTH_ClassInfo_, allocate$ARRAYLENGTH);
	return class$;
}

$Class* ARRAYLENGTH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com