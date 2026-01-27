#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFNONNULL

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFNULL = ::com::sun::org::apache::bcel::internal::generic::IFNULL;
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

$MethodInfo _IFNONNULL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IFNONNULL, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IFNONNULL, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IFNONNULL, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IFNONNULL, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IFNONNULL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFNONNULL",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFNONNULL_MethodInfo_
};

$Object* allocate$IFNONNULL($Class* clazz) {
	return $of($alloc(IFNONNULL));
}

void IFNONNULL::init$() {
	$IfInstruction::init$();
}

void IFNONNULL::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFNONNULL, target);
}

$IfInstruction* IFNONNULL::negate() {
	return $new($IFNULL, $($IfInstruction::getTarget()));
}

void IFNONNULL::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFNONNULL(this);
}

IFNONNULL::IFNONNULL() {
}

$Class* IFNONNULL::load$($String* name, bool initialize) {
	$loadClass(IFNONNULL, name, initialize, &_IFNONNULL_ClassInfo_, allocate$IFNONNULL);
	return class$;
}

$Class* IFNONNULL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com