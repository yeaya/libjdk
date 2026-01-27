#include <com/sun/org/apache/bcel/internal/generic/DCONST.h>

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

#undef DCONST
#undef DCONST_0
#undef DCONST_1
#undef DOUBLE

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
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _DCONST_FieldInfo_[] = {
	{"value", "D", nullptr, $PRIVATE, $field(DCONST, value)},
	{}
};

$MethodInfo _DCONST_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(DCONST, init$, void)},
	{"<init>", "(D)V", nullptr, $PUBLIC, $method(DCONST, init$, void, double)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DCONST, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(DCONST, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(DCONST, getValue, $Number*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DCONST_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DCONST",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	_DCONST_FieldInfo_,
	_DCONST_MethodInfo_
};

$Object* allocate$DCONST($Class* clazz) {
	return $of($alloc(DCONST));
}

$String* DCONST::toString() {
	 return this->$Instruction::toString();
}

int32_t DCONST::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool DCONST::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t DCONST::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* DCONST::clone() {
	 return this->$Instruction::clone();
}

void DCONST::finalize() {
	this->$Instruction::finalize();
}

void DCONST::init$() {
	$Instruction::init$();
}

void DCONST::init$(double f) {
	$useLocalCurrentObjectStackCache();
	$Instruction::init$($Const::DCONST_0, (int16_t)1);
	if (f == 0.0) {
		$Instruction::setOpcode($Const::DCONST_0);
	} else if (f == 1.0) {
		$Instruction::setOpcode($Const::DCONST_1);
	} else {
		$throwNew($ClassGenException, $$str({"DCONST can be used only for 0.0 and 1.0: "_s, $$str(f)}));
	}
	this->value = f;
}

$Number* DCONST::getValue() {
	return $Double::valueOf(this->value);
}

$Type* DCONST::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::DOUBLE;
}

void DCONST::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitDCONST(this);
}

DCONST::DCONST() {
}

$Class* DCONST::load$($String* name, bool initialize) {
	$loadClass(DCONST, name, initialize, &_DCONST_ClassInfo_, allocate$DCONST);
	return class$;
}

$Class* DCONST::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com