#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* AllocationInstruction::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.AllocationInstruction"
	};
	$loadClass(AllocationInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllocationInstruction);
	});
	return class$;
}

$Class* AllocationInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com