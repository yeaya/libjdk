#include <jdk/net/LinuxSocketOptions.h>
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

class LinuxSocketOptions$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(LinuxSocketOptions$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return LinuxSocketOptions::lambda$static$0();
	}
};
$Class* LinuxSocketOptions$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LinuxSocketOptions$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LinuxSocketOptions$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.net.LinuxSocketOptions$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(LinuxSocketOptions$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxSocketOptions$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* LinuxSocketOptions$$Lambda$lambda$static$0::class$ = nullptr;

void LinuxSocketOptions::init$() {
	$ExtendedSocketOptions$PlatformSocketOptions::init$();
}

void LinuxSocketOptions::setQuickAck(int32_t fd, bool on) {
	setQuickAck0(fd, on);
}

bool LinuxSocketOptions::getQuickAck(int32_t fd) {
	return getQuickAck0(fd);
}

bool LinuxSocketOptions::quickAckSupported() {
	return quickAckSupported0();
}

bool LinuxSocketOptions::keepAliveOptionsSupported() {
	return keepAliveOptionsSupported0();
}

bool LinuxSocketOptions::peerCredentialsSupported() {
	return true;
}

void LinuxSocketOptions::setTcpkeepAliveProbes(int32_t fd, int32_t value) {
	setTcpkeepAliveProbes0(fd, value);
}

void LinuxSocketOptions::setTcpKeepAliveTime(int32_t fd, int32_t value) {
	setTcpKeepAliveTime0(fd, value);
}

void LinuxSocketOptions::setTcpKeepAliveIntvl(int32_t fd, int32_t value) {
	setTcpKeepAliveIntvl0(fd, value);
}

int32_t LinuxSocketOptions::getTcpkeepAliveProbes(int32_t fd) {
	return getTcpkeepAliveProbes0(fd);
}

int32_t LinuxSocketOptions::getTcpKeepAliveTime(int32_t fd) {
	return getTcpKeepAliveTime0(fd);
}

int32_t LinuxSocketOptions::getTcpKeepAliveIntvl(int32_t fd) {
	return getTcpKeepAliveIntvl0(fd);
}

bool LinuxSocketOptions::incomingNapiIdSupported() {
	return incomingNapiIdSupported0();
}

int32_t LinuxSocketOptions::getIncomingNapiId(int32_t fd) {
	return getIncomingNapiId0(fd);
}

$UnixDomainPrincipal* LinuxSocketOptions::getSoPeerCred(int32_t fd) {
	$useLocalObjectStack();
	int64_t l = getSoPeerCred0(fd);
	int32_t uid = (int32_t)(l >> 32);
	int32_t gid = (int32_t)l;
	$var($UserPrincipal, user, $UnixUserPrincipals::fromUid(uid));
	$var($GroupPrincipal, group, $UnixUserPrincipals::fromGid(gid));
	return $new($UnixDomainPrincipal, user, group);
}

void LinuxSocketOptions::setTcpkeepAliveProbes0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(setTcpkeepAliveProbes0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

void LinuxSocketOptions::setTcpKeepAliveTime0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(setTcpKeepAliveTime0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

void LinuxSocketOptions::setTcpKeepAliveIntvl0(int32_t fd, int32_t value) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(setTcpKeepAliveIntvl0, void, int32_t fd, int32_t value);
	$invokeNativeStatic(fd, value);
	$finishNativeStatic();
}

int32_t LinuxSocketOptions::getTcpkeepAliveProbes0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getTcpkeepAliveProbes0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getTcpKeepAliveTime0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getTcpKeepAliveTime0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getTcpKeepAliveIntvl0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getTcpKeepAliveIntvl0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

void LinuxSocketOptions::setQuickAck0(int32_t fd, bool on) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(setQuickAck0, void, int32_t fd, bool on);
	$invokeNativeStatic(fd, on);
	$finishNativeStatic();
}

bool LinuxSocketOptions::getQuickAck0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getQuickAck0, bool, int32_t fd);
	bool $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int64_t LinuxSocketOptions::getSoPeerCred0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getSoPeerCred0, int64_t, int32_t fd);
	int64_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::keepAliveOptionsSupported0() {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(keepAliveOptionsSupported0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::quickAckSupported0() {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(quickAckSupported0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool LinuxSocketOptions::incomingNapiIdSupported0() {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(incomingNapiIdSupported0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxSocketOptions::getIncomingNapiId0(int32_t fd) {
	$init(LinuxSocketOptions);
	$prepareNativeStatic(getIncomingNapiId0, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

$Void* LinuxSocketOptions::lambda$static$0() {
	$init(LinuxSocketOptions);
	$beforeCallerSensitive();
	$System::loadLibrary("extnet"_s);
	return nullptr;
}

void LinuxSocketOptions::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		if ($System::getSecurityManager() == nullptr) {
			$System::loadLibrary("extnet"_s);
		} else {
			$AccessController::doPrivileged($cast($PrivilegedAction, $$new(LinuxSocketOptions$$Lambda$lambda$static$0)));
		}
	}
}

LinuxSocketOptions::LinuxSocketOptions() {
}

$Class* LinuxSocketOptions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.net.LinuxSocketOptions$$Lambda$lambda$static$0")) {
			return LinuxSocketOptions$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LinuxSocketOptions, init$, void)},
		{"getIncomingNapiId", "(I)I", nullptr, 0, $virtualMethod(LinuxSocketOptions, getIncomingNapiId, int32_t, int32_t), "java.net.SocketException"},
		{"getIncomingNapiId0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getIncomingNapiId0, int32_t, int32_t), "java.net.SocketException"},
		{"getQuickAck", "(I)Z", nullptr, 0, $virtualMethod(LinuxSocketOptions, getQuickAck, bool, int32_t), "java.net.SocketException"},
		{"getQuickAck0", "(I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getQuickAck0, bool, int32_t), "java.net.SocketException"},
		{"getSoPeerCred", "(I)Ljdk/net/UnixDomainPrincipal;", nullptr, 0, $virtualMethod(LinuxSocketOptions, getSoPeerCred, $UnixDomainPrincipal*, int32_t), "java.net.SocketException"},
		{"getSoPeerCred0", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getSoPeerCred0, int64_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveIntvl", "(I)I", nullptr, 0, $virtualMethod(LinuxSocketOptions, getTcpKeepAliveIntvl, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveIntvl0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getTcpKeepAliveIntvl0, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveTime", "(I)I", nullptr, 0, $virtualMethod(LinuxSocketOptions, getTcpKeepAliveTime, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpKeepAliveTime0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getTcpKeepAliveTime0, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpkeepAliveProbes", "(I)I", nullptr, 0, $virtualMethod(LinuxSocketOptions, getTcpkeepAliveProbes, int32_t, int32_t), "java.net.SocketException"},
		{"getTcpkeepAliveProbes0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, getTcpkeepAliveProbes0, int32_t, int32_t), "java.net.SocketException"},
		{"incomingNapiIdSupported", "()Z", nullptr, 0, $virtualMethod(LinuxSocketOptions, incomingNapiIdSupported, bool)},
		{"incomingNapiIdSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, incomingNapiIdSupported0, bool)},
		{"keepAliveOptionsSupported", "()Z", nullptr, 0, $virtualMethod(LinuxSocketOptions, keepAliveOptionsSupported, bool)},
		{"keepAliveOptionsSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, keepAliveOptionsSupported0, bool)},
		{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LinuxSocketOptions, lambda$static$0, $Void*)},
		{"peerCredentialsSupported", "()Z", nullptr, 0, $virtualMethod(LinuxSocketOptions, peerCredentialsSupported, bool)},
		{"quickAckSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxSocketOptions, quickAckSupported, bool)},
		{"quickAckSupported0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, quickAckSupported0, bool)},
		{"setQuickAck", "(IZ)V", nullptr, 0, $virtualMethod(LinuxSocketOptions, setQuickAck, void, int32_t, bool), "java.net.SocketException"},
		{"setQuickAck0", "(IZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, setQuickAck0, void, int32_t, bool), "java.net.SocketException"},
		{"setTcpKeepAliveIntvl", "(II)V", nullptr, 0, $virtualMethod(LinuxSocketOptions, setTcpKeepAliveIntvl, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveIntvl0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, setTcpKeepAliveIntvl0, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveTime", "(II)V", nullptr, 0, $virtualMethod(LinuxSocketOptions, setTcpKeepAliveTime, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpKeepAliveTime0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, setTcpKeepAliveTime0, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpkeepAliveProbes", "(II)V", nullptr, 0, $virtualMethod(LinuxSocketOptions, setTcpkeepAliveProbes, void, int32_t, int32_t), "java.net.SocketException"},
		{"setTcpkeepAliveProbes0", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxSocketOptions, setTcpkeepAliveProbes0, void, int32_t, int32_t), "java.net.SocketException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.LinuxSocketOptions",
		"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(LinuxSocketOptions, name, initialize, &classInfo$$, LinuxSocketOptions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxSocketOptions);
	});
	return class$;
}

$Class* LinuxSocketOptions::class$ = nullptr;

	} // net
} // jdk