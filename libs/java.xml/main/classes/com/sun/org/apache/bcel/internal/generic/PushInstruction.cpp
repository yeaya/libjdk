#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* PushInstruction::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.PushInstruction",
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.StackProducer"
	};
	$loadClass(PushInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PushInstruction);
	});
	return class$;
}

$Class* PushInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com