#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef ICONST
#undef ICONST_0
#undef INT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$String* ICONST::toString() {
	return this->$Instruction::toString();
}

int32_t ICONST::produceStack($ConstantPoolGen* cpg) {
	return this->$Instruction::produceStack(cpg);
}

bool ICONST::equals(Object$* that) {
	return this->$Instruction::equals(that);
}

int32_t ICONST::hashCode() {
	return this->$Instruction::hashCode();
}

$Object* ICONST::clone() {
	return this->$Instruction::clone();
}

void ICONST::finalize() {
	this->$Instruction::finalize();
}

void ICONST::init$() {
	$Instruction::init$();
}

void ICONST::init$(int32_t i) {
	$useLocalObjectStack();
	$Instruction::init$($Const::ICONST_0, (int16_t)1);
	if ((i >= -1) && (i <= 5)) {
		$Instruction::setOpcode((int16_t)($Const::ICONST_0 + i));
	} else {
		$throwNew($ClassGenException, $$str({"ICONST can be used only for value between -1 and 5: "_s, $$str(i)}));
	}
	this->value = i;
}

$Number* ICONST::getValue() {
	return $Integer::valueOf(this->value);
}

$Type* ICONST::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::INT;
}

void ICONST::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitICONST(this);
}

ICONST::ICONST() {
}

$Class* ICONST::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PRIVATE, $field(ICONST, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "()V", nullptr, 0, $method(ICONST, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ICONST, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ICONST, accept, void, $Visitor*)},
		{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ICONST, getType, $Type*, $ConstantPoolGen*)},
		{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(ICONST, getValue, $Number*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.ICONST",
		"com.sun.org.apache.bcel.internal.generic.Instruction",
		"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ICONST, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ICONST));
	});
	return class$;
}

$Class* ICONST::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com