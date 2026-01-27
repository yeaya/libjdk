#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPEQ.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ACMPEQ

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ACMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPNE;
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

$MethodInfo _IF_ACMPEQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ACMPEQ, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ACMPEQ, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ACMPEQ, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ACMPEQ, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ACMPEQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ACMPEQ",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ACMPEQ_MethodInfo_
};

$Object* allocate$IF_ACMPEQ($Class* clazz) {
	return $of($alloc(IF_ACMPEQ));
}

void IF_ACMPEQ::init$() {
	$IfInstruction::init$();
}

void IF_ACMPEQ::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ACMPEQ, target);
}

$IfInstruction* IF_ACMPEQ::negate() {
	return $new($IF_ACMPNE, $($IfInstruction::getTarget()));
}

void IF_ACMPEQ::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ACMPEQ(this);
}

IF_ACMPEQ::IF_ACMPEQ() {
}

$Class* IF_ACMPEQ::load$($String* name, bool initialize) {
	$loadClass(IF_ACMPEQ, name, initialize, &_IF_ACMPEQ_ClassInfo_, allocate$IF_ACMPEQ);
	return class$;
}

$Class* IF_ACMPEQ::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com