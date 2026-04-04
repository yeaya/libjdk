#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsServer.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetSocketAddress.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $HttpsServer = ::com::sun::net::httpserver::HttpsServer;
using $HttpServerProvider$1 = ::com::sun::net::httpserver::spi::HttpServerProvider$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $AccessController = ::java::security::AccessController;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

$Object* HttpServerProvider::lock = nullptr;
HttpServerProvider* HttpServerProvider::provider$ = nullptr;

void HttpServerProvider::init$() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "httpServerProvider"_s));
	}
}

bool HttpServerProvider::loadProviderFromProperty() {
	$init(HttpServerProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, cn, $System::getProperty("com.sun.net.httpserver.HttpServerProvider"_s));
	if (cn == nullptr) {
		return false;
	}
	try {
		$var($Object, o, $Class::forName(cn, true, $($ClassLoader::getSystemClassLoader()))->newInstance());
		$assignStatic(HttpServerProvider::provider$, $cast(HttpServerProvider, o));
		return true;
	} catch ($ClassNotFoundException& x) {
		$throwNew($ServiceConfigurationError, nullptr, x);
	} catch ($IllegalAccessException& x) {
		$throwNew($ServiceConfigurationError, nullptr, x);
	} catch ($InstantiationException& x) {
		$throwNew($ServiceConfigurationError, nullptr, x);
	} catch ($SecurityException& x) {
		$throwNew($ServiceConfigurationError, nullptr, x);
	}
	$shouldNotReachHere();
}

bool HttpServerProvider::loadProviderAsService() {
	$init(HttpServerProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Iterator, i, $$nc($ServiceLoader::load(HttpServerProvider::class$, $($ClassLoader::getSystemClassLoader())))->iterator());
	for (;;) {
		try {
			if (!$nc(i)->hasNext()) {
				return false;
			}
			$assignStatic(HttpServerProvider::provider$, $cast(HttpServerProvider, i->next()));
			return true;
		} catch ($ServiceConfigurationError& sce) {
			if ($instanceOf($SecurityException, $(sce->getCause()))) {
				continue;
			}
			$throw(sce);
		}
	}
	$shouldNotReachHere();
}

HttpServerProvider* HttpServerProvider::provider() {
	$init(HttpServerProvider);
	$beforeCallerSensitive();
	$synchronized(HttpServerProvider::lock) {
		if (HttpServerProvider::provider$ != nullptr) {
			return HttpServerProvider::provider$;
		}
		return $cast(HttpServerProvider, $AccessController::doPrivileged($$new($HttpServerProvider$1)));
	}
}

void HttpServerProvider::clinit$($Class* clazz) {
	$assignStatic(HttpServerProvider::lock, $new($Object));
	$assignStatic(HttpServerProvider::provider$, nullptr);
}

HttpServerProvider::HttpServerProvider() {
}

$Class* HttpServerProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpServerProvider, lock)},
		{"provider", "Lcom/sun/net/httpserver/spi/HttpServerProvider;", nullptr, $PRIVATE | $STATIC, $staticField(HttpServerProvider, provider$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HttpServerProvider, init$, void)},
		{"createHttpServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServerProvider, createHttpServer, $HttpServer*, $InetSocketAddress*, int32_t), "java.io.IOException"},
		{"createHttpsServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpsServer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServerProvider, createHttpsServer, $HttpsServer*, $InetSocketAddress*, int32_t), "java.io.IOException"},
		{"loadProviderAsService", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(HttpServerProvider, loadProviderAsService, bool)},
		{"loadProviderFromProperty", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(HttpServerProvider, loadProviderFromProperty, bool)},
		{"provider", "()Lcom/sun/net/httpserver/spi/HttpServerProvider;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpServerProvider, provider, HttpServerProvider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.spi.HttpServerProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.net.httpserver.spi.HttpServerProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.spi.HttpServerProvider$1"
	};
	$loadClass(HttpServerProvider, name, initialize, &classInfo$$, HttpServerProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpServerProvider);
	});
	return class$;
}

$Class* HttpServerProvider::class$ = nullptr;

				} // spi
			} // httpserver
		} // net
	} // sun
} // com