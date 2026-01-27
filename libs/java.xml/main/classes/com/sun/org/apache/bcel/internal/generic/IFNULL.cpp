#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFNULL

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
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

$MethodInfo _IFNULL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IFNULL, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IFNULL, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IFNULL, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IFNULL, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IFNULL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFNULL",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFNULL_MethodInfo_
};

$Object* allocate$IFNULL($Class* clazz) {
	return $of($alloc(IFNULL));
}

void IFNULL::init$() {
	$IfInstruction::init$();
}

void IFNULL::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFNULL, target);
}

$IfInstruction* IFNULL::negate() {
	return $new($IFNONNULL, $($IfInstruction::getTarget()));
}

void IFNULL::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFNULL(this);
}

IFNULL::IFNULL() {
}

$Class* IFNULL::load$($String* name, bool initialize) {
	$loadClass(IFNULL, name, initialize, &_IFNULL_ClassInfo_, allocate$IFNULL);
	return class$;
}

$Class* IFNULL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com