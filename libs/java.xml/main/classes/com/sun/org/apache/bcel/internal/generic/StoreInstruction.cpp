#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
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

$MethodInfo _StoreInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(SS)V", nullptr, 0, $method(StoreInstruction, init$, void, int16_t, int16_t)},
	{"<init>", "(SSI)V", nullptr, $PROTECTED, $method(StoreInstruction, init$, void, int16_t, int16_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(StoreInstruction, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StoreInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
	"com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction",
	"com.sun.org.apache.bcel.internal.generic.PopInstruction",
	nullptr,
	_StoreInstruction_MethodInfo_
};

$Object* allocate$StoreInstruction($Class* clazz) {
	return $of($alloc(StoreInstruction));
}

$String* StoreInstruction::toString() {
	 return this->$LocalVariableInstruction::toString();
}

int32_t StoreInstruction::consumeStack($ConstantPoolGen* cpg) {
	 return this->$LocalVariableInstruction::consumeStack(cpg);
}

bool StoreInstruction::equals(Object$* that) {
	 return this->$LocalVariableInstruction::equals(that);
}

int32_t StoreInstruction::hashCode() {
	 return this->$LocalVariableInstruction::hashCode();
}

$Object* StoreInstruction::clone() {
	 return this->$LocalVariableInstruction::clone();
}

void StoreInstruction::finalize() {
	this->$LocalVariableInstruction::finalize();
}

void StoreInstruction::init$(int16_t canon_tag, int16_t c_tag) {
	$LocalVariableInstruction::init$(canon_tag, c_tag);
}

void StoreInstruction::init$(int16_t opcode, int16_t c_tag, int32_t n) {
	$LocalVariableInstruction::init$(opcode, c_tag, n);
}

void StoreInstruction::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitPopInstruction(this);
	v->visitTypedInstruction(this);
	v->visitLocalVariableInstruction(this);
	v->visitStoreInstruction(this);
}

StoreInstruction::StoreInstruction() {
}

$Class* StoreInstruction::load$($String* name, bool initialize) {
	$loadClass(StoreInstruction, name, initialize, &_StoreInstruction_ClassInfo_, allocate$StoreInstruction);
	return class$;
}

$Class* StoreInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com