#include <com/apple/laf/AquaButtonToggleUI.h>
#include <com/apple/laf/AquaButtonUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $AquaButtonUI = ::com::apple::laf::AquaButtonUI;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaButtonToggleUI::aquaToggleButtonUI = nullptr;

void AquaButtonToggleUI::init$() {
	$AquaButtonUI::init$();
}

$ComponentUI* AquaButtonToggleUI::createUI($JComponent* b) {
	$init(AquaButtonToggleUI);
	return $cast($ComponentUI, AquaButtonToggleUI::aquaToggleButtonUI->get());
}

$String* AquaButtonToggleUI::getPropertyPrefix() {
	return "ToggleButton."_s;
}

void AquaButtonToggleUI::clinit$($Class* clazz) {
	$assignStatic(AquaButtonToggleUI::aquaToggleButtonUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonToggleUI::class$));
}

AquaButtonToggleUI::AquaButtonToggleUI() {
}

$Class* AquaButtonToggleUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"aquaToggleButtonUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonToggleUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonToggleUI, aquaToggleButtonUI)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonToggleUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaButtonToggleUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaButtonToggleUI, getPropertyPrefix, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonToggleUI",
		"com.apple.laf.AquaButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaButtonToggleUI, name, initialize, &classInfo$$, AquaButtonToggleUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonToggleUI));
	});
	return class$;
}

$Class* AquaButtonToggleUI::class$ = nullptr;

		} // laf
	} // apple
} // com