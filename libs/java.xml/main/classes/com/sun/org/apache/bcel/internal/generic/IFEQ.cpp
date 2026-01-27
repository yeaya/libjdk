#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFEQ

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _IFEQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IFEQ, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IFEQ, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IFEQ, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IFEQ, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IFEQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFEQ",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFEQ_MethodInfo_
};

$Object* allocate$IFEQ($Class* clazz) {
	return $of($alloc(IFEQ));
}

void IFEQ::init$() {
	$IfInstruction::init$();
}

void IFEQ::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFEQ, target);
}

$IfInstruction* IFEQ::negate() {
	return $new($IFNE, $($IfInstruction::getTarget()));
}

void IFEQ::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFEQ(this);
}

IFEQ::IFEQ() {
}

$Class* IFEQ::load$($String* name, bool initialize) {
	$loadClass(IFEQ, name, initialize, &_IFEQ_ClassInfo_, allocate$IFEQ);
	return class$;
}

$Class* IFEQ::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com