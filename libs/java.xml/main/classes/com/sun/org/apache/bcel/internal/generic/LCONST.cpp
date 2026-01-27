#include <com/sun/org/apache/bcel/internal/generic/LCONST.h>

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

#undef LCONST
#undef LCONST_0
#undef LCONST_1
#undef LONG

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
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _LCONST_FieldInfo_[] = {
	{"value", "J", nullptr, $PRIVATE, $field(LCONST, value)},
	{}
};

$MethodInfo _LCONST_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(LCONST, init$, void)},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(LCONST, init$, void, int64_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LCONST, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(LCONST, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(LCONST, getValue, $Number*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LCONST_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LCONST",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	_LCONST_FieldInfo_,
	_LCONST_MethodInfo_
};

$Object* allocate$LCONST($Class* clazz) {
	return $of($alloc(LCONST));
}

$String* LCONST::toString() {
	 return this->$Instruction::toString();
}

int32_t LCONST::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool LCONST::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t LCONST::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* LCONST::clone() {
	 return this->$Instruction::clone();
}

void LCONST::finalize() {
	this->$Instruction::finalize();
}

void LCONST::init$() {
	$Instruction::init$();
}

void LCONST::init$(int64_t l) {
	$useLocalCurrentObjectStackCache();
	$Instruction::init$($Const::LCONST_0, (int16_t)1);
	if (l == 0) {
		$Instruction::setOpcode($Const::LCONST_0);
	} else if (l == 1) {
		$Instruction::setOpcode($Const::LCONST_1);
	} else {
		$throwNew($ClassGenException, $$str({"LCONST can be used only for 0 and 1: "_s, $$str(l)}));
	}
	this->value = l;
}

$Number* LCONST::getValue() {
	return $Long::valueOf(this->value);
}

$Type* LCONST::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::LONG;
}

void LCONST::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitLCONST(this);
}

LCONST::LCONST() {
}

$Class* LCONST::load$($String* name, bool initialize) {
	$loadClass(LCONST, name, initialize, &_LCONST_ClassInfo_, allocate$LCONST);
	return class$;
}

$Class* LCONST::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com