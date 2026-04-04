#include <sun/lwawt/macosx/LWCToolkit$OSXPlatformFont.h>
#include <sun/awt/PlatformFont.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformFont = ::sun::awt::PlatformFont;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$OSXPlatformFont::init$($LWCToolkit* this$0, $String* name, int32_t style) {
	$set(this, this$0, this$0);
	$PlatformFont::init$(name, style);
}

char16_t LWCToolkit$OSXPlatformFont::getMissingGlyphCharacter() {
	return (char16_t)0x0000fff8;
}

LWCToolkit$OSXPlatformFont::LWCToolkit$OSXPlatformFont() {
}

$Class* LWCToolkit$OSXPlatformFont::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/LWCToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$OSXPlatformFont, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/LWCToolkit;Ljava/lang/String;I)V", nullptr, 0, $method(LWCToolkit$OSXPlatformFont, init$, void, $LWCToolkit*, $String*, int32_t)},
		{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED, $virtualMethod(LWCToolkit$OSXPlatformFont, getMissingGlyphCharacter, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$OSXPlatformFont", "sun.lwawt.macosx.LWCToolkit", "OSXPlatformFont", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$OSXPlatformFont",
		"sun.awt.PlatformFont",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$OSXPlatformFont, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCToolkit$OSXPlatformFont);
	});
	return class$;
}

$Class* LWCToolkit$OSXPlatformFont::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun