#include <com/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _MethodGen$BranchTarget_FieldInfo_[] = {
	{"target", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $field(MethodGen$BranchTarget, target)},
	{"stackDepth", "I", nullptr, $FINAL, $field(MethodGen$BranchTarget, stackDepth)},
	{}
};

$MethodInfo _MethodGen$BranchTarget_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)V", nullptr, 0, $method(MethodGen$BranchTarget, init$, void, $InstructionHandle*, int32_t)},
	{}
};

$InnerClassInfo _MethodGen$BranchTarget_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchTarget", "com.sun.org.apache.bcel.internal.generic.MethodGen", "BranchTarget", $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodGen$BranchTarget_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchTarget",
	"java.lang.Object",
	nullptr,
	_MethodGen$BranchTarget_FieldInfo_,
	_MethodGen$BranchTarget_MethodInfo_,
	nullptr,
	nullptr,
	_MethodGen$BranchTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.MethodGen"
};

$Object* allocate$MethodGen$BranchTarget($Class* clazz) {
	return $of($alloc(MethodGen$BranchTarget));
}

void MethodGen$BranchTarget::init$($InstructionHandle* target, int32_t stackDepth) {
	$set(this, target, target);
	this->stackDepth = stackDepth;
}

MethodGen$BranchTarget::MethodGen$BranchTarget() {
}

$Class* MethodGen$BranchTarget::load$($String* name, bool initialize) {
	$loadClass(MethodGen$BranchTarget, name, initialize, &_MethodGen$BranchTarget_ClassInfo_, allocate$MethodGen$BranchTarget);
	return class$;
}

$Class* MethodGen$BranchTarget::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com