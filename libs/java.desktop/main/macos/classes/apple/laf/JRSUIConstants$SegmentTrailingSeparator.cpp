#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef MASK
#undef NO
#undef SHIFT
#undef SIZE
#undef YES

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$JRSUIConstants$PropertyEncoding* JRSUIConstants$SegmentTrailingSeparator::focused = nullptr;
JRSUIConstants$SegmentTrailingSeparator* JRSUIConstants$SegmentTrailingSeparator::NO = nullptr;
JRSUIConstants$SegmentTrailingSeparator* JRSUIConstants$SegmentTrailingSeparator::YES = nullptr;

void JRSUIConstants$SegmentTrailingSeparator::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$SegmentTrailingSeparator::focused, value);
}

$String* JRSUIConstants$SegmentTrailingSeparator::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$SegmentTrailingSeparator::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$SegmentTrailingSeparator::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$SegmentTrailingSeparator::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$SegmentTrailingSeparator::MASK, JRSUIConstants$SegmentTrailingSeparator::SHIFT));
	$assignStatic(JRSUIConstants$SegmentTrailingSeparator::NO, $new(JRSUIConstants$SegmentTrailingSeparator, JRSUIConstants$SegmentTrailingSeparator::_no));
	$assignStatic(JRSUIConstants$SegmentTrailingSeparator::YES, $new(JRSUIConstants$SegmentTrailingSeparator, JRSUIConstants$SegmentTrailingSeparator::_yes));
}

JRSUIConstants$SegmentTrailingSeparator::JRSUIConstants$SegmentTrailingSeparator() {
}

$Class* JRSUIConstants$SegmentTrailingSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentTrailingSeparator, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentTrailingSeparator, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentTrailingSeparator, MASK)},
		{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentTrailingSeparator, focused)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentTrailingSeparator, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$SegmentTrailingSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentTrailingSeparator, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentTrailingSeparator, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$SegmentTrailingSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentTrailingSeparator, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$SegmentTrailingSeparator, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$SegmentTrailingSeparator, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$SegmentTrailingSeparator, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$SegmentTrailingSeparator", "apple.laf.JRSUIConstants", "SegmentTrailingSeparator", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$SegmentTrailingSeparator",
		"apple.laf.JRSUIConstants$Property",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIConstants"
	};
	$loadClass(JRSUIConstants$SegmentTrailingSeparator, name, initialize, &classInfo$$, JRSUIConstants$SegmentTrailingSeparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$SegmentTrailingSeparator);
	});
	return class$;
}

$Class* JRSUIConstants$SegmentTrailingSeparator::class$ = nullptr;

	} // laf
} // apple