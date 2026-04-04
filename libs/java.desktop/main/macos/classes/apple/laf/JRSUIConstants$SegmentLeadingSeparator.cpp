#include <apple/laf/JRSUIConstants$SegmentLeadingSeparator.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$SegmentLeadingSeparator::leadingSeparator = nullptr;
JRSUIConstants$SegmentLeadingSeparator* JRSUIConstants$SegmentLeadingSeparator::NO = nullptr;
JRSUIConstants$SegmentLeadingSeparator* JRSUIConstants$SegmentLeadingSeparator::YES = nullptr;

void JRSUIConstants$SegmentLeadingSeparator::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$SegmentLeadingSeparator::leadingSeparator, value);
}

$String* JRSUIConstants$SegmentLeadingSeparator::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$SegmentLeadingSeparator::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$SegmentLeadingSeparator::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$SegmentLeadingSeparator::leadingSeparator, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$SegmentLeadingSeparator::MASK, JRSUIConstants$SegmentLeadingSeparator::SHIFT));
	$assignStatic(JRSUIConstants$SegmentLeadingSeparator::NO, $new(JRSUIConstants$SegmentLeadingSeparator, JRSUIConstants$SegmentLeadingSeparator::_no));
	$assignStatic(JRSUIConstants$SegmentLeadingSeparator::YES, $new(JRSUIConstants$SegmentLeadingSeparator, JRSUIConstants$SegmentLeadingSeparator::_yes));
}

JRSUIConstants$SegmentLeadingSeparator::JRSUIConstants$SegmentLeadingSeparator() {
}

$Class* JRSUIConstants$SegmentLeadingSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentLeadingSeparator, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentLeadingSeparator, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentLeadingSeparator, MASK)},
		{"leadingSeparator", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentLeadingSeparator, leadingSeparator)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentLeadingSeparator, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$SegmentLeadingSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentLeadingSeparator, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentLeadingSeparator, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$SegmentLeadingSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentLeadingSeparator, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$SegmentLeadingSeparator, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$SegmentLeadingSeparator, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$SegmentLeadingSeparator, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$SegmentLeadingSeparator", "apple.laf.JRSUIConstants", "SegmentLeadingSeparator", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$SegmentLeadingSeparator",
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
	$loadClass(JRSUIConstants$SegmentLeadingSeparator, name, initialize, &classInfo$$, JRSUIConstants$SegmentLeadingSeparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$SegmentLeadingSeparator);
	});
	return class$;
}

$Class* JRSUIConstants$SegmentLeadingSeparator::class$ = nullptr;

	} // laf
} // apple