#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef GETFIELD
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef NULL_POINTER_EXCEPTION

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _GETFIELD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(GETFIELD, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(GETFIELD, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(GETFIELD, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GETFIELD, getExceptions, $ClassArray*)},
	{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(GETFIELD, produceStack, int32_t, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GETFIELD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.GETFIELD",
	"com.sun.org.apache.bcel.internal.generic.FieldInstruction",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_GETFIELD_MethodInfo_
};

$Object* allocate$GETFIELD($Class* clazz) {
	return $of($alloc(GETFIELD));
}

$String* GETFIELD::toString() {
	 return this->$FieldInstruction::toString();
}

int32_t GETFIELD::consumeStack($ConstantPoolGen* cpg) {
	 return this->$FieldInstruction::consumeStack(cpg);
}

bool GETFIELD::equals(Object$* that) {
	 return this->$FieldInstruction::equals(that);
}

int32_t GETFIELD::hashCode() {
	 return this->$FieldInstruction::hashCode();
}

$Object* GETFIELD::clone() {
	 return this->$FieldInstruction::clone();
}

void GETFIELD::finalize() {
	this->$FieldInstruction::finalize();
}

void GETFIELD::init$() {
	$FieldInstruction::init$();
}

void GETFIELD::init$(int32_t index) {
	$FieldInstruction::init$($Const::GETFIELD, index);
}

int32_t GETFIELD::produceStack($ConstantPoolGen* cpg) {
	return getFieldSize(cpg);
}

$ClassArray* GETFIELD::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::NULL_POINTER_EXCEPTION,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR
	}));
}

void GETFIELD::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitFieldInstruction(this);
	v->visitGETFIELD(this);
}

GETFIELD::GETFIELD() {
}

$Class* GETFIELD::load$($String* name, bool initialize) {
	$loadClass(GETFIELD, name, initialize, &_GETFIELD_ClassInfo_, allocate$GETFIELD);
	return class$;
}

$Class* GETFIELD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com