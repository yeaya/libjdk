#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef GETSTATIC
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
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

$String* GETSTATIC::toString() {
	return this->$FieldInstruction::toString();
}

bool GETSTATIC::equals(Object$* that) {
	return this->$FieldInstruction::equals(that);
}

int32_t GETSTATIC::hashCode() {
	return this->$FieldInstruction::hashCode();
}

$Object* GETSTATIC::clone() {
	return this->$FieldInstruction::clone();
}

void GETSTATIC::finalize() {
	this->$FieldInstruction::finalize();
}

void GETSTATIC::init$() {
	$FieldInstruction::init$();
}

void GETSTATIC::init$(int32_t index) {
	$FieldInstruction::init$($Const::GETSTATIC, index);
}

int32_t GETSTATIC::produceStack($ConstantPoolGen* cpg) {
	return getFieldSize(cpg);
}

$ClassArray* GETSTATIC::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR}));
}

void GETSTATIC::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitFieldInstruction(this);
	v->visitGETSTATIC(this);
}

GETSTATIC::GETSTATIC() {
}

$Class* GETSTATIC::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "()V", nullptr, 0, $method(GETSTATIC, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(GETSTATIC, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(GETSTATIC, accept, void, $Visitor*)},
		{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(GETSTATIC, getExceptions, $ClassArray*)},
		{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(GETSTATIC, produceStack, int32_t, $ConstantPoolGen*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.GETSTATIC",
		"com.sun.org.apache.bcel.internal.generic.FieldInstruction",
		"com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
		nullptr,
		methodInfos$$
	};
	$loadClass(GETSTATIC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GETSTATIC));
	});
	return class$;
}

$Class* GETSTATIC::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com