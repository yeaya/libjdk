#include <sun/java2d/xr/XRBackendNative.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/util/List.h>
#include <sun/font/GlyphList.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableIntArray.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FMTPTR_A8
#undef FMTPTR_ARGB32
#undef MASK_XIMG

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $GlyphList = ::sun::font::GlyphList;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;
using $Region = ::sun::java2d::pipe::Region;
using $GrowableEltArray = ::sun::java2d::xr::GrowableEltArray;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

int64_t XRBackendNative::FMTPTR_A8 = 0;
int64_t XRBackendNative::FMTPTR_ARGB32 = 0;
int64_t XRBackendNative::MASK_XIMG = 0;

void XRBackendNative::init$() {
}

void XRBackendNative::initIDs() {
	$init(XRBackendNative);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

int64_t XRBackendNative::createGC(int32_t drawable) {
	$prepareNative(createGC, int64_t, int32_t drawable);
	int64_t $ret = $invokeNative(drawable);
	$finishNative();
	return $ret;
}

void XRBackendNative::freeGC(int64_t gc) {
	$prepareNative(freeGC, void, int64_t gc);
	$invokeNative(gc);
	$finishNative();
}

int32_t XRBackendNative::createPixmap(int32_t drawable, int32_t depth, int32_t width, int32_t height) {
	$prepareNative(createPixmap, int32_t, int32_t drawable, int32_t depth, int32_t width, int32_t height);
	int32_t $ret = $invokeNative(drawable, depth, width, height);
	$finishNative();
	return $ret;
}

int32_t XRBackendNative::createPictureNative(int32_t drawable, int64_t formatID) {
	$prepareNative(createPictureNative, int32_t, int32_t drawable, int64_t formatID);
	int32_t $ret = $invokeNative(drawable, formatID);
	$finishNative();
	return $ret;
}

void XRBackendNative::freePicture(int32_t picture) {
	$prepareNative(freePicture, void, int32_t picture);
	$invokeNative(picture);
	$finishNative();
}

void XRBackendNative::freePixmap(int32_t pixmap) {
	$prepareNative(freePixmap, void, int32_t pixmap);
	$invokeNative(pixmap);
	$finishNative();
}

void XRBackendNative::setGCExposures(int64_t gc, bool exposure) {
	$prepareNative(setGCExposures, void, int64_t gc, bool exposure);
	$invokeNative(gc, exposure);
	$finishNative();
}

void XRBackendNative::setGCForeground(int64_t gc, int32_t pixel) {
	$prepareNative(setGCForeground, void, int64_t gc, int32_t pixel);
	$invokeNative(gc, pixel);
	$finishNative();
}

void XRBackendNative::setPictureRepeat(int32_t picture, int32_t repeat) {
	$prepareNative(setPictureRepeat, void, int32_t picture, int32_t repeat);
	$invokeNative(picture, repeat);
	$finishNative();
}

void XRBackendNative::copyArea(int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty) {
	$prepareNative(copyArea, void, int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty);
	$invokeNative(src, dst, gc, srcx, srcy, width, height, dstx, dsty);
	$finishNative();
}

void XRBackendNative::setGCMode(int64_t gc, bool copy) {
	$prepareNative(setGCMode, void, int64_t gc, bool copy);
	$invokeNative(gc, copy);
	$finishNative();
}

void XRBackendNative::GCRectanglesNative(int32_t drawable, int64_t gc, $ints* rectArray, int32_t rectCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(GCRectanglesNative, void, int32_t drawable, int64_t gc, $ints* rectArray, int32_t rectCnt);
	$invokeNativeStatic(drawable, gc, rectArray, rectCnt);
	$finishNativeStatic();
}

void XRBackendNative::renderComposite(int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height) {
	$prepareNative(renderComposite, void, int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height);
	$invokeNative(op, src, mask, dst, srcX, srcY, maskX, maskY, dstX, dstY, width, height);
	$finishNative();
}

void XRBackendNative::renderRectangle(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(renderRectangle, void, int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(dst, op, red, green, blue, alpha, x, y, width, height);
	$finishNative();
}

void XRBackendNative::XRenderRectanglesNative(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, $ints* rects, int32_t rectCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRenderRectanglesNative, void, int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, $ints* rects, int32_t rectCnt);
	$invokeNativeStatic(dst, op, red, green, blue, alpha, rects, rectCnt);
	$finishNativeStatic();
}

void XRBackendNative::XRSetTransformNative(int32_t pic, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12) {
	$prepareNative(XRSetTransformNative, void, int32_t pic, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);
	$invokeNative(pic, m00, m01, m02, m10, m11, m12);
	$finishNative();
}

int32_t XRBackendNative::XRCreateLinearGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t numStops, int32_t repeat) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRCreateLinearGradientPaintNative, int32_t, $floats* fractionsArray, $shorts* pixelsArray, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t numStops, int32_t repeat);
	int32_t $ret = $invokeNativeStatic(fractionsArray, pixelsArray, x1, y1, x2, y2, numStops, repeat);
	$finishNativeStatic();
	return $ret;
}

