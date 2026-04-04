#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions$1.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/UnixDomainPrincipal.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $ExtendedSocketOptions$PlatformSocketOptions$1 = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions$1;
using $UnixDomainPrincipal = ::jdk::net::UnixDomainPrincipal;

namespace jdk {
	namespace net {

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::instance = nullptr;

void ExtendedSocketOptions$PlatformSocketOptions::init$() {
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::newInstance($String* cn) {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* c = nullptr;
	try {
		c = $Class::forName(cn);
		return $cast(ExtendedSocketOptions$PlatformSocketOptions, $$nc(c->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0)));
	} catch ($ReflectiveOperationException& x) {
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::create() {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, osname, $cast($String, $AccessController::doPrivileged($$new($ExtendedSocketOptions$PlatformSocketOptions$1))));
	if ("Linux"_s->equals(osname)) {
		return newInstance("jdk.net.LinuxSocketOptions"_s);
	} else if ($nc(osname)->startsWith("Mac"_s)) {
		return newInstance("jdk.net.MacOSXSocketOptions"_s);
	} else {
		return $new(ExtendedSocketOptions$PlatformSocketOptions);
	}
}

ExtendedSocketOptions$PlatformSocketOptions* ExtendedSocketOptions$PlatformSocketOptions::get() {
	$init(ExtendedSocketOptions$PlatformSocketOptions);
	return ExtendedSocketOptions$PlatformSocketOptions::instance;
}

bool ExtendedSocketOptions$PlatformSocketOptions::peerCredentialsSupported() {
	return false;
}

void ExtendedSocketOptions$PlatformSocketOptions::setQuickAck(int32_t fd, bool on) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_QUICKACK option"_s);
}

bool ExtendedSocketOptions$PlatformSocketOptions::getQuickAck(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_QUICKACK option"_s);
	$shouldNotReachHere();
}

bool ExtendedSocketOptions$PlatformSocketOptions::quickAckSupported() {
	return false;
}

bool ExtendedSocketOptions$PlatformSocketOptions::keepAliveOptionsSupported() {
	return false;
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPCNT option"_s);
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPIDLE option"_s);
}

$UnixDomainPrincipal* ExtendedSocketOptions$PlatformSocketOptions::getSoPeerCred(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported SO_PEERCRED option"_s);
	$shouldNotReachHere();
}

void ExtendedSocketOptions$PlatformSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPINTVL option"_s);
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPCNT option"_s);
	$shouldNotReachHere();
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPIDLE option"_s);
	$shouldNotReachHere();
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported TCP_KEEPINTVL option"_s);
	$shouldNotReachHere();
}

bool ExtendedSocketOptions$PlatformSocketOptions::incomingNapiIdSupported() {
	return false;
}

int32_t ExtendedSocketOptions$PlatformSocketOptions::getIncomingNapiId(int32_t fd) {
	$throwNew($UnsupportedOperationException, "unsupported SO_INCOMING_NAPI_ID socket option"_s);
	$shouldNotReachHere();
}

void ExtendedSocketOptions$PlatformSocketOptions::clinit$($Class* clazz) {
	$assignStatic(ExtendedSocketOptions$PlatformSocketOptions::instance, ExtendedSocketOptions$PlatformSocketOptions::create());
}

ExtendedSocketOptions$PlatformSocketOptions::ExtendedSocketOptions$PlatformSocketOptions() {
}

$Class* ExtendedSocketOptions$PlatformSocketOptions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedSocketOptions$PlatformSocketOptions, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ExtendedSocketOptions$PlatformSocketOptions, init$, void)},
		{"create", "()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC, $staticMethod(ExtendedSocketOptions$PlatformSocketOptions, create, ExtendedSocketOptions$PlatformSocketOptions*)},
		{"get", "()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $STATIC, $staticMethod(ExtendedSocketOptions$PlatformSocketOptions, get, ExtendedSocketOptions$PlatformSocketOptions*)},
		{"getIncomingNapiId", "(I)I", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getIncomingNapiId, int32_t, int32_t), "java.net.SocketException"},
		{"getQuickAck", "(I)Z", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getQuickAck, bool, int32_t), "java.net.SocketException"},
		{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getSoPeerCred, $UnixDomainPrincipal*, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getTcpKeepAliveIntvl, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveTime", "(I)I", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getTcpKeepAliveTime, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, getTcpkeepAliveProbes, int32_t, int32_t), "java.net.SocketException"},
		{"incomingNapiIdSupported", "()Z", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, incomingNapiIdSupported, bool)},
		{"keepAliveOptionsSupported", "()Z", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, keepAliveOptionsSupported, bool)},
		{"newInstance", "(Ljava/lang/String;)Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;", nullptr, $PRIVATE | $STATIC, $staticMethod(ExtendedSocketOptions$PlatformSocketOptions, newInstance, ExtendedSocketOptions$PlatformSocketOptions*, $String*)},
		{"peerCredentialsSupported", "()Z", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, peerCredentialsSupported, bool)},
		{"quickAckSupported", "()Z", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, quickAckSupported, bool)},
		{"setQuickAck", "(IZ)V", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, setQuickAck, void, int32_t, bool), "java.net.SocketException"},
		{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, setTcpKeepAliveIntvl, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveTime", "(II)V", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, setTcpKeepAliveTime, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions, setTcpkeepAliveProbes, void, int32_t, int32_t), "java.net.SocketException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.net.ExtendedSocketOptions"
	};
	$loadClass(ExtendedSocketOptions$PlatformSocketOptions, name, initialize, &classInfo$$, ExtendedSocketOptions$PlatformSocketOptions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOptions$PlatformSocketOptions);
	});
	return class$;
}

$Class* ExtendedSocketOptions$PlatformSocketOptions::class$ = nullptr;

	} // net
} // jdk