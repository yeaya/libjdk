#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* VariableLengthInstruction::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction"
	};
	$loadClass(VariableLengthInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VariableLengthInstruction);
	});
	return class$;
}

$Class* VariableLengthInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com