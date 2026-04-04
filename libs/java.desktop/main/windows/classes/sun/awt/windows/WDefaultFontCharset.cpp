#include <sun/awt/windows/WDefaultFontCharset.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/AWTCharset.h>
#include <sun/awt/windows/WDefaultFontCharset$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AWTCharset = ::sun::awt::AWTCharset;
using $WDefaultFontCharset$Encoder = ::sun::awt::windows::WDefaultFontCharset$Encoder;

namespace sun {
	namespace awt {
		namespace windows {

void WDefaultFontCharset::init$($String* name) {
	$AWTCharset::init$("WDefaultFontCharset"_s, $($Charset::forName("windows-1252"_s)));
	$set(this, fontName, name);
}

$CharsetEncoder* WDefaultFontCharset::newEncoder() {
	return $new($WDefaultFontCharset$Encoder, this);
}

bool WDefaultFontCharset::canConvert(char16_t ch) {
	$prepareNative(canConvert, bool, char16_t ch);
	bool $ret = $invokeNative(ch);
	$finishNative();
	return $ret;
}

void WDefaultFontCharset::initIDs() {
	$init(WDefaultFontCharset);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WDefaultFontCharset::clinit$($Class* clazz) {
	{
		WDefaultFontCharset::initIDs();
	}
}

WDefaultFontCharset::WDefaultFontCharset() {
}

$Class* WDefaultFontCharset::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WDefaultFontCharset, fontName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(WDefaultFontCharset, init$, void, $String*)},
		{"canConvert", "(C)Z", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(WDefaultFontCharset, canConvert, bool, char16_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDefaultFontCharset, initIDs, void)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(WDefaultFontCharset, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WDefaultFontCharset$Encoder", "sun.awt.windows.WDefaultFontCharset", "Encoder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WDefaultFontCharset",
		"sun.awt.AWTCharset",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WDefaultFontCharset$Encoder"
	};
	$loadClass(WDefaultFontCharset, name, initialize, &classInfo$$, WDefaultFontCharset::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WDefaultFontCharset);
	});
	return class$;
}

$Class* WDefaultFontCharset::class$ = nullptr;

		} // windows
	} // awt
} // sun