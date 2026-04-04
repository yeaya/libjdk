#include <sun/net/httpserver/ServerImpl$DefaultExecutor.h>
#include <java/lang/Runnable.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace sun {
	namespace net {
		namespace httpserver {

void ServerImpl$DefaultExecutor::init$() {
}

void ServerImpl$DefaultExecutor::execute($Runnable* task) {
	$nc(task)->run();
}

ServerImpl$DefaultExecutor::ServerImpl$DefaultExecutor() {
}

$Class* ServerImpl$DefaultExecutor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerImpl$DefaultExecutor, init$, void)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(ServerImpl$DefaultExecutor, execute, void, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.ServerImpl$DefaultExecutor", "sun.net.httpserver.ServerImpl", "DefaultExecutor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.ServerImpl$DefaultExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.ServerImpl"
	};
	$loadClass(ServerImpl$DefaultExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerImpl$DefaultExecutor);
	});
	return class$;
}

$Class* ServerImpl$DefaultExecutor::class$ = nullptr;

		} // httpserver
	} // net
} // sun