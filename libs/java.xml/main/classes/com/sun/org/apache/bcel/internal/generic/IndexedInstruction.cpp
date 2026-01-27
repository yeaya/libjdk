#include <com/sun/org/apache/bcel/internal/generic/IndexedInstruction.h>

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

$MethodInfo _IndexedInstruction_MethodInfo_[] = {
	{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IndexedInstruction, getIndex, int32_t)},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IndexedInstruction, setIndex, void, int32_t)},
	{}
};

$ClassInfo _IndexedInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.IndexedInstruction",
	nullptr,
	nullptr,
	nullptr,
	_IndexedInstruction_MethodInfo_
};

$Object* allocate$IndexedInstruction($Class* clazz) {
	return $of($alloc(IndexedInstruction));
}

$Class* IndexedInstruction::load$($String* name, bool initialize) {
	$loadClass(IndexedInstruction, name, initialize, &_IndexedInstruction_ClassInfo_, allocate$IndexedInstruction);
	return class$;
}

$Class* IndexedInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com