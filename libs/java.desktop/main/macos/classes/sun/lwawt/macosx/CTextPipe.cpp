#include <sun/lwawt/macosx/CTextPipe.h>

#include <java/awt/Font.h>
#include <java/awt/Paint.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints.h>
#include <sun/font/CStrike.h>
#include <sun/font/FontStrike.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/lwawt/macosx/CTextPipe$Tracer.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef VALUE_ANTIALIAS_OFF
#undef VALUE_ANTIALIAS_ON

using $Font = ::java::awt::Font;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $CStrike = ::sun::font::CStrike;
using $FontStrike = ::sun::font::FontStrike;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CTextPipe$Tracer = ::sun::lwawt::macosx::CTextPipe$Tracer;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CTextPipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CTextPipe, init$, void)},
	{"doDrawGlyphs", "(Lsun/java2d/SurfaceData;JLjava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(CTextPipe, doDrawGlyphs, void, $SurfaceData*, int64_t, $GlyphVector*, float, float)},
	{"doDrawString", "(Lsun/java2d/SurfaceData;JLjava/lang/String;DD)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(CTextPipe, doDrawString, void, $SurfaceData*, int64_t, $String*, double, double)},
	{"doOneUnicode", "(Lsun/java2d/SurfaceData;JCFF)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(CTextPipe, doOneUnicode, void, $SurfaceData*, int64_t, char16_t, float, float)},
	{"doUnicodes", "(Lsun/java2d/SurfaceData;J[CIIFF)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(CTextPipe, doUnicodes, void, $SurfaceData*, int64_t, $chars*, int32_t, int32_t, float, float)},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC, $virtualMethod(CTextPipe, drawChars, void, $SunGraphics2D*, $chars*, int32_t, int32_t, int32_t, int32_t)},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC, $virtualMethod(CTextPipe, drawGlyphVector, void, $SunGraphics2D*, $GlyphVector*, float, float)},
	{"drawGlyphVectorAsShape", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, 0, $virtualMethod(CTextPipe, drawGlyphVectorAsShape, void, $SunGraphics2D*, $GlyphVector*, float, float)},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC, $virtualMethod(CTextPipe, drawString, void, $SunGraphics2D*, $String*, double, double)},
	{"drawTextAsShape", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, 0, $virtualMethod(CTextPipe, drawTextAsShape, void, $SunGraphics2D*, $String*, double, double)},
	{"getNativeStrikePtr", "(Lsun/java2d/SunGraphics2D;)J", nullptr, 0, $virtualMethod(CTextPipe, getNativeStrikePtr, int64_t, $SunGraphics2D*)},
	{"traceWrap", "()Lsun/lwawt/macosx/CTextPipe;", nullptr, $PUBLIC, $virtualMethod(CTextPipe, traceWrap, CTextPipe*)},
	{}
};

#define _METHOD_INDEX_doDrawGlyphs 1
#define _METHOD_INDEX_doDrawString 2
#define _METHOD_INDEX_doOneUnicode 3
#define _METHOD_INDEX_doUnicodes 4

$InnerClassInfo _CTextPipe_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTextPipe$Tracer", "sun.lwawt.macosx.CTextPipe", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CTextPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CTextPipe",
	"java.lang.Object",
	"sun.java2d.pipe.TextPipe",
	nullptr,
	_CTextPipe_MethodInfo_,
	nullptr,
	nullptr,
	_CTextPipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTextPipe$Tracer"
};

$Object* allocate$CTextPipe($Class* clazz) {
	return $of($alloc(CTextPipe));
}

void CTextPipe::init$() {
}

void CTextPipe::doDrawString($SurfaceData* sData, int64_t nativeStrikePtr, $String* s, double x, double y) {
	$prepareNative(CTextPipe, doDrawString, void, $SurfaceData* sData, int64_t nativeStrikePtr, $String* s, double x, double y);
	$invokeNative(sData, nativeStrikePtr, s, x, y);
	$finishNative();
}

void CTextPipe::doDrawGlyphs($SurfaceData* sData, int64_t nativeStrikePtr, $GlyphVector* gV, float x, float y) {
	$prepareNative(CTextPipe, doDrawGlyphs, void, $SurfaceData* sData, int64_t nativeStrikePtr, $GlyphVector* gV, float x, float y);
	$invokeNative(sData, nativeStrikePtr, gV, x, y);
	$finishNative();
}

void CTextPipe::doUnicodes($SurfaceData* sData, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y) {
	$prepareNative(CTextPipe, doUnicodes, void, $SurfaceData* sData, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y);
	$invokeNative(sData, nativeStrikePtr, unicodes, offset, length, x, y);
	$finishNative();
}

void CTextPipe::doOneUnicode($SurfaceData* sData, int64_t nativeStrikePtr, char16_t aUnicode, float x, float y) {
	$prepareNative(CTextPipe, doOneUnicode, void, $SurfaceData* sData, int64_t nativeStrikePtr, char16_t aUnicode, float x, float y);
	$invokeNative(sData, nativeStrikePtr, aUnicode, x, y);
	$finishNative();
}

int64_t CTextPipe::getNativeStrikePtr($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($FontStrike, fontStrike, $nc($($nc(sg2d)->getFontInfo()))->fontStrike);
	if (!($instanceOf($CStrike, fontStrike))) {
		return 0;
	}
	return $nc(($cast($CStrike, fontStrike)))->getNativeStrikePtr();
}

void CTextPipe::drawGlyphVectorAsShape($SunGraphics2D* sg2d, $GlyphVector* gv, float x, float y) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(gv)->getNumGlyphs();
	for (int32_t i = 0; i < length; ++i) {
		$var($Shape, glyph, gv->getGlyphOutline(i, x, y));
		$nc(sg2d)->fill(glyph);
	}
}

