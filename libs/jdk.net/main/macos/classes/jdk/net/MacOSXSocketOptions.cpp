#include <jdk/net/MacOSXSocketOptions.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/UnixDomainPrincipal.h>
#include <sun/nio/fs/UnixUserPrincipals$Group.h>
#include <sun/nio/fs/UnixUserPrincipals$User.h>
#include <sun/nio/fs/UnixUserPrincipals.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;
using $UnixDomainPrincipal = ::jdk::net::UnixDomainPrincipal;
using $UnixUserPrincipals = ::sun::nio::fs::UnixUserPrincipals;

namespace jdk {
	namespace net {

class MacOSXSocketOptions$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(MacOSXSocketOptions$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return MacOSXSocketOptions::lambda$static$0();
	}
};
$Class* MacOSXSocketOptions$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacOSXSocketOptions$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MacOSXSocketOptions$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.net.MacOSXSocketOptions$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(MacOSXSocketOptions$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXSocketOptions$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* MacOSXSocketOptions$$Lambda$lambda$static$0::class$ = nullptr;

void MacOSXSocketOptions::init$() {
	$ExtendedSocketOptions$PlatformSocketOptions::init$();
}

bool MacOSXSocketOptions::keepAliveOptionsSupported() {
	return keepAliveOptionsSupported0();
}

void MacOSXSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	setTcpkeepAliveProbes0(fd, value);
}

void MacOSXSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	setTcpKeepAliveTime0(fd, value);
}

bool MacOSXSocketOptions::peerCredentialsSupported() {
	return true;
}

void MacOSXSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	setTcpKeepAliveIntvl0(fd, value);
}

int32_t MacOSXSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	return getTcpkeepAliveProbes0(fd);
}

int32_t MacOSXSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	return getTcpKeepAliveTime0(fd);
}

int32_t MacOSXSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	return getTcpKeepAliveIntvl0(fd);
}

$UnixDomainPrincipal* MacOSXSocketOptions::getSoPeerCred(int32_t fd) {
	$useLocalObjectStack();
	int64_t l = getSoPeerCred0(fd);
	int32_t uid = (int32_t)(l >> 32);
	int32_t gid = (int32_t)l;
	$var($UserPrincipal, user, $UnixUserPrincipals::fromUid(uid));
	$var($GroupPrincipal, group, $UnixUserPrincipals::fromGid(gid));
	return $new($UnixDomainPrincipal, user, group);
}

void MacOSXSocketOptions::setTcpkeepAliveProbes0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(setTcpkeepAliveProbes0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

void MacOSXSocketOptions::setTcpKeepAliveTime0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(setTcpKeepAliveTime0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

void MacOSXSocketOptions::setTcpKeepAliveIntvl0(int32_t fd, int32_t value) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(setTcpKeepAliveIntvl0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

int32_t MacOSXSocketOptions::getTcpkeepAliveProbes0(int32_t fd) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(getTcpkeepAliveProbes0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t MacOSXSocketOptions::getTcpKeepAliveTime0(int32_t fd) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(getTcpKeepAliveTime0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t MacOSXSocketOptions::getTcpKeepAliveIntvl0(int32_t fd) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(getTcpKeepAliveIntvl0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXSocketOptions::getSoPeerCred0(int32_t fd) {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(getSoPeerCred0, int64_t, int32_t fd);
	int64_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

bool MacOSXSocketOptions::keepAliveOptionsSupported0() {
	$init(MacOSXSocketOptions);
	$prepareNativeStatic(keepAliveOptionsSupported0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Void* MacOSXSocketOptions::lambda$static$0() {
	$init(MacOSXSocketOptions);
	$beforeCallerSensitive();
	$System::loadLibrary("extnet"_s);
	return nullptr;
}

void MacOSXSocketOptions::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		if ($System::getSecurityManager() == nullptr) {
			$System::loadLibrary("extnet"_s);
		} else {
			$AccessController::doPrivileged($cast($PrivilegedAction, $$new(MacOSXSocketOptions$$Lambda$lambda$static$0)));
		}
	}
}

MacOSXSocketOptions::MacOSXSocketOptions() {
}

$Class* MacOSXSocketOptions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.net.MacOSXSocketOptions$$Lambda$lambda$static$0")) {
			return MacOSXSocketOptions$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacOSXSocketOptions, init$, void)},
		{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, $virtualMethod(MacOSXSocketOptions, getSoPeerCred, $UnixDomainPrincipal*, int32_t), "java.net.SocketException"},
		{"getSoPeerCred0", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, getSoPeerCred0, int64_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, $virtualMethod(MacOSXSocketOptions, getTcpKeepAliveIntvl, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveIntvl0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, getTcpKeepAliveIntvl0, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveTime", "(I)I", nullptr, 0, $virtualMethod(MacOSXSocketOptions, getTcpKeepAliveTime, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveTime0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, getTcpKeepAliveTime0, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, $virtualMethod(MacOSXSocketOptions, getTcpkeepAliveProbes, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpkeepAliveProbes0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, getTcpkeepAliveProbes0, int32_t, int32_t), "java.net.SocketException"},
		{"keepAliveOptionsSupported", "()Z", nullptr, 0, $virtualMethod(MacOSXSocketOptions, keepAliveOptionsSupported, bool)},
		{"keepAliveOptionsSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, keepAliveOptionsSupported0, bool)},
		{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MacOSXSocketOptions, lambda$static$0, $Void*)},
		{"peerCredentialsSupported", "()Z", nullptr, 0, $virtualMethod(MacOSXSocketOptions, peerCredentialsSupported, bool)},
		{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, $virtualMethod(MacOSXSocketOptions, setTcpKeepAliveIntvl, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveIntvl0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, setTcpKeepAliveIntvl0, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveTime", "(II)V", nullptr, 0, $virtualMethod(MacOSXSocketOptions, setTcpKeepAliveTime, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveTime0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, setTcpKeepAliveTime0, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, $virtualMethod(MacOSXSocketOptions, setTcpkeepAliveProbes, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpkeepAliveProbes0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MacOSXSocketOptions, setTcpkeepAliveProbes0, void, int32_t, int32_t), "java.net.SocketException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.MacOSXSocketOptions",
		"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(MacOSXSocketOptions, name, initialize, &classInfo$$, MacOSXSocketOptions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXSocketOptions);
	});
	return class$;
}

$Class* MacOSXSocketOptions::class$ = nullptr;

	} // net
} // jdk