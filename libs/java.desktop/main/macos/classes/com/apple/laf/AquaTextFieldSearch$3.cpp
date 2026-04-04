#include <com/apple/laf/AquaTextFieldSearch$3.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <jcpp.h>

#undef BUTTON_SEARCH_FIELD_CANCEL

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaIcon$DynamicallySizingJRSUIIcon = ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$3::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaIcon$DynamicallySizingJRSUIIcon::init$(sizeDescriptor);
}

void AquaTextFieldSearch$3::initJRSUIState() {
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_CANCEL);
}

AquaTextFieldSearch$3::AquaTextFieldSearch$3() {
}

$Class* AquaTextFieldSearch$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0, $method(AquaTextFieldSearch$3, init$, void, $AquaUtilControlSize$SizeDescriptor*)},
		{"initJRSUIState", "()V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$3, initJRSUIState, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getCancelIcon",
		"()Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$3",
		"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextFieldSearch"
	};
	$loadClass(AquaTextFieldSearch$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldSearch$3));
	});
	return class$;
}

$Class* AquaTextFieldSearch$3::class$ = nullptr;

		} // laf
	} // apple
} // com