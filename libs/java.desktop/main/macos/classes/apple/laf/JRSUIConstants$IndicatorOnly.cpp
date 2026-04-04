#include <apple/laf/JRSUIConstants$IndicatorOnly.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$IndicatorOnly::indicatorOnly = nullptr;
JRSUIConstants$IndicatorOnly* JRSUIConstants$IndicatorOnly::NO = nullptr;
JRSUIConstants$IndicatorOnly* JRSUIConstants$IndicatorOnly::YES = nullptr;

void JRSUIConstants$IndicatorOnly::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$IndicatorOnly::indicatorOnly, value);
}

$String* JRSUIConstants$IndicatorOnly::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$IndicatorOnly::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$IndicatorOnly::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$IndicatorOnly::indicatorOnly, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$IndicatorOnly::MASK, JRSUIConstants$IndicatorOnly::SHIFT));
	$assignStatic(JRSUIConstants$IndicatorOnly::NO, $new(JRSUIConstants$IndicatorOnly, JRSUIConstants$IndicatorOnly::_no));
	$assignStatic(JRSUIConstants$IndicatorOnly::YES, $new(JRSUIConstants$IndicatorOnly, JRSUIConstants$IndicatorOnly::_yes));
}

JRSUIConstants$IndicatorOnly::JRSUIConstants$IndicatorOnly() {
}

$Class* JRSUIConstants$IndicatorOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, MASK)},
		{"indicatorOnly", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, indicatorOnly)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$IndicatorOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$IndicatorOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$IndicatorOnly, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$IndicatorOnly, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$IndicatorOnly, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$IndicatorOnly", "apple.laf.JRSUIConstants", "IndicatorOnly", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$IndicatorOnly",
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
	$loadClass(JRSUIConstants$IndicatorOnly, name, initialize, &classInfo$$, JRSUIConstants$IndicatorOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$IndicatorOnly);
	});
	return class$;
}

$Class* JRSUIConstants$IndicatorOnly::class$ = nullptr;

	} // laf
} // apple