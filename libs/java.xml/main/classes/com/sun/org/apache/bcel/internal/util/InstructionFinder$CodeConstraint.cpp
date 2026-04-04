#include <com/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>
#include <jcpp.h>

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$Class* InstructionFinder$CodeConstraint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"checkCode", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionFinder$CodeConstraint, checkCode, bool, $InstructionHandleArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint", "com.sun.org.apache.bcel.internal.util.InstructionFinder", "CodeConstraint", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.util.InstructionFinder"
	};
	$loadClass(InstructionFinder$CodeConstraint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstructionFinder$CodeConstraint);
	});
	return class$;
}

$Class* InstructionFinder$CodeConstraint::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com