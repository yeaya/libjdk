#include <com/sun/org/apache/bcel/internal/generic/MethodGen$BranchStack.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $MethodGen$BranchTarget = ::com::sun::org::apache::bcel::internal::generic::MethodGen$BranchTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _MethodGen$BranchStack_FieldInfo_[] = {
	{"branchTargets", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget;>;", $PRIVATE | $FINAL, $field(MethodGen$BranchStack, branchTargets)},
	{"visitedTargets", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget;>;", $PRIVATE | $FINAL, $field(MethodGen$BranchStack, visitedTargets)},
	{}
};

$MethodInfo _MethodGen$BranchStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodGen$BranchStack, init$, void)},
	{"pop", "()Lcom/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget;", nullptr, $PUBLIC, $method(MethodGen$BranchStack, pop, $MethodGen$BranchTarget*)},
	{"push", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)V", nullptr, $PUBLIC, $method(MethodGen$BranchStack, push, void, $InstructionHandle*, int32_t)},
	{"visit", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)Lcom/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget;", nullptr, $PRIVATE, $method(MethodGen$BranchStack, visit, $MethodGen$BranchTarget*, $InstructionHandle*, int32_t)},
	{"visited", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PRIVATE, $method(MethodGen$BranchStack, visited, bool, $InstructionHandle*)},
	{}
};

$InnerClassInfo _MethodGen$BranchStack_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchStack", "com.sun.org.apache.bcel.internal.generic.MethodGen", "BranchStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodGen$BranchStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchStack",
	"java.lang.Object",
	nullptr,
	_MethodGen$BranchStack_FieldInfo_,
	_MethodGen$BranchStack_MethodInfo_,
	nullptr,
	nullptr,
	_MethodGen$BranchStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.MethodGen"
};

$Object* allocate$MethodGen$BranchStack($Class* clazz) {
	return $of($alloc(MethodGen$BranchStack));
}

void MethodGen$BranchStack::init$() {
	$set(this, branchTargets, $new($Stack));
	$set(this, visitedTargets, $new($HashMap));
}

void MethodGen$BranchStack::push($InstructionHandle* target, int32_t stackDepth) {
	if (visited(target)) {
		return;
	}
	$nc(this->branchTargets)->push($(visit(target, stackDepth)));
}

$MethodGen$BranchTarget* MethodGen$BranchStack::pop() {
	if (!$nc(this->branchTargets)->empty()) {
		$var($MethodGen$BranchTarget, bt, $cast($MethodGen$BranchTarget, $nc(this->branchTargets)->pop()));
		return bt;
	}
	return nullptr;
}

$MethodGen$BranchTarget* MethodGen$BranchStack::visit($InstructionHandle* target, int32_t stackDepth) {
	$var($MethodGen$BranchTarget, bt, $new($MethodGen$BranchTarget, target, stackDepth));
	$nc(this->visitedTargets)->put(target, bt);
	return bt;
}

bool MethodGen$BranchStack::visited($InstructionHandle* target) {
	return $nc(this->visitedTargets)->get(target) != nullptr;
}

MethodGen$BranchStack::MethodGen$BranchStack() {
}

$Class* MethodGen$BranchStack::load$($String* name, bool initialize) {
	$loadClass(MethodGen$BranchStack, name, initialize, &_MethodGen$BranchStack_ClassInfo_, allocate$MethodGen$BranchStack);
	return class$;
}

$Class* MethodGen$BranchStack::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com