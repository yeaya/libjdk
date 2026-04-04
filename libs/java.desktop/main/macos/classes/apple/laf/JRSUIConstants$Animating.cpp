#include <apple/laf/JRSUIConstants$Animating.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Animating::animating = nullptr;
JRSUIConstants$Animating* JRSUIConstants$Animating::NO = nullptr;
JRSUIConstants$Animating* JRSUIConstants$Animating::YES = nullptr;

void JRSUIConstants$Animating::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Animating::animating, value);
}

$String* JRSUIConstants$Animating::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Animating::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$Animating::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$Animating::animating, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Animating::MASK, JRSUIConstants$Animating::SHIFT));
	$assignStatic(JRSUIConstants$Animating::NO, $new(JRSUIConstants$Animating, JRSUIConstants$Animating::_no));
	$assignStatic(JRSUIConstants$Animating::YES, $new(JRSUIConstants$Animating, JRSUIConstants$Animating::_yes));
}

JRSUIConstants$Animating::JRSUIConstants$Animating() {
}

$Class* JRSUIConstants$Animating::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Animating, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Animating, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Animating, MASK)},
		{"animating", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Animating, animating)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Animating, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$Animating;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Animating, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Animating, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$Animating;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Animating, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$Animating, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$Animating, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$Animating, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$Animating", "apple.laf.JRSUIConstants", "Animating", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$Animating",
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
	$loadClass(JRSUIConstants$Animating, name, initialize, &classInfo$$, JRSUIConstants$Animating::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$Animating);
	});
	return class$;
}

$Class* JRSUIConstants$Animating::class$ = nullptr;

	} // laf
} // apple