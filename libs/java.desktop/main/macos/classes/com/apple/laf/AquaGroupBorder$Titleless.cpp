#include <com/apple/laf/AquaGroupBorder$Titleless.h>
#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaGroupBorder$Titleless::init$() {
	$useLocalObjectStack();
	$AquaGroupBorder::init$($($$nc($$new($AquaUtilControlSize$SizeVariant)->alterMargins(8, 12, 8, 12))->alterInsets(3, 5, 1, 5)));
}

AquaGroupBorder$Titleless::AquaGroupBorder$Titleless() {
}

$Class* AquaGroupBorder$Titleless::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaGroupBorder$Titleless, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaGroupBorder$Titleless", "com.apple.laf.AquaGroupBorder", "Titleless", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaGroupBorder$Titleless",
		"com.apple.laf.AquaGroupBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaGroupBorder"
	};
	$loadClass(AquaGroupBorder$Titleless, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaGroupBorder$Titleless));
	});
	return class$;
}

$Class* AquaGroupBorder$Titleless::class$ = nullptr;

		} // laf
	} // apple
} // com