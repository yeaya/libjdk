#include <com/sun/org/apache/bcel/internal/generic/FCONST.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef FCONST
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FLOAT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ConstantPushInstruction = ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _FCONST_FieldInfo_[] = {
	{"value", "F", nullptr, $PRIVATE, $field(FCONST, value)},
	{}
};

$MethodInfo _FCONST_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(FCONST, init$, void)},
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(FCONST, init$, void, float)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FCONST, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(FCONST, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(FCONST, getValue, $Number*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FCONST_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FCONST",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	_FCONST_FieldInfo_,
	_FCONST_MethodInfo_
};

$Object* allocate$FCONST($Class* clazz) {
	return $of($alloc(FCONST));
}

$String* FCONST::toString() {
	 return this->$Instruction::toString();
}

int32_t FCONST::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool FCONST::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t FCONST::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* FCONST::clone() {
	 return this->$Instruction::clone();
}

void FCONST::finalize() {
	this->$Instruction::finalize();
}

void FCONST::init$() {
	$Instruction::init$();
}

void FCONST::init$(float f) {
	$useLocalCurrentObjectStackCache();
	$Instruction::init$($Const::FCONST_0, (int16_t)1);
	if (f == 0.0) {
		$Instruction::setOpcode($Const::FCONST_0);
	} else if (f == 1.0) {
		$Instruction::setOpcode($Const::FCONST_1);
	} else if (f == 2.0) {
		$Instruction::setOpcode($Const::FCONST_2);
	} else {
		$throwNew($ClassGenException, $$str({"FCONST can be used only for 0.0, 1.0 and 2.0: "_s, $$str(f)}));
	}
	this->value = f;
}

$Number* FCONST::getValue() {
	return $Float::valueOf(this->value);
}

$Type* FCONST::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::FLOAT;
}

void FCONST::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitFCONST(this);
}

FCONST::FCONST() {
}

$Class* FCONST::load$($String* name, bool initialize) {
	$loadClass(FCONST, name, initialize, &_FCONST_ClassInfo_, allocate$FCONST);
	return class$;
}

$Class* FCONST::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com