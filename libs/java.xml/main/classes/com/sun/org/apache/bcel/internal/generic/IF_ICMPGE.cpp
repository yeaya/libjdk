#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPGE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ICMPLT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT;
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

$MethodInfo _IF_ICMPGE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ICMPGE, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPGE, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPGE, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPGE, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ICMPGE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ICMPGE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ICMPGE_MethodInfo_
};

$Object* allocate$IF_ICMPGE($Class* clazz) {
	return $of($alloc(IF_ICMPGE));
}

void IF_ICMPGE::init$() {
	$IfInstruction::init$();
}

void IF_ICMPGE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPGE, target);
}

$IfInstruction* IF_ICMPGE::negate() {
	return $new($IF_ICMPLT, $($IfInstruction::getTarget()));
}

void IF_ICMPGE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPGE(this);
}

IF_ICMPGE::IF_ICMPGE() {
}

$Class* IF_ICMPGE::load$($String* name, bool initialize) {
	$loadClass(IF_ICMPGE, name, initialize, &_IF_ICMPGE_ClassInfo_, allocate$IF_ICMPGE);
	return class$;
}

$Class* IF_ICMPGE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com