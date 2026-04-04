#include <apple/laf/JRSUIConstants$FrameOnly.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$FrameOnly::focused = nullptr;
JRSUIConstants$FrameOnly* JRSUIConstants$FrameOnly::NO = nullptr;
JRSUIConstants$FrameOnly* JRSUIConstants$FrameOnly::YES = nullptr;

void JRSUIConstants$FrameOnly::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$FrameOnly::focused, value);
}

$String* JRSUIConstants$FrameOnly::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$FrameOnly::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$FrameOnly::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$FrameOnly::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$FrameOnly::MASK, JRSUIConstants$FrameOnly::SHIFT));
	$assignStatic(JRSUIConstants$FrameOnly::NO, $new(JRSUIConstants$FrameOnly, JRSUIConstants$FrameOnly::_no));
	$assignStatic(JRSUIConstants$FrameOnly::YES, $new(JRSUIConstants$FrameOnly, JRSUIConstants$FrameOnly::_yes));
}

JRSUIConstants$FrameOnly::JRSUIConstants$FrameOnly() {
}

$Class* JRSUIConstants$FrameOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, MASK)},
		{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, focused)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$FrameOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$FrameOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$FrameOnly, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$FrameOnly, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$FrameOnly, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$FrameOnly", "apple.laf.JRSUIConstants", "FrameOnly", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$FrameOnly",
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
	$loadClass(JRSUIConstants$FrameOnly, name, initialize, &classInfo$$, JRSUIConstants$FrameOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$FrameOnly);
	});
	return class$;
}

$Class* JRSUIConstants$FrameOnly::class$ = nullptr;

	} // laf
} // apple