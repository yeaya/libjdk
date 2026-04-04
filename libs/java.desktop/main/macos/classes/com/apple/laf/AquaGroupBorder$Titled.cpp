#include <com/apple/laf/AquaGroupBorder$Titled.h>
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

void AquaGroupBorder$Titled::init$() {
	$useLocalObjectStack();
	$AquaGroupBorder::init$($($$nc($$new($AquaUtilControlSize$SizeVariant)->alterMargins(16, 20, 16, 20))->alterInsets(16, 5, 4, 5)));
}

AquaGroupBorder$Titled::AquaGroupBorder$Titled() {
}

$Class* AquaGroupBorder$Titled::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaGroupBorder$Titled, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaGroupBorder$Titled", "com.apple.laf.AquaGroupBorder", "Titled", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaGroupBorder$Titled",
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
	$loadClass(AquaGroupBorder$Titled, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaGroupBorder$Titled));
	});
	return class$;
}

$Class* AquaGroupBorder$Titled::class$ = nullptr;

		} // laf
	} // apple
} // com