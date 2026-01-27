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

$ClassInfo _PushInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.PushInstruction",
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.StackProducer"
};

$Object* allocate$PushInstruction($Class* clazz) {
	return $of($alloc(PushInstruction));
}

$Class* PushInstruction::load$($String* name, bool initialize) {
	$loadClass(PushInstruction, name, initialize, &_PushInstruction_ClassInfo_, allocate$PushInstruction);
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