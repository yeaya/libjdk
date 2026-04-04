#include <com/apple/laf/AquaPanelUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicPanelUI.h>
#include <jcpp.h>

using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicPanelUI = ::javax::swing::plaf::basic::BasicPanelUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaPanelUI::instance = nullptr;

void AquaPanelUI::init$() {
	$BasicPanelUI::init$();
}

$ComponentUI* AquaPanelUI::createUI($JComponent* c) {
	$init(AquaPanelUI);
	return $cast($ComponentUI, AquaPanelUI::instance->get());
}

void AquaPanelUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$AquaUtils::fillRect(g, c);
	}
	paint(g, c);
}

void AquaPanelUI::clinit$($Class* clazz) {
	$assignStatic(AquaPanelUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaPanelUI::class$));
}

AquaPanelUI::AquaPanelUI() {
}

$Class* AquaPanelUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaPanelUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaPanelUI, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaPanelUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaPanelUI, createUI, $ComponentUI*, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AquaPanelUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaPanelUI",
		"javax.swing.plaf.basic.BasicPanelUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaPanelUI, name, initialize, &classInfo$$, AquaPanelUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaPanelUI);
	});
	return class$;
}

$Class* AquaPanelUI::class$ = nullptr;

		} // laf
	} // apple
} // com