int32_t XRBackendNative::XRCreateRadialGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t numStops, int32_t centerX, int32_t centerY, int32_t innerRadius, int32_t outerRadius, int32_t repeat) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRCreateRadialGradientPaintNative, int32_t, $floats* fractionsArray, $shorts* pixelsArray, int32_t numStops, int32_t centerX, int32_t centerY, int32_t innerRadius, int32_t outerRadius, int32_t repeat);
	int32_t $ret = $invokeNativeStatic(fractionsArray, pixelsArray, numStops, centerX, centerY, innerRadius, outerRadius, repeat);
	$finishNativeStatic();
	return $ret;
}

void XRBackendNative::setFilter(int32_t picture, int32_t filter) {
	$prepareNative(setFilter, void, int32_t picture, int32_t filter);
	$invokeNative(picture, filter);
	$finishNative();
}

void XRBackendNative::XRSetClipNative(int64_t dst, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $Region* clip, bool isGC) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRSetClipNative, void, int64_t dst, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $Region* clip, bool isGC);
	$invokeNativeStatic(dst, x1, y1, x2, y2, clip, isGC);
	$finishNativeStatic();
}

void XRBackendNative::GCRectangles(int32_t drawable, int64_t gc, $GrowableRectArray* rects) {
	$var($ints, var$0, $nc(rects)->getArray());
	GCRectanglesNative(drawable, gc, var$0, rects->getSize());
}

int32_t XRBackendNative::createPicture(int32_t drawable, int32_t formatID) {
	return createPictureNative(drawable, getFormatPtr(formatID));
}

void XRBackendNative::setPictureTransform(int32_t picture, $AffineTransform* transform) {
	int32_t var$0 = $XRUtils::XDoubleToFixed($nc(transform)->getScaleX());
	int32_t var$1 = $XRUtils::XDoubleToFixed(transform->getShearX());
	int32_t var$2 = $XRUtils::XDoubleToFixed(transform->getTranslateX());
	int32_t var$3 = $XRUtils::XDoubleToFixed(transform->getShearY());
	int32_t var$4 = $XRUtils::XDoubleToFixed(transform->getScaleY());
	XRSetTransformNative(picture, var$0, var$1, var$2, var$3, var$4, $XRUtils::XDoubleToFixed(transform->getTranslateY()));
}

void XRBackendNative::renderRectangle(int32_t dst, int8_t op, $XRColor* color, int32_t x, int32_t y, int32_t width, int32_t height) {
	renderRectangle(dst, op, (int16_t)$nc(color)->red, (int16_t)$nc(color)->green, (int16_t)$nc(color)->blue, (int16_t)$nc(color)->alpha, x, y, width, height);
}

$shorts* XRBackendNative::getRenderColors($ints* pixels) {
	$useLocalObjectStack();
	$var($shorts, renderColors, $new($shorts, $nc(pixels)->length * 4));
	$var($XRColor, c, $new($XRColor));
	for (int32_t i = 0; i < pixels->length; ++i) {
		c->setColorValues(pixels->get(i));
		renderColors->set(i * 4 + 0, (int16_t)c->alpha);
		renderColors->set(i * 4 + 1, (int16_t)c->red);
		renderColors->set(i * 4 + 2, (int16_t)c->green);
		renderColors->set(i * 4 + 3, (int16_t)c->blue);
	}
	return renderColors;
}

int64_t XRBackendNative::getFormatPtr(int32_t formatID) {
	$init(XRBackendNative);
	switch (formatID) {
	case $XRUtils::PictStandardA8:
		return XRBackendNative::FMTPTR_A8;
	case $XRUtils::PictStandardARGB32:
		return XRBackendNative::FMTPTR_ARGB32;
	}
	return 0;
}

int32_t XRBackendNative::createLinearGradient($Point2D* p1, $Point2D* p2, $floats* fractions, $ints* pixels, int32_t repeat) {
	$var($shorts, colorValues, getRenderColors(pixels));
	int32_t var$0 = $XRUtils::XDoubleToFixed($nc(p1)->getX());
	int32_t var$1 = $XRUtils::XDoubleToFixed(p1->getY());
	int32_t var$2 = $XRUtils::XDoubleToFixed($nc(p2)->getX());
	int32_t gradient = XRCreateLinearGradientPaintNative(fractions, colorValues, var$0, var$1, var$2, $XRUtils::XDoubleToFixed(p2->getY()), $nc(fractions)->length, repeat);
	return gradient;
}

int32_t XRBackendNative::createRadialGradient(float centerX, float centerY, float innerRadius, float outerRadius, $floats* fractions, $ints* pixels, int32_t repeat) {
	$var($shorts, colorValues, getRenderColors(pixels));
	int32_t var$0 = $nc(fractions)->length;
	int32_t var$1 = $XRUtils::XDoubleToFixed(centerX);
	int32_t var$2 = $XRUtils::XDoubleToFixed(centerY);
	int32_t var$3 = $XRUtils::XDoubleToFixed(innerRadius);
	return XRCreateRadialGradientPaintNative(fractions, colorValues, var$0, var$1, var$2, var$3, $XRUtils::XDoubleToFixed(outerRadius), repeat);
}

void XRBackendNative::setGCClipRectangles(int64_t gc, $Region* clip) {
	int32_t var$0 = $nc(clip)->getLoX();
	int32_t var$1 = clip->getLoY();
	int32_t var$2 = clip->getHiX();
	int32_t var$3 = clip->getHiY();
	XRSetClipNative(gc, var$0, var$1, var$2, var$3, clip->isRectangular() ? ($Region*)nullptr : clip, true);
}

void XRBackendNative::setClipRectangles(int32_t picture, $Region* clip) {
	if (clip != nullptr) {
		int32_t var$0 = clip->getLoX();
		int32_t var$1 = clip->getLoY();
		int32_t var$2 = clip->getHiX();
		int32_t var$3 = clip->getHiY();
		XRSetClipNative(picture, var$0, var$1, var$2, var$3, clip->isRectangular() ? ($Region*)nullptr : clip, false);
	} else {
		XRSetClipNative(picture, 0, 0, 32767, 32767, nullptr, false);
	}
}

void XRBackendNative::renderRectangles(int32_t dst, int8_t op, $XRColor* color, $GrowableRectArray* rects) {
	int16_t var$0 = (int16_t)$nc(color)->red;
	int16_t var$1 = (int16_t)color->green;
	int16_t var$2 = (int16_t)color->blue;
	int16_t var$3 = (int16_t)color->alpha;
	$var($ints, var$4, $nc(rects)->getArray());
	XRenderRectanglesNative(dst, op, var$0, var$1, var$2, var$3, var$4, rects->getSize());
}

$longs* XRBackendNative::getGlyphInfoPtrs($List* cacheEntries) {
	$init(XRBackendNative);
	$useLocalObjectStack();
	$var($longs, glyphInfoPtrs, $new($longs, $nc(cacheEntries)->size()));
	for (int32_t i = 0; i < cacheEntries->size(); ++i) {
		glyphInfoPtrs->set(i, $$sure($XRGlyphCacheEntry, cacheEntries->get(i))->getGlyphInfoPtr());
	}
	return glyphInfoPtrs;
}

void XRBackendNative::XRenderAddGlyphs(int32_t glyphSet, $GlyphList* gl, $List* cacheEntries, $bytes* pixelData) {
	$var($longs, glyphInfoPtrs, getGlyphInfoPtrs(cacheEntries));
	XRAddGlyphsNative(glyphSet, glyphInfoPtrs, $nc(glyphInfoPtrs)->length, pixelData, $nc(pixelData)->length);
}

void XRBackendNative::XRenderFreeGlyphs(int32_t glyphSet, $ints* gids) {
	XRFreeGlyphsNative(glyphSet, gids, $nc(gids)->length);
}

void XRBackendNative::XRAddGlyphsNative(int32_t glyphSet, $longs* glyphInfoPtrs, int32_t glyphCnt, $bytes* pixelData, int32_t pixelDataLength) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRAddGlyphsNative, void, int32_t glyphSet, $longs* glyphInfoPtrs, int32_t glyphCnt, $bytes* pixelData, int32_t pixelDataLength);
	$invokeNativeStatic(glyphSet, glyphInfoPtrs, glyphCnt, pixelData, pixelDataLength);
	$finishNativeStatic();
}

void XRBackendNative::XRFreeGlyphsNative(int32_t glyphSet, $ints* gids, int32_t idCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRFreeGlyphsNative, void, int32_t glyphSet, $ints* gids, int32_t idCnt);
	$invokeNativeStatic(glyphSet, gids, idCnt);
	$finishNativeStatic();
}

void XRBackendNative::XRenderCompositeTextNative(int32_t op, int32_t src, int32_t dst, int32_t srcX, int32_t srcY, int64_t maskFormat, $ints* eltArray, $ints* glyphIDs, int32_t eltCnt, int32_t glyphCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRenderCompositeTextNative, void, int32_t op, int32_t src, int32_t dst, int32_t srcX, int32_t srcY, int64_t maskFormat, $ints* eltArray, $ints* glyphIDs, int32_t eltCnt, int32_t glyphCnt);
	$invokeNativeStatic(op, src, dst, srcX, srcY, maskFormat, eltArray, glyphIDs, eltCnt, glyphCnt);
	$finishNativeStatic();
}

int32_t XRBackendNative::XRenderCreateGlyphSet(int32_t formatID) {
	return XRenderCreateGlyphSetNative(getFormatPtr(formatID));
}

int32_t XRBackendNative::XRenderCreateGlyphSetNative(int64_t format) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRenderCreateGlyphSetNative, int32_t, int64_t format);
	int32_t $ret = $invokeNativeStatic(format);
	$finishNativeStatic();
	return $ret;
}

void XRBackendNative::XRenderCompositeText(int8_t op, int32_t src, int32_t dst, int32_t maskFormatID, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t glyphset, $GrowableEltArray* elts) {
	$useLocalObjectStack();
	$var($GrowableIntArray, glyphs, $nc(elts)->getGlyphs());
	$var($ints, var$0, elts->getArray());
	$var($ints, var$1, $nc(glyphs)->getArray());
	int32_t var$2 = elts->getSize();
	XRenderCompositeTextNative(op, src, dst, sx, sy, 0, var$0, var$1, var$2, glyphs->getSize());
}

void XRBackendNative::putMaskImage(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea) {
	putMaskNative(drawable, gc, imageData, sx, sy, dx, dy, width, height, maskOff, maskScan, ea, XRBackendNative::MASK_XIMG);
}

void XRBackendNative::putMaskNative(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea, int64_t xImg) {
	$init(XRBackendNative);
	$prepareNativeStatic(putMaskNative, void, int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea, int64_t xImg);
	$invokeNativeStatic(drawable, gc, imageData, sx, sy, dx, dy, width, height, maskOff, maskScan, ea, xImg);
	$finishNativeStatic();
}

