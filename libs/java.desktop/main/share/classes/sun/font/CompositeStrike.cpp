#include <sun/font/CompositeStrike.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC
#undef SLOTMASK

using $PhysicalStrikeArray = $Array<::sun::font::PhysicalStrike>;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeFont = ::sun::font::CompositeFont;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

void CompositeStrike::init$($CompositeFont* font2D, $FontStrikeDesc* desc) {
	$FontStrike::init$();
	this->numGlyphs = 0;
	$set(this, compFont, font2D);
	$set(this, desc, desc);
	$set(this, disposer, $new($FontStrikeDisposer, this->compFont, desc));
	if ($nc(desc)->style != $nc(this->compFont)->style) {
		this->algoStyle = true;
		if ((desc->style & $Font::BOLD) == $Font::BOLD && ((this->compFont->style & $Font::BOLD) == 0)) {
			this->boldness = 1.33f;
		}
		if ((desc->style & $Font::ITALIC) == $Font::ITALIC && (this->compFont->style & $Font::ITALIC) == 0) {
			this->italic = 0.7f;
		}
	}
	$set(this, strikes, $new($PhysicalStrikeArray, this->compFont->numSlots));
}

$PhysicalStrike* CompositeStrike::getStrikeForGlyph(int32_t glyphCode) {
	return getStrikeForSlot((int32_t)((uint32_t)glyphCode >> 24));
}

$PhysicalStrike* CompositeStrike::getStrikeForSlot(int32_t slot) {
	$useLocalObjectStack();
	if (slot >= $nc(this->strikes)->length) {
		slot = 0;
	}
	$var($PhysicalStrike, strike, this->strikes->get(slot));
	if (strike == nullptr) {
		$assign(strike, $cast($PhysicalStrike, $$nc($nc(this->compFont)->getSlotFont(slot))->getStrike(this->desc)));
		$nc(this->strikes)->set(slot, strike);
	}
	return strike;
}

int32_t CompositeStrike::getNumGlyphs() {
	return $nc(this->compFont)->getNumGlyphs();
}

$StrikeMetrics* CompositeStrike::getFontMetrics() {
	$useLocalObjectStack();
	if (this->strikeMetrics == nullptr) {
		$var($StrikeMetrics, compMetrics, $new($StrikeMetrics));
		for (int32_t s = 0; s < $nc(this->compFont)->numMetricsSlots; ++s) {
			compMetrics->merge($($$nc(getStrikeForSlot(s))->getFontMetrics()));
		}
		$set(this, strikeMetrics, compMetrics);
	}
	return this->strikeMetrics;
}

void CompositeStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	$var($PhysicalStrike, strike, getStrikeForSlot(0));
	int32_t numptrs = $nc(strike)->getSlot0GlyphImagePtrs(glyphCodes, images, len);
	if (numptrs == len) {
		return;
	}
	for (int32_t i = numptrs; i < len; ++i) {
		$assign(strike, getStrikeForGlyph($nc(glyphCodes)->get(i)));
		$nc(images)->set(i, $nc(strike)->getGlyphImagePtr(glyphCodes->get(i) & CompositeStrike::SLOTMASK));
	}
}

int64_t CompositeStrike::getGlyphImagePtr(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphImagePtr(glyphCode & CompositeStrike::SLOTMASK);
}

void CompositeStrike::getGlyphImageBounds(int32_t glyphCode, $Point2D$Float* pt, $Rectangle* result) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	$nc(strike)->getGlyphImageBounds(glyphCode & CompositeStrike::SLOTMASK, pt, result);
}

$Point2D$Float* CompositeStrike::getGlyphMetrics(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphMetrics(glyphCode & CompositeStrike::SLOTMASK);
}

$Point2D$Float* CompositeStrike::getCharMetrics(char16_t ch) {
	return getGlyphMetrics($$nc($nc(this->compFont)->getMapper())->charToGlyph(ch));
}

float CompositeStrike::getGlyphAdvance(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphAdvance(glyphCode & CompositeStrike::SLOTMASK);
}

float CompositeStrike::getCodePointAdvance(int32_t cp) {
	return getGlyphAdvance($$nc($nc(this->compFont)->getMapper())->charToGlyph(cp));
}

$Rectangle2D$Float* CompositeStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	return $nc(strike)->getGlyphOutlineBounds(glyphCode & CompositeStrike::SLOTMASK);
}

$GeneralPath* CompositeStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	$useLocalObjectStack();
	$var($PhysicalStrike, strike, getStrikeForGlyph(glyphCode));
	$var($GeneralPath, path, $nc(strike)->getGlyphOutline(glyphCode & CompositeStrike::SLOTMASK, x, y));
	if (path == nullptr) {
		return $new($GeneralPath);
	} else {
		return path;
	}
}

$GeneralPath* CompositeStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	$useLocalObjectStack();
	$var($GeneralPath, path, nullptr);
	$var($GeneralPath, gp, nullptr);
	int32_t glyphIndex = 0;
	$var($ints, tmpGlyphs, nullptr);
	while (glyphIndex < $nc(glyphs)->length) {
		int32_t start = glyphIndex;
		int32_t slot = (int32_t)((uint32_t)glyphs->get(glyphIndex) >> 24);
		while (glyphIndex < glyphs->length && ((int32_t)((uint32_t)glyphs->get(glyphIndex + 1) >> 24)) == slot) {
			++glyphIndex;
		}
		int32_t tmpLen = glyphIndex - start + 1;
		$assign(tmpGlyphs, $new($ints, tmpLen));
		for (int32_t i = 0; i < tmpLen; ++i) {
			tmpGlyphs->set(i, glyphs->get(i) & CompositeStrike::SLOTMASK);
		}
		$assign(gp, $$nc(getStrikeForSlot(slot))->getGlyphVectorOutline(tmpGlyphs, x, y));
		if (path == nullptr) {
			$assign(path, gp);
		} else if (gp != nullptr) {
			path->append(gp, false);
		}
	}
	if (path == nullptr) {
		return $new($GeneralPath);
	} else {
		return path;
	}
}

CompositeStrike::CompositeStrike() {
}

$Class* CompositeStrike::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SLOTMASK", "I", nullptr, $STATIC | $FINAL, $constField(CompositeStrike, SLOTMASK)},
		{"compFont", "Lsun/font/CompositeFont;", nullptr, $PRIVATE, $field(CompositeStrike, compFont)},
		{"strikes", "[Lsun/font/PhysicalStrike;", nullptr, $PRIVATE, $field(CompositeStrike, strikes)},
		{"numGlyphs", "I", nullptr, 0, $field(CompositeStrike, numGlyphs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/CompositeFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(CompositeStrike, init$, void, $CompositeFont*, $FontStrikeDesc*)},
		{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, 0, $virtualMethod(CompositeStrike, getCharMetrics, $Point2D$Float*, char16_t)},
		{"getCodePointAdvance", "(I)F", nullptr, 0, $virtualMethod(CompositeStrike, getCodePointAdvance, float, int32_t)},
		{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0, $virtualMethod(CompositeStrike, getFontMetrics, $StrikeMetrics*)},
		{"getGlyphAdvance", "(I)F", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphAdvance, float, int32_t)},
		{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphImageBounds, void, int32_t, $Point2D$Float*, $Rectangle*)},
		{"getGlyphImagePtr", "(I)J", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphImagePtr, int64_t, int32_t)},
		{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphImagePtrs, void, $ints*, $longs*, int32_t)},
		{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphMetrics, $Point2D$Float*, int32_t)},
		{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphOutline, $GeneralPath*, int32_t, float, float)},
		{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphOutlineBounds, $Rectangle2D$Float*, int32_t)},
		{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0, $virtualMethod(CompositeStrike, getGlyphVectorOutline, $GeneralPath*, $ints*, float, float)},
		{"getNumGlyphs", "()I", nullptr, $PUBLIC, $virtualMethod(CompositeStrike, getNumGlyphs, int32_t)},
		{"getStrikeForGlyph", "(I)Lsun/font/PhysicalStrike;", nullptr, 0, $method(CompositeStrike, getStrikeForGlyph, $PhysicalStrike*, int32_t)},
		{"getStrikeForSlot", "(I)Lsun/font/PhysicalStrike;", nullptr, 0, $method(CompositeStrike, getStrikeForSlot, $PhysicalStrike*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.CompositeStrike",
		"sun.font.FontStrike",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompositeStrike, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompositeStrike);
	});
	return class$;
}

$Class* CompositeStrike::class$ = nullptr;

	} // font
} // sun