#include <com/apple/laf/AquaIcon$InvertableIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaIcon$InvertableIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInvertedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaIcon$InvertableIcon, getInvertedIcon, $Icon*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$InvertableIcon", "com.apple.laf.AquaIcon", "InvertableIcon", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaIcon$InvertableIcon",
		nullptr,
		"javax.swing.Icon",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$InvertableIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaIcon$InvertableIcon);
	});
	return class$;
}

$Class* AquaIcon$InvertableIcon::class$ = nullptr;

		} // laf
	} // apple
} // com