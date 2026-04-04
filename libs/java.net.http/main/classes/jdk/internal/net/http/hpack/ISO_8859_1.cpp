#include <jdk/internal/net/http/hpack/ISO_8859_1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void ISO_8859_1::init$() {
}

ISO_8859_1::ISO_8859_1() {
}

$Class* ISO_8859_1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ISO_8859_1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.ISO_8859_1$Writer", "jdk.internal.net.http.hpack.ISO_8859_1", "Writer", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.ISO_8859_1$Reader", "jdk.internal.net.http.hpack.ISO_8859_1", "Reader", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.ISO_8859_1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.ISO_8859_1$Writer,jdk.internal.net.http.hpack.ISO_8859_1$Reader"
	};
	$loadClass(ISO_8859_1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ISO_8859_1);
	});
	return class$;
}

$Class* ISO_8859_1::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk