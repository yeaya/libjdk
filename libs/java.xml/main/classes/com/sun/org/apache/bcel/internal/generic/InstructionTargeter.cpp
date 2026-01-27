#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _InstructionTargeter_MethodInfo_[] = {
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionTargeter, containsTarget, bool, $InstructionHandle*)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionTargeter, updateTarget, void, $InstructionHandle*, $InstructionHandle*), "com.sun.org.apache.bcel.internal.generic.ClassGenException"},
	{}
};

$ClassInfo _InstructionTargeter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.InstructionTargeter",
	nullptr,
	nullptr,
	nullptr,
	_InstructionTargeter_MethodInfo_
};

$Object* allocate$InstructionTargeter($Class* clazz) {
	return $of($alloc(InstructionTargeter));
}

$Class* InstructionTargeter::load$($String* name, bool initialize) {
	$loadClass(InstructionTargeter, name, initialize, &_InstructionTargeter_ClassInfo_, allocate$InstructionTargeter);
	return class$;
}

$Class* InstructionTargeter::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com