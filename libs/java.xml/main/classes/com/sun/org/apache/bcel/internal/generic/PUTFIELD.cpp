#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef NULL_POINTER_EXCEPTION
#undef PUTFIELD

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $PopInstruction = ::com::sun::org::apache::bcel::internal::generic::PopInstruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _PUTFIELD_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(PUTFIELD, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(PUTFIELD, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(PUTFIELD, accept, void, $Visitor*)},
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(PUTFIELD, consumeStack, int32_t, $ConstantPoolGen*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(PUTFIELD, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PUTFIELD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.PUTFIELD",
	"com.sun.org.apache.bcel.internal.generic.FieldInstruction",
	"com.sun.org.apache.bcel.internal.generic.PopInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_PUTFIELD_MethodInfo_
};

$Object* allocate$PUTFIELD($Class* clazz) {
	return $of($alloc(PUTFIELD));
}

$String* PUTFIELD::toString() {
	 return this->$FieldInstruction::toString();
}

bool PUTFIELD::equals(Object$* that) {
	 return this->$FieldInstruction::equals(that);
}

int32_t PUTFIELD::hashCode() {
	 return this->$FieldInstruction::hashCode();
}

$Object* PUTFIELD::clone() {
	 return this->$FieldInstruction::clone();
}

void PUTFIELD::finalize() {
	this->$FieldInstruction::finalize();
}

void PUTFIELD::init$() {
	$FieldInstruction::init$();
}

void PUTFIELD::init$(int32_t index) {
	$FieldInstruction::init$($Const::PUTFIELD, index);
}

int32_t PUTFIELD::consumeStack($ConstantPoolGen* cpg) {
	return getFieldSize(cpg) + 1;
}

$ClassArray* PUTFIELD::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::NULL_POINTER_EXCEPTION,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR
	}));
}

void PUTFIELD::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitStackConsumer(this);
	v->visitPopInstruction(this);
	v->visitTypedInstruction(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitFieldInstruction(this);
	v->visitPUTFIELD(this);
}

PUTFIELD::PUTFIELD() {
}

$Class* PUTFIELD::load$($String* name, bool initialize) {
	$loadClass(PUTFIELD, name, initialize, &_PUTFIELD_ClassInfo_, allocate$PUTFIELD);
	return class$;
}

$Class* PUTFIELD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com