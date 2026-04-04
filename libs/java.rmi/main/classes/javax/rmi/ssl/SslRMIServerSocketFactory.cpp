#include <javax/rmi/ssl/SslRMIServerSocketFactory.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/net/SocketFactory.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <javax/rmi/ssl/SslRMIServerSocketFactory$1.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $SslRMIServerSocketFactory$1 = ::javax::rmi::ssl::SslRMIServerSocketFactory$1;

namespace javax {
	namespace rmi {
		namespace ssl {

$SSLSocketFactory* SslRMIServerSocketFactory::defaultSSLSocketFactory = nullptr;

void SslRMIServerSocketFactory::init$() {
	SslRMIServerSocketFactory::init$(nullptr, nullptr, false);
}

void SslRMIServerSocketFactory::init$($StringArray* enabledCipherSuites, $StringArray* enabledProtocols, bool needClientAuth) {
	SslRMIServerSocketFactory::init$(nullptr, enabledCipherSuites, enabledProtocols, needClientAuth);
}

void SslRMIServerSocketFactory::init$($SSLContext* context, $StringArray* enabledCipherSuites, $StringArray* enabledProtocols, bool needClientAuth) {
	$useLocalObjectStack();
	$set(this, enabledCipherSuites, enabledCipherSuites == nullptr ? ($StringArray*)nullptr : $cast($StringArray, enabledCipherSuites->clone()));
	$set(this, enabledProtocols, enabledProtocols == nullptr ? ($StringArray*)nullptr : $cast($StringArray, enabledProtocols->clone()));
	this->needClientAuth = needClientAuth;
	$set(this, context, context);
	$var($SSLSocketFactory, sslSocketFactory, context == nullptr ? getDefaultSSLSocketFactory() : context->getSocketFactory());
	$var($SSLSocket, sslSocket, nullptr);
	if (this->enabledCipherSuites != nullptr || this->enabledProtocols != nullptr) {
		try {
			$assign(sslSocket, $cast($SSLSocket, $nc(sslSocketFactory)->createSocket()));
		} catch ($Exception& e) {
			$var($String, msg, "Unable to check if the cipher suites and protocols to enable are supported"_s);
			$throw($$cast($IllegalArgumentException, $$new($IllegalArgumentException, msg)->initCause(e)));
		}
	}
	if (this->enabledCipherSuites != nullptr) {
		$nc(sslSocket)->setEnabledCipherSuites(this->enabledCipherSuites);
		$set(this, enabledCipherSuitesList, $Arrays::asList(this->enabledCipherSuites));
	}
	if (this->enabledProtocols != nullptr) {
		$nc(sslSocket)->setEnabledProtocols(this->enabledProtocols);
		$set(this, enabledProtocolsList, $Arrays::asList(this->enabledProtocols));
	}
}

$StringArray* SslRMIServerSocketFactory::getEnabledCipherSuites() {
	return this->enabledCipherSuites == nullptr ? ($StringArray*)nullptr : $cast($StringArray, this->enabledCipherSuites->clone());
}

$StringArray* SslRMIServerSocketFactory::getEnabledProtocols() {
	return this->enabledProtocols == nullptr ? ($StringArray*)nullptr : $cast($StringArray, this->enabledProtocols->clone());
}

bool SslRMIServerSocketFactory::getNeedClientAuth() {
	return this->needClientAuth;
}

$ServerSocket* SslRMIServerSocketFactory::createServerSocket(int32_t port) {
	$var($SSLSocketFactory, sslSocketFactory, this->context == nullptr ? getDefaultSSLSocketFactory() : this->context->getSocketFactory());
	return $new($SslRMIServerSocketFactory$1, this, port, sslSocketFactory);
}

bool SslRMIServerSocketFactory::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(SslRMIServerSocketFactory, obj))) {
		return false;
	}
	$var(SslRMIServerSocketFactory, that, $cast(SslRMIServerSocketFactory, obj));
	bool var$0 = $of(this)->getClass()->equals($nc(that)->getClass());
	return (var$0 && checkParameters(that));
}

bool SslRMIServerSocketFactory::checkParameters(SslRMIServerSocketFactory* that) {
	$useLocalObjectStack();
	if (this->context == nullptr ? $nc(that)->context != nullptr : !this->context->equals($nc(that)->context)) {
		return false;
	}
	if (this->needClientAuth != $nc(that)->needClientAuth) {
		return false;
	}
	if ((this->enabledCipherSuites == nullptr && that->enabledCipherSuites != nullptr) || (this->enabledCipherSuites != nullptr && that->enabledCipherSuites == nullptr)) {
		return false;
	}
	if (this->enabledCipherSuites != nullptr && that->enabledCipherSuites != nullptr) {
		$var($List, thatEnabledCipherSuitesList, $Arrays::asList(that->enabledCipherSuites));
		if (!$nc(this->enabledCipherSuitesList)->equals(thatEnabledCipherSuitesList)) {
			return false;
		}
	}
	if ((this->enabledProtocols == nullptr && that->enabledProtocols != nullptr) || (this->enabledProtocols != nullptr && that->enabledProtocols == nullptr)) {
		return false;
	}
	if (this->enabledProtocols != nullptr && that->enabledProtocols != nullptr) {
		$var($List, thatEnabledProtocolsList, $Arrays::asList(that->enabledProtocols));
		if (!$nc(this->enabledProtocolsList)->equals(thatEnabledProtocolsList)) {
			return false;
		}
	}
	return true;
}

