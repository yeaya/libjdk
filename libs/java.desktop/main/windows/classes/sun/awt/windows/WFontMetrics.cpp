#include <sun/awt/windows/WFontMetrics.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace sun {
	namespace awt {
		namespace windows {

$Hashtable* WFontMetrics::table = nullptr;

void WFontMetrics::init$($Font* font) {
	$FontMetrics::init$(font);
	init();
}

int32_t WFontMetrics::getLeading() {
	return this->leading;
}

int32_t WFontMetrics::getAscent() {
	return this->ascent;
}

int32_t WFontMetrics::getDescent() {
	return this->descent;
}

int32_t WFontMetrics::getHeight() {
	return this->height;
}

int32_t WFontMetrics::getMaxAscent() {
	return this->maxAscent;
}

int32_t WFontMetrics::getMaxDescent() {
	return this->maxDescent;
}

int32_t WFontMetrics::getMaxAdvance() {
	return this->maxAdvance;
}

int32_t WFontMetrics::stringWidth($String* str) {
	$prepareNative(stringWidth, int32_t, $String* str);
	int32_t $ret = $invokeNative(str);
	$finishNative();
	return $ret;
}

int32_t WFontMetrics::charsWidth($chars* data, int32_t off, int32_t len) {
	$prepareNative(charsWidth, int32_t, $chars* data, int32_t off, int32_t len);
	int32_t $ret = $invokeNative(data, off, len);
	$finishNative();
	return $ret;
}

int32_t WFontMetrics::bytesWidth($bytes* data, int32_t off, int32_t len) {
	$prepareNative(bytesWidth, int32_t, $bytes* data, int32_t off, int32_t len);
	int32_t $ret = $invokeNative(data, off, len);
	$finishNative();
	return $ret;
}

$ints* WFontMetrics::getWidths() {
	return this->widths;
}

void WFontMetrics::init() {
	$prepareNative(init, void);
	$invokeNative();
	$finishNative();
}

$FontMetrics* WFontMetrics::getFontMetrics($Font* font) {
	$init(WFontMetrics);
	$var($FontMetrics, fm, $cast($FontMetrics, $nc(WFontMetrics::table)->get(font)));
	if (fm == nullptr) {
		WFontMetrics::table->put(font, $assign(fm, $new(WFontMetrics, font)));
	}
	return fm;
}

void WFontMetrics::initIDs() {
	$init(WFontMetrics);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WFontMetrics::clinit$($Class* clazz) {
	{
		WFontMetrics::initIDs();
	}
	$assignStatic(WFontMetrics::table, $new($Hashtable));
}

WFontMetrics::WFontMetrics() {
}

$Class* WFontMetrics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"widths", "[I", nullptr, 0, $field(WFontMetrics, widths)},
		{"ascent", "I", nullptr, 0, $field(WFontMetrics, ascent)},
		{"descent", "I", nullptr, 0, $field(WFontMetrics, descent)},
		{"leading", "I", nullptr, 0, $field(WFontMetrics, leading)},
		{"height", "I", nullptr, 0, $field(WFontMetrics, height)},
		{"maxAscent", "I", nullptr, 0, $field(WFontMetrics, maxAscent)},
		{"maxDescent", "I", nullptr, 0, $field(WFontMetrics, maxDescent)},
		{"maxHeight", "I", nullptr, 0, $field(WFontMetrics, maxHeight)},
		{"maxAdvance", "I", nullptr, 0, $field(WFontMetrics, maxAdvance)},
		{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Font;Ljava/awt/FontMetrics;>;", $STATIC, $staticField(WFontMetrics, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(WFontMetrics, init$, void, $Font*)},
		{"bytesWidth", "([BII)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WFontMetrics, bytesWidth, int32_t, $bytes*, int32_t, int32_t)},
		{"charsWidth", "([CII)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WFontMetrics, charsWidth, int32_t, $chars*, int32_t, int32_t)},
		{"getAscent", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getAscent, int32_t)},
		{"getDescent", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getDescent, int32_t)},
		{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $STATIC, $staticMethod(WFontMetrics, getFontMetrics, $FontMetrics*, $Font*)},
		{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getHeight, int32_t)},
		{"getLeading", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getLeading, int32_t)},
		{"getMaxAdvance", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getMaxAdvance, int32_t)},
		{"getMaxAscent", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getMaxAscent, int32_t)},
		{"getMaxDescent", "()I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getMaxDescent, int32_t)},
		{"getWidths", "()[I", nullptr, $PUBLIC, $virtualMethod(WFontMetrics, getWidths, $ints*)},
		{"init", "()V", nullptr, $NATIVE, $method(WFontMetrics, init, void)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WFontMetrics, initIDs, void)},
		{"stringWidth", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WFontMetrics, stringWidth, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WFontMetrics",
		"java.awt.FontMetrics",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WFontMetrics, name, initialize, &classInfo$$, WFontMetrics::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WFontMetrics);
	});
	return class$;
}

$Class* WFontMetrics::class$ = nullptr;

		} // windows
	} // awt
} // sun