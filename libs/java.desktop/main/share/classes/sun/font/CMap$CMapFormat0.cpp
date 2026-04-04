#include <sun/font/CMap$CMapFormat0.h>
#include <java/nio/ByteBuffer.h>
#include <sun/font/CMap.h>
#include <sun/font/CharToGlyphMapper.h>
#include <jcpp.h>

#undef INVISIBLE_GLYPH_ID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CMap = ::sun::font::CMap;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;

namespace sun {
	namespace font {

void CMap$CMapFormat0::init$($ByteBuffer* buffer, int32_t offset) {
	$CMap::init$();
	int32_t len = $nc(buffer)->getChar(offset + 2);
	$set(this, cmap, $new($bytes, len - 6));
	buffer->position(offset + 6);
	buffer->get(this->cmap);
}

char16_t CMap$CMapFormat0::getGlyph(int32_t charCode) {
	if (charCode < 256) {
		if (charCode < 16) {
			switch (charCode) {
			case 9:
			case 10:
			case 13:
				return (char16_t)$CharToGlyphMapper::INVISIBLE_GLYPH_ID;
			}
		}
		return (char16_t)(0xff & $nc(this->cmap)->get(charCode));
	} else {
		return 0;
	}
}

CMap$CMapFormat0::CMap$CMapFormat0() {
}

$Class* CMap$CMapFormat0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cmap", "[B", nullptr, 0, $field(CMap$CMapFormat0, cmap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(CMap$CMapFormat0, init$, void, $ByteBuffer*, int32_t)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$CMapFormat0, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$CMapFormat0", "sun.font.CMap", "CMapFormat0", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$CMapFormat0",
		"sun.font.CMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.CMap"
	};
	$loadClass(CMap$CMapFormat0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$CMapFormat0);
	});
	return class$;
}

$Class* CMap$CMapFormat0::class$ = nullptr;

	} // font
} // sun