int32_t SslRMIServerSocketFactory::hashCode() {
	int32_t var$3 = $of(this)->getClass()->hashCode();
	int32_t var$2 = var$3 + (this->context == nullptr ? 0 : this->context->hashCode());
	int32_t var$1 = var$2 + (this->needClientAuth ? $nc($Boolean::TRUE)->hashCode() : $nc($Boolean::FALSE)->hashCode());
	int32_t var$0 = var$1 + (this->enabledCipherSuites == nullptr ? 0 : $nc(this->enabledCipherSuitesList)->hashCode());
	return var$0 + (this->enabledProtocols == nullptr ? 0 : $nc(this->enabledProtocolsList)->hashCode());
}

$SSLSocketFactory* SslRMIServerSocketFactory::getDefaultSSLSocketFactory() {
	$init(SslRMIServerSocketFactory);
	$synchronized(class$) {
		if (SslRMIServerSocketFactory::defaultSSLSocketFactory == nullptr) {
			$assignStatic(SslRMIServerSocketFactory::defaultSSLSocketFactory, $cast($SSLSocketFactory, $SSLSocketFactory::getDefault()));
		}
		return SslRMIServerSocketFactory::defaultSSLSocketFactory;
	}
}

void SslRMIServerSocketFactory::clinit$($Class* clazz) {
	$assignStatic(SslRMIServerSocketFactory::defaultSSLSocketFactory, nullptr);
}

SslRMIServerSocketFactory::SslRMIServerSocketFactory() {
}

$Class* SslRMIServerSocketFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultSSLSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SslRMIServerSocketFactory, defaultSSLSocketFactory)},
		{"enabledCipherSuites", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SslRMIServerSocketFactory, enabledCipherSuites)},
		{"enabledProtocols", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SslRMIServerSocketFactory, enabledProtocols)},
		{"needClientAuth", "Z", nullptr, $PRIVATE | $FINAL, $field(SslRMIServerSocketFactory, needClientAuth)},
		{"enabledCipherSuitesList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SslRMIServerSocketFactory, enabledCipherSuitesList)},
		{"enabledProtocolsList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SslRMIServerSocketFactory, enabledProtocolsList)},
		{"context", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE, $field(SslRMIServerSocketFactory, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SslRMIServerSocketFactory, init$, void)},
		{"<init>", "([Ljava/lang/String;[Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(SslRMIServerSocketFactory, init$, void, $StringArray*, $StringArray*, bool), "java.lang.IllegalArgumentException"},
		{"<init>", "(Ljavax/net/ssl/SSLContext;[Ljava/lang/String;[Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(SslRMIServerSocketFactory, init$, void, $SSLContext*, $StringArray*, $StringArray*, bool), "java.lang.IllegalArgumentException"},
		{"checkParameters", "(Ljavax/rmi/ssl/SslRMIServerSocketFactory;)Z", nullptr, $PRIVATE, $method(SslRMIServerSocketFactory, checkParameters, bool, SslRMIServerSocketFactory*)},
		{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(SslRMIServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SslRMIServerSocketFactory, equals, bool, Object$*)},
		{"getDefaultSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(SslRMIServerSocketFactory, getDefaultSSLSocketFactory, $SSLSocketFactory*)},
		{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SslRMIServerSocketFactory, getEnabledCipherSuites, $StringArray*)},
		{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SslRMIServerSocketFactory, getEnabledProtocols, $StringArray*)},
		{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $FINAL, $method(SslRMIServerSocketFactory, getNeedClientAuth, bool)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SslRMIServerSocketFactory, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.rmi.ssl.SslRMIServerSocketFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.rmi.ssl.SslRMIServerSocketFactory",
		"java.lang.Object",
		"java.rmi.server.RMIServerSocketFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.rmi.ssl.SslRMIServerSocketFactory$1"
	};
	$loadClass(SslRMIServerSocketFactory, name, initialize, &classInfo$$, SslRMIServerSocketFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SslRMIServerSocketFactory);
	});
	return class$;
}

$Class* SslRMIServerSocketFactory::class$ = nullptr;

		} // ssl
	} // rmi
} // javax