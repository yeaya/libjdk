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

$Class* InstructionTargeter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionTargeter, containsTarget, bool, $InstructionHandle*)},
		{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionTargeter, updateTarget, void, $InstructionHandle*, $InstructionHandle*), "com.sun.org.apache.bcel.internal.generic.ClassGenException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.InstructionTargeter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InstructionTargeter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstructionTargeter);
	});
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