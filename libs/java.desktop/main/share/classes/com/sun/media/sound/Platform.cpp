#include <com/sun/media/sound/Platform.h>
#include <com/sun/media/sound/Printer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $Printer = ::com::sun::media::sound::Printer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class Platform$$Lambda$lambda$loadLibraries$0 : public $PrivilegedAction {
	$class(Platform$$Lambda$lambda$loadLibraries$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return Platform::lambda$loadLibraries$0();
	}
};
$Class* Platform$$Lambda$lambda$loadLibraries$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Platform$$Lambda$lambda$loadLibraries$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Platform$$Lambda$lambda$loadLibraries$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.media.sound.Platform$$Lambda$lambda$loadLibraries$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Platform$$Lambda$lambda$loadLibraries$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Platform$$Lambda$lambda$loadLibraries$0);
	});
	return class$;
}
$Class* Platform$$Lambda$lambda$loadLibraries$0::class$ = nullptr;

$String* Platform::libName = nullptr;
bool Platform::isNativeLibLoaded = false;
bool Platform::bigEndian = false;

void Platform::init$() {
}

void Platform::initialize() {
	$init(Platform);
}

bool Platform::isBigEndian() {
	$init(Platform);
	return Platform::bigEndian;
}

void Platform::loadLibraries() {
	$init(Platform);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	Platform::isNativeLibLoaded = true;
	try {
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(Platform$$Lambda$lambda$loadLibraries$0)));
	} catch ($Throwable& t) {
		$init($Printer);
		if ($Printer::err$) {
			$Printer::err($$str({"Couldn\'t load library "_s, Platform::libName, ": "_s, $(t->toString())}));
		}
		Platform::isNativeLibLoaded = false;
	}
	if (Platform::isNativeLibLoaded) {
		Platform::bigEndian = nIsBigEndian();
	}
}

bool Platform::isMidiIOEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::isPortsEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::isDirectAudioEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::nIsBigEndian() {
	$init(Platform);
	$prepareNativeStatic(nIsBigEndian, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Void* Platform::lambda$loadLibraries$0() {
	$init(Platform);
	$beforeCallerSensitive();
	$System::loadLibrary(Platform::libName);
	return nullptr;
}

void Platform::clinit$($Class* clazz) {
	$assignStatic(Platform::libName, "jsound"_s);
	{
		Platform::loadLibraries();
	}
}

Platform::Platform() {
}

$Class* Platform::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.media.sound.Platform$$Lambda$lambda$loadLibraries$0")) {
			return Platform$$Lambda$lambda$loadLibraries$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"libName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Platform, libName)},
		{"isNativeLibLoaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Platform, isNativeLibLoaded)},
		{"bigEndian", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Platform, bigEndian)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Platform, init$, void)},
		{"initialize", "()V", nullptr, $STATIC, $staticMethod(Platform, initialize, void)},
		{"isBigEndian", "()Z", nullptr, $STATIC, $staticMethod(Platform, isBigEndian, bool)},
		{"isDirectAudioEnabled", "()Z", nullptr, $STATIC, $staticMethod(Platform, isDirectAudioEnabled, bool)},
		{"isMidiIOEnabled", "()Z", nullptr, $STATIC, $staticMethod(Platform, isMidiIOEnabled, bool)},
		{"isPortsEnabled", "()Z", nullptr, $STATIC, $staticMethod(Platform, isPortsEnabled, bool)},
		{"lambda$loadLibraries$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Platform, lambda$loadLibraries$0, $Void*)},
		{"loadLibraries", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Platform, loadLibraries, void)},
		{"nIsBigEndian", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Platform, nIsBigEndian, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.Platform",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Platform, name, initialize, &classInfo$$, Platform::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Platform);
	});
	return class$;
}

$Class* Platform::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com