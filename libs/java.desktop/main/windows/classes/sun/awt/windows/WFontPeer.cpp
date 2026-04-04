#include <sun/awt/windows/WFontPeer.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/PlatformFont.h>
#include <sun/awt/windows/WFontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformFont = ::sun::awt::PlatformFont;
using $WFontConfiguration = ::sun::awt::windows::WFontConfiguration;

namespace sun {
	namespace awt {
		namespace windows {

void WFontPeer::init$($String* name, int32_t style) {
	$PlatformFont::init$(name, style);
	if (this->fontConfig != nullptr) {
		$set(this, textComponentFontName, $cast($WFontConfiguration, this->fontConfig)->getTextComponentFontName(this->familyName, style));
	}
}

char16_t WFontPeer::getMissingGlyphCharacter() {
	return (char16_t)0x2751;
}

void WFontPeer::initIDs() {
	$init(WFontPeer);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WFontPeer::clinit$($Class* clazz) {
	{
		WFontPeer::initIDs();
	}
}

WFontPeer::WFontPeer() {
}

$Class* WFontPeer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"textComponentFontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WFontPeer, textComponentFontName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(WFontPeer, init$, void, $String*, int32_t)},
		{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED, $virtualMethod(WFontPeer, getMissingGlyphCharacter, char16_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WFontPeer, initIDs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WFontPeer",
		"sun.awt.PlatformFont",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WFontPeer, name, initialize, &classInfo$$, WFontPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WFontPeer);
	});
	return class$;
}

$Class* WFontPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun