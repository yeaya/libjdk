#include <java/rmi/server/RemoteServer.h>
#include <java/io/OutputStream.h>
#include <java/rmi/server/RemoteObject.h>
#include <java/rmi/server/RemoteRef.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/server/UnicastServerRef.h>
#include <sun/rmi/transport/tcp/TCPTransport.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteObject = ::java::rmi::server::RemoteObject;
using $RemoteRef = ::java::rmi::server::RemoteRef;
using $UnicastServerRef = ::sun::rmi::server::UnicastServerRef;
using $TCPTransport = ::sun::rmi::transport::tcp::TCPTransport;

namespace java {
	namespace rmi {
		namespace server {

bool RemoteServer::logNull = false;

void RemoteServer::init$() {
	$RemoteObject::init$();
}

void RemoteServer::init$($RemoteRef* ref) {
	$RemoteObject::init$(ref);
}

$String* RemoteServer::getClientHost() {
	$init(RemoteServer);
	return $TCPTransport::getClientHost();
}

void RemoteServer::setLog($OutputStream* out) {
	$init(RemoteServer);
	RemoteServer::logNull = (out == nullptr);
	$init($UnicastServerRef);
	$nc($UnicastServerRef::callLog)->setOutputStream(out);
}

$PrintStream* RemoteServer::getLog() {
	$init(RemoteServer);
	$init($UnicastServerRef);
	return (RemoteServer::logNull ? ($PrintStream*)nullptr : $nc($UnicastServerRef::callLog)->getPrintStream());
}

void RemoteServer::clinit$($Class* clazz) {
	$init($UnicastServerRef);
	RemoteServer::logNull = !$UnicastServerRef::logCalls;
}

RemoteServer::RemoteServer() {
}

$Class* RemoteServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RemoteServer, serialVersionUID)},
		{"logNull", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RemoteServer, logNull)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(RemoteServer, init$, void)},
		{"<init>", "(Ljava/rmi/server/RemoteRef;)V", nullptr, $PROTECTED, $method(RemoteServer, init$, void, $RemoteRef*)},
		{"getClientHost", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(RemoteServer, getClientHost, $String*), "java.rmi.server.ServerNotActiveException"},
		{"getLog", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RemoteServer, getLog, $PrintStream*)},
		{"setLog", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RemoteServer, setLog, void, $OutputStream*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.rmi.server.RemoteServer",
		"java.rmi.server.RemoteObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RemoteServer, name, initialize, &classInfo$$, RemoteServer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RemoteServer));
	});
	return class$;
}

$Class* RemoteServer::class$ = nullptr;

		} // server
	} // rmi
} // java