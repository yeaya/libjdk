#include <org/reactivestreams/tck/flow/support/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$Class* Function::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TIn;)TOut;", $PUBLIC | $ABSTRACT, $virtualMethod(Function, apply, $Object*, Object$*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.reactivestreams.tck.flow.support.Function",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<In:Ljava/lang/Object;Out:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(Function, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function);
	});
	return class$;
}

$Class* Function::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org