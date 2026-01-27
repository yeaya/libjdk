#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPNE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
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

$MethodInfo _IF_ICMPNE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ICMPNE, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPNE, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPNE, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPNE, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ICMPNE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ICMPNE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ICMPNE_MethodInfo_
};

$Object* allocate$IF_ICMPNE($Class* clazz) {
	return $of($alloc(IF_ICMPNE));
}

void IF_ICMPNE::init$() {
	$IfInstruction::init$();
}

void IF_ICMPNE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPNE, target);
}

$IfInstruction* IF_ICMPNE::negate() {
	return $new($IF_ICMPEQ, $($IfInstruction::getTarget()));
}

void IF_ICMPNE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPNE(this);
}

IF_ICMPNE::IF_ICMPNE() {
}

$Class* IF_ICMPNE::load$($String* name, bool initialize) {
	$loadClass(IF_ICMPNE, name, initialize, &_IF_ICMPNE_ClassInfo_, allocate$IF_ICMPNE);
	return class$;
}

$Class* IF_ICMPNE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com