#include <sun/font/CompositeGlyphMapper.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <jcpp.h>

#undef BLOCKSZ
#undef GLYPHMASK
#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef MAXUNICODE
#undef MIN_LAYOUT_CHARCODE
#undef NBLOCKS
#undef SLOTMASK
#undef UNINITIALIZED_GLYPH

using $CharToGlyphMapperArray = $Array<::sun::font::CharToGlyphMapper>;
using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

void CompositeGlyphMapper::init$($CompositeFont* compFont) {
	$CharToGlyphMapper::init$();
	$set(this, font, compFont);
	initMapper();
	this->hasExcludes = $nc(compFont)->exclusionRanges != nullptr && compFont->maxIndices != nullptr;
}

int32_t CompositeGlyphMapper::compositeGlyphCode(int32_t slot, int32_t glyphCode) {
	return ((slot << 24) | (glyphCode & CompositeGlyphMapper::GLYPHMASK));
}

void CompositeGlyphMapper::initMapper() {
	if (this->missingGlyph == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
		if (this->glyphMaps == nullptr) {
			$set(this, glyphMaps, $new($intArray2, CompositeGlyphMapper::NBLOCKS));
		}
		$set(this, slotMappers, $new($CharToGlyphMapperArray, $nc(this->font)->numSlots));
		this->missingGlyph = $$nc(this->font->getSlotFont(0))->getMissingGlyphCode();
		this->missingGlyph = compositeGlyphCode(0, this->missingGlyph);
	}
}

int32_t CompositeGlyphMapper::getCachedGlyphCode(int32_t unicode) {
	if (unicode >= CompositeGlyphMapper::MAXUNICODE) {
		return $CharToGlyphMapper::UNINITIALIZED_GLYPH;
	}
	$var($ints, gmap, nullptr);
	if (($assign(gmap, $nc(this->glyphMaps)->get(unicode >> 8))) == nullptr) {
		return $CharToGlyphMapper::UNINITIALIZED_GLYPH;
	}
	return $nc(gmap)->get(unicode & 0xff);
}

void CompositeGlyphMapper::setCachedGlyphCode(int32_t unicode, int32_t glyphCode) {
	if (unicode >= CompositeGlyphMapper::MAXUNICODE) {
		return;
	}
	int32_t index0 = unicode >> 8;
	if ($nc(this->glyphMaps)->get(index0) == nullptr) {
		this->glyphMaps->set(index0, $$new($ints, CompositeGlyphMapper::BLOCKSZ));
		for (int32_t i = 0; i < CompositeGlyphMapper::BLOCKSZ; ++i) {
			$nc(this->glyphMaps->get(index0))->set(i, $CharToGlyphMapper::UNINITIALIZED_GLYPH);
		}
	}
	$nc(this->glyphMaps->get(index0))->set(unicode & 0xff, glyphCode);
}

$CharToGlyphMapper* CompositeGlyphMapper::getSlotMapper(int32_t slot) {
	$useLocalObjectStack();
	$var($CharToGlyphMapper, mapper, $nc(this->slotMappers)->get(slot));
	if (mapper == nullptr) {
		$assign(mapper, $$nc($nc(this->font)->getSlotFont(slot))->getMapper());
		$nc(this->slotMappers)->set(slot, mapper);
	}
	return mapper;
}

int32_t CompositeGlyphMapper::convertToGlyph(int32_t unicode) {
	$useLocalObjectStack();
	for (int32_t slot = 0; slot < $nc(this->font)->numSlots; ++slot) {
		if (!this->hasExcludes || !this->font->isExcludedChar(slot, unicode)) {
			$var($CharToGlyphMapper, mapper, getSlotMapper(slot));
			int32_t glyphCode = $nc(mapper)->charToGlyph(unicode);
			if (glyphCode != mapper->getMissingGlyphCode()) {
				glyphCode = compositeGlyphCode(slot, glyphCode);
				setCachedGlyphCode(unicode, glyphCode);
				return glyphCode;
			}
		}
	}
	return this->missingGlyph;
}

int32_t CompositeGlyphMapper::getNumGlyphs() {
	$useLocalObjectStack();
	int32_t numGlyphs = 0;
	for (int32_t slot = 0; slot < 1; ++slot) {
		$var($CharToGlyphMapper, mapper, $nc(this->slotMappers)->get(slot));
		if (mapper == nullptr) {
			$assign(mapper, $$nc($nc(this->font)->getSlotFont(slot))->getMapper());
			$nc(this->slotMappers)->set(slot, mapper);
		}
		numGlyphs += $nc(mapper)->getNumGlyphs();
	}
	return numGlyphs;
}

int32_t CompositeGlyphMapper::charToGlyph(int32_t unicode) {
	int32_t glyphCode = getCachedGlyphCode(unicode);
	if (glyphCode == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
		glyphCode = convertToGlyph(unicode);
	}
	return glyphCode;
}

int32_t CompositeGlyphMapper::charToGlyph(int32_t unicode, int32_t prefSlot) {
	if (prefSlot >= 0) {
		$var($CharToGlyphMapper, mapper, getSlotMapper(prefSlot));
		int32_t glyphCode = $nc(mapper)->charToGlyph(unicode);
		if (glyphCode != mapper->getMissingGlyphCode()) {
			return compositeGlyphCode(prefSlot, glyphCode);
		}
	}
	return charToGlyph(unicode);
}

int32_t CompositeGlyphMapper::charToGlyph(char16_t unicode) {
	int32_t glyphCode = getCachedGlyphCode(unicode);
	if (glyphCode == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
		glyphCode = convertToGlyph(unicode);
	}
	return glyphCode;
}

bool CompositeGlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i + 1, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
			}
		}
		int32_t gc = $nc(glyphs)->set(i, getCachedGlyphCode(code));
		if (gc == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
			glyphs->set(i, convertToGlyph(code));
		}
		if (code < $FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else {
			bool var$0 = $FontUtilities::isComplexCharCode(code);
			if (var$0 || $CharToGlyphMapper::isVariationSelector(code)) {
				return true;
			} else if (code >= 0x00010000) {
				i += 1;
				continue;
			}
		}
	}
	return false;
}

void CompositeGlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				int32_t gc = $nc(glyphs)->set(i, getCachedGlyphCode(code));
				if (gc == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
					glyphs->set(i, convertToGlyph(code));
				}
				i += 1;
				glyphs->set(i, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
				continue;
			}
		}
		int32_t gc = $nc(glyphs)->set(i, getCachedGlyphCode(code));
		if (gc == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
			glyphs->set(i, convertToGlyph(code));
		}
	}
}

void CompositeGlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		$nc(glyphs)->set(i, getCachedGlyphCode(code));
		if (glyphs->get(i) == $CharToGlyphMapper::UNINITIALIZED_GLYPH) {
			glyphs->set(i, convertToGlyph(code));
		}
	}
}

CompositeGlyphMapper::CompositeGlyphMapper() {
}

$Class* CompositeGlyphMapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SLOTMASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompositeGlyphMapper, SLOTMASK)},
		{"GLYPHMASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompositeGlyphMapper, GLYPHMASK)},
		{"NBLOCKS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompositeGlyphMapper, NBLOCKS)},
		{"BLOCKSZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompositeGlyphMapper, BLOCKSZ)},
		{"MAXUNICODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CompositeGlyphMapper, MAXUNICODE)},
		{"font", "Lsun/font/CompositeFont;", nullptr, 0, $field(CompositeGlyphMapper, font)},
		{"slotMappers", "[Lsun/font/CharToGlyphMapper;", nullptr, 0, $field(CompositeGlyphMapper, slotMappers)},
		{"glyphMaps", "[[I", nullptr, 0, $field(CompositeGlyphMapper, glyphMaps)},
		{"hasExcludes", "Z", nullptr, $PRIVATE, $field(CompositeGlyphMapper, hasExcludes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/CompositeFont;)V", nullptr, $PUBLIC, $method(CompositeGlyphMapper, init$, void, $CompositeFont*)},
		{"charToGlyph", "(I)I", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charToGlyph, int32_t, int32_t)},
		{"charToGlyph", "(II)I", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charToGlyph, int32_t, int32_t, int32_t)},
		{"charToGlyph", "(C)I", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charToGlyph, int32_t, char16_t)},
		{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charsToGlyphs, void, int32_t, $chars*, $ints*)},
		{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charsToGlyphs, void, int32_t, $ints*, $ints*)},
		{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, charsToGlyphsNS, bool, int32_t, $chars*, $ints*)},
		{"compositeGlyphCode", "(II)I", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, compositeGlyphCode, int32_t, int32_t, int32_t)},
		{"convertToGlyph", "(I)I", nullptr, $PRIVATE, $method(CompositeGlyphMapper, convertToGlyph, int32_t, int32_t)},
		{"getCachedGlyphCode", "(I)I", nullptr, $PRIVATE, $method(CompositeGlyphMapper, getCachedGlyphCode, int32_t, int32_t)},
		{"getNumGlyphs", "()I", nullptr, $PUBLIC, $virtualMethod(CompositeGlyphMapper, getNumGlyphs, int32_t)},
		{"getSlotMapper", "(I)Lsun/font/CharToGlyphMapper;", nullptr, $PRIVATE, $method(CompositeGlyphMapper, getSlotMapper, $CharToGlyphMapper*, int32_t)},
		{"initMapper", "()V", nullptr, $PRIVATE, $method(CompositeGlyphMapper, initMapper, void)},
		{"setCachedGlyphCode", "(II)V", nullptr, $PRIVATE, $method(CompositeGlyphMapper, setCachedGlyphCode, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.CompositeGlyphMapper",
		"sun.font.CharToGlyphMapper",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompositeGlyphMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompositeGlyphMapper);
	});
	return class$;
}

$Class* CompositeGlyphMapper::class$ = nullptr;

	} // font
} // sun