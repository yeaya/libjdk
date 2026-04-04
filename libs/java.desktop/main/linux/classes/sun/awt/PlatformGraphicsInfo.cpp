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
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;

namespace sun {
	namespace awt {

class PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0 : public $PrivilegedAction {
	$class(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(PlatformGraphicsInfo::lambda$getDefaultHeadlessProperty$0());
	}
};
$Class* PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0);
	});
	return class$;
}
$Class* PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::class$ = nullptr;

void PlatformGraphicsInfo::init$() {
}

$GraphicsEnvironment* PlatformGraphicsInfo::createGE() {
	return $new($X11GraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	return $new($XToolkit);
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	$useLocalObjectStack();
	$load(PlatformGraphicsInfo);
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0))))->booleanValue();
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	return "\nNo X11 DISPLAY variable was set,\nbut this program performed an operation which requires it."_s;
}

$Boolean* PlatformGraphicsInfo::lambda$getDefaultHeadlessProperty$0() {
	$useLocalObjectStack();
	$var($String, display, $System::getenv("DISPLAY"_s));
	return $Boolean::valueOf(display == nullptr || $(display->trim())->isEmpty());
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0")) {
			return PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformGraphicsInfo, init$, void)},
		{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createGE, $GraphicsEnvironment*)},
		{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createToolkit, $Toolkit*)},
		{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessMessage, $String*)},
		{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessProperty, bool)},
		{"lambda$getDefaultHeadlessProperty$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlatformGraphicsInfo, lambda$getDefaultHeadlessProperty$0, $Boolean*)},
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
	$loadClass(PlatformGraphicsInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformGraphicsInfo);
	});
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun