#include <jdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$Class* HPACK$BufferUpdateConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(JI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HPACK$BufferUpdateConsumer, accept, void, int64_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.HPACK$BufferUpdateConsumer", "jdk.internal.net.http.hpack.HPACK", "BufferUpdateConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.hpack.HPACK$BufferUpdateConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.HPACK"
	};
	$loadClass(HPACK$BufferUpdateConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK$BufferUpdateConsumer);
	});
	return class$;
}

$Class* HPACK$BufferUpdateConsumer::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk