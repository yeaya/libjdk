#include <sun/font/NullFontScaler.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontScaler.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontScaler = ::sun::font::FontScaler;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$MethodInfo _NullFontScaler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NullFontScaler, init$, void)},
	{"<init>", "(Lsun/font/Font2D;IZI)V", nullptr, $PUBLIC, $method(NullFontScaler, init$, void, $Font2D*, int32_t, bool, int32_t)},
	{"createScalerContext", "([DIIFF)J", nullptr, 0, $virtualMethod(NullFontScaler, createScalerContext, int64_t, $doubles*, int32_t, int32_t, float, float)},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, 0, $virtualMethod(NullFontScaler, getFontMetrics, $StrikeMetrics*, int64_t)},
	{"getGlyphAdvance", "(JI)F", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphAdvance, float, int64_t, int32_t)},
	{"getGlyphCode", "(C)I", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphCode, int32_t, char16_t), "sun.font.FontScalerException"},
	{"getGlyphImage", "(JI)J", nullptr, $NATIVE, $virtualMethod(NullFontScaler, getGlyphImage, int64_t, int64_t, int32_t)},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphMetrics, void, int64_t, int32_t, $Point2D$Float*)},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphOutline, $GeneralPath*, int64_t, int32_t, float, float)},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphOutlineBounds, $Rectangle2D$Float*, int64_t, int32_t)},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphPoint, $Point2D$Float*, int64_t, int32_t, int32_t)},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(NullFontScaler, getGlyphVectorOutline, $GeneralPath*, int64_t, $ints*, int32_t, float, float)},
	{"getMissingGlyphCode", "()I", nullptr, 0, $virtualMethod(NullFontScaler, getMissingGlyphCode, int32_t), "sun.font.FontScalerException"},
	{"getNullScalerContext", "()J", nullptr, $STATIC | $NATIVE, $staticMethod(NullFontScaler, getNullScalerContext, int64_t)},
	{"getNumGlyphs", "()I", nullptr, 0, $virtualMethod(NullFontScaler, getNumGlyphs, int32_t), "sun.font.FontScalerException"},
	{"getUnitsPerEm", "()J", nullptr, 0, $virtualMethod(NullFontScaler, getUnitsPerEm, int64_t)},
	{"invalidateScalerContext", "(J)V", nullptr, 0, $virtualMethod(NullFontScaler, invalidateScalerContext, void, int64_t)},
	{}
};

#define _METHOD_INDEX_getGlyphImage 6
#define _METHOD_INDEX_getNullScalerContext 13

$ClassInfo _NullFontScaler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.NullFontScaler",
	"sun.font.FontScaler",
	nullptr,
	nullptr,
	_NullFontScaler_MethodInfo_
};

$Object* allocate$NullFontScaler($Class* clazz) {
	return $of($alloc(NullFontScaler));
}

void NullFontScaler::init$() {
	$FontScaler::init$();
}

void NullFontScaler::init$($Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	$FontScaler::init$();
}

$StrikeMetrics* NullFontScaler::getFontMetrics(int64_t pScalerContext) {
	return $new($StrikeMetrics, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}

float NullFontScaler::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	return 0.0f;
}

void NullFontScaler::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	$nc(metrics)->x = (float)0;
	metrics->y = (float)0;
}

$Rectangle2D$Float* NullFontScaler::getGlyphOutlineBounds(int64_t pContext, int32_t glyphCode) {
	return $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0);
}

$GeneralPath* NullFontScaler::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	return $new($GeneralPath);
}

$GeneralPath* NullFontScaler::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	return $new($GeneralPath);
}

int64_t NullFontScaler::createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) {
	return getNullScalerContext();
}

void NullFontScaler::invalidateScalerContext(int64_t pScalerContext) {
}

int32_t NullFontScaler::getNumGlyphs() {
	return 1;
}

int32_t NullFontScaler::getMissingGlyphCode() {
	return 0;
}

int32_t NullFontScaler::getGlyphCode(char16_t charCode) {
	return 0;
}

int64_t NullFontScaler::getUnitsPerEm() {
	return 2048;
}

$Point2D$Float* NullFontScaler::getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {
	return nullptr;
}

int64_t NullFontScaler::getNullScalerContext() {
	$init(NullFontScaler);
	int64_t $ret = 0;
	$prepareNativeStatic(NullFontScaler, getNullScalerContext, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int64_t NullFontScaler::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	int64_t $ret = 0;
	$prepareNative(NullFontScaler, getGlyphImage, int64_t, int64_t pScalerContext, int32_t glyphCode);
	$ret = $invokeNative(pScalerContext, glyphCode);
	$finishNative();
	return $ret;
}

NullFontScaler::NullFontScaler() {
}

$Class* NullFontScaler::load$($String* name, bool initialize) {
	$loadClass(NullFontScaler, name, initialize, &_NullFontScaler_ClassInfo_, allocate$NullFontScaler);
	return class$;
}

$Class* NullFontScaler::class$ = nullptr;

	} // font
} // sun