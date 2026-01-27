#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFGE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
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

$MethodInfo _IFGE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IFGE, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IFGE, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IFGE, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IFGE, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IFGE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFGE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFGE_MethodInfo_
};

$Object* allocate$IFGE($Class* clazz) {
	return $of($alloc(IFGE));
}

void IFGE::init$() {
	$IfInstruction::init$();
}

void IFGE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFGE, target);
}

$IfInstruction* IFGE::negate() {
	return $new($IFLT, $($IfInstruction::getTarget()));
}

void IFGE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFGE(this);
}

IFGE::IFGE() {
}

$Class* IFGE::load$($String* name, bool initialize) {
	$loadClass(IFGE, name, initialize, &_IFGE_ClassInfo_, allocate$IFGE);
	return class$;
}

$Class* IFGE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com