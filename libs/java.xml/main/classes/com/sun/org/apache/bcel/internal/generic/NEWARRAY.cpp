#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef NEGATIVE_ARRAY_SIZE_EXCEPTION
#undef NEWARRAY

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $AllocationInstruction = ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _NEWARRAY_FieldInfo_[] = {
	{"type", "B", nullptr, $PRIVATE, $field(NEWARRAY, type)},
	{}
};

$MethodInfo _NEWARRAY_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(NEWARRAY, init$, void)},
	{"<init>", "(B)V", nullptr, $PUBLIC, $method(NEWARRAY, init$, void, int8_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/BasicType;)V", nullptr, $PUBLIC, $method(NEWARRAY, init$, void, $BasicType*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(NEWARRAY, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(NEWARRAY, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(NEWARRAY, getExceptions, $ClassArray*)},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $FINAL, $method(NEWARRAY, getType, $Type*)},
	{"getTypecode", "()B", nullptr, $PUBLIC | $FINAL, $method(NEWARRAY, getTypecode, int8_t)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(NEWARRAY, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NEWARRAY, toString, $String*, bool)},
	{}
};

$ClassInfo _NEWARRAY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.NEWARRAY",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.AllocationInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer",
	_NEWARRAY_FieldInfo_,
	_NEWARRAY_MethodInfo_
};

$Object* allocate$NEWARRAY($Class* clazz) {
	return $of($alloc(NEWARRAY));
}

$String* NEWARRAY::toString() {
	 return this->$Instruction::toString();
}

int32_t NEWARRAY::produceStack($ConstantPoolGen* cpg) {
	 return this->$Instruction::produceStack(cpg);
}

bool NEWARRAY::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t NEWARRAY::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* NEWARRAY::clone() {
	 return this->$Instruction::clone();
}

void NEWARRAY::finalize() {
	this->$Instruction::finalize();
}

void NEWARRAY::init$() {
	$Instruction::init$();
}

void NEWARRAY::init$(int8_t type) {
	$Instruction::init$($Const::NEWARRAY, (int16_t)2);
	this->type = type;
}

void NEWARRAY::init$($BasicType* type) {
	NEWARRAY::init$($nc(type)->getType());
}

void NEWARRAY::dump($DataOutputStream* out) {
	$nc(out)->writeByte($Instruction::getOpcode());
	out->writeByte(this->type);
}

int8_t NEWARRAY::getTypecode() {
	return this->type;
}

$Type* NEWARRAY::getType() {
	return $new($ArrayType, $(static_cast<$Type*>($BasicType::getType(this->type))), 1);
}

$String* NEWARRAY::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Instruction::toString(verbose)), " "_s}));
	return $concat(var$0, $($Const::getTypeName(this->type)));
}

void NEWARRAY::initFromFile($ByteSequence* bytes, bool wide) {
	this->type = $nc(bytes)->readByte();
	$Instruction::setLength(2);
}

$ClassArray* NEWARRAY::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::NEGATIVE_ARRAY_SIZE_EXCEPTION});
}

void NEWARRAY::accept($Visitor* v) {
	$nc(v)->visitAllocationInstruction(this);
	v->visitExceptionThrower(this);
	v->visitStackProducer(this);
	v->visitNEWARRAY(this);
}

NEWARRAY::NEWARRAY() {
}

$Class* NEWARRAY::load$($String* name, bool initialize) {
	$loadClass(NEWARRAY, name, initialize, &_NEWARRAY_ClassInfo_, allocate$NEWARRAY);
	return class$;
}

$Class* NEWARRAY::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com