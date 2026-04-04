#include <com/apple/laf/AquaFocus$Drawable.h>
#include <com/apple/laf/AquaFocus.h>
#include <java/awt/Graphics2D.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaFocus$Drawable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"draw", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaFocus$Drawable, draw, void, $Graphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFocus$Drawable", "com.apple.laf.AquaFocus", "Drawable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaFocus$Drawable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFocus"
	};
	$loadClass(AquaFocus$Drawable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFocus$Drawable);
	});
	return class$;
}

$Class* AquaFocus$Drawable::class$ = nullptr;

		} // laf
	} // apple
} // com