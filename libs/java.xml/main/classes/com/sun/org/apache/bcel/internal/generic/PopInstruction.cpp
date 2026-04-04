#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* PopInstruction::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.PopInstruction",
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.StackConsumer"
	};
	$loadClass(PopInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopInstruction);
	});
	return class$;
}

$Class* PopInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com