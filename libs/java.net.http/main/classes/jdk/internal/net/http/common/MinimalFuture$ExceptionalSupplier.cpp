#include <jdk/internal/net/http/common/MinimalFuture$ExceptionalSupplier.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* MinimalFuture$ExceptionalSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $ABSTRACT, $virtualMethod(MinimalFuture$ExceptionalSupplier, get, $Object*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.MinimalFuture$ExceptionalSupplier", "jdk.internal.net.http.common.MinimalFuture", "ExceptionalSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.MinimalFuture$ExceptionalSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.MinimalFuture"
	};
	$loadClass(MinimalFuture$ExceptionalSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MinimalFuture$ExceptionalSupplier);
	});
	return class$;
}

$Class* MinimalFuture$ExceptionalSupplier::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk