#include <apple/laf/JRSUIConstants$ArrowsOnly.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$ArrowsOnly::focused = nullptr;
JRSUIConstants$ArrowsOnly* JRSUIConstants$ArrowsOnly::NO = nullptr;
JRSUIConstants$ArrowsOnly* JRSUIConstants$ArrowsOnly::YES = nullptr;

void JRSUIConstants$ArrowsOnly::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$ArrowsOnly::focused, value);
}

$String* JRSUIConstants$ArrowsOnly::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$ArrowsOnly::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$ArrowsOnly::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$ArrowsOnly::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$ArrowsOnly::MASK, JRSUIConstants$ArrowsOnly::SHIFT));
	$assignStatic(JRSUIConstants$ArrowsOnly::NO, $new(JRSUIConstants$ArrowsOnly, JRSUIConstants$ArrowsOnly::_no));
	$assignStatic(JRSUIConstants$ArrowsOnly::YES, $new(JRSUIConstants$ArrowsOnly, JRSUIConstants$ArrowsOnly::_yes));
}

JRSUIConstants$ArrowsOnly::JRSUIConstants$ArrowsOnly() {
}

$Class* JRSUIConstants$ArrowsOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ArrowsOnly, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ArrowsOnly, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ArrowsOnly, MASK)},
		{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$ArrowsOnly, focused)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ArrowsOnly, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$ArrowsOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ArrowsOnly, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ArrowsOnly, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$ArrowsOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ArrowsOnly, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$ArrowsOnly, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$ArrowsOnly, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$ArrowsOnly, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$ArrowsOnly", "apple.laf.JRSUIConstants", "ArrowsOnly", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$ArrowsOnly",
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
	$loadClass(JRSUIConstants$ArrowsOnly, name, initialize, &classInfo$$, JRSUIConstants$ArrowsOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$ArrowsOnly);
	});
	return class$;
}

$Class* JRSUIConstants$ArrowsOnly::class$ = nullptr;

	} // laf
} // apple