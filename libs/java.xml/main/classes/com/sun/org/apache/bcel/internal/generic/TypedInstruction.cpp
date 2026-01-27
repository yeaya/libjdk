#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _TypedInstruction_MethodInfo_[] = {
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypedInstruction, getType, $Type*, $ConstantPoolGen*)},
	{}
};

$ClassInfo _TypedInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction",
	nullptr,
	nullptr,
	nullptr,
	_TypedInstruction_MethodInfo_
};

$Object* allocate$TypedInstruction($Class* clazz) {
	return $of($alloc(TypedInstruction));
}

$Class* TypedInstruction::load$($String* name, bool initialize) {
	$loadClass(TypedInstruction, name, initialize, &_TypedInstruction_ClassInfo_, allocate$TypedInstruction);
	return class$;
}

$Class* TypedInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com