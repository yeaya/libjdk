#include <com/sun/org/apache/bcel/internal/generic/MONITORENTER.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef MONITORENTER
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

$MethodInfo _MONITORENTER_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MONITORENTER, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MONITORENTER, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(MONITORENTER, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MONITORENTER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MONITORENTER",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_MONITORENTER_MethodInfo_
};

$Object* allocate$MONITORENTER($Class* clazz) {
	return $of($alloc(MONITORENTER));
}

$String* MONITORENTER::toString() {
	 return this->$Instruction::toString();
}

int32_t MONITORENTER::consumeStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::consumeStack(cpg);
}

bool MONITORENTER::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t MONITORENTER::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* MONITORENTER::clone() {
	 return this->$Instruction::clone();
}

void MONITORENTER::finalize() {
	this->$Instruction::finalize();
}

void MONITORENTER::init$() {
	$Instruction::init$($Const::MONITORENTER, (int16_t)1);
}

$ClassArray* MONITORENTER::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::NULL_POINTER_EXCEPTION});
}

void MONITORENTER::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitStackConsumer(this);
	v->visitMONITORENTER(this);
}

MONITORENTER::MONITORENTER() {
}

$Class* MONITORENTER::load$($String* name, bool initialize) {
	$loadClass(MONITORENTER, name, initialize, &_MONITORENTER_ClassInfo_, allocate$MONITORENTER);
	return class$;
}

$Class* MONITORENTER::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com