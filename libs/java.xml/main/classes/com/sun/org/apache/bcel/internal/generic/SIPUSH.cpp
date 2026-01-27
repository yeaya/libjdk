#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef SHORT
#undef SIPUSH

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ConstantPushInstruction = ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
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

$FieldInfo _SIPUSH_FieldInfo_[] = {
	{"b", "S", nullptr, $PRIVATE, $field(SIPUSH, b)},
	{}
};

$MethodInfo _SIPUSH_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(SIPUSH, init$, void)},
	{"<init>", "(S)V", nullptr, $PUBLIC, $method(SIPUSH, init$, void, int16_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(SIPUSH, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(SIPUSH, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(SIPUSH, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(SIPUSH, getValue, $Number*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(SIPUSH, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SIPUSH, toString, $String*, bool)},
	{}
};

$ClassInfo _SIPUSH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.SIPUSH",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	_SIPUSH_FieldInfo_,
	_SIPUSH_MethodInfo_
};

$Object* allocate$SIPUSH($Class* clazz) {
	return $of($alloc(SIPUSH));
}

$String* SIPUSH::toString() {
	 return this->$Instruction::toString();
}

int32_t SIPUSH::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool SIPUSH::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t SIPUSH::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* SIPUSH::clone() {
	 return this->$Instruction::clone();
}

void SIPUSH::finalize() {
	this->$Instruction::finalize();
}

void SIPUSH::init$() {
	$Instruction::init$();
}

void SIPUSH::init$(int16_t b) {
	$Instruction::init$($Const::SIPUSH, (int16_t)3);
	this->b = b;
}

void SIPUSH::dump($DataOutputStream* out) {
	$Instruction::dump(out);
	$nc(out)->writeShort(this->b);
}

$String* SIPUSH::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	return $str({$($Instruction::toString(verbose)), " "_s, $$str(this->b)});
}

void SIPUSH::initFromFile($ByteSequence* bytes, bool wide) {
	$Instruction::setLength(3);
	this->b = $nc(bytes)->readShort();
}

$Number* SIPUSH::getValue() {
	return $Integer::valueOf((int32_t)this->b);
}

$Type* SIPUSH::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::SHORT;
}

void SIPUSH::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitSIPUSH(this);
}

SIPUSH::SIPUSH() {
}

$Class* SIPUSH::load$($String* name, bool initialize) {
	$loadClass(SIPUSH, name, initialize, &_SIPUSH_ClassInfo_, allocate$SIPUSH);
	return class$;
}

$Class* SIPUSH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com