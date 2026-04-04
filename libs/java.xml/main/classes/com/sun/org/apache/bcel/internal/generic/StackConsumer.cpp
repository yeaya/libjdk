#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
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

$Class* StackConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackConsumer, consumeStack, int32_t, $ConstantPoolGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.StackConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StackConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackConsumer);
	});
	return class$;
}

$Class* StackConsumer::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com