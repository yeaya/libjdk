#include <com/apple/laf/AquaButtonRadioUI$RadioButtonBorder.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI$LabeledButtonBorder.h>
#include <com/apple/laf/AquaButtonRadioUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef BUTTON_RADIO

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

void AquaButtonRadioUI$RadioButtonBorder::init$() {
	$useLocalObjectStack();
	$AquaButtonLabeledUI$LabeledButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->replaceMargins("RadioButton.margin"_s))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_RADIO);
}

void AquaButtonRadioUI$RadioButtonBorder::init$(AquaButtonRadioUI$RadioButtonBorder* other) {
	$AquaButtonLabeledUI$LabeledButtonBorder::init$(other);
}

AquaButtonRadioUI$RadioButtonBorder::AquaButtonRadioUI$RadioButtonBorder() {
}

$Class* AquaButtonRadioUI$RadioButtonBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonRadioUI$RadioButtonBorder, init$, void)},
		{"<init>", "(Lcom/apple/laf/AquaButtonRadioUI$RadioButtonBorder;)V", nullptr, $PUBLIC, $method(AquaButtonRadioUI$RadioButtonBorder, init$, void, AquaButtonRadioUI$RadioButtonBorder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder", "com.apple.laf.AquaButtonRadioUI", "RadioButtonBorder", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder", "com.apple.laf.AquaButtonLabeledUI", "LabeledButtonBorder", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder",
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
		"com.apple.laf.AquaButtonRadioUI"
	};
	$loadClass(AquaButtonRadioUI$RadioButtonBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonRadioUI$RadioButtonBorder));
	});
	return class$;
}

$Class* AquaButtonRadioUI$RadioButtonBorder::class$ = nullptr;

		} // laf
	} // apple
} // com