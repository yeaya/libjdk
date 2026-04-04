#include <apple/laf/JRSUIConstants$NothingToScroll.h>
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

$JRSUIConstants$PropertyEncoding* JRSUIConstants$NothingToScroll::focused = nullptr;
JRSUIConstants$NothingToScroll* JRSUIConstants$NothingToScroll::NO = nullptr;
JRSUIConstants$NothingToScroll* JRSUIConstants$NothingToScroll::YES = nullptr;

void JRSUIConstants$NothingToScroll::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$NothingToScroll::focused, value);
}

$String* JRSUIConstants$NothingToScroll::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$NothingToScroll::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$NothingToScroll::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$NothingToScroll::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$NothingToScroll::MASK, JRSUIConstants$NothingToScroll::SHIFT));
	$assignStatic(JRSUIConstants$NothingToScroll::NO, $new(JRSUIConstants$NothingToScroll, JRSUIConstants$NothingToScroll::_no));
	$assignStatic(JRSUIConstants$NothingToScroll::YES, $new(JRSUIConstants$NothingToScroll, JRSUIConstants$NothingToScroll::_yes));
}

JRSUIConstants$NothingToScroll::JRSUIConstants$NothingToScroll() {
}

$Class* JRSUIConstants$NothingToScroll::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NothingToScroll, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NothingToScroll, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NothingToScroll, MASK)},
		{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$NothingToScroll, focused)},
		{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NothingToScroll, _no)},
		{"NO", "Lapple/laf/JRSUIConstants$NothingToScroll;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$NothingToScroll, NO)},
		{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NothingToScroll, _yes)},
		{"YES", "Lapple/laf/JRSUIConstants$NothingToScroll;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$NothingToScroll, YES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$NothingToScroll, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$NothingToScroll, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$NothingToScroll, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$NothingToScroll", "apple.laf.JRSUIConstants", "NothingToScroll", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$NothingToScroll",
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
	$loadClass(JRSUIConstants$NothingToScroll, name, initialize, &classInfo$$, JRSUIConstants$NothingToScroll::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$NothingToScroll);
	});
	return class$;
}

$Class* JRSUIConstants$NothingToScroll::class$ = nullptr;

	} // laf
} // apple