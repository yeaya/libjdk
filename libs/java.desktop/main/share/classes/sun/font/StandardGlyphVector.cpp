#include <sun/font/StandardGlyphVector.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/font/GlyphMetrics.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ref/SoftReference.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Map.h>
#include <sun/awt/SunHints.h>
#include <sun/font/AttributeMap.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/DelegatingShape.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontSubstitution.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/StandardGlyphVector$ADL.h>
#include <sun/font/StandardGlyphVector$GlyphStrike.h>
#include <sun/font/StandardGlyphVector$GlyphTransformInfo.h>
#include <sun/java2d/loops/FontInfo.h>
#include <jcpp.h>

#undef DONE
#undef FLAG_COMPLEX_GLYPHS
#undef FLAG_HAS_POSITION_ADJUSTMENTS
#undef FLAG_HAS_TRANSFORMS
#undef FLAG_MASK
#undef FLAG_RUN_RTL
#undef FLAG_USES_ALTERNATE_ORIENTATION
#undef FLAG_USES_VERTICAL_BASELINE
#undef FLAG_USES_VERTICAL_METRICS
#undef INTVAL_TEXT_ANTIALIAS_ON
#undef STANDARD
#undef UNINITIALIZED_FLAGS
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_ON
#undef WIND_NON_ZERO

using $ShapeArray = $Array<::java::awt::Shape>;
using $AffineTransformArray = $Array<::java::awt::geom::AffineTransform>;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $GlyphMetrics = ::java::awt::font::GlyphMetrics;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $SoftReference = ::java::lang::ref::SoftReference;
using $CharacterIterator = ::java::text::CharacterIterator;
using $SunHints = ::sun::awt::SunHints;
using $AttributeMap = ::sun::font::AttributeMap;
using $AttributeValues = ::sun::font::AttributeValues;
using $DelegatingShape = ::sun::font::DelegatingShape;
using $Font2D = ::sun::font::Font2D;
using $FontStrike = ::sun::font::FontStrike;
using $FontSubstitution = ::sun::font::FontSubstitution;
using $FontUtilities = ::sun::font::FontUtilities;
using $StandardGlyphVector$ADL = ::sun::font::StandardGlyphVector$ADL;
using $StandardGlyphVector$GlyphStrike = ::sun::font::StandardGlyphVector$GlyphStrike;
using $StandardGlyphVector$GlyphTransformInfo = ::sun::font::StandardGlyphVector$GlyphTransformInfo;
using $FontInfo = ::sun::java2d::loops::FontInfo;

namespace sun {
	namespace font {

bool StandardGlyphVector::$assertionsDisabled = false;

void StandardGlyphVector::init$($Font* font, $String* str, $FontRenderContext* frc) {
	$GlyphVector::init$();
	$var($chars, var$0, $nc(str)->toCharArray());
	init(font, var$0, 0, str->length(), frc, StandardGlyphVector::UNINITIALIZED_FLAGS);
}

void StandardGlyphVector::init$($Font* font, $chars* text, $FontRenderContext* frc) {
	$GlyphVector::init$();
	init(font, text, 0, $nc(text)->length, frc, StandardGlyphVector::UNINITIALIZED_FLAGS);
}

void StandardGlyphVector::init$($Font* font, $chars* text, int32_t start, int32_t count, $FontRenderContext* frc) {
	$GlyphVector::init$();
	init(font, text, start, count, frc, StandardGlyphVector::UNINITIALIZED_FLAGS);
}

float StandardGlyphVector::getTracking($Font* font) {
	$useLocalObjectStack();
	if ($nc(font)->hasLayoutAttributes()) {
		$var($AttributeValues, values, $$sure($AttributeMap, font->getAttributes())->getValues());
		return $nc(values)->getTracking();
	}
	return 0;
}

void StandardGlyphVector::init$($Font* font, $FontRenderContext* frc, $ints* glyphs, $floats* positions, $ints* indices, int32_t flags) {
	$useLocalObjectStack();
	$GlyphVector::init$();
	initGlyphVector(font, frc, glyphs, positions, indices, flags);
	float track = getTracking(font);
	if (track != 0) {
		track *= $nc(font)->getSize2D();
		$var($Point2D$Float, trackPt, $new($Point2D$Float, track, 0));
		if (font->isTransformed()) {
			$var($AffineTransform, at, font->getTransform());
			$nc(at)->deltaTransform(trackPt, trackPt);
		}
		$var($Font2D, f2d, $FontUtilities::getFont2D(font));
		$var($FontStrike, strike, $nc(f2d)->getStrike(font, frc));
		$var($floats, deltas, $new($floats, {
			trackPt->x,
			trackPt->y
		}));
		for (int32_t j = 0; j < deltas->length; ++j) {
			float inc = deltas->get(j);
			if (inc != 0) {
				float delta = 0;
				for (int32_t i = j, n = 0; n < $nc(glyphs)->length; i += 2) {
					if ($nc(strike)->getGlyphAdvance(glyphs->get(n++)) != 0) {
						(*$nc(positions))[i] += delta;
						delta += inc;
					}
				}
				(*$nc(positions))[$nc(positions)->length - 2 + j] += delta;
			}
		}
	}
}

void StandardGlyphVector::initGlyphVector($Font* font, $FontRenderContext* frc, $ints* glyphs, $floats* positions, $ints* indices, int32_t flags) {
	$set(this, font, font);
	$set(this, frc, frc);
	$set(this, glyphs, glyphs);
	$set(this, userGlyphs, glyphs);
	$set(this, positions, positions);
	$set(this, charIndices, indices);
	this->flags = flags;
	initFontData();
}

void StandardGlyphVector::init$($Font* font, $CharacterIterator* iter, $FontRenderContext* frc) {
	$GlyphVector::init$();
	int32_t offset = $nc(iter)->getBeginIndex();
	$var($chars, text, $new($chars, iter->getEndIndex() - offset));
	for (char16_t c = iter->first(); c != $CharacterIterator::DONE; c = iter->next()) {
		text->set(iter->getIndex() - offset, c);
	}
	init(font, text, 0, text->length, frc, StandardGlyphVector::UNINITIALIZED_FLAGS);
}

void StandardGlyphVector::init$($Font* font, $ints* glyphs, $FontRenderContext* frc) {
	$GlyphVector::init$();
	$set(this, font, font);
	$set(this, frc, frc);
	this->flags = StandardGlyphVector::UNINITIALIZED_FLAGS;
	initFontData();
	$set(this, userGlyphs, glyphs);
	$set(this, glyphs, getValidatedGlyphs(this->userGlyphs));
}

StandardGlyphVector* StandardGlyphVector::getStandardGV($GlyphVector* gv, $FontInfo* info) {
	$init(StandardGlyphVector);
	$useLocalObjectStack();
	if ($nc(info)->aaHint == $SunHints::INTVAL_TEXT_ANTIALIAS_ON) {
		$var($Object, aaHint, $$nc($nc(gv)->getFontRenderContext())->getAntiAliasingHint());
		$init($RenderingHints);
		if (!$equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON) && !$equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_GASP)) {
			$var($FontRenderContext, frc, gv->getFontRenderContext());
			$var($AffineTransform, var$0, $nc(frc)->getTransform());
			$var($Object, var$1, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
			$assign(frc, $new($FontRenderContext, var$0, var$1, $(frc->getFractionalMetricsHint())));
			return $new(StandardGlyphVector, gv, frc);
		}
	}
	if ($instanceOf(StandardGlyphVector, gv)) {
		return $cast(StandardGlyphVector, gv);
	}
	return $new(StandardGlyphVector, gv, $($nc(gv)->getFontRenderContext()));
}

$Font* StandardGlyphVector::getFont() {
	return this->font;
}

$FontRenderContext* StandardGlyphVector::getFontRenderContext() {
	return this->frc;
}

void StandardGlyphVector::performDefaultLayout() {
	$set(this, positions, nullptr);
	if (getTracking(this->font) == 0) {
		clearFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
	}
}

int32_t StandardGlyphVector::getNumGlyphs() {
	return $nc(this->glyphs)->length;
}

int32_t StandardGlyphVector::getGlyphCode(int32_t glyphIndex) {
	return $nc(this->userGlyphs)->get(glyphIndex);
}

$ints* StandardGlyphVector::getGlyphCodes(int32_t start, int32_t count, $ints* result$renamed) {
	$useLocalObjectStack();
	$var($ints, result, result$renamed);
	if (count < 0) {
		$throwNew($IllegalArgumentException, $$str({"count = "_s, $$str(count)}));
	}
	if (start < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"start = "_s, $$str(start)}));
	}
	if (start > $nc(this->glyphs)->length - count) {
		$throwNew($IndexOutOfBoundsException, $$str({"start + count = "_s, $$str((start + count))}));
	}
	if (result == nullptr) {
		$assign(result, $new($ints, count));
	}
	for (int32_t i = 0; i < count; ++i) {
		$nc(result)->set(i, $nc(this->userGlyphs)->get(i + start));
	}
	return result;
}

int32_t StandardGlyphVector::getGlyphCharIndex(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 && ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({""_s, $$str(ix)}));
	}
	if (this->charIndices == nullptr) {
		if ((getLayoutFlags() & $GlyphVector::FLAG_RUN_RTL) != 0) {
			return $nc(this->glyphs)->length - 1 - ix;
		}
		return ix;
	}
	return $nc(this->charIndices)->get(ix);
}

$ints* StandardGlyphVector::getGlyphCharIndices(int32_t start, int32_t count, $ints* result$renamed) {
	$useLocalObjectStack();
	$var($ints, result, result$renamed);
	if (start < 0 || count < 0 || (count > $nc(this->glyphs)->length - start)) {
		$throwNew($IndexOutOfBoundsException, $$str({""_s, $$str(start), ", "_s, $$str(count)}));
	}
	if (result == nullptr) {
		$assign(result, $new($ints, count));
	}
	if (this->charIndices == nullptr) {
		if ((getLayoutFlags() & $GlyphVector::FLAG_RUN_RTL) != 0) {
			for (int32_t i = 0, n = $nc(this->glyphs)->length - 1 - start; i < count; ++i, --n) {
				$nc(result)->set(i, n);
			}
		} else {
			for (int32_t i = 0, n = start; i < count; ++i, ++n) {
				$nc(result)->set(i, n);
			}
		}
	} else {
		for (int32_t i = 0; i < count; ++i) {
			$nc(result)->set(i, this->charIndices->get(i + start));
		}
	}
	return result;
}

$Rectangle2D* StandardGlyphVector::getLogicalBounds() {
	setFRCTX();
	initPositions();
	$var($LineMetrics, lm, $nc(this->font)->getLineMetrics(""_s, this->frc));
	float minX = 0.0;
	float minY = 0.0;
	float maxX = 0.0;
	float maxY = 0.0;
	minX = 0;
	minY = -$nc(lm)->getAscent();
	maxX = 0;
	float var$0 = lm->getDescent();
	maxY = var$0 + lm->getLeading();
	if ($nc(this->glyphs)->length > 0) {
		maxX = $nc(this->positions)->get($nc(this->positions)->length - 2);
	}
	return $new($Rectangle2D$Float, minX, minY, maxX - minX, maxY - minY);
}

$Rectangle2D* StandardGlyphVector::getVisualBounds() {
	$useLocalObjectStack();
	$var($Rectangle2D, result, nullptr);
	for (int32_t i = 0; i < $nc(this->glyphs)->length; ++i) {
		$var($Rectangle2D, glyphVB, $$nc(getGlyphVisualBounds(i))->getBounds2D());
		if (!$nc(glyphVB)->isEmpty()) {
			if (result == nullptr) {
				$assign(result, glyphVB);
			} else {
				$Rectangle2D::union$(result, glyphVB, result);
			}
		}
	}
	if (result == nullptr) {
		$assign(result, $new($Rectangle2D$Float, 0, 0, 0, 0));
	}
	return result;
}

$Rectangle* StandardGlyphVector::getPixelBounds($FontRenderContext* renderFRC, float x, float y) {
	return getGlyphsPixelBounds(renderFRC, x, y, 0, $nc(this->glyphs)->length);
}

$Shape* StandardGlyphVector::getOutline() {
	return getGlyphsOutline(0, $nc(this->glyphs)->length, 0, 0);
}

$Shape* StandardGlyphVector::getOutline(float x, float y) {
	return getGlyphsOutline(0, $nc(this->glyphs)->length, x, y);
}

$Shape* StandardGlyphVector::getGlyphOutline(int32_t ix) {
	return getGlyphsOutline(ix, 1, 0, 0);
}

$Shape* StandardGlyphVector::getGlyphOutline(int32_t ix, float x, float y) {
	return getGlyphsOutline(ix, 1, x, y);
}

$Point2D* StandardGlyphVector::getGlyphPosition(int32_t ix) {
	initPositions();
	ix *= 2;
	return $new($Point2D$Float, $nc(this->positions)->get(ix), $nc(this->positions)->get(ix + 1));
}

void StandardGlyphVector::setGlyphPosition(int32_t ix, $Point2D* pos) {
	$useLocalObjectStack();
	if (ix < 0 || ix > $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	initPositions();
	int32_t ix2 = ix << 1;
	$nc(this->positions)->set(ix2, (float)$nc(pos)->getX());
	$nc(this->positions)->set(ix2 + 1, (float)pos->getY());
	if (ix < $nc(this->glyphs)->length) {
		clearCaches(ix);
	}
	addFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
}

$AffineTransform* StandardGlyphVector::getGlyphTransform(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	if (this->gti != nullptr) {
		return this->gti->getGlyphTransform(ix);
	}
	return nullptr;
}

void StandardGlyphVector::setGlyphTransform(int32_t ix, $AffineTransform* newTX) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	if (this->gti == nullptr) {
		if (newTX == nullptr || newTX->isIdentity()) {
			return;
		}
		$set(this, gti, $new($StandardGlyphVector$GlyphTransformInfo, this));
	}
	$nc(this->gti)->setGlyphTransform(ix, newTX);
	if ($nc(this->gti)->transformCount() == 0) {
		$set(this, gti, nullptr);
	}
}

int32_t StandardGlyphVector::getLayoutFlags() {
	if (this->flags == StandardGlyphVector::UNINITIALIZED_FLAGS) {
		this->flags = 0;
		if (this->charIndices != nullptr && $nc(this->glyphs)->length > 1) {
			bool ltr = true;
			bool rtl = true;
			int32_t rtlix = this->charIndices->length;
			for (int32_t i = 0; i < this->charIndices->length && (ltr || rtl); ++i) {
				int32_t cx = this->charIndices->get(i);
				ltr = ltr && (cx == i);
				rtl = rtl && (cx == --rtlix);
			}
			if (rtl) {
				this->flags |= $GlyphVector::FLAG_RUN_RTL;
			}
			if (!rtl && !ltr) {
				this->flags |= $GlyphVector::FLAG_COMPLEX_GLYPHS;
			}
		}
	}
	return this->flags;
}

$floats* StandardGlyphVector::getGlyphPositions(int32_t start, int32_t count, $floats* result) {
	$useLocalObjectStack();
	if (count < 0) {
		$throwNew($IllegalArgumentException, $$str({"count = "_s, $$str(count)}));
	}
	if (start < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"start = "_s, $$str(start)}));
	}
	if (start > $nc(this->glyphs)->length + 1 - count) {
		$throwNew($IndexOutOfBoundsException, $$str({"start + count = "_s, $$str((start + count))}));
	}
	return internalGetGlyphPositions(start, count, 0, result);
}

$Shape* StandardGlyphVector::getGlyphLogicalBounds(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	$var($ShapeArray, lbcache, nullptr);
	if (this->lbcacheRef == nullptr || ($assign(lbcache, $cast($ShapeArray, this->lbcacheRef->get()))) == nullptr) {
		$assign(lbcache, $new($ShapeArray, $nc(this->glyphs)->length));
		$set(this, lbcacheRef, $new($SoftReference, lbcache));
	}
	$var($Shape, result, $nc(lbcache)->get(ix));
	if (result == nullptr) {
		setFRCTX();
		initPositions();
		$var($StandardGlyphVector$ADL, adl, $new($StandardGlyphVector$ADL));
		$var($StandardGlyphVector$GlyphStrike, gs, getGlyphStrike(ix));
		$nc(gs)->getADL(adl);
		$var($Point2D$Float, adv, $nc(gs->strike)->getGlyphMetrics($nc(this->glyphs)->get(ix)));
		float wx = $nc(adv)->x;
		float wy = adv->y;
		float hx = adl->descentX + adl->leadingX + adl->ascentX;
		float hy = adl->descentY + adl->leadingY + adl->ascentY;
		float x = $nc(this->positions)->get(ix * 2) + gs->dx - adl->ascentX;
		float y = this->positions->get(ix * 2 + 1) + gs->dy - adl->ascentY;
		$var($GeneralPath, gp, $new($GeneralPath));
		gp->moveTo(x, y);
		gp->lineTo(x + wx, y + wy);
		gp->lineTo(x + wx + hx, y + wy + hy);
		gp->lineTo(x + hx, y + hy);
		gp->closePath();
		$assign(result, $new($DelegatingShape, gp));
		lbcache->set(ix, result);
	}
	return result;
}

$Shape* StandardGlyphVector::getGlyphVisualBounds(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	$var($ShapeArray, vbcache, nullptr);
	if (this->vbcacheRef == nullptr || ($assign(vbcache, $cast($ShapeArray, this->vbcacheRef->get()))) == nullptr) {
		$assign(vbcache, $new($ShapeArray, $nc(this->glyphs)->length));
		$set(this, vbcacheRef, $new($SoftReference, vbcache));
	}
	$var($Shape, result, $nc(vbcache)->get(ix));
	if (result == nullptr) {
		$assign(result, $new($DelegatingShape, $(getGlyphOutlineBounds(ix))));
		vbcache->set(ix, result);
	}
	return result;
}

$Rectangle* StandardGlyphVector::getGlyphPixelBounds(int32_t index, $FontRenderContext* renderFRC, float x, float y) {
	return getGlyphsPixelBounds(renderFRC, x, y, index, 1);
}

$GlyphMetrics* StandardGlyphVector::getGlyphMetrics(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	$var($Rectangle2D, vb, $$nc(getGlyphVisualBounds(ix))->getBounds2D());
	$var($Point2D, pt, getGlyphPosition(ix));
	double var$1 = $nc(vb)->getMinX();
	double var$0 = var$1 - $nc(pt)->getX();
	double var$3 = vb->getMinY();
	double var$2 = var$3 - pt->getY();
	double var$4 = vb->getWidth();
	$nc(vb)->setRect(var$0, var$2, var$4, vb->getHeight());
	$var($Point2D$Float, adv, $nc($nc($(getGlyphStrike(ix)))->strike)->getGlyphMetrics($nc(this->glyphs)->get(ix)));
	$var($GlyphMetrics, gm, $new($GlyphMetrics, true, $nc(adv)->x, $nc(adv)->y, vb, $GlyphMetrics::STANDARD));
	return gm;
}

$GlyphJustificationInfo* StandardGlyphVector::getGlyphJustificationInfo(int32_t ix) {
	$useLocalObjectStack();
	if (ix < 0 || ix >= $nc(this->glyphs)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"ix = "_s, $$str(ix)}));
	}
	return nullptr;
}

bool StandardGlyphVector::equals($GlyphVector* rhs) {
	if ($equals(this, rhs)) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	try {
		$var(StandardGlyphVector, other, $cast(StandardGlyphVector, rhs));
		if ($nc(this->glyphs)->length != $nc($nc(other)->glyphs)->length) {
			return false;
		}
		for (int32_t i = 0; i < this->glyphs->length; ++i) {
			if (this->glyphs->get(i) != other->glyphs->get(i)) {
				return false;
			}
		}
		if (!$nc(this->font)->equals(other->font)) {
			return false;
		}
		if (!$nc(this->frc)->equals(other->frc)) {
			return false;
		}
		if ((other->positions == nullptr) != (this->positions == nullptr)) {
			if (this->positions == nullptr) {
				initPositions();
			} else {
				other->initPositions();
			}
		}
		if (this->positions != nullptr) {
			for (int32_t i = 0; i < this->positions->length; ++i) {
				if (this->positions->get(i) != $nc(other->positions)->get(i)) {
					return false;
				}
			}
		}
		if (this->gti == nullptr) {
			return other->gti == nullptr;
		} else {
			return this->gti->equals(other->gti);
		}
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t StandardGlyphVector::hashCode() {
	return $nc(this->font)->hashCode() ^ $nc(this->glyphs)->length;
}

bool StandardGlyphVector::equals(Object$* rhs) {
	try {
		return equals($cast($GlyphVector, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

StandardGlyphVector* StandardGlyphVector::copy() {
	return $cast(StandardGlyphVector, clone());
}

$Object* StandardGlyphVector::clone() {
	try {
		$var(StandardGlyphVector, result, $cast(StandardGlyphVector, $GlyphVector::clone()));
		$nc(result)->clearCaches();
		if (this->positions != nullptr) {
			$set(result, positions, $cast($floats, this->positions->clone()));
		}
		if (this->gti != nullptr) {
			$set(result, gti, $new($StandardGlyphVector$GlyphTransformInfo, result, this->gti));
		}
		return result;
	} catch ($CloneNotSupportedException& e) {
	}
	return this;
}

void StandardGlyphVector::setGlyphPositions($floats* srcPositions, int32_t srcStart, int32_t start, int32_t count) {
	$useLocalObjectStack();
	if (count < 0) {
		$throwNew($IllegalArgumentException, $$str({"count = "_s, $$str(count)}));
	}
	initPositions();
	for (int32_t i = start * 2, e = i + count * 2, p = srcStart; i < e; ++i, ++p) {
		$nc(this->positions)->set(i, $nc(srcPositions)->get(p));
	}
	clearCaches();
	addFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
}

void StandardGlyphVector::setGlyphPositions($floats* srcPositions) {
	$useLocalObjectStack();
	int32_t requiredLength = $nc(this->glyphs)->length * 2 + 2;
	if ($nc(srcPositions)->length != requiredLength) {
		$throwNew($IllegalArgumentException, $$str({"srcPositions.length != "_s, $$str(requiredLength)}));
	}
	$set(this, positions, $cast($floats, srcPositions->clone()));
	clearCaches();
	addFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
}

$floats* StandardGlyphVector::getGlyphPositions($floats* result) {
	return internalGetGlyphPositions(0, $nc(this->glyphs)->length + 1, 0, result);
}

$AffineTransformArray* StandardGlyphVector::getGlyphTransforms(int32_t start, int32_t count, $AffineTransformArray* result$renamed) {
	$useLocalObjectStack();
	$var($AffineTransformArray, result, result$renamed);
	if (start < 0 || count < 0 || start + count > $nc(this->glyphs)->length) {
		$throwNew($IllegalArgumentException, $$str({"start: "_s, $$str(start), " count: "_s, $$str(count)}));
	}
	if (this->gti == nullptr) {
		return nullptr;
	}
	if (result == nullptr) {
		$assign(result, $new($AffineTransformArray, count));
	}
	for (int32_t i = 0; i < count; ++i, ++start) {
		$nc(result)->set(i, $($nc(this->gti)->getGlyphTransform(start)));
	}
	return result;
}

$AffineTransformArray* StandardGlyphVector::getGlyphTransforms() {
	return getGlyphTransforms(0, $nc(this->glyphs)->length, nullptr);
}

void StandardGlyphVector::setGlyphTransforms($AffineTransformArray* srcTransforms, int32_t srcStart, int32_t start, int32_t count) {
	for (int32_t i = start, e = start + count; i < e; ++i) {
		setGlyphTransform(i, $nc(srcTransforms)->get(srcStart + i));
	}
}

void StandardGlyphVector::setGlyphTransforms($AffineTransformArray* srcTransforms) {
	setGlyphTransforms(srcTransforms, 0, 0, $nc(this->glyphs)->length);
}

$floats* StandardGlyphVector::getGlyphInfo() {
	$useLocalObjectStack();
	setFRCTX();
	initPositions();
	$var($floats, result, $new($floats, $nc(this->glyphs)->length * 8));
	for (int32_t i = 0, n = 0; i < $nc(this->glyphs)->length; ++i, n += 8) {
		float x = $nc(this->positions)->get(i * 2);
		float y = this->positions->get(i * 2 + 1);
		result->set(n, x);
		result->set(n + 1, y);
		int32_t glyphID = this->glyphs->get(i);
		$var($StandardGlyphVector$GlyphStrike, s, getGlyphStrike(i));
		$var($Point2D$Float, adv, $nc($nc(s)->strike)->getGlyphMetrics(glyphID));
		result->set(n + 2, $nc(adv)->x);
		result->set(n + 3, adv->y);
		$var($Rectangle2D, vb, $$nc(getGlyphVisualBounds(i))->getBounds2D());
		result->set(n + 4, (float)($nc(vb)->getMinX()));
		result->set(n + 5, (float)(vb->getMinY()));
		result->set(n + 6, (float)(vb->getWidth()));
		result->set(n + 7, (float)(vb->getHeight()));
	}
	return result;
}

bool StandardGlyphVector::needsPositions($doubles* devTX) {
	bool var$0 = this->gti != nullptr || (getLayoutFlags() & $GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS) != 0;
	return var$0 || !matchTX(devTX, this->frctx);
}

$Object* StandardGlyphVector::setupGlyphImages($longs* images, $floats* positions, $doubles* devTX) {
	initPositions();
	setRenderTransform(devTX);
	if (this->gti != nullptr) {
		return this->gti->setupGlyphImages(images, positions, this->dtx);
	}
	$var($StandardGlyphVector$GlyphStrike, gs, getDefaultStrike());
	$nc($nc(gs)->strike)->getGlyphImagePtrs(this->glyphs, images, $nc(this->glyphs)->length);
	if (positions != nullptr) {
		if ($nc(this->dtx)->isIdentity()) {
			$System::arraycopy(this->positions, 0, positions, 0, $nc(this->glyphs)->length * 2);
		} else {
			$nc(this->dtx)->transform(this->positions, 0, positions, 0, $nc(this->glyphs)->length);
		}
	}
	return gs;
}

bool StandardGlyphVector::matchTX($doubles* lhs, $AffineTransform* rhs) {
	$init(StandardGlyphVector);
	bool var$2 = $nc(lhs)->get(0) == $nc(rhs)->getScaleX();
	bool var$1 = var$2 && lhs->get(1) == rhs->getShearY();
	bool var$0 = var$1 && lhs->get(2) == rhs->getShearX();
	return var$0 && lhs->get(3) == rhs->getScaleY();
}

$AffineTransform* StandardGlyphVector::getNonTranslateTX($AffineTransform* tx$renamed) {
	$init(StandardGlyphVector);
	$var($AffineTransform, tx, tx$renamed);
	bool var$0 = $nc(tx)->getTranslateX() != 0;
	if (var$0 || tx->getTranslateY() != 0) {
		double var$1 = tx->getScaleX();
		double var$2 = tx->getShearY();
		double var$3 = tx->getShearX();
		$assign(tx, $new($AffineTransform, var$1, var$2, var$3, tx->getScaleY(), 0, 0));
	}
	return tx;
}

bool StandardGlyphVector::equalNonTranslateTX($AffineTransform* lhs, $AffineTransform* rhs) {
	$init(StandardGlyphVector);
	double var$3 = $nc(lhs)->getScaleX();
	bool var$2 = var$3 == $nc(rhs)->getScaleX();
	if (var$2) {
		double var$4 = lhs->getShearY();
		var$2 = var$4 == rhs->getShearY();
	}
	bool var$1 = var$2;
	if (var$1) {
		double var$5 = lhs->getShearX();
		var$1 = var$5 == rhs->getShearX();
	}
	bool var$0 = var$1;
	if (var$0) {
		double var$6 = lhs->getScaleY();
		var$0 = var$6 == rhs->getScaleY();
	}
	return var$0;
}

void StandardGlyphVector::setRenderTransform($doubles* devTX) {
	if (!StandardGlyphVector::$assertionsDisabled && !($nc(devTX)->length == 4)) {
		$throwNew($AssertionError);
	}
	if (!matchTX(devTX, this->dtx)) {
		resetDTX($$new($AffineTransform, devTX));
	}
}

void StandardGlyphVector::setDTX($AffineTransform* tx) {
	if (!equalNonTranslateTX(this->dtx, tx)) {
		resetDTX($(getNonTranslateTX(tx)));
	}
}

void StandardGlyphVector::setFRCTX() {
	if (!equalNonTranslateTX(this->frctx, this->dtx)) {
		resetDTX($(getNonTranslateTX(this->frctx)));
	}
}

void StandardGlyphVector::resetDTX($AffineTransform* at) {
	$set(this, fsref, nullptr);
	$set(this, dtx, at);
	$set(this, invdtx, nullptr);
	if (!$nc(this->dtx)->isIdentity()) {
		try {
			$set(this, invdtx, $nc(this->dtx)->createInverse());
		} catch ($NoninvertibleTransformException& e) {
		}
	}
	if (this->gti != nullptr) {
		$set(this->gti, strikesRef, nullptr);
	}
}

void StandardGlyphVector::init$($GlyphVector* gv, $FontRenderContext* frc) {
	$useLocalObjectStack();
	$GlyphVector::init$();
	$set(this, font, $nc(gv)->getFont());
	$set(this, frc, frc);
	initFontData();
	int32_t nGlyphs = gv->getNumGlyphs();
	$set(this, userGlyphs, gv->getGlyphCodes(0, nGlyphs, nullptr));
	if ($instanceOf(StandardGlyphVector, gv)) {
		$set(this, glyphs, this->userGlyphs);
	} else {
		$set(this, glyphs, getValidatedGlyphs(this->userGlyphs));
	}
	this->flags = gv->getLayoutFlags() & $GlyphVector::FLAG_MASK;
	if ((this->flags & $GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS) != 0) {
		$set(this, positions, gv->getGlyphPositions(0, nGlyphs + 1, nullptr));
	}
	if ((this->flags & $GlyphVector::FLAG_COMPLEX_GLYPHS) != 0) {
		$set(this, charIndices, gv->getGlyphCharIndices(0, nGlyphs, nullptr));
	}
	if ((this->flags & $GlyphVector::FLAG_HAS_TRANSFORMS) != 0) {
		$var($AffineTransformArray, txs, $new($AffineTransformArray, nGlyphs));
		for (int32_t i = 0; i < nGlyphs; ++i) {
			txs->set(i, $(gv->getGlyphTransform(i)));
		}
		setGlyphTransforms(txs);
	}
}

$ints* StandardGlyphVector::getValidatedGlyphs($ints* oglyphs) {
	int32_t len = $nc(oglyphs)->length;
	$var($ints, vglyphs, $new($ints, len));
	for (int32_t i = 0; i < len; ++i) {
		if (oglyphs->get(i) == 0x0000fffe || oglyphs->get(i) == 0x0000ffff) {
			vglyphs->set(i, oglyphs->get(i));
		} else {
			vglyphs->set(i, $nc(this->font2D)->getValidatedGlyphCode(oglyphs->get(i)));
		}
	}
	return vglyphs;
}

void StandardGlyphVector::init($Font* font, $chars* text$renamed, int32_t start, int32_t count, $FontRenderContext* frc, int32_t flags) {
	$useLocalObjectStack();
	$var($chars, text, text$renamed);
	if (start < 0 || count < 0 || start + count > $nc(text)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, "start or count out of bounds"_s);
	}
	$set(this, font, font);
	$set(this, frc, frc);
	this->flags = flags;
	if (getTracking(font) != 0) {
		addFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
	}
	if (start != 0) {
		$var($chars, temp, $new($chars, count));
		$System::arraycopy(text, start, temp, 0, count);
		$assign(text, temp);
	}
	initFontData();
	$set(this, glyphs, $new($ints, count));
	$set(this, userGlyphs, this->glyphs);
	$$nc($nc(this->font2D)->getMapper())->charsToGlyphs(count, text, this->glyphs);
}

void StandardGlyphVector::initFontData() {
	$set(this, font2D, $FontUtilities::getFont2D(this->font));
	if ($instanceOf($FontSubstitution, this->font2D)) {
		$set(this, font2D, $cast($FontSubstitution, this->font2D)->getCompositeFont2D());
	}
	float s = $nc(this->font)->getSize2D();
	if ($nc(this->font)->isTransformed()) {
		$set(this, ftx, $nc(this->font)->getTransform());
		bool var$0 = $nc(this->ftx)->getTranslateX() != 0;
		if (var$0 || this->ftx->getTranslateY() != 0) {
			addFlags($GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS);
		}
		double var$1 = $nc(this->ftx)->getScaleX();
		double var$2 = this->ftx->getShearY();
		double var$3 = this->ftx->getShearX();
		$nc(this->ftx)->setTransform(var$1, var$2, var$3, this->ftx->getScaleY(), 0, 0);
		$nc(this->ftx)->scale(s, s);
	} else {
		$set(this, ftx, $AffineTransform::getScaleInstance(s, s));
	}
	$set(this, frctx, $nc(this->frc)->getTransform());
	resetDTX($(getNonTranslateTX(this->frctx)));
}

$floats* StandardGlyphVector::internalGetGlyphPositions(int32_t start, int32_t count, int32_t offset, $floats* result$renamed) {
	$var($floats, result, result$renamed);
	if (result == nullptr) {
		$assign(result, $new($floats, offset + count * 2));
	}
	initPositions();
	for (int32_t i = offset, e = offset + count * 2, p = start * 2; i < e; ++i, ++p) {
		$nc(result)->set(i, $nc(this->positions)->get(p));
	}
	return result;
}

$Rectangle2D* StandardGlyphVector::getGlyphOutlineBounds(int32_t ix) {
	setFRCTX();
	initPositions();
	return $$nc(getGlyphStrike(ix))->getGlyphOutlineBounds($nc(this->glyphs)->get(ix), $nc(this->positions)->get(ix * 2), $nc(this->positions)->get(ix * 2 + 1));
}

$Shape* StandardGlyphVector::getGlyphsOutline(int32_t start, int32_t count, float x, float y) {
	$useLocalObjectStack();
	setFRCTX();
	initPositions();
	$var($GeneralPath, result, $new($GeneralPath, $GeneralPath::WIND_NON_ZERO));
	for (int32_t i = start, e = start + count, n = start * 2; i < e; ++i, n += 2) {
		float px = x + $nc(this->positions)->get(n);
		float py = y + this->positions->get(n + 1);
		$$nc(getGlyphStrike(i))->appendGlyphOutline($nc(this->glyphs)->get(i), result, px, py);
	}
	return result;
}

$Rectangle* StandardGlyphVector::getGlyphsPixelBounds($FontRenderContext* frc, float x, float y, int32_t start, int32_t count) {
	$useLocalObjectStack();
	initPositions();
	$var($AffineTransform, tx, nullptr);
	if (frc == nullptr || frc->equals(this->frc)) {
		$assign(tx, this->frctx);
	} else {
		$assign(tx, frc->getTransform());
	}
	setDTX(tx);
	if (this->gti != nullptr) {
		return this->gti->getGlyphsPixelBounds(tx, x, y, start, count);
	}
	$var($FontStrike, fs, $nc($(getDefaultStrike()))->strike);
	$var($Rectangle, result, nullptr);
	$var($Rectangle, r, $new($Rectangle));
	$var($Point2D$Float, pt, $new($Point2D$Float));
	int32_t n = start * 2;
	while (--count >= 0) {
		pt->x = x + $nc(this->positions)->get(n++);
		pt->y = y + this->positions->get(n++);
		$nc(tx)->transform(pt, pt);
		$nc(fs)->getGlyphImageBounds($nc(this->glyphs)->get(start++), pt, r);
		if (!r->isEmpty()) {
			if (result == nullptr) {
				$assign(result, $new($Rectangle, r));
			} else {
				result->add(r);
			}
		}
	}
	return result != nullptr ? result : r;
}

void StandardGlyphVector::clearCaches(int32_t ix) {
	$useLocalObjectStack();
	if (this->lbcacheRef != nullptr) {
		$var($ShapeArray, lbcache, $cast($ShapeArray, this->lbcacheRef->get()));
		if (lbcache != nullptr) {
			lbcache->set(ix, nullptr);
		}
	}
	if (this->vbcacheRef != nullptr) {
		$var($ShapeArray, vbcache, $cast($ShapeArray, this->vbcacheRef->get()));
		if (vbcache != nullptr) {
			vbcache->set(ix, nullptr);
		}
	}
}

void StandardGlyphVector::clearCaches() {
	$set(this, lbcacheRef, nullptr);
	$set(this, vbcacheRef, nullptr);
}

void StandardGlyphVector::initPositions() {
	$useLocalObjectStack();
	if (this->positions == nullptr) {
		setFRCTX();
		$set(this, positions, $new($floats, $nc(this->glyphs)->length * 2 + 2));
		$var($Point2D$Float, trackPt, nullptr);
		float track = getTracking(this->font);
		if (track != 0) {
			track *= $nc(this->font)->getSize2D();
			$assign(trackPt, $new($Point2D$Float, track, 0));
		}
		$var($Point2D$Float, pt, $new($Point2D$Float, 0, 0));
		if ($nc(this->font)->isTransformed()) {
			$var($AffineTransform, at, $nc(this->font)->getTransform());
			$nc(at)->transform(pt, pt);
			$nc(this->positions)->set(0, pt->x);
			this->positions->set(1, pt->y);
			if (trackPt != nullptr) {
				at->deltaTransform(trackPt, trackPt);
			}
		}
		for (int32_t i = 0, n = 2; i < $nc(this->glyphs)->length; ++i, n += 2) {
			$$nc(getGlyphStrike(i))->addDefaultGlyphAdvance(this->glyphs->get(i), pt);
			if (trackPt != nullptr) {
				pt->x += trackPt->x;
				pt->y += trackPt->y;
			}
			$nc(this->positions)->set(n, pt->x);
			this->positions->set(n + 1, pt->y);
		}
	}
}

void StandardGlyphVector::addFlags(int32_t newflags) {
	this->flags = getLayoutFlags() | newflags;
}

void StandardGlyphVector::clearFlags(int32_t clearedFlags) {
	this->flags = getLayoutFlags() & ~clearedFlags;
}

$StandardGlyphVector$GlyphStrike* StandardGlyphVector::getGlyphStrike(int32_t ix) {
	if (this->gti == nullptr) {
		return getDefaultStrike();
	} else {
		return this->gti->getStrike(ix);
	}
}

$StandardGlyphVector$GlyphStrike* StandardGlyphVector::getDefaultStrike() {
	$var($StandardGlyphVector$GlyphStrike, gs, nullptr);
	if (this->fsref != nullptr) {
		$assign(gs, $cast($StandardGlyphVector$GlyphStrike, this->fsref->get()));
	}
	if (gs == nullptr) {
		$assign(gs, $StandardGlyphVector$GlyphStrike::create(this, this->dtx, nullptr));
		$set(this, fsref, $new($SoftReference, gs));
	}
	return gs;
}

$String* StandardGlyphVector::toString() {
	return $$nc(appendString(nullptr))->toString();
}

$StringBuffer* StandardGlyphVector::appendString($StringBuffer* buf$renamed) {
	$useLocalObjectStack();
	$var($StringBuffer, buf, buf$renamed);
	if (buf == nullptr) {
		$assign(buf, $new($StringBuffer));
	}
	try {
		$nc(buf)->append("SGV{font: "_s);
		buf->append($($nc(this->font)->toString()));
		buf->append(", frc: "_s);
		buf->append($($nc(this->frc)->toString()));
		buf->append(", glyphs: ("_s);
		buf->append($nc(this->glyphs)->length);
		buf->append(")["_s);
		for (int32_t i = 0; i < this->glyphs->length; ++i) {
			if (i > 0) {
				buf->append(", "_s);
			}
			buf->append($($Integer::toHexString(this->glyphs->get(i))));
		}
		buf->append("]"_s);
		if (this->positions != nullptr) {
			buf->append(", positions: ("_s);
			buf->append(this->positions->length);
			buf->append(")["_s);
			for (int32_t i = 0; i < this->positions->length; i += 2) {
				if (i > 0) {
					buf->append(", "_s);
				}
				buf->append(this->positions->get(i));
				buf->append("@"_s);
				buf->append(this->positions->get(i + 1));
			}
			buf->append("]"_s);
		}
		if (this->charIndices != nullptr) {
			buf->append(", indices: ("_s);
			buf->append(this->charIndices->length);
			buf->append(")["_s);
			for (int32_t i = 0; i < this->charIndices->length; ++i) {
				if (i > 0) {
					buf->append(", "_s);
				}
				buf->append(this->charIndices->get(i));
			}
			buf->append("]"_s);
		}
		buf->append(", flags:"_s);
		if (getLayoutFlags() == 0) {
			buf->append(" default"_s);
		} else {
			if ((this->flags & $GlyphVector::FLAG_HAS_TRANSFORMS) != 0) {
				buf->append(" tx"_s);
			}
			if ((this->flags & $GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS) != 0) {
				buf->append(" pos"_s);
			}
			if ((this->flags & $GlyphVector::FLAG_RUN_RTL) != 0) {
				buf->append(" rtl"_s);
			}
			if ((this->flags & $GlyphVector::FLAG_COMPLEX_GLYPHS) != 0) {
				buf->append(" complex"_s);
			}
		}
	} catch ($Exception& e) {
		$nc(buf)->append(u' ')->append($(e->getMessage()));
	}
	$nc(buf)->append(u'}');
	return buf;
}

void StandardGlyphVector::clinit$($Class* clazz) {
	StandardGlyphVector::$assertionsDisabled = !StandardGlyphVector::class$->desiredAssertionStatus();
}

StandardGlyphVector::StandardGlyphVector() {
}

$Class* StandardGlyphVector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardGlyphVector, $assertionsDisabled)},
		{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(StandardGlyphVector, font)},
		{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(StandardGlyphVector, frc)},
		{"glyphs", "[I", nullptr, $PRIVATE, $field(StandardGlyphVector, glyphs)},
		{"userGlyphs", "[I", nullptr, $PRIVATE, $field(StandardGlyphVector, userGlyphs)},
		{"positions", "[F", nullptr, $PRIVATE, $field(StandardGlyphVector, positions)},
		{"charIndices", "[I", nullptr, $PRIVATE, $field(StandardGlyphVector, charIndices)},
		{"flags", "I", nullptr, $PRIVATE, $field(StandardGlyphVector, flags)},
		{"UNINITIALIZED_FLAGS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardGlyphVector, UNINITIALIZED_FLAGS)},
		{"gti", "Lsun/font/StandardGlyphVector$GlyphTransformInfo;", nullptr, $PRIVATE, $field(StandardGlyphVector, gti)},
		{"ftx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(StandardGlyphVector, ftx)},
		{"dtx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(StandardGlyphVector, dtx)},
		{"invdtx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(StandardGlyphVector, invdtx)},
		{"frctx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(StandardGlyphVector, frctx)},
		{"font2D", "Lsun/font/Font2D;", nullptr, $PRIVATE, $field(StandardGlyphVector, font2D)},
		{"fsref", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lsun/font/StandardGlyphVector$GlyphStrike;>;", $PRIVATE, $field(StandardGlyphVector, fsref)},
		{"lbcacheRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[Ljava/awt/Shape;>;", $PRIVATE, $field(StandardGlyphVector, lbcacheRef)},
		{"vbcacheRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[Ljava/awt/Shape;>;", $PRIVATE, $field(StandardGlyphVector, vbcacheRef)},
		{"FLAG_USES_VERTICAL_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StandardGlyphVector, FLAG_USES_VERTICAL_BASELINE)},
		{"FLAG_USES_VERTICAL_METRICS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StandardGlyphVector, FLAG_USES_VERTICAL_METRICS)},
		{"FLAG_USES_ALTERNATE_ORIENTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StandardGlyphVector, FLAG_USES_ALTERNATE_ORIENTATION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Font;Ljava/lang/String;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $String*, $FontRenderContext*)},
		{"<init>", "(Ljava/awt/Font;[CLjava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $chars*, $FontRenderContext*)},
		{"<init>", "(Ljava/awt/Font;[CIILjava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $chars*, int32_t, int32_t, $FontRenderContext*)},
		{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;[I[F[II)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $FontRenderContext*, $ints*, $floats*, $ints*, int32_t)},
		{"<init>", "(Ljava/awt/Font;Ljava/text/CharacterIterator;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $CharacterIterator*, $FontRenderContext*)},
		{"<init>", "(Ljava/awt/Font;[ILjava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(StandardGlyphVector, init$, void, $Font*, $ints*, $FontRenderContext*)},
		{"<init>", "(Ljava/awt/font/GlyphVector;Ljava/awt/font/FontRenderContext;)V", nullptr, $PRIVATE, $method(StandardGlyphVector, init$, void, $GlyphVector*, $FontRenderContext*)},
		{"addFlags", "(I)V", nullptr, $PRIVATE, $method(StandardGlyphVector, addFlags, void, int32_t)},
		{"appendString", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;", nullptr, 0, $virtualMethod(StandardGlyphVector, appendString, $StringBuffer*, $StringBuffer*)},
		{"clearCaches", "(I)V", nullptr, $PRIVATE, $method(StandardGlyphVector, clearCaches, void, int32_t)},
		{"clearCaches", "()V", nullptr, $PRIVATE, $method(StandardGlyphVector, clearCaches, void)},
		{"clearFlags", "(I)V", nullptr, $PRIVATE, $method(StandardGlyphVector, clearFlags, void, int32_t)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, clone, $Object*)},
		{"copy", "()Lsun/font/StandardGlyphVector;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, copy, StandardGlyphVector*)},
		{"equalNonTranslateTX", "(Ljava/awt/geom/AffineTransform;Ljava/awt/geom/AffineTransform;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(StandardGlyphVector, equalNonTranslateTX, bool, $AffineTransform*, $AffineTransform*)},
		{"equals", "(Ljava/awt/font/GlyphVector;)Z", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, equals, bool, $GlyphVector*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, equals, bool, Object$*)},
		{"getDefaultStrike", "()Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $PRIVATE, $method(StandardGlyphVector, getDefaultStrike, $StandardGlyphVector$GlyphStrike*)},
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getFont, $Font*)},
		{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getFontRenderContext, $FontRenderContext*)},
		{"getGlyphCharIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphCharIndex, int32_t, int32_t)},
		{"getGlyphCharIndices", "(II[I)[I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphCharIndices, $ints*, int32_t, int32_t, $ints*)},
		{"getGlyphCode", "(I)I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphCode, int32_t, int32_t)},
		{"getGlyphCodes", "(II[I)[I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphCodes, $ints*, int32_t, int32_t, $ints*)},
		{"getGlyphInfo", "()[F", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphInfo, $floats*)},
		{"getGlyphJustificationInfo", "(I)Ljava/awt/font/GlyphJustificationInfo;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphJustificationInfo, $GlyphJustificationInfo*, int32_t)},
		{"getGlyphLogicalBounds", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphLogicalBounds, $Shape*, int32_t)},
		{"getGlyphMetrics", "(I)Ljava/awt/font/GlyphMetrics;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphMetrics, $GlyphMetrics*, int32_t)},
		{"getGlyphOutline", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphOutline, $Shape*, int32_t)},
		{"getGlyphOutline", "(IFF)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphOutline, $Shape*, int32_t, float, float)},
		{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(StandardGlyphVector, getGlyphOutlineBounds, $Rectangle2D*, int32_t)},
		{"getGlyphPixelBounds", "(ILjava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphPixelBounds, $Rectangle*, int32_t, $FontRenderContext*, float, float)},
		{"getGlyphPosition", "(I)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphPosition, $Point2D*, int32_t)},
		{"getGlyphPositions", "(II[F)[F", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphPositions, $floats*, int32_t, int32_t, $floats*)},
		{"getGlyphPositions", "([F)[F", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphPositions, $floats*, $floats*)},
		{"getGlyphStrike", "(I)Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $PRIVATE, $method(StandardGlyphVector, getGlyphStrike, $StandardGlyphVector$GlyphStrike*, int32_t)},
		{"getGlyphTransform", "(I)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphTransform, $AffineTransform*, int32_t)},
		{"getGlyphTransforms", "(II[Ljava/awt/geom/AffineTransform;)[Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphTransforms, $AffineTransformArray*, int32_t, int32_t, $AffineTransformArray*)},
		{"getGlyphTransforms", "()[Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphTransforms, $AffineTransformArray*)},
		{"getGlyphVisualBounds", "(I)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getGlyphVisualBounds, $Shape*, int32_t)},
		{"getGlyphsOutline", "(IIFF)Ljava/awt/Shape;", nullptr, $PRIVATE, $method(StandardGlyphVector, getGlyphsOutline, $Shape*, int32_t, int32_t, float, float)},
		{"getGlyphsPixelBounds", "(Ljava/awt/font/FontRenderContext;FFII)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(StandardGlyphVector, getGlyphsPixelBounds, $Rectangle*, $FontRenderContext*, float, float, int32_t, int32_t)},
		{"getLayoutFlags", "()I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getLayoutFlags, int32_t)},
		{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getLogicalBounds, $Rectangle2D*)},
		{"getNonTranslateTX", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $staticMethod(StandardGlyphVector, getNonTranslateTX, $AffineTransform*, $AffineTransform*)},
		{"getNumGlyphs", "()I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getNumGlyphs, int32_t)},
		{"getOutline", "()Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getOutline, $Shape*)},
		{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getOutline, $Shape*, float, float)},
		{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getPixelBounds, $Rectangle*, $FontRenderContext*, float, float)},
		{"getStandardGV", "(Ljava/awt/font/GlyphVector;Lsun/java2d/loops/FontInfo;)Lsun/font/StandardGlyphVector;", nullptr, $PUBLIC | $STATIC, $staticMethod(StandardGlyphVector, getStandardGV, StandardGlyphVector*, $GlyphVector*, $FontInfo*)},
		{"getTracking", "(Ljava/awt/Font;)F", nullptr, $PRIVATE, $method(StandardGlyphVector, getTracking, float, $Font*)},
		{"getValidatedGlyphs", "([I)[I", nullptr, 0, $virtualMethod(StandardGlyphVector, getValidatedGlyphs, $ints*, $ints*)},
		{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, getVisualBounds, $Rectangle2D*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, hashCode, int32_t)},
		{"init", "(Ljava/awt/Font;[CIILjava/awt/font/FontRenderContext;I)V", nullptr, $PRIVATE, $method(StandardGlyphVector, init, void, $Font*, $chars*, int32_t, int32_t, $FontRenderContext*, int32_t)},
		{"initFontData", "()V", nullptr, $PRIVATE, $method(StandardGlyphVector, initFontData, void)},
		{"initGlyphVector", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;[I[F[II)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, initGlyphVector, void, $Font*, $FontRenderContext*, $ints*, $floats*, $ints*, int32_t)},
		{"initPositions", "()V", nullptr, $PRIVATE, $method(StandardGlyphVector, initPositions, void)},
		{"internalGetGlyphPositions", "(III[F)[F", nullptr, $PRIVATE, $method(StandardGlyphVector, internalGetGlyphPositions, $floats*, int32_t, int32_t, int32_t, $floats*)},
		{"matchTX", "([DLjava/awt/geom/AffineTransform;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(StandardGlyphVector, matchTX, bool, $doubles*, $AffineTransform*)},
		{"needsPositions", "([D)Z", nullptr, 0, $virtualMethod(StandardGlyphVector, needsPositions, bool, $doubles*)},
		{"performDefaultLayout", "()V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, performDefaultLayout, void)},
		{"resetDTX", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(StandardGlyphVector, resetDTX, void, $AffineTransform*)},
		{"setDTX", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(StandardGlyphVector, setDTX, void, $AffineTransform*)},
		{"setFRCTX", "()V", nullptr, $PRIVATE, $method(StandardGlyphVector, setFRCTX, void)},
		{"setGlyphPosition", "(ILjava/awt/geom/Point2D;)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphPosition, void, int32_t, $Point2D*)},
		{"setGlyphPositions", "([FIII)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphPositions, void, $floats*, int32_t, int32_t, int32_t)},
		{"setGlyphPositions", "([F)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphPositions, void, $floats*)},
		{"setGlyphTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphTransform, void, int32_t, $AffineTransform*)},
		{"setGlyphTransforms", "([Ljava/awt/geom/AffineTransform;III)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphTransforms, void, $AffineTransformArray*, int32_t, int32_t, int32_t)},
		{"setGlyphTransforms", "([Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, setGlyphTransforms, void, $AffineTransformArray*)},
		{"setRenderTransform", "([D)V", nullptr, $PRIVATE, $method(StandardGlyphVector, setRenderTransform, void, $doubles*)},
		{"setupGlyphImages", "([J[F[D)Ljava/lang/Object;", nullptr, 0, $virtualMethod(StandardGlyphVector, setupGlyphImages, $Object*, $longs*, $floats*, $doubles*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StandardGlyphVector, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.StandardGlyphVector$ADL", "sun.font.StandardGlyphVector", "ADL", $STATIC},
		{"sun.font.StandardGlyphVector$GlyphStrike", "sun.font.StandardGlyphVector", "GlyphStrike", $PUBLIC | $STATIC | $FINAL},
		{"sun.font.StandardGlyphVector$GlyphTransformInfo", "sun.font.StandardGlyphVector", "GlyphTransformInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.StandardGlyphVector",
		"java.awt.font.GlyphVector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.StandardGlyphVector$ADL,sun.font.StandardGlyphVector$GlyphStrike,sun.font.StandardGlyphVector$GlyphTransformInfo"
	};
	$loadClass(StandardGlyphVector, name, initialize, &classInfo$$, StandardGlyphVector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StandardGlyphVector);
	});
	return class$;
}

$Class* StandardGlyphVector::class$ = nullptr;

	} // font
} // sun