#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* UnconditionalBranch::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.UnconditionalBranch"
	};
	$loadClass(UnconditionalBranch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnconditionalBranch);
	});
	return class$;
}

$Class* UnconditionalBranch::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com