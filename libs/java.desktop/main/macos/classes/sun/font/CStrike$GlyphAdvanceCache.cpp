#include <sun/font/CStrike$GlyphAdvanceCache.h>
#include <java/util/HashMap.h>
#include <sun/font/CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CStrike.h>
#include <jcpp.h>

#undef FIRST_LAYER_SIZE
#undef SECOND_LAYER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray = ::sun::font::CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray;

namespace sun {
	namespace font {

void CStrike$GlyphAdvanceCache::init$() {
	$set(this, firstLayerCache, $new($floats, CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE));
}

float CStrike$GlyphAdvanceCache::get(int32_t index) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (index < 0) {
			if (-index < CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					return 0;
				}
				return $nc(this->secondLayerCache)->get(-index);
			}
		} else if (index < CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE) {
			return this->firstLayerCache->get(index);
		}
		if (this->generalCache == nullptr) {
			return 0;
		}
		$var($Float, value, $cast($Float, $nc(this->generalCache)->get($($Integer::valueOf(index)))));
		if (value == nullptr) {
			return 0;
		}
		return $nc(value)->floatValue();
	}
}

void CStrike$GlyphAdvanceCache::put(int32_t index, float value) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (index < 0) {
			if (-index < CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					$set(this, secondLayerCache, $new($CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE, 7));
				}
				$nc(this->secondLayerCache)->put(-index, value);
				return;
			}
		} else if (index < CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE) {
			this->firstLayerCache->set(index, value);
			return;
		}
		if (this->generalCache == nullptr) {
			$set(this, generalCache, $new($HashMap));
		}
		$var($Object, var$0, $Integer::valueOf(index));
		$nc(this->generalCache)->put(var$0, $($Float::valueOf(value)));
	}
}

CStrike$GlyphAdvanceCache::CStrike$GlyphAdvanceCache() {
}

$Class* CStrike$GlyphAdvanceCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FIRST_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphAdvanceCache, FIRST_LAYER_SIZE)},
		{"SECOND_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphAdvanceCache, SECOND_LAYER_SIZE)},
		{"firstLayerCache", "[F", nullptr, $PRIVATE | $FINAL, $field(CStrike$GlyphAdvanceCache, firstLayerCache)},
		{"secondLayerCache", "Lsun/font/CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray;", nullptr, $PRIVATE, $field(CStrike$GlyphAdvanceCache, secondLayerCache)},
		{"generalCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Float;>;", $PRIVATE, $field(CStrike$GlyphAdvanceCache, generalCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CStrike$GlyphAdvanceCache, init$, void)},
		{"get", "(I)F", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CStrike$GlyphAdvanceCache, get, float, int32_t)},
		{"put", "(IF)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CStrike$GlyphAdvanceCache, put, void, int32_t, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CStrike$GlyphAdvanceCache", "sun.font.CStrike", "GlyphAdvanceCache", $PRIVATE | $STATIC},
		{"sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray", "sun.font.CStrike$GlyphAdvanceCache", "SparseBitShiftingTwoLayerArray", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CStrike$GlyphAdvanceCache",
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
	$loadClass(CStrike$GlyphAdvanceCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CStrike$GlyphAdvanceCache);
	});
	return class$;
}

$Class* CStrike$GlyphAdvanceCache::class$ = nullptr;

	} // font
} // sun