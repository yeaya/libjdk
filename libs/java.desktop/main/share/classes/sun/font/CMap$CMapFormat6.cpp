#include <sun/font/CMap$CMapFormat6.h>
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

void CMap$CMapFormat6::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$nc(bbuffer)->position(offset + 6);
	$var($CharBuffer, buffer, bbuffer->asCharBuffer());
	this->firstCode = $nc(buffer)->get();
	this->entryCount = buffer->get();
	$set(this, glyphIdArray, $new($chars, this->entryCount));
	for (int32_t i = 0; i < this->entryCount; ++i) {
		$nc(this->glyphIdArray)->set(i, buffer->get());
	}
}

char16_t CMap$CMapFormat6::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, true);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	if (this->xlat != nullptr) {
		charCode = this->xlat->get(charCode);
	}
	charCode -= this->firstCode;
	if (charCode < 0 || charCode >= this->entryCount) {
		return getFormatCharGlyph(origCharCode);
	} else {
		return $nc(this->glyphIdArray)->get(charCode);
	}
}

CMap$CMapFormat6::CMap$CMapFormat6() {
}

$Class* CMap$CMapFormat6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"firstCode", "C", nullptr, 0, $field(CMap$CMapFormat6, firstCode)},
		{"entryCount", "C", nullptr, 0, $field(CMap$CMapFormat6, entryCount)},
		{"glyphIdArray", "[C", nullptr, 0, $field(CMap$CMapFormat6, glyphIdArray)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(CMap$CMapFormat6, init$, void, $ByteBuffer*, int32_t, $chars*)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$CMapFormat6, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$CMapFormat6", "sun.font.CMap", "CMapFormat6", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$CMapFormat6",
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
	$loadClass(CMap$CMapFormat6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$CMapFormat6);
	});
	return class$;
}

$Class* CMap$CMapFormat6::class$ = nullptr;

	} // font
} // sun