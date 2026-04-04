#include <jdk/internal/net/http/common/Cancelable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* Cancelable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancel", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cancelable, cancel, bool, bool)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.Cancelable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Cancelable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cancelable);
	});
	return class$;
}

$Class* Cancelable::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk