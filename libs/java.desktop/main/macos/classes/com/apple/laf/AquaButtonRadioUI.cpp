#include <com/apple/laf/AquaButtonRadioUI.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaButtonRadioUI$1.h>
#include <com/apple/laf/AquaButtonRadioUI$RadioButtonBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonLabeledUI = ::com::apple::laf::AquaButtonLabeledUI;
using $AquaButtonRadioUI$1 = ::com::apple::laf::AquaButtonRadioUI$1;
using $AquaButtonRadioUI$RadioButtonBorder = ::com::apple::laf::AquaButtonRadioUI$RadioButtonBorder;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaButtonRadioUI::instance = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonRadioUI::sizingIcon = nullptr;

void AquaButtonRadioUI::init$() {
	$AquaButtonLabeledUI::init$();
}

$ComponentUI* AquaButtonRadioUI::createUI($JComponent* b) {
	$init(AquaButtonRadioUI);
	return $cast($ComponentUI, AquaButtonRadioUI::instance->get());
}

$Icon* AquaButtonRadioUI::getSizingRadioButtonIcon() {
	$init(AquaButtonRadioUI);
	return $cast($Icon, AquaButtonRadioUI::sizingIcon->get());
}

$String* AquaButtonRadioUI::getPropertyPrefix() {
	return "RadioButton."_s;
}

$AquaButtonBorder* AquaButtonRadioUI::getPainter() {
	return $new($AquaButtonRadioUI$RadioButtonBorder);
}

void AquaButtonRadioUI::clinit$($Class* clazz) {
	$assignStatic(AquaButtonRadioUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonRadioUI::class$));
	$assignStatic(AquaButtonRadioUI::sizingIcon, $new($AquaButtonRadioUI$1));
}

AquaButtonRadioUI::AquaButtonRadioUI() {
}

$Class* AquaButtonRadioUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonRadioUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonRadioUI, instance)},
		{"sizingIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonRadioUI, sizingIcon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonRadioUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaButtonRadioUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPainter", "()Lcom/apple/laf/AquaButtonBorder;", nullptr, $PROTECTED, $virtualMethod(AquaButtonRadioUI, getPainter, $AquaButtonBorder*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaButtonRadioUI, getPropertyPrefix, $String*)},
		{"getSizingRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaButtonRadioUI, getSizingRadioButtonIcon, $Icon*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder", "com.apple.laf.AquaButtonRadioUI", "RadioButtonBorder", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaButtonRadioUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonRadioUI",
		"com.apple.laf.AquaButtonLabeledUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonRadioUI$RadioButtonBorder,com.apple.laf.AquaButtonRadioUI$1"
	};
	$loadClass(AquaButtonRadioUI, name, initialize, &classInfo$$, AquaButtonRadioUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonRadioUI));
	});
	return class$;
}

$Class* AquaButtonRadioUI::class$ = nullptr;

		} // laf
	} // apple
} // com