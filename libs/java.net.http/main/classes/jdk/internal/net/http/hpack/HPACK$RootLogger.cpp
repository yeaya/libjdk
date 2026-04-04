#include <jdk/internal/net/http/hpack/HPACK$RootLogger.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger$Level.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HPACK$Logger = ::jdk::internal::net::http::hpack::HPACK$Logger;
using $HPACK$Logger$Level = ::jdk::internal::net::http::hpack::HPACK$Logger$Level;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void HPACK$RootLogger::init$($HPACK$Logger$Level* level) {
	$HPACK$Logger::init$("hpack"_s, "hpack"_s, level);
}

HPACK$RootLogger::HPACK$RootLogger() {
}

$Class* HPACK$RootLogger::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/HPACK$Logger$Level;)V", nullptr, $PROTECTED, $method(HPACK$RootLogger, init$, void, $HPACK$Logger$Level*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.HPACK$RootLogger", "jdk.internal.net.http.hpack.HPACK", "RootLogger", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.HPACK$Logger", "jdk.internal.net.http.hpack.HPACK", "Logger", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.HPACK$RootLogger",
		"jdk.internal.net.http.hpack.HPACK$Logger",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.HPACK"
	};
	$loadClass(HPACK$RootLogger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK$RootLogger);
	});
	return class$;
}

$Class* HPACK$RootLogger::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk