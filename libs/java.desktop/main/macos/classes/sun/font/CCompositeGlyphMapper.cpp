#include <sun/font/CCompositeGlyphMapper.h>

#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/CompositeGlyphMapper.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <jcpp.h>

#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef MIN_LAYOUT_CHARCODE

using $CharToGlyphMapperArray = $Array<::sun::font::CharToGlyphMapper>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $CompositeGlyphMapper = ::sun::font::CompositeGlyphMapper;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;

namespace sun {
	namespace font {

$FieldInfo _CCompositeGlyphMapper_FieldInfo_[] = {
	{"font", "Lsun/font/CompositeFont;", nullptr, $PRIVATE, $field(CCompositeGlyphMapper, font)},
	{"slotMappers", "[Lsun/font/CharToGlyphMapper;", nullptr, $PRIVATE, $field(CCompositeGlyphMapper, slotMappers)},
	{}
};

$MethodInfo _CCompositeGlyphMapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CompositeFont;)V", nullptr, $PUBLIC, $method(CCompositeGlyphMapper, init$, void, $CompositeFont*)},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, canDisplay, bool, char16_t)},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, charToGlyph, int32_t, int32_t)},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, charToGlyph, int32_t, char16_t)},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, charsToGlyphs, void, int32_t, $chars*, $ints*)},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, charsToGlyphs, void, int32_t, $ints*, $ints*)},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, charsToGlyphsNS, bool, int32_t, $chars*, $ints*)},
	{"convertToGlyph", "(I)I", nullptr, $PRIVATE, $method(CCompositeGlyphMapper, convertToGlyph, int32_t, int32_t)},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC, $virtualMethod(CCompositeGlyphMapper, getNumGlyphs, int32_t)},
	{"getSlotMapper", "(I)Lsun/font/CharToGlyphMapper;", nullptr, $PRIVATE, $method(CCompositeGlyphMapper, getSlotMapper, $CharToGlyphMapper*, int32_t)},
	{}
};

$ClassInfo _CCompositeGlyphMapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CCompositeGlyphMapper",
	"sun.font.CompositeGlyphMapper",
	nullptr,
	_CCompositeGlyphMapper_FieldInfo_,
	_CCompositeGlyphMapper_MethodInfo_
};

$Object* allocate$CCompositeGlyphMapper($Class* clazz) {
	return $of($alloc(CCompositeGlyphMapper));
}

void CCompositeGlyphMapper::init$($CompositeFont* compFont) {
	$CompositeGlyphMapper::init$(compFont);
	$set(this, font, compFont);
	$set(this, slotMappers, $new($CharToGlyphMapperArray, $nc(this->font)->numSlots));
	this->missingGlyph = 0;
}

$CharToGlyphMapper* CCompositeGlyphMapper::getSlotMapper(int32_t slot) {
	$useLocalCurrentObjectStackCache();
	$var($CharToGlyphMapper, mapper, $nc(this->slotMappers)->get(slot));
	if (mapper == nullptr) {
		$assign(mapper, $nc($($nc(this->font)->getSlotFont(slot)))->getMapper());
		$nc(this->slotMappers)->set(slot, mapper);
	}
	return mapper;
}

bool CCompositeGlyphMapper::canDisplay(char16_t ch) {
	int32_t glyph = charToGlyph(ch);
	return glyph != this->missingGlyph;
}

int32_t CCompositeGlyphMapper::convertToGlyph(int32_t unicode) {
	$useLocalCurrentObjectStackCache();
	for (int32_t slot = 0; slot < $nc(this->font)->numSlots; ++slot) {
		$var($CharToGlyphMapper, mapper, getSlotMapper(slot));
		int32_t glyphCode = $nc(mapper)->charToGlyph(unicode);
		if (glyphCode > 0) {
			glyphCode = compositeGlyphCode(slot, glyphCode);
			return glyphCode;
		}
	}
	return this->missingGlyph;
}

int32_t CCompositeGlyphMapper::getNumGlyphs() {
	$useLocalCurrentObjectStackCache();
	int32_t numGlyphs = 0;
	for (int32_t slot = 0; slot < 1; ++slot) {
		$var($CharToGlyphMapper, mapper, $nc(this->slotMappers)->get(slot));
		if (mapper == nullptr) {
			$assign(mapper, $nc($($nc(this->font)->getSlotFont(slot)))->getMapper());
			$nc(this->slotMappers)->set(slot, mapper);
		}
		numGlyphs += $nc(mapper)->getNumGlyphs();
	}
	return numGlyphs;
}

int32_t CCompositeGlyphMapper::charToGlyph(int32_t unicode) {
	return convertToGlyph(unicode);
}

int32_t CCompositeGlyphMapper::charToGlyph(char16_t unicode) {
	return convertToGlyph(unicode);
}

bool CCompositeGlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i + 1, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
			}
		}
		$nc(glyphs)->set(i, convertToGlyph(code));
		if (code < $FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else if ($FontUtilities::isComplexCharCode(code)) {
			return true;
		} else if (code >= 0x00010000) {
			i += 1;
			continue;
		}
	}
	return false;
}

void CCompositeGlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i, convertToGlyph(code));
				i += 1;
				glyphs->set(i, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
				continue;
			}
		}
		$nc(glyphs)->set(i, convertToGlyph(code));
	}
}

void CCompositeGlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		$nc(glyphs)->set(i, convertToGlyph($nc(unicodes)->get(i)));
	}
}

CCompositeGlyphMapper::CCompositeGlyphMapper() {
}

$Class* CCompositeGlyphMapper::load$($String* name, bool initialize) {
	$loadClass(CCompositeGlyphMapper, name, initialize, &_CCompositeGlyphMapper_ClassInfo_, allocate$CCompositeGlyphMapper);
	return class$;
}

$Class* CCompositeGlyphMapper::class$ = nullptr;

	} // font
} // sun