void XRBackendNative::padBlit(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, $AffineTransform* maskTrx, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	int32_t var$0 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getScaleX());
	int32_t var$1 = $XRUtils::XDoubleToFixed(maskTrx->getShearX());
	int32_t var$2 = $XRUtils::XDoubleToFixed(maskTrx->getTranslateX());
	int32_t var$3 = $XRUtils::XDoubleToFixed(maskTrx->getShearY());
	int32_t var$4 = $XRUtils::XDoubleToFixed(maskTrx->getScaleY());
	padBlitNative(op, srcPict, maskPict, dstPict, var$0, var$1, var$2, var$3, var$4, $XRUtils::XDoubleToFixed(maskTrx->getTranslateY()), maskWidth, maskHeight, lastMaskWidth, lastMaskHeight, sx, sy, dx, dy, w, h);
}

void XRBackendNative::padBlitNative(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$init(XRBackendNative);
	$prepareNativeStatic(padBlitNative, void, int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNativeStatic(op, srcPict, maskPict, dstPict, m00, m01, m02, m10, m11, m12, maskWidth, maskHeight, lastMaskWidth, lastMaskHeight, sx, sy, dx, dy, w, h);
	$finishNativeStatic();
}

void XRBackendNative::clinit$($Class* clazz) {
	{
		XRBackendNative::initIDs();
	}
}

XRBackendNative::XRBackendNative() {
}

$Class* XRBackendNative::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FMTPTR_A8", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, FMTPTR_A8)},
		{"FMTPTR_ARGB32", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, FMTPTR_ARGB32)},
		{"MASK_XIMG", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, MASK_XIMG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XRBackendNative, init$, void)},
		{"GCRectangles", "(IJLsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, GCRectangles, void, int32_t, int64_t, $GrowableRectArray*)},
		{"GCRectanglesNative", "(IJ[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, GCRectanglesNative, void, int32_t, int64_t, $ints*, int32_t)},
		{"XRAddGlyphsNative", "(I[JI[BI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRAddGlyphsNative, void, int32_t, $longs*, int32_t, $bytes*, int32_t)},
		{"XRCreateLinearGradientPaintNative", "([F[SIIIIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRCreateLinearGradientPaintNative, int32_t, $floats*, $shorts*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"XRCreateRadialGradientPaintNative", "([F[SIIIIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRCreateRadialGradientPaintNative, int32_t, $floats*, $shorts*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"XRFreeGlyphsNative", "(I[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRFreeGlyphsNative, void, int32_t, $ints*, int32_t)},
		{"XRSetClipNative", "(JIIIILsun/java2d/pipe/Region;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRSetClipNative, void, int64_t, int32_t, int32_t, int32_t, int32_t, $Region*, bool)},
		{"XRSetTransformNative", "(IIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(XRBackendNative, XRSetTransformNative, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"XRenderAddGlyphs", "(ILsun/font/GlyphList;Ljava/util/List;[B)V", "(ILsun/font/GlyphList;Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;[B)V", $PUBLIC, $virtualMethod(XRBackendNative, XRenderAddGlyphs, void, int32_t, $GlyphList*, $List*, $bytes*)},
		{"XRenderCompositeText", "(BIIIIIIIILsun/java2d/xr/GrowableEltArray;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, XRenderCompositeText, void, int8_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $GrowableEltArray*)},
		{"XRenderCompositeTextNative", "(IIIIIJ[I[III)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRenderCompositeTextNative, void, int32_t, int32_t, int32_t, int32_t, int32_t, int64_t, $ints*, $ints*, int32_t, int32_t)},
		{"XRenderCreateGlyphSet", "(I)I", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, XRenderCreateGlyphSet, int32_t, int32_t)},
		{"XRenderCreateGlyphSetNative", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRenderCreateGlyphSetNative, int32_t, int64_t)},
		{"XRenderFreeGlyphs", "(I[I)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, XRenderFreeGlyphs, void, int32_t, $ints*)},
		{"XRenderRectanglesNative", "(IBSSSS[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, XRenderRectanglesNative, void, int32_t, int8_t, int16_t, int16_t, int16_t, int16_t, $ints*, int32_t)},
		{"copyArea", "(IIJIIIIII)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, copyArea, void, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"createGC", "(I)J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, createGC, int64_t, int32_t)},
		{"createLinearGradient", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[II)I", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, createLinearGradient, int32_t, $Point2D*, $Point2D*, $floats*, $ints*, int32_t)},
		{"createPicture", "(II)I", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, createPicture, int32_t, int32_t, int32_t)},
		{"createPictureNative", "(IJ)I", nullptr, $PRIVATE | $NATIVE, $method(XRBackendNative, createPictureNative, int32_t, int32_t, int64_t)},
		{"createPixmap", "(IIII)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, createPixmap, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"createRadialGradient", "(FFFF[F[II)I", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, createRadialGradient, int32_t, float, float, float, float, $floats*, $ints*, int32_t)},
		{"freeGC", "(J)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, freeGC, void, int64_t)},
		{"freePicture", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, freePicture, void, int32_t)},
		{"freePixmap", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, freePixmap, void, int32_t)},
		{"getFormatPtr", "(I)J", nullptr, $PRIVATE | $STATIC, $staticMethod(XRBackendNative, getFormatPtr, int64_t, int32_t)},
		{"getGlyphInfoPtrs", "(Ljava/util/List;)[J", "(Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;)[J", $PRIVATE | $STATIC, $staticMethod(XRBackendNative, getGlyphInfoPtrs, $longs*, $List*)},
		{"getRenderColors", "([I)[S", nullptr, $PRIVATE, $method(XRBackendNative, getRenderColors, $shorts*, $ints*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, initIDs, void)},
		{"padBlit", "(BIIILjava/awt/geom/AffineTransform;IIIIIIIIII)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, padBlit, void, int8_t, int32_t, int32_t, int32_t, $AffineTransform*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"padBlitNative", "(BIIIIIIIIIIIIIIIIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, padBlitNative, void, int8_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"putMaskImage", "(IJ[BIIIIIIIIF)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, putMaskImage, void, int32_t, int64_t, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float)},
		{"putMaskNative", "(IJ[BIIIIIIIIFJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRBackendNative, putMaskNative, void, int32_t, int64_t, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, int64_t)},
		{"renderComposite", "(BIIIIIIIIIII)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, renderComposite, void, int8_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"renderRectangle", "(IBSSSSIIII)V", nullptr, $PRIVATE | $NATIVE, $method(XRBackendNative, renderRectangle, void, int32_t, int8_t, int16_t, int16_t, int16_t, int16_t, int32_t, int32_t, int32_t, int32_t)},
		{"renderRectangle", "(IBLsun/java2d/xr/XRColor;IIII)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, renderRectangle, void, int32_t, int8_t, $XRColor*, int32_t, int32_t, int32_t, int32_t)},
		{"renderRectangles", "(IBLsun/java2d/xr/XRColor;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, renderRectangles, void, int32_t, int8_t, $XRColor*, $GrowableRectArray*)},
		{"setClipRectangles", "(ILsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, setClipRectangles, void, int32_t, $Region*)},
		{"setFilter", "(II)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, setFilter, void, int32_t, int32_t)},
		{"setGCClipRectangles", "(JLsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, setGCClipRectangles, void, int64_t, $Region*)},
		{"setGCExposures", "(JZ)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, setGCExposures, void, int64_t, bool)},
		{"setGCForeground", "(JI)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, setGCForeground, void, int64_t, int32_t)},
		{"setGCMode", "(JZ)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, setGCMode, void, int64_t, bool)},
		{"setPictureRepeat", "(II)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(XRBackendNative, setPictureRepeat, void, int32_t, int32_t)},
		{"setPictureTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(XRBackendNative, setPictureTransform, void, int32_t, $AffineTransform*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.XRBackendNative",
		"java.lang.Object",
		"sun.java2d.xr.XRBackend",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XRBackendNative, name, initialize, &classInfo$$, XRBackendNative::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XRBackendNative);
	});
	return class$;
}

$Class* XRBackendNative::class$ = nullptr;

		} // xr
	} // java2d
} // sun