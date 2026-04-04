#include <com/apple/laf/AquaToolTipUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaToolTipUI::sharedAquaInstance = nullptr;

$ComponentUI* AquaToolTipUI::createUI($JComponent* c) {
	$init(AquaToolTipUI);
	return $cast($ComponentUI, AquaToolTipUI::sharedAquaInstance->get());
}

void AquaToolTipUI::init$() {
	$BasicToolTipUI::init$();
}

void AquaToolTipUI::clinit$($Class* clazz) {
	$assignStatic(AquaToolTipUI::sharedAquaInstance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaToolTipUI::class$));
}

AquaToolTipUI::AquaToolTipUI() {
}

$Class* AquaToolTipUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedAquaInstance", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<Lcom/apple/laf/AquaToolTipUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaToolTipUI, sharedAquaInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaToolTipUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaToolTipUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaToolTipUI",
		"javax.swing.plaf.basic.BasicToolTipUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaToolTipUI, name, initialize, &classInfo$$, AquaToolTipUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaToolTipUI);
	});
	return class$;
}

$Class* AquaToolTipUI::class$ = nullptr;

		} // laf
	} // apple
} // com