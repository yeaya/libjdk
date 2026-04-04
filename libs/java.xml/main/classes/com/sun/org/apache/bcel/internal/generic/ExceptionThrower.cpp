#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* ExceptionThrower::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExceptionThrower, getExceptions, $ClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExceptionThrower, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionThrower);
	});
	return class$;
}

$Class* ExceptionThrower::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com