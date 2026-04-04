#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut) {
	AquaImageFactory$NineSliceMetrics::init$(minWidth, minHeight, westCut, eastCut, northCut, southCut, true);
}

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle) {
	AquaImageFactory$NineSliceMetrics::init$(minWidth, minHeight, westCut, eastCut, northCut, southCut, showMiddle, true, true);
}

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle, bool stretchHorizontally, bool stretchVertically) {
	this->wCut = westCut;
	this->eCut = eastCut;
	this->nCut = northCut;
	this->sCut = southCut;
	this->minW = minWidth;
	this->minH = minHeight;
	this->showMiddle = showMiddle;
	this->stretchH = stretchHorizontally;
	this->stretchV = stretchVertically;
}

AquaImageFactory$NineSliceMetrics::AquaImageFactory$NineSliceMetrics() {
}

$Class* AquaImageFactory$NineSliceMetrics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"wCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, wCut)},
		{"eCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, eCut)},
		{"nCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, nCut)},
		{"sCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, sCut)},
		{"minW", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, minW)},
		{"minH", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, minH)},
		{"showMiddle", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, showMiddle)},
		{"stretchH", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, stretchH)},
		{"stretchV", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, stretchV)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIIIII)V", nullptr, $PUBLIC, $method(AquaImageFactory$NineSliceMetrics, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"<init>", "(IIIIIIZ)V", nullptr, $PUBLIC, $method(AquaImageFactory$NineSliceMetrics, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)},
		{"<init>", "(IIIIIIZZZ)V", nullptr, $PUBLIC, $method(AquaImageFactory$NineSliceMetrics, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$NineSliceMetrics", "com.apple.laf.AquaImageFactory", "NineSliceMetrics", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaImageFactory$NineSliceMetrics",
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
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$NineSliceMetrics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$NineSliceMetrics);
	});
	return class$;
}

$Class* AquaImageFactory$NineSliceMetrics::class$ = nullptr;

		} // laf
	} // apple
} // com