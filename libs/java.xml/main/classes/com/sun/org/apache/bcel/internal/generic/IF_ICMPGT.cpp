#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPGT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ICMPLE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE;
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

$MethodInfo _IF_ICMPGT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ICMPGT, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPGT, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPGT, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPGT, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ICMPGT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ICMPGT",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ICMPGT_MethodInfo_
};

$Object* allocate$IF_ICMPGT($Class* clazz) {
	return $of($alloc(IF_ICMPGT));
}

void IF_ICMPGT::init$() {
	$IfInstruction::init$();
}

void IF_ICMPGT::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPGT, target);
}

$IfInstruction* IF_ICMPGT::negate() {
	return $new($IF_ICMPLE, $($IfInstruction::getTarget()));
}

void IF_ICMPGT::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPGT(this);
}

IF_ICMPGT::IF_ICMPGT() {
}

$Class* IF_ICMPGT::load$($String* name, bool initialize) {
	$loadClass(IF_ICMPGT, name, initialize, &_IF_ICMPGT_ClassInfo_, allocate$IF_ICMPGT);
	return class$;
}

$Class* IF_ICMPGT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com