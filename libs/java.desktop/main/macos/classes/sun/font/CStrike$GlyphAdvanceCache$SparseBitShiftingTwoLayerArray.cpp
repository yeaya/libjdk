#include <sun/font/CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CStrike$GlyphAdvanceCache.h>
#include <jcpp.h>

using $floatArray2 = $Array<float, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::init$(int32_t size, int32_t shift) {
	this->shift = shift;
	$set(this, cache, $new($floatArray2, $sl(1, shift)));
	this->secondLayerLength = $sr(size, shift);
}

float CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::get(int32_t index) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($floats, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		return 0;
	}
	return $nc(firstLayerRow)->get(index - (firstIndex * ($sl(1, this->shift))));
}

void CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::put(int32_t index, float value) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($floats, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		this->cache->set(firstIndex, $assign(firstLayerRow, $new($floats, this->secondLayerLength)));
	}
	$nc(firstLayerRow)->set(index - (firstIndex * ($sl(1, this->shift))), value);
}

CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray() {
}

$Class* CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "[[F", nullptr, $FINAL, $field(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, cache)},
		{"shift", "I", nullptr, $FINAL, $field(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, shift)},
		{"secondLayerLength", "I", nullptr, $FINAL, $field(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, secondLayerLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, init$, void, int32_t, int32_t)},
		{"get", "(I)F", nullptr, $PUBLIC, $virtualMethod(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, get, float, int32_t)},
		{"put", "(IF)V", nullptr, $PUBLIC, $virtualMethod(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, put, void, int32_t, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CStrike$GlyphAdvanceCache", "sun.font.CStrike", "GlyphAdvanceCache", $PRIVATE | $STATIC},
		{"sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray", "sun.font.CStrike$GlyphAdvanceCache", "SparseBitShiftingTwoLayerArray", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray",
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
		"sun.font.CStrike"
	};
	$loadClass(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray);
	});
	return class$;
}

$Class* CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray::class$ = nullptr;

	} // font
} // sun