#include <com/apple/laf/AquaGroupBorder$TabbedPane.h>
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

void AquaGroupBorder$TabbedPane::init$() {
	$useLocalObjectStack();
	$AquaGroupBorder::init$($($$nc($$new($AquaUtilControlSize$SizeVariant)->alterMargins(8, 12, 8, 12))->alterInsets(5, 5, 7, 5)));
}

AquaGroupBorder$TabbedPane::AquaGroupBorder$TabbedPane() {
}

$Class* AquaGroupBorder$TabbedPane::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaGroupBorder$TabbedPane, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaGroupBorder$TabbedPane", "com.apple.laf.AquaGroupBorder", "TabbedPane", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaGroupBorder$TabbedPane",
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
	$loadClass(AquaGroupBorder$TabbedPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaGroupBorder$TabbedPane));
	});
	return class$;
}

$Class* AquaGroupBorder$TabbedPane::class$ = nullptr;

		} // laf
	} // apple
} // com