#include <com/apple/laf/AquaUtils$Selectable.h>
#include <com/apple/laf/AquaUtils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaUtils$Selectable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"paintSelected", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaUtils$Selectable, paintSelected, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaUtils$Selectable",
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
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$Selectable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$Selectable);
	});
	return class$;
}

$Class* AquaUtils$Selectable::class$ = nullptr;

		} // laf
	} // apple
} // com