#include <jdk/internal/net/http/ResponseBodyHandlers.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ResponseBodyHandlers::init$() {
}

$String* ResponseBodyHandlers::pathForSecurityCheck($Path* path) {
	return $$nc($nc(path)->toFile())->getPath();
}

ResponseBodyHandlers::ResponseBodyHandlers() {
}

$Class* ResponseBodyHandlers::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ResponseBodyHandlers, init$, void)},
		{"pathForSecurityCheck", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(ResponseBodyHandlers, pathForSecurityCheck, $String*, $Path*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseBodyHandlers$FileDownloadBodyHandler", "jdk.internal.net.http.ResponseBodyHandlers", "FileDownloadBodyHandler", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseBodyHandlers$PushPromisesHandlerWithMap", "jdk.internal.net.http.ResponseBodyHandlers", "PushPromisesHandlerWithMap", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseBodyHandlers$PathBodyHandler", "jdk.internal.net.http.ResponseBodyHandlers", "PathBodyHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.ResponseBodyHandlers",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseBodyHandlers$FileDownloadBodyHandler,jdk.internal.net.http.ResponseBodyHandlers$PushPromisesHandlerWithMap,jdk.internal.net.http.ResponseBodyHandlers$PathBodyHandler"
	};
	$loadClass(ResponseBodyHandlers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseBodyHandlers);
	});
	return class$;
}

$Class* ResponseBodyHandlers::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk