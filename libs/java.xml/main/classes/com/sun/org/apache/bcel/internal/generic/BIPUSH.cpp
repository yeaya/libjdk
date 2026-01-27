#include <com/sun/org/apache/bcel/internal/generic/BIPUSH.h>

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

#undef BIPUSH
#undef BYTE

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

$FieldInfo _BIPUSH_FieldInfo_[] = {
	{"b", "B", nullptr, $PRIVATE, $field(BIPUSH, b)},
	{}
};

$MethodInfo _BIPUSH_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(BIPUSH, init$, void)},
	{"<init>", "(B)V", nullptr, $PUBLIC, $method(BIPUSH, init$, void, int8_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(BIPUSH, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(BIPUSH, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(BIPUSH, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(BIPUSH, getValue, $Number*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(BIPUSH, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BIPUSH, toString, $String*, bool)},
	{}
};

$ClassInfo _BIPUSH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.BIPUSH",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	_BIPUSH_FieldInfo_,
	_BIPUSH_MethodInfo_
};

$Object* allocate$BIPUSH($Class* clazz) {
	return $of($alloc(BIPUSH));
}

$String* BIPUSH::toString() {
	 return this->$Instruction::toString();
}

int32_t BIPUSH::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool BIPUSH::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t BIPUSH::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* BIPUSH::clone() {
	 return this->$Instruction::clone();
}

void BIPUSH::finalize() {
	this->$Instruction::finalize();
}

void BIPUSH::init$() {
	$Instruction::init$();
}

void BIPUSH::init$(int8_t b) {
	$Instruction::init$($Const::BIPUSH, (int16_t)2);
	this->b = b;
}

void BIPUSH::dump($DataOutputStream* out) {
	$Instruction::dump(out);
	$nc(out)->writeByte(this->b);
}

$String* BIPUSH::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	return $str({$($Instruction::toString(verbose)), " "_s, $$str(this->b)});
}

void BIPUSH::initFromFile($ByteSequence* bytes, bool wide) {
	$Instruction::setLength(2);
	this->b = $nc(bytes)->readByte();
}

$Number* BIPUSH::getValue() {
	return $Integer::valueOf((int32_t)this->b);
}

$Type* BIPUSH::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::BYTE;
}

void BIPUSH::accept($Visitor* v) {
	$nc(v)->visitPushInstruction(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitConstantPushInstruction(this);
	v->visitBIPUSH(this);
}

BIPUSH::BIPUSH() {
}

$Class* BIPUSH::load$($String* name, bool initialize) {
	$loadClass(BIPUSH, name, initialize, &_BIPUSH_ClassInfo_, allocate$BIPUSH);
	return class$;
}

$Class* BIPUSH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com