#include <sun/awt/windows/WDefaultFontCharset$Encoder.h>
#include <sun/awt/AWTCharset$Encoder.h>
#include <sun/awt/windows/WDefaultFontCharset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTCharset$Encoder = ::sun::awt::AWTCharset$Encoder;
using $WDefaultFontCharset = ::sun::awt::windows::WDefaultFontCharset;

namespace sun {
	namespace awt {
		namespace windows {

void WDefaultFontCharset$Encoder::init$($WDefaultFontCharset* this$0) {
	$set(this, this$0, this$0);
	$AWTCharset$Encoder::init$(this$0);
}

bool WDefaultFontCharset$Encoder::canEncode(char16_t c) {
	return this->this$0->canConvert(c);
}

WDefaultFontCharset$Encoder::WDefaultFontCharset$Encoder() {
}

$Class* WDefaultFontCharset$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WDefaultFontCharset;", nullptr, $FINAL | $SYNTHETIC, $field(WDefaultFontCharset$Encoder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WDefaultFontCharset;)V", nullptr, $PRIVATE, $method(WDefaultFontCharset$Encoder, init$, void, $WDefaultFontCharset*)},
		{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(WDefaultFontCharset$Encoder, canEncode, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WDefaultFontCharset$Encoder", "sun.awt.windows.WDefaultFontCharset", "Encoder", $PRIVATE},
		{"sun.awt.AWTCharset$Encoder", "sun.awt.AWTCharset", "Encoder", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WDefaultFontCharset$Encoder",
		"sun.awt.AWTCharset$Encoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WDefaultFontCharset"
	};
	$loadClass(WDefaultFontCharset$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WDefaultFontCharset$Encoder);
	});
	return class$;
}

$Class* WDefaultFontCharset$Encoder::class$ = nullptr;

		} // windows
	} // awt
} // sun