#include <sun/font/CMap$CMapFormat10.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

#undef INTMASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

void CMap$CMapFormat10::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$nc(bbuffer)->position(offset + 12);
	this->firstCode = bbuffer->getInt() & $CMap::INTMASK;
	this->entryCount = bbuffer->getInt() & $CMap::INTMASK;
	if (bbuffer->remaining() < (2 * (int64_t)this->entryCount)) {
		$throwNew($RuntimeException, "Format 10 table exceeded"_s);
	}
	$var($CharBuffer, buffer, bbuffer->asCharBuffer());
	$set(this, glyphIdArray, $new($chars, this->entryCount));
	for (int32_t i = 0; i < this->entryCount; ++i) {
		$nc(this->glyphIdArray)->set(i, $nc(buffer)->get());
	}
}

char16_t CMap$CMapFormat10::getGlyph(int32_t charCode) {
	if (this->xlat != nullptr) {
		$throwNew($RuntimeException, "xlat array for cmap fmt=10"_s);
	}
	int32_t code = (int32_t)(charCode - this->firstCode);
	if (code < 0 || code >= this->entryCount) {
		return 0;
	} else {
		return $nc(this->glyphIdArray)->get(code);
	}
}

CMap$CMapFormat10::CMap$CMapFormat10() {
}

$Class* CMap$CMapFormat10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"firstCode", "J", nullptr, 0, $field(CMap$CMapFormat10, firstCode)},
		{"entryCount", "I", nullptr, 0, $field(CMap$CMapFormat10, entryCount)},
		{"glyphIdArray", "[C", nullptr, 0, $field(CMap$CMapFormat10, glyphIdArray)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(CMap$CMapFormat10, init$, void, $ByteBuffer*, int32_t, $chars*)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$CMapFormat10, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$CMapFormat10", "sun.font.CMap", "CMapFormat10", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$CMapFormat10",
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
	$loadClass(CMap$CMapFormat10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$CMapFormat10);
	});
	return class$;
}

$Class* CMap$CMapFormat10::class$ = nullptr;

	} // font
} // sun