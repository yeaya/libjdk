#include <com/sun/org/apache/bcel/internal/generic/POP2.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef POP2

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

$MethodInfo _POP2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(POP2, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(POP2, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _POP2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.POP2",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.PopInstruction",
	nullptr,
	_POP2_MethodInfo_
};

$Object* allocate$POP2($Class* clazz) {
	return $of($alloc(POP2));
}

$String* POP2::toString() {
	 return this->$StackInstruction::toString();
}

int32_t POP2::consumeStack($ConstantPoolGen* cpg) {
	 return this->$StackInstruction::consumeStack(cpg);
}

bool POP2::equals(Object$* that) {
	 return this->$StackInstruction::equals(that);
}

int32_t POP2::hashCode() {
	 return this->$StackInstruction::hashCode();
}

$Object* POP2::clone() {
	 return this->$StackInstruction::clone();
}

void POP2::finalize() {
	this->$StackInstruction::finalize();
}

void POP2::init$() {
	$StackInstruction::init$($Const::POP2);
}

void POP2::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitPopInstruction(this);
	v->visitStackInstruction(this);
	v->visitPOP2(this);
}

POP2::POP2() {
}

$Class* POP2::load$($String* name, bool initialize) {
	$loadClass(POP2, name, initialize, &_POP2_ClassInfo_, allocate$POP2);
	return class$;
}

$Class* POP2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com