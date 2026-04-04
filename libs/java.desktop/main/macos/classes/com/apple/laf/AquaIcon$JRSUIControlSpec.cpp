#include <com/apple/laf/AquaIcon$JRSUIControlSpec.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaIcon$JRSUIControlSpec::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(AquaIcon$JRSUIControlSpec, initIconPainter, void, $AquaPainter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaIcon$JRSUIControlSpec",
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
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$JRSUIControlSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaIcon$JRSUIControlSpec);
	});
	return class$;
}

$Class* AquaIcon$JRSUIControlSpec::class$ = nullptr;

		} // laf
	} // apple
} // com