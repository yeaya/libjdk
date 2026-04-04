#include <sun/awt/FcFontManager.h>
#include <java/lang/InternalError.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/FcFontConfiguration.h>
#include <sun/font/FontConfigManager$FcCompFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $FontConfigManager$FcCompFontArray = $Array<::sun::font::FontConfigManager$FcCompFont>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FcFontConfiguration = ::sun::font::FcFontConfiguration;
using $FontConfigManager = ::sun::font::FontConfigManager;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

void FcFontManager::init$() {
	$SunFontManager::init$();
	$set(this, fcManager, nullptr);
}

$FontConfigManager* FcFontManager::getFontConfigManager() {
	$synchronized(this) {
		if (this->fcManager == nullptr) {
			$set(this, fcManager, $new($FontConfigManager));
		}
		return this->fcManager;
	}
}

$FontConfiguration* FcFontManager::createFontConfiguration() {
	$var($FcFontConfiguration, fcFontConfig, $new($FcFontConfiguration, this));
	if (fcFontConfig->init()) {
		return fcFontConfig;
	} else {
		$throwNew($InternalError, "failed to initialize fontconfig"_s);
	}
}

$FontConfiguration* FcFontManager::createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {
	$var($FcFontConfiguration, fcFontConfig, $new($FcFontConfiguration, this, preferLocaleFonts, preferPropFonts));
	if (fcFontConfig->init()) {
		return fcFontConfig;
	} else {
		$throwNew($InternalError, "failed to initialize fontconfig"_s);
	}
}

$StringArray* FcFontManager::getDefaultPlatformFont() {
	$useLocalObjectStack();
	$var($StringArray, info, $new($StringArray, 2));
	$$nc(getFontConfigManager())->initFontConfigFonts(false);
	$var($FontConfigManager$FcCompFontArray, fontConfigFonts, $$nc(getFontConfigManager())->getFontConfigFonts());
	if (fontConfigFonts != nullptr) {
		for (int32_t i = 0; i < fontConfigFonts->length; ++i) {
			if ("sans"_s->equals($nc(fontConfigFonts->get(i))->fcFamily) && 0 == $nc(fontConfigFonts->get(i))->style) {
				info->set(0, $nc($nc(fontConfigFonts->get(i))->firstFont)->fullName);
				info->set(1, $nc(fontConfigFonts->get(i))->firstFont->fontFile);
				break;
			}
		}
	}
	if (info->get(0) == nullptr) {
		if (fontConfigFonts != nullptr && fontConfigFonts->length > 0 && $nc($nc(fontConfigFonts->get(0))->firstFont)->fontFile != nullptr && $nc(fontConfigFonts->get(0))->firstFont->fullName != nullptr) {
			info->set(0, $nc(fontConfigFonts->get(0))->firstFont->fullName);
			info->set(1, $nc(fontConfigFonts->get(0))->firstFont->fontFile);
		} else {
			info->set(0, "Dialog"_s);
			info->set(1, "/dialog.ttf"_s);
		}
	}
	return info;
}

$String* FcFontManager::getFontPathNative(bool noType1Fonts, bool isX11GE) {
	$prepareNative(getFontPathNative, $String*, bool noType1Fonts, bool isX11GE);
	$var($String, $ret, $invokeNativeObject(noType1Fonts, isX11GE));
	$finishNative();
	return $ret;
}

$String* FcFontManager::getFontPath(bool noType1Fonts) {
	$synchronized(this) {
		return getFontPathNative(noType1Fonts, false);
	}
}

FcFontManager::FcFontManager() {
}

$Class* FcFontManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fcManager", "Lsun/font/FontConfigManager;", nullptr, $PRIVATE, $field(FcFontManager, fcManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FcFontManager, init$, void)},
		{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED, $virtualMethod(FcFontManager, createFontConfiguration, $FontConfiguration*)},
		{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC, $virtualMethod(FcFontManager, createFontConfiguration, $FontConfiguration*, bool, bool)},
		{"getDefaultPlatformFont", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(FcFontManager, getDefaultPlatformFont, $StringArray*)},
		{"getFontConfigManager", "()Lsun/font/FontConfigManager;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FcFontManager, getFontConfigManager, $FontConfigManager*)},
		{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(FcFontManager, getFontPath, $String*, bool)},
		{"getFontPathNative", "(ZZ)Ljava/lang/String;", nullptr, $NATIVE, $virtualMethod(FcFontManager, getFontPathNative, $String*, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.FcFontManager",
		"sun.font.SunFontManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FcFontManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FcFontManager));
	});
	return class$;
}

$Class* FcFontManager::class$ = nullptr;

	} // awt
} // sun