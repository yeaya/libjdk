#include <com/sun/org/apache/bcel/internal/generic/MONITOREXIT.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef MONITOREXIT
#undef NULL_POINTER_EXCEPTION

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _MONITOREXIT_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MONITOREXIT, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MONITOREXIT, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(MONITOREXIT, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MONITOREXIT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MONITOREXIT",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_MONITOREXIT_MethodInfo_
};

$Object* allocate$MONITOREXIT($Class* clazz) {
	return $of($alloc(MONITOREXIT));
}

$String* MONITOREXIT::toString() {
	 return this->$Instruction::toString();
}

int32_t MONITOREXIT::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

bool MONITOREXIT::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t MONITOREXIT::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* MONITOREXIT::clone() {
	 return this->$Instruction::clone();
}

void MONITOREXIT::finalize() {
	this->$Instruction::finalize();
}

void MONITOREXIT::init$() {
	$Instruction::init$($Const::MONITOREXIT, (int16_t)1);
}

$ClassArray* MONITOREXIT::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::NULL_POINTER_EXCEPTION});
}

void MONITOREXIT::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitStackConsumer(this);
	v->visitMONITOREXIT(this);
}

MONITOREXIT::MONITOREXIT() {
}

$Class* MONITOREXIT::load$($String* name, bool initialize) {
	$loadClass(MONITOREXIT, name, initialize, &_MONITOREXIT_ClassInfo_, allocate$MONITOREXIT);
	return class$;
}

$Class* MONITOREXIT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com