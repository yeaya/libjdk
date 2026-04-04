#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* StackProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackProducer, produceStack, int32_t, $ConstantPoolGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.StackProducer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StackProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackProducer);
	});
	return class$;
}

$Class* StackProducer::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com