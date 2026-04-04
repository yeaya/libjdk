#include <apple/laf/JRSUIConstants$Orientation.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef MASK
#undef SHIFT
#undef SIZE
#undef VERTICAL

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Orientation::orientation = nullptr;
JRSUIConstants$Orientation* JRSUIConstants$Orientation::HORIZONTAL = nullptr;
JRSUIConstants$Orientation* JRSUIConstants$Orientation::VERTICAL = nullptr;

void JRSUIConstants$Orientation::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Orientation::orientation, value);
}

$String* JRSUIConstants$Orientation::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Orientation::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void JRSUIConstants$Orientation::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$Orientation::orientation, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Orientation::MASK, JRSUIConstants$Orientation::SHIFT));
	$assignStatic(JRSUIConstants$Orientation::HORIZONTAL, $new(JRSUIConstants$Orientation, JRSUIConstants$Orientation::_horizontal));
	$assignStatic(JRSUIConstants$Orientation::VERTICAL, $new(JRSUIConstants$Orientation, JRSUIConstants$Orientation::_vertical));
}

JRSUIConstants$Orientation::JRSUIConstants$Orientation() {
}

$Class* JRSUIConstants$Orientation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, SHIFT)},
		{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, SIZE)},
		{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, MASK)},
		{"orientation", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, orientation)},
		{"_horizontal", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, _horizontal)},
		{"HORIZONTAL", "Lapple/laf/JRSUIConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, HORIZONTAL)},
		{"_vertical", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, _vertical)},
		{"VERTICAL", "Lapple/laf/JRSUIConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, VERTICAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B)V", nullptr, 0, $method(JRSUIConstants$Orientation, init$, void, int8_t)},
		{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$Orientation, apply, int64_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JRSUIConstants$Orientation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$Orientation", "apple.laf.JRSUIConstants", "Orientation", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$Orientation",
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
	$loadClass(JRSUIConstants$Orientation, name, initialize, &classInfo$$, JRSUIConstants$Orientation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$Orientation);
	});
	return class$;
}

$Class* JRSUIConstants$Orientation::class$ = nullptr;

	} // laf
} // apple