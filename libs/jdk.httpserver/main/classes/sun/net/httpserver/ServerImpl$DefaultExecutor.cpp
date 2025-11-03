#include <sun/net/httpserver/ServerImpl$DefaultExecutor.h>

#include <java/lang/Runnable.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executor = ::java::util::concurrent::Executor;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$MethodInfo _ServerImpl$DefaultExecutor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerImpl$DefaultExecutor::*)()>(&ServerImpl$DefaultExecutor::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerImpl$DefaultExecutor_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$DefaultExecutor", "sun.net.httpserver.ServerImpl", "DefaultExecutor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ServerImpl$DefaultExecutor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$DefaultExecutor",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	nullptr,
	_ServerImpl$DefaultExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$DefaultExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$DefaultExecutor($Class* clazz) {
	return $of($alloc(ServerImpl$DefaultExecutor));
}

void ServerImpl$DefaultExecutor::init$() {
}

void ServerImpl$DefaultExecutor::execute($Runnable* task) {
	$nc(task)->run();
}

ServerImpl$DefaultExecutor::ServerImpl$DefaultExecutor() {
}

$Class* ServerImpl$DefaultExecutor::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$DefaultExecutor, name, initialize, &_ServerImpl$DefaultExecutor_ClassInfo_, allocate$ServerImpl$DefaultExecutor);
	return class$;
}

$Class* ServerImpl$DefaultExecutor::class$ = nullptr;

		} // httpserver
	} // net
} // sun