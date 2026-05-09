#include <java/rmi/server/RMISocketFactory.h>
#include <java/lang/SecurityManager.h>
#include <java/net/SocketException.h>
#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/rmi/server/RMIFailureHandler.h>
#include <sun/rmi/transport/tcp/TCPDirectSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $SocketException = ::java::net::SocketException;
using $RMIClientSocketFactory = ::java::rmi::server::RMIClientSocketFactory;
using $RMIFailureHandler = ::java::rmi::server::RMIFailureHandler;
using $TCPDirectSocketFactory = ::sun::rmi::transport::tcp::TCPDirectSocketFactory;

namespace java {
	namespace rmi {
		namespace server {

int32_t RMISocketFactory::hashCode() {
	return this->$RMIClientSocketFactory::hashCode();
}

bool RMISocketFactory::equals(Object$* arg0) {
	return this->$RMIClientSocketFactory::equals(arg0);
}

$Object* RMISocketFactory::clone() {
	return this->$RMIClientSocketFactory::clone();
}

$String* RMISocketFactory::toString() {
	return this->$RMIClientSocketFactory::toString();
}

void RMISocketFactory::finalize() {
	this->$RMIClientSocketFactory::finalize();
}

RMISocketFactory* RMISocketFactory::factory = nullptr;
RMISocketFactory* RMISocketFactory::defaultSocketFactory = nullptr;
$RMIFailureHandler* RMISocketFactory::handler = nullptr;

void RMISocketFactory::init$() {
}

void RMISocketFactory::setSocketFactory(RMISocketFactory* fac) {
	$init(RMISocketFactory);
	$synchronized(class$) {
		if (RMISocketFactory::factory != nullptr) {
			$throwNew($SocketException, "factory already defined"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(RMISocketFactory::factory, fac);
	}
}

RMISocketFactory* RMISocketFactory::getSocketFactory() {
	$init(RMISocketFactory);
	$synchronized(class$) {
		return RMISocketFactory::factory;
	}
}

RMISocketFactory* RMISocketFactory::getDefaultSocketFactory() {
	$init(RMISocketFactory);
	$synchronized(class$) {
		if (RMISocketFactory::defaultSocketFactory == nullptr) {
			$assignStatic(RMISocketFactory::defaultSocketFactory, $new($TCPDirectSocketFactory));
		}
		return RMISocketFactory::defaultSocketFactory;
	}
}

void RMISocketFactory::setFailureHandler($RMIFailureHandler* fh) {
	$init(RMISocketFactory);
	$synchronized(class$) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(RMISocketFactory::handler, fh);
	}
}

$RMIFailureHandler* RMISocketFactory::getFailureHandler() {
	$init(RMISocketFactory);
	$synchronized(class$) {
		return RMISocketFactory::handler;
	}
}

void RMISocketFactory::clinit$($Class* clazz) {
	$assignStatic(RMISocketFactory::factory, nullptr);
	$assignStatic(RMISocketFactory::handler, nullptr);
}

RMISocketFactory::RMISocketFactory() {
}

$Class* RMISocketFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Ljava/rmi/server/RMISocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(RMISocketFactory, factory)},
		{"defaultSocketFactory", "Ljava/rmi/server/RMISocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(RMISocketFactory, defaultSocketFactory)},
		{"handler", "Ljava/rmi/server/RMIFailureHandler;", nullptr, $PRIVATE | $STATIC, $staticField(RMISocketFactory, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT},
		{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(RMISocketFactory, init$, void)},
		{"getDefaultSocketFactory", "()Ljava/rmi/server/RMISocketFactory;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(RMISocketFactory, getDefaultSocketFactory, RMISocketFactory*)},
		{"getFailureHandler", "()Ljava/rmi/server/RMIFailureHandler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(RMISocketFactory, getFailureHandler, $RMIFailureHandler*)},
		{"getSocketFactory", "()Ljava/rmi/server/RMISocketFactory;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(RMISocketFactory, getSocketFactory, RMISocketFactory*)},
		{"setFailureHandler", "(Ljava/rmi/server/RMIFailureHandler;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(RMISocketFactory, setFailureHandler, void, $RMIFailureHandler*)},
		{"setSocketFactory", "(Ljava/rmi/server/RMISocketFactory;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(RMISocketFactory, setSocketFactory, void, RMISocketFactory*), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.rmi.server.RMISocketFactory",
		"java.lang.Object",
		"java.rmi.server.RMIClientSocketFactory,java.rmi.server.RMIServerSocketFactory",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RMISocketFactory, name, initialize, &classInfo$$, RMISocketFactory::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RMISocketFactory));
	});
	return class$;
}

$Class* RMISocketFactory::class$ = nullptr;

		} // server
	} // rmi
} // java