void CTextPipe::drawTextAsShape($SunGraphics2D* sg2d, $String* s, double x, double y) {
	$useLocalCurrentObjectStackCache();
	$init($SunHints);
	$var($Object, oldAliasingHint, $nc(sg2d)->getRenderingHint($SunHints::KEY_ANTIALIASING));
	$var($FontRenderContext, frc, sg2d->getFontRenderContext());
	sg2d->setRenderingHint($SunHints::KEY_ANTIALIASING, ($nc(frc)->isAntiAliased() ? $SunHints::VALUE_ANTIALIAS_ON : $SunHints::VALUE_ANTIALIAS_OFF));
	$var($Font, font, sg2d->getFont());
	$var($GlyphVector, gv, $nc(font)->createGlyphVector(frc, s));
	int32_t length = $nc(gv)->getNumGlyphs();
	for (int32_t i = 0; i < length; ++i) {
		$var($Shape, glyph, gv->getGlyphOutline(i, (float)x, (float)y));
		sg2d->fill(glyph);
	}
	sg2d->setRenderingHint($SunHints::KEY_ANTIALIASING, oldAliasingHint);
}

void CTextPipe::drawString($SunGraphics2D* sg2d, $String* s, double x, double y) {
	int64_t nativeStrikePtr = getNativeStrikePtr(sg2d);
	if ($OSXSurfaceData::IsSimpleColor($nc(sg2d)->paint) && nativeStrikePtr != 0) {
		$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
		$nc(surfaceData)->drawString(this, sg2d, nativeStrikePtr, s, x, y);
	} else {
		drawTextAsShape(sg2d, s, x, y);
	}
}

void CTextPipe::drawGlyphVector($SunGraphics2D* sg2d, $GlyphVector* gV, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($Font, prevFont, $nc(sg2d)->getFont());
	sg2d->setFont($($nc(gV)->getFont()));
	int64_t nativeStrikePtr = getNativeStrikePtr(sg2d);
	if ($OSXSurfaceData::IsSimpleColor(sg2d->paint) && nativeStrikePtr != 0) {
		$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, sg2d->getSurfaceData()));
		$nc(surfaceData)->drawGlyphs(this, sg2d, nativeStrikePtr, gV, x, y);
	} else {
		drawGlyphVectorAsShape(sg2d, gV, x, y);
	}
	sg2d->setFont(prevFont);
}

void CTextPipe::drawChars($SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int64_t nativeStrikePtr = getNativeStrikePtr(sg2d);
	if ($OSXSurfaceData::IsSimpleColor($nc(sg2d)->paint) && nativeStrikePtr != 0) {
		$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
		$nc(surfaceData)->drawUnicodes(this, sg2d, nativeStrikePtr, data, offset, length, (float)x, (float)y);
	} else {
		drawTextAsShape(sg2d, $$new($String, data, offset, length), (double)x, (double)y);
	}
}

CTextPipe* CTextPipe::traceWrap() {
	return $new($CTextPipe$Tracer);
}

CTextPipe::CTextPipe() {
}

$Class* CTextPipe::load$($String* name, bool initialize) {
	$loadClass(CTextPipe, name, initialize, &_CTextPipe_ClassInfo_, allocate$CTextPipe);
	return class$;
}

$Class* CTextPipe::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun