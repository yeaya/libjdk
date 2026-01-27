#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
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

$MethodInfo _LoadInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(SS)V", nullptr, 0, $method(LoadInstruction, init$, void, int16_t, int16_t)},
	{"<init>", "(SSI)V", nullptr, $PROTECTED, $method(LoadInstruction, init$, void, int16_t, int16_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LoadInstruction, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LoadInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
	"com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction",
	nullptr,
	_LoadInstruction_MethodInfo_
};

$Object* allocate$LoadInstruction($Class* clazz) {
	return $of($alloc(LoadInstruction));
}

$String* LoadInstruction::toString() {
	 return this->$LocalVariableInstruction::toString();
}

int32_t LoadInstruction::produceStack($ConstantPoolGen* cpg) {
	 return this->$LocalVariableInstruction::produceStack(cpg);
}

bool LoadInstruction::equals(Object$* that) {
	 return this->$LocalVariableInstruction::equals(that);
}

int32_t LoadInstruction::hashCode() {
	 return this->$LocalVariableInstruction::hashCode();
}

$Object* LoadInstruction::clone() {
	 return this->$LocalVariableInstruction::clone();
}

void LoadInstruction::finalize() {
	this->$LocalVariableInstruction::finalize();
}

void LoadInstruction::init$(int16_t canon_tag, int16_t c_tag) {
	$LocalVariableInstruction::init$(canon_tag, c_tag);
}

void LoadInstruction::init$(int16_t opcode, int16_t c_tag, int32_t n) {
	$LocalVariableInstruction::init$(opcode, c_tag, n);
}

void LoadInstruction::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitTypedInstruction(this);
	v->visitLocalVariableInstruction(this);
	v->visitLoadInstruction(this);
}

LoadInstruction::LoadInstruction() {
}

$Class* LoadInstruction::load$($String* name, bool initialize) {
	$loadClass(LoadInstruction, name, initialize, &_LoadInstruction_ClassInfo_, allocate$LoadInstruction);
	return class$;
}

$Class* LoadInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com