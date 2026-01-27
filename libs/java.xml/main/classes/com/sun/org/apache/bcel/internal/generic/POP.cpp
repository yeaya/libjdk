#include <com/sun/org/apache/bcel/internal/generic/POP.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef POP

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $PopInstruction = ::com::sun::org::apache::bcel::internal::generic::PopInstruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
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

$MethodInfo _POP_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(POP, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(POP, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _POP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.POP",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.PopInstruction",
	nullptr,
	_POP_MethodInfo_
};

$Object* allocate$POP($Class* clazz) {
	return $of($alloc(POP));
}

$String* POP::toString() {
	 return this->$StackInstruction::toString();
}

int32_t POP::consumeStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::consumeStack(cpg);
}

bool POP::equals(Object$* that) {
	 return this->$StackInstruction::equals(that);
}

int32_t POP::hashCode() {
	 return this->$StackInstruction::hashCode();
}

$Object* POP::clone() {
	 return this->$StackInstruction::clone();
}

void POP::finalize() {
	this->$StackInstruction::finalize();
}

void POP::init$() {
	$StackInstruction::init$($Const::POP);
}

void POP::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitPopInstruction(this);
	v->visitStackInstruction(this);
	v->visitPOP(this);
}

POP::POP() {
}

$Class* POP::load$($String* name, bool initialize) {
	$loadClass(POP, name, initialize, &_POP_ClassInfo_, allocate$POP);
	return class$;
}

$Class* POP::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com