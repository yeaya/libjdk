#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPEQ

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
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

$MethodInfo _IF_ICMPEQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ICMPEQ, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPEQ, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPEQ, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPEQ, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ICMPEQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ICMPEQ",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ICMPEQ_MethodInfo_
};

$Object* allocate$IF_ICMPEQ($Class* clazz) {
	return $of($alloc(IF_ICMPEQ));
}

void IF_ICMPEQ::init$() {
	$IfInstruction::init$();
}

void IF_ICMPEQ::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPEQ, target);
}

$IfInstruction* IF_ICMPEQ::negate() {
	return $new($IF_ICMPNE, $($IfInstruction::getTarget()));
}

void IF_ICMPEQ::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPEQ(this);
}

IF_ICMPEQ::IF_ICMPEQ() {
}

$Class* IF_ICMPEQ::load$($String* name, bool initialize) {
	$loadClass(IF_ICMPEQ, name, initialize, &_IF_ICMPEQ_ClassInfo_, allocate$IF_ICMPEQ);
	return class$;
}

$Class* IF_ICMPEQ::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com