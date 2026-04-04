#include <sun/font/CMap$CMapFormat2.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

void CMap$CMapFormat2::init$($ByteBuffer* buffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$set(this, subHeaderKey, $new($chars, 256));
	$set(this, xlat, xlat);
	int32_t tableLen = $nc(buffer)->getChar(offset + 2);
	buffer->position(offset + 6);
	$var($CharBuffer, cBuffer, buffer->asCharBuffer());
	char16_t maxSubHeader = 0;
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->subHeaderKey)->set(i, $nc(cBuffer)->get());
		if ($nc(this->subHeaderKey)->get(i) > maxSubHeader) {
			maxSubHeader = this->subHeaderKey->get(i);
		}
	}
	int32_t numSubHeaders = (maxSubHeader >> 3) + 1;
	$set(this, firstCodeArray, $new($chars, numSubHeaders));
	$set(this, entryCountArray, $new($chars, numSubHeaders));
	$set(this, idDeltaArray, $new($shorts, numSubHeaders));
	$set(this, idRangeOffSetArray, $new($chars, numSubHeaders));
	for (int32_t i = 0; i < numSubHeaders; ++i) {
		$nc(this->firstCodeArray)->set(i, $nc(cBuffer)->get());
		$nc(this->entryCountArray)->set(i, cBuffer->get());
		$nc(this->idDeltaArray)->set(i, (int16_t)cBuffer->get());
		$nc(this->idRangeOffSetArray)->set(i, cBuffer->get());
	}
	int32_t glyphIndexArrSize = (tableLen - 518 - numSubHeaders * 8) / 2;
	$set(this, glyphIndexArray, $new($chars, glyphIndexArrSize));
	for (int32_t i = 0; i < glyphIndexArrSize; ++i) {
		$nc(this->glyphIndexArray)->set(i, $nc(cBuffer)->get());
	}
}

char16_t CMap$CMapFormat2::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, true);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	if (this->xlat != nullptr) {
		charCode = this->xlat->get(charCode);
	}
	char16_t highByte = (char16_t)(charCode >> 8);
	char16_t lowByte = (char16_t)(charCode & 0xff);
	int32_t key = $nc(this->subHeaderKey)->get(highByte) >> 3;
	char16_t mapMe = 0;
	if (key != 0) {
		mapMe = lowByte;
	} else {
		mapMe = highByte;
		if (mapMe == 0) {
			mapMe = lowByte;
		}
	}
	char16_t firstCode = $nc(this->firstCodeArray)->get(key);
	if (mapMe < firstCode) {
		return 0;
	} else {
		mapMe -= firstCode;
	}
	if (mapMe < $nc(this->entryCountArray)->get(key)) {
		int32_t glyphArrayOffset = (($nc(this->idRangeOffSetArray)->length - key) * 8) - 6;
		int32_t glyphSubArrayStart = (this->idRangeOffSetArray->get(key) - glyphArrayOffset) / 2;
		char16_t glyphCode = $nc(this->glyphIndexArray)->get(glyphSubArrayStart + mapMe);
		if (glyphCode != 0) {
			glyphCode += $nc(this->idDeltaArray)->get(key);
			return glyphCode;
		}
	}
	return getFormatCharGlyph(origCharCode);
}

CMap$CMapFormat2::CMap$CMapFormat2() {
}

$Class* CMap$CMapFormat2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subHeaderKey", "[C", nullptr, 0, $field(CMap$CMapFormat2, subHeaderKey)},
		{"firstCodeArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, firstCodeArray)},
		{"entryCountArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, entryCountArray)},
		{"idDeltaArray", "[S", nullptr, 0, $field(CMap$CMapFormat2, idDeltaArray)},
		{"idRangeOffSetArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, idRangeOffSetArray)},
		{"glyphIndexArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, glyphIndexArray)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(CMap$CMapFormat2, init$, void, $ByteBuffer*, int32_t, $chars*)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$CMapFormat2, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$CMapFormat2", "sun.font.CMap", "CMapFormat2", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$CMapFormat2",
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
	$loadClass(CMap$CMapFormat2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$CMapFormat2);
	});
	return class$;
}

$Class* CMap$CMapFormat2::class$ = nullptr;

	} // font
} // sun