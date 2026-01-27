#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IF_ICMPLT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ICMPGE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE;
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

$MethodInfo _IF_ICMPLT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IF_ICMPLT, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(IF_ICMPLT, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IF_ICMPLT, accept, void, $Visitor*)},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC, $virtualMethod(IF_ICMPLT, negate, $IfInstruction*)},
	{}
};

$ClassInfo _IF_ICMPLT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ICMPLT",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ICMPLT_MethodInfo_
};

$Object* allocate$IF_ICMPLT($Class* clazz) {
	return $of($alloc(IF_ICMPLT));
}

void IF_ICMPLT::init$() {
	$IfInstruction::init$();
}

void IF_ICMPLT::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ICMPLT, target);
}

$IfInstruction* IF_ICMPLT::negate() {
	return $new($IF_ICMPGE, $($IfInstruction::getTarget()));
}

void IF_ICMPLT::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ICMPLT(this);
}

IF_ICMPLT::IF_ICMPLT() {
}

$Class* IF_ICMPLT::load$($String* name, bool initialize) {
	$loadClass(IF_ICMPLT, name, initialize, &_IF_ICMPLT_ClassInfo_, allocate$IF_ICMPLT);
	return class$;
}

$Class* IF_ICMPLT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com