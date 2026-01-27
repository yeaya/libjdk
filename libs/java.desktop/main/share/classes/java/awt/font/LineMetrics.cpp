#include <java/awt/font/LineMetrics.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _LineMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(LineMetrics, init$, void)},
	{"getAscent", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getAscent, float)},
	{"getBaselineIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getBaselineIndex, int32_t)},
	{"getBaselineOffsets", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getBaselineOffsets, $floats*)},
	{"getDescent", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getDescent, float)},
	{"getHeight", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getHeight, float)},
	{"getLeading", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getLeading, float)},
	{"getNumChars", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getNumChars, int32_t)},
	{"getStrikethroughOffset", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getStrikethroughOffset, float)},
	{"getStrikethroughThickness", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getStrikethroughThickness, float)},
	{"getUnderlineOffset", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getUnderlineOffset, float)},
	{"getUnderlineThickness", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineMetrics, getUnderlineThickness, float)},
	{}
};

$ClassInfo _LineMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.font.LineMetrics",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LineMetrics_MethodInfo_
};

$Object* allocate$LineMetrics($Class* clazz) {
	return $of($alloc(LineMetrics));
}

void LineMetrics::init$() {
}

LineMetrics::LineMetrics() {
}

$Class* LineMetrics::load$($String* name, bool initialize) {
	$loadClass(LineMetrics, name, initialize, &_LineMetrics_ClassInfo_, allocate$LineMetrics);
	return class$;
}

$Class* LineMetrics::class$ = nullptr;

		} // font
	} // awt
} // java