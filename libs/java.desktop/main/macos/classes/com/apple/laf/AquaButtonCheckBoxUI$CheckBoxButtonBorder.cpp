#include <com/apple/laf/AquaButtonCheckBoxUI$CheckBoxButtonBorder.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonCheckBoxUI.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef BUTTON_CHECK_BOX

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonLabeledUI$LabeledButtonBorder = ::com::apple::laf::AquaButtonLabeledUI$LabeledButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$() {
	$useLocalObjectStack();
	$AquaButtonLabeledUI$LabeledButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->replaceMargins("CheckBox.margin"_s))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_CHECK_BOX);
}

void AquaButtonCheckBoxUI$CheckBoxButtonBorder::init$(AquaButtonCheckBoxUI$CheckBoxButtonBorder* sizeDescriptor) {
	$AquaButtonLabeledUI$LabeledButtonBorder::init$(sizeDescriptor);
}

AquaButtonCheckBoxUI$CheckBoxButtonBorder::AquaButtonCheckBoxUI$CheckBoxButtonBorder() {
}

$Class* AquaButtonCheckBoxUI$CheckBoxButtonBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonCheckBoxUI$CheckBoxButtonBorder, init$, void)},
		{"<init>", "(Lcom/apple/laf/AquaButtonCheckBoxUI$CheckBoxButtonBorder;)V", nullptr, $PUBLIC, $method(AquaButtonCheckBoxUI$CheckBoxButtonBorder, init$, void, AquaButtonCheckBoxUI$CheckBoxButtonBorder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder", "com.apple.laf.AquaButtonCheckBoxUI", "CheckBoxButtonBorder", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonCheckBoxUI$CheckBoxButtonBorder",
		"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonCheckBoxUI"
	};
	$loadClass(AquaButtonCheckBoxUI$CheckBoxButtonBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonCheckBoxUI$CheckBoxButtonBorder));
	});
	return class$;
}

$Class* AquaButtonCheckBoxUI$CheckBoxButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com