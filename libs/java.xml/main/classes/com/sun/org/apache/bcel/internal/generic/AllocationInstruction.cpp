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

$ClassInfo _AllocationInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.AllocationInstruction"
};

$Object* allocate$AllocationInstruction($Class* clazz) {
	return $of($alloc(AllocationInstruction));
}

$Class* AllocationInstruction::load$($String* name, bool initialize) {
	$loadClass(AllocationInstruction, name, initialize, &_AllocationInstruction_ClassInfo_, allocate$AllocationInstruction);
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