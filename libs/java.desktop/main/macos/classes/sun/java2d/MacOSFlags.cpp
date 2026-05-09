#include <sun/java2d/MacOSFlags.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/java2d/MacOSFlags$PropertyState.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

#undef DISABLED
#undef ENABLED
#undef UNSPECIFIED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MacOSFlags$PropertyState = ::sun::java2d::MacOSFlags$PropertyState;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;

namespace sun {
	namespace java2d {

class MacOSFlags$$Lambda$lambda$initJavaFlags$0 : public $PrivilegedAction {
	$class(MacOSFlags$$Lambda$lambda$initJavaFlags$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return MacOSFlags::lambda$initJavaFlags$0();
	}
};
$Class* MacOSFlags$$Lambda$lambda$initJavaFlags$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacOSFlags$$Lambda$lambda$initJavaFlags$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MacOSFlags$$Lambda$lambda$initJavaFlags$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.java2d.MacOSFlags$$Lambda$lambda$initJavaFlags$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(MacOSFlags$$Lambda$lambda$initJavaFlags$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSFlags$$Lambda$lambda$initJavaFlags$0);
	});
	return class$;
}
$Class* MacOSFlags$$Lambda$lambda$initJavaFlags$0::class$ = nullptr;

bool MacOSFlags::oglEnabled = false;
bool MacOSFlags::oglVerbose = false;
bool MacOSFlags::metalEnabled = false;
bool MacOSFlags::metalVerbose = false;

void MacOSFlags::init$() {
}

$MacOSFlags$PropertyState* MacOSFlags::getBooleanProp($String* p, $MacOSFlags$PropertyState* defaultVal) {
	$init(MacOSFlags);
	$var($String, propString, $System::getProperty(p));
	$MacOSFlags$PropertyState* returnVal = defaultVal;
	if (propString != nullptr) {
		bool var$3 = propString->equals("true"_s);
		bool var$2 = var$3 || propString->equals("t"_s);
		bool var$1 = var$2 || propString->equals("True"_s);
		bool var$0 = var$1 || propString->equals("T"_s);
		if (var$0 || propString->equals(""_s)) {
			$init($MacOSFlags$PropertyState);
			returnVal = $MacOSFlags$PropertyState::ENABLED;
		} else {
			bool var$6 = propString->equals("false"_s);
			bool var$5 = var$6 || propString->equals("f"_s);
			bool var$4 = var$5 || propString->equals("False"_s);
			if (var$4 || propString->equals("F"_s)) {
				$init($MacOSFlags$PropertyState);
				returnVal = $MacOSFlags$PropertyState::DISABLED;
			}
		}
	}
	return returnVal;
}

bool MacOSFlags::isBooleanPropTrueVerbose($String* p) {
	$init(MacOSFlags);
	$var($String, propString, $System::getProperty(p));
	if (propString != nullptr) {
		bool var$0 = propString->equals("True"_s);
		if (var$0 || propString->equals("T"_s)) {
			return true;
		}
	}
	return false;
}

void MacOSFlags::initJavaFlags() {
	$init(MacOSFlags);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(MacOSFlags$$Lambda$lambda$initJavaFlags$0)));
}

bool MacOSFlags::isMetalEnabled() {
	$init(MacOSFlags);
	return MacOSFlags::metalEnabled;
}

bool MacOSFlags::isMetalVerbose() {
	$init(MacOSFlags);
	return MacOSFlags::metalVerbose;
}

bool MacOSFlags::isOGLEnabled() {
	$init(MacOSFlags);
	return MacOSFlags::oglEnabled;
}

bool MacOSFlags::isOGLVerbose() {
	$init(MacOSFlags);
	return MacOSFlags::oglVerbose;
}

$Object* MacOSFlags::lambda$initJavaFlags$0() {
	$init(MacOSFlags);
	$init($MacOSFlags$PropertyState);
	$MacOSFlags$PropertyState* oglState = getBooleanProp("sun.java2d.opengl"_s, $MacOSFlags$PropertyState::UNSPECIFIED);
	$MacOSFlags$PropertyState* metalState = getBooleanProp("sun.java2d.metal"_s, $MacOSFlags$PropertyState::UNSPECIFIED);
	if ((oglState == $MacOSFlags$PropertyState::UNSPECIFIED && metalState == $MacOSFlags$PropertyState::UNSPECIFIED) || (oglState == $MacOSFlags$PropertyState::DISABLED && metalState == $MacOSFlags$PropertyState::DISABLED) || (oglState == $MacOSFlags$PropertyState::ENABLED && metalState == $MacOSFlags$PropertyState::ENABLED)) {
		oglState = $MacOSFlags$PropertyState::ENABLED;
		metalState = $MacOSFlags$PropertyState::DISABLED;
	}
	if (metalState == $MacOSFlags$PropertyState::UNSPECIFIED) {
		if (oglState == $MacOSFlags$PropertyState::DISABLED) {
			MacOSFlags::oglEnabled = false;
			MacOSFlags::metalEnabled = true;
		} else {
			MacOSFlags::oglEnabled = true;
			MacOSFlags::metalEnabled = false;
		}
	} else if (metalState == $MacOSFlags$PropertyState::ENABLED) {
		MacOSFlags::oglEnabled = false;
		MacOSFlags::metalEnabled = true;
	} else if (metalState == $MacOSFlags$PropertyState::DISABLED) {
		MacOSFlags::oglEnabled = true;
		MacOSFlags::metalEnabled = false;
	}
	MacOSFlags::oglVerbose = isBooleanPropTrueVerbose("sun.java2d.opengl"_s);
	MacOSFlags::metalVerbose = isBooleanPropTrueVerbose("sun.java2d.metal"_s);
	if (MacOSFlags::oglEnabled && !MacOSFlags::metalEnabled) {
		if (!$CGLGraphicsConfig::isCGLAvailable()) {
			if (MacOSFlags::oglVerbose) {
				$nc($System::out)->println("Could not enable OpenGL pipeline (CGL not available)"_s);
			}
			MacOSFlags::oglEnabled = false;
			MacOSFlags::metalEnabled = $MTLGraphicsConfig::isMetalAvailable();
		}
	} else if (MacOSFlags::metalEnabled && !MacOSFlags::oglEnabled) {
		if (!$MTLGraphicsConfig::isMetalAvailable()) {
			if (MacOSFlags::metalVerbose) {
				$nc($System::out)->println("Could not enable Metal pipeline (Metal framework not available)"_s);
			}
			MacOSFlags::metalEnabled = false;
			MacOSFlags::oglEnabled = $CGLGraphicsConfig::isCGLAvailable();
		}
	}
	if (!MacOSFlags::metalEnabled && !MacOSFlags::oglEnabled) {
		$throwNew($InternalError, "Error - unable to initialize any rendering pipeline."_s);
	}
	return nullptr;
}

void MacOSFlags::clinit$($Class* clazz) {
	{
		MacOSFlags::initJavaFlags();
	}
}

MacOSFlags::MacOSFlags() {
}

$Class* MacOSFlags::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.java2d.MacOSFlags$$Lambda$lambda$initJavaFlags$0")) {
			return MacOSFlags$$Lambda$lambda$initJavaFlags$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"oglEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, oglEnabled)},
		{"oglVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, oglVerbose)},
		{"metalEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, metalEnabled)},
		{"metalVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, metalVerbose)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacOSFlags, init$, void)},
		{"getBooleanProp", "(Ljava/lang/String;Lsun/java2d/MacOSFlags$PropertyState;)Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PRIVATE | $STATIC, $staticMethod(MacOSFlags, getBooleanProp, $MacOSFlags$PropertyState*, $String*, $MacOSFlags$PropertyState*)},
		{"initJavaFlags", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MacOSFlags, initJavaFlags, void)},
		{"isBooleanPropTrueVerbose", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MacOSFlags, isBooleanPropTrueVerbose, bool, $String*)},
		{"isMetalEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MacOSFlags, isMetalEnabled, bool)},
		{"isMetalVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MacOSFlags, isMetalVerbose, bool)},
		{"isOGLEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MacOSFlags, isOGLEnabled, bool)},
		{"isOGLVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MacOSFlags, isOGLVerbose, bool)},
		{"lambda$initJavaFlags$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MacOSFlags, lambda$initJavaFlags$0, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.MacOSFlags$PropertyState", "sun.java2d.MacOSFlags", "PropertyState", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.MacOSFlags",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.MacOSFlags$PropertyState"
	};
	$loadClass(MacOSFlags, name, initialize, &classInfo$$, MacOSFlags::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSFlags);
	});
	return class$;
}

$Class* MacOSFlags::class$ = nullptr;

	} // java2d
} // sun