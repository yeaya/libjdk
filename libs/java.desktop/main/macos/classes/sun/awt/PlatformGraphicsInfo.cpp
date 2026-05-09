#include <sun/awt/PlatformGraphicsInfo.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/CGraphicsEnvironment.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CGraphicsEnvironment = ::sun::awt::CGraphicsEnvironment;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace awt {

class PlatformGraphicsInfo$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(PlatformGraphicsInfo$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return PlatformGraphicsInfo::lambda$static$0();
	}
};
$Class* PlatformGraphicsInfo$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformGraphicsInfo$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlatformGraphicsInfo$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.PlatformGraphicsInfo$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformGraphicsInfo$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformGraphicsInfo$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* PlatformGraphicsInfo$$Lambda$lambda$static$0::class$ = nullptr;

void PlatformGraphicsInfo::init$() {
}

$GraphicsEnvironment* PlatformGraphicsInfo::createGE() {
	$init(PlatformGraphicsInfo);
	return $new($CGraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	$init(PlatformGraphicsInfo);
	return $new($LWCToolkit);
}

bool PlatformGraphicsInfo::isInAquaSession() {
	$init(PlatformGraphicsInfo);
	$prepareNativeStatic(isInAquaSession, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	$init(PlatformGraphicsInfo);
	return !isInAquaSession();
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	$init(PlatformGraphicsInfo);
	return "\nThe application is not running in a desktop session,\nbut this program performed an operation which requires it."_s;
}

$Void* PlatformGraphicsInfo::lambda$static$0() {
	$init(PlatformGraphicsInfo);
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

void PlatformGraphicsInfo::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(PlatformGraphicsInfo$$Lambda$lambda$static$0)));
	}
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.PlatformGraphicsInfo$$Lambda$lambda$static$0")) {
			return PlatformGraphicsInfo$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformGraphicsInfo, init$, void)},
		{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createGE, $GraphicsEnvironment*)},
		{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createToolkit, $Toolkit*)},
		{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessMessage, $String*)},
		{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessProperty, bool)},
		{"isInAquaSession", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(PlatformGraphicsInfo, isInAquaSession, bool)},
		{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlatformGraphicsInfo, lambda$static$0, $Void*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.PlatformGraphicsInfo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformGraphicsInfo, name, initialize, &classInfo$$, PlatformGraphicsInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformGraphicsInfo);
	});
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun