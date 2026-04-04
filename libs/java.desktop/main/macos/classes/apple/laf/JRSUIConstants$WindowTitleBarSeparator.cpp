#include <apple/laf/JRSUIConstants$WindowTitleBarSeparator.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$WindowTitleBarSeparator::focused = nullptr;
JRSUIConstants$WindowTitleBarSeparator* JRSUIConstants$WindowTitleBarSeparator::NO = nullptr;
JRSUIConstants$WindowTitleBarSeparator* JRSUIConstants$WindowTitleBarSeparator::YES = nullptr;

void JRSUIConstants$WindowTitleBarSeparator::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$WindowTitleBarSeparator::focused, value);
}

$String* JRSUIConstants$WindowTitleBarSeparator::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$WindowTitleBarSeparator::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$WindowTitleBarSeparator::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$WindowTitleBarSeparator::MASK, JRSUIConstants$WindowTitleBarSeparator::SHIFT));
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::NO, $new(JRSUIConstants$WindowTitleBarSeparator, JRSUIConstants$WindowTitleBarSeparator::_no));
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::YES, $new(JRSUIConstants$WindowTitleBarSeparator, JRSUIConstants$WindowTitleBarSeparator::_yes));
}

JRSUIConstants$WindowTitleBarSeparator::JRSUIConstants$WindowTitleBarSeparator() {
}

$Class* JRSUIConstants$WindowTitleBarSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, MASK)},
		{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, focused)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$WindowTitleBarSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$WindowTitleBarSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$WindowTitleBarSeparator, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$WindowTitleBarSeparator, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$WindowTitleBarSeparator, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$WindowTitleBarSeparator", "apple.laf.JRSUIConstants", "WindowTitleBarSeparator", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$WindowTitleBarSeparator",
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
	$loadClass(JRSUIConstants$WindowTitleBarSeparator, name, initialize, &classInfo$$, JRSUIConstants$WindowTitleBarSeparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$WindowTitleBarSeparator);
	});
	return class$;
}

$Class* JRSUIConstants$WindowTitleBarSeparator::class$ = nullptr;

	} // laf
} // apple