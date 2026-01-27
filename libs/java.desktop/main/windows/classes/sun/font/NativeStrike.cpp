#include <sun/font/NativeStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;

namespace sun {
	namespace font {

$FieldInfo _NativeStrike_FieldInfo_[] = {
	{"nativeFont", "Lsun/font/NativeFont;", nullptr, 0, $field(NativeStrike, nativeFont)},
	{}
};

$MethodInfo _NativeStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(NativeStrike, init$, void, $NativeFont*, $FontStrikeDesc*)},
	{"<init>", "(Lsun/font/NativeFont;Lsun/font/FontStrikeDesc;Z)V", nullptr, 0, $method(NativeStrike, init$, void, $NativeFont*, $FontStrikeDesc*, bool)},
	{"getGlyphAdvance", "(I)F", nullptr, 0, $virtualMethod(NativeStrike, getGlyphAdvance, float, int32_t)},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0, $virtualMethod(NativeStrike, getGlyphImageBounds, void, int32_t, $Point2D$Float*, $Rectangle*)},
	{"getGlyphImagePtr", "(I)J", nullptr, 0, $virtualMethod(NativeStrike, getGlyphImagePtr, int64_t, int32_t)},
	{"getGlyphImagePtrNoCache", "(I)J", nullptr, 0, $virtualMethod(NativeStrike, getGlyphImagePtrNoCache, int64_t, int32_t)},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0, $virtualMethod(NativeStrike, getGlyphImagePtrs, void, $ints*, $longs*, int32_t)},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0, $virtualMethod(NativeStrike, getGlyphMetrics, $Point2D$Float*, int32_t)},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(NativeStrike, getGlyphOutline, $GeneralPath*, int32_t, float, float)},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0, $virtualMethod(NativeStrike, getGlyphOutlineBounds, $Rectangle2D$Float*, int32_t)},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(NativeStrike, getGlyphVectorOutline, $GeneralPath*, $ints*, float, float)},
	{}
};

$ClassInfo _NativeStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.NativeStrike",
	"sun.font.PhysicalStrike",
	nullptr,
	_NativeStrike_FieldInfo_,
	_NativeStrike_MethodInfo_
};

$Object* allocate$NativeStrike($Class* clazz) {
	return $of($alloc(NativeStrike));
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc) {
	$PhysicalStrike::init$(nativeFont, desc);
	$throwNew($RuntimeException, "NativeFont not used on Windows"_s);
}

void NativeStrike::init$($NativeFont* nativeFont, $FontStrikeDesc* desc, bool nocache) {
	$PhysicalStrike::init$(nativeFont, desc);
	$throwNew($RuntimeException, "NativeFont not used on Windows"_s);
}

void NativeStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
}

int64_t NativeStrike::getGlyphImagePtr(int32_t glyphCode) {
	return 0;
}

int64_t NativeStrike::getGlyphImagePtrNoCache(int32_t glyphCode) {
	return 0;
}

void NativeStrike::getGlyphImageBounds(int32_t glyphcode, $Point2D$Float* pt, $Rectangle* result) {
}

$Point2D$Float* NativeStrike::getGlyphMetrics(int32_t glyphCode) {
	return nullptr;
}

float NativeStrike::getGlyphAdvance(int32_t glyphCode) {
	return 0.0f;
}

$Rectangle2D$Float* NativeStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	return nullptr;
}

$GeneralPath* NativeStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	return nullptr;
}

$GeneralPath* NativeStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	return nullptr;
}

NativeStrike::NativeStrike() {
}

$Class* NativeStrike::load$($String* name, bool initialize) {
	$loadClass(NativeStrike, name, initialize, &_NativeStrike_ClassInfo_, allocate$NativeStrike);
	return class$;
}

$Class* NativeStrike::class$ = nullptr;

	} // font
} // sun