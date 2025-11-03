#include <com/sun/net/httpserver/spi/HttpServerProvider.h>

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
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
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
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

$FieldInfo _HttpServerProvider_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpServerProvider, lock)},
	{"provider", "Lcom/sun/net/httpserver/spi/HttpServerProvider;", nullptr, $PRIVATE | $STATIC, $staticField(HttpServerProvider, provider$)},
	{}
};

$MethodInfo _HttpServerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HttpServerProvider::*)()>(&HttpServerProvider::init$))},
	{"createHttpServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createHttpsServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpsServer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"loadProviderAsService", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&HttpServerProvider::loadProviderAsService))},
	{"loadProviderFromProperty", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&HttpServerProvider::loadProviderFromProperty))},
	{"provider", "()Lcom/sun/net/httpserver/spi/HttpServerProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HttpServerProvider*(*)()>(&HttpServerProvider::provider))},
	{}
};

$InnerClassInfo _HttpServerProvider_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.spi.HttpServerProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpServerProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.spi.HttpServerProvider",
	"java.lang.Object",
	nullptr,
	_HttpServerProvider_FieldInfo_,
	_HttpServerProvider_MethodInfo_,
	nullptr,
	nullptr,
	_HttpServerProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.spi.HttpServerProvider$1"
};

$Object* allocate$HttpServerProvider($Class* clazz) {
	return $of($alloc(HttpServerProvider));
}

$Object* HttpServerProvider::lock = nullptr;
HttpServerProvider* HttpServerProvider::provider$ = nullptr;

void HttpServerProvider::init$() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "httpServerProvider"_s));
	}
}

bool HttpServerProvider::loadProviderFromProperty() {
	$init(HttpServerProvider);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Iterator, i, $nc($($ServiceLoader::load(HttpServerProvider::class$, $($ClassLoader::getSystemClassLoader()))))->iterator());
	for (;;) {
		try {
			if (!$nc(i)->hasNext()) {
				return false;
			}
			$assignStatic(HttpServerProvider::provider$, $cast(HttpServerProvider, $nc(i)->next()));
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
		return $cast(HttpServerProvider, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($HttpServerProvider$1))));
	}
}

void clinit$HttpServerProvider($Class* class$) {
	$assignStatic(HttpServerProvider::lock, $new($Object));
	$assignStatic(HttpServerProvider::provider$, nullptr);
}

HttpServerProvider::HttpServerProvider() {
}

$Class* HttpServerProvider::load$($String* name, bool initialize) {
	$loadClass(HttpServerProvider, name, initialize, &_HttpServerProvider_ClassInfo_, clinit$HttpServerProvider, allocate$HttpServerProvider);
	return class$;
}

$Class* HttpServerProvider::class$ = nullptr;

				} // spi
			} // httpserver
		} // net
	} // sun
} // com