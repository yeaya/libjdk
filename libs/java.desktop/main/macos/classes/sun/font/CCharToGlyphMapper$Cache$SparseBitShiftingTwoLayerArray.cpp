#include <sun/font/CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CCharToGlyphMapper$Cache.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CCharToGlyphMapper$Cache = ::sun::font::CCharToGlyphMapper$Cache;

namespace sun {
	namespace font {

void CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::init$($CCharToGlyphMapper$Cache* this$1, int32_t size, int32_t shift) {
	$set(this, this$1, this$1);
	this->shift = shift;
	$set(this, cache, $new($intArray2, $sl(1, shift)));
	this->secondLayerLength = $sr(size, shift);
}

int32_t CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::get(int32_t index) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($ints, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		return 0;
	}
	return $nc(firstLayerRow)->get(index - (firstIndex * ($sl(1, this->shift))));
}

void CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::put(int32_t index, int32_t value) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($ints, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		this->cache->set(firstIndex, $assign(firstLayerRow, $new($ints, this->secondLayerLength)));
	}
	$nc(firstLayerRow)->set(index - (firstIndex * ($sl(1, this->shift))), value);
}

CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray() {
}

$Class* CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/font/CCharToGlyphMapper$Cache;", nullptr, $FINAL | $SYNTHETIC, $field(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, this$1)},
		{"cache", "[[I", nullptr, $FINAL, $field(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, cache)},
		{"shift", "I", nullptr, $FINAL, $field(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, shift)},
		{"secondLayerLength", "I", nullptr, $FINAL, $field(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, secondLayerLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/CCharToGlyphMapper$Cache;II)V", nullptr, $PUBLIC, $method(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, init$, void, $CCharToGlyphMapper$Cache*, int32_t, int32_t)},
		{"get", "(I)I", nullptr, $PUBLIC, $virtualMethod(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, get, int32_t, int32_t)},
		{"put", "(II)V", nullptr, $PUBLIC, $virtualMethod(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, put, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CCharToGlyphMapper$Cache", "sun.font.CCharToGlyphMapper", "Cache", $PRIVATE},
		{"sun.font.CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray", "sun.font.CCharToGlyphMapper$Cache", "SparseBitShiftingTwoLayerArray", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.CCharToGlyphMapper"
	};
	$loadClass(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray);
	});
	return class$;
}

$Class* CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray::class$ = nullptr;

	} // font
} // sun