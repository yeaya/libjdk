#include <sun/font/CMap$CMapFormat12.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/IntBuffer.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

#undef INTMASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

void CMap$CMapFormat12::init$($ByteBuffer* buffer$renamed, int32_t offset, $chars* xlat) {
	$useLocalObjectStack();
	$var($ByteBuffer, buffer, buffer$renamed);
	$CMap::init$();
	this->highBit = 0;
	if (xlat != nullptr) {
		$throwNew($RuntimeException, "xlat array for cmap fmt=12"_s);
	}
	$nc(buffer)->position(offset + 12);
	this->numGroups = buffer->getInt() & $CMap::INTMASK;
	if (buffer->remaining() < (12 * (int64_t)this->numGroups)) {
		$throwNew($RuntimeException, "Format 12 table exceeded"_s);
	}
	$set(this, startCharCode, $new($longs, this->numGroups));
	$set(this, endCharCode, $new($longs, this->numGroups));
	$set(this, startGlyphID, $new($ints, this->numGroups));
	$assign(buffer, buffer->slice());
	$var($IntBuffer, ibuffer, $nc(buffer)->asIntBuffer());
	for (int32_t i = 0; i < this->numGroups; ++i) {
		$nc(this->startCharCode)->set(i, $nc(ibuffer)->get() & $CMap::INTMASK);
		$nc(this->endCharCode)->set(i, ibuffer->get() & $CMap::INTMASK);
		$nc(this->startGlyphID)->set(i, ibuffer->get() & $CMap::INTMASK);
	}
	int32_t value = this->numGroups;
	if (value >= 1 << 16) {
		value >>= 16;
		this->highBit += 16;
	}
	if (value >= 1 << 8) {
		value >>= 8;
		this->highBit += 8;
	}
	if (value >= 1 << 4) {
		value >>= 4;
		this->highBit += 4;
	}
	if (value >= 1 << 2) {
		value >>= 2;
		this->highBit += 2;
	}
	if (value >= 1 << 1) {
		value >>= 1;
		this->highBit += 1;
	}
	this->power = $sl(1, this->highBit);
	this->extra = this->numGroups - this->power;
}

char16_t CMap$CMapFormat12::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, false);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	int32_t probe = this->power;
	int32_t range = 0;
	if ($nc(this->startCharCode)->get(this->extra) <= charCode) {
		range = this->extra;
	}
	while (probe > 1) {
		probe >>= 1;
		if (this->startCharCode->get(range + probe) <= charCode) {
			range += probe;
		}
	}
	if (this->startCharCode->get(range) <= charCode && $nc(this->endCharCode)->get(range) >= charCode) {
		return (char16_t)($nc(this->startGlyphID)->get(range) + (charCode - this->startCharCode->get(range)));
	}
	return getFormatCharGlyph(origCharCode);
}

CMap$CMapFormat12::CMap$CMapFormat12() {
}

$Class* CMap$CMapFormat12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"numGroups", "I", nullptr, 0, $field(CMap$CMapFormat12, numGroups)},
		{"highBit", "I", nullptr, 0, $field(CMap$CMapFormat12, highBit)},
		{"power", "I", nullptr, 0, $field(CMap$CMapFormat12, power)},
		{"extra", "I", nullptr, 0, $field(CMap$CMapFormat12, extra)},
		{"startCharCode", "[J", nullptr, 0, $field(CMap$CMapFormat12, startCharCode)},
		{"endCharCode", "[J", nullptr, 0, $field(CMap$CMapFormat12, endCharCode)},
		{"startGlyphID", "[I", nullptr, 0, $field(CMap$CMapFormat12, startGlyphID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(CMap$CMapFormat12, init$, void, $ByteBuffer*, int32_t, $chars*)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$CMapFormat12, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$CMapFormat12", "sun.font.CMap", "CMapFormat12", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$CMapFormat12",
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
	$loadClass(CMap$CMapFormat12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$CMapFormat12);
	});
	return class$;
}

$Class* CMap$CMapFormat12::class$ = nullptr;

	} // font
} // sun