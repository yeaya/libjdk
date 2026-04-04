#include <apple/laf/JRSUIConstants$ShowArrows.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$ShowArrows::showArrows = nullptr;
JRSUIConstants$ShowArrows* JRSUIConstants$ShowArrows::NO = nullptr;
JRSUIConstants$ShowArrows* JRSUIConstants$ShowArrows::YES = nullptr;

void JRSUIConstants$ShowArrows::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$ShowArrows::showArrows, value);
}

$String* JRSUIConstants$ShowArrows::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$ShowArrows::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$ShowArrows::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$ShowArrows::showArrows, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$ShowArrows::MASK, JRSUIConstants$ShowArrows::SHIFT));
	$assignStatic(JRSUIConstants$ShowArrows::NO, $new(JRSUIConstants$ShowArrows, JRSUIConstants$ShowArrows::_no));
	$assignStatic(JRSUIConstants$ShowArrows::YES, $new(JRSUIConstants$ShowArrows, JRSUIConstants$ShowArrows::_yes));
}

JRSUIConstants$ShowArrows::JRSUIConstants$ShowArrows() {
}

$Class* JRSUIConstants$ShowArrows::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ShowArrows, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ShowArrows, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ShowArrows, MASK)},
		{"showArrows", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$ShowArrows, showArrows)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ShowArrows, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$ShowArrows;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ShowArrows, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ShowArrows, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$ShowArrows;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ShowArrows, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$ShowArrows, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$ShowArrows, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$ShowArrows, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$ShowArrows", "apple.laf.JRSUIConstants", "ShowArrows", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$ShowArrows",
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
	$loadClass(JRSUIConstants$ShowArrows, name, initialize, &classInfo$$, JRSUIConstants$ShowArrows::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$ShowArrows);
	});
	return class$;
}

$Class* JRSUIConstants$ShowArrows::class$ = nullptr;

	} // laf
} // apple