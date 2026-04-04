#include <com/apple/laf/AquaMenuItemUI$IndeterminateListener.h>
#include <com/apple/laf/AquaMenuItemUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_KEY
#undef INDETERMINATE_LISTENER

using $AquaMenuItemUI = ::com::apple::laf::AquaMenuItemUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY = nullptr;

void AquaMenuItemUI$IndeterminateListener::init$() {
}

void AquaMenuItemUI$IndeterminateListener::install($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$init($AquaMenuItemUI);
	$nc(menuItem)->addPropertyChangeListener(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, $AquaMenuItemUI::INDETERMINATE_LISTENER);
	apply(menuItem, $(menuItem->getClientProperty(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)));
}

void AquaMenuItemUI$IndeterminateListener::uninstall($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$init($AquaMenuItemUI);
	$nc(menuItem)->removePropertyChangeListener(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, $AquaMenuItemUI::INDETERMINATE_LISTENER);
}

void AquaMenuItemUI$IndeterminateListener::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($String, key, $nc(evt)->getPropertyName());
	if (!AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY->equalsIgnoreCase(key)) {
		return;
	}
	$var($Object, source, evt->getSource());
	if (!($instanceOf($JMenuItem, source))) {
		return;
	}
	$var($JMenuItem, c, $cast($JMenuItem, source));
	apply(c, $(evt->getNewValue()));
}

void AquaMenuItemUI$IndeterminateListener::apply($JMenuItem* menuItem, Object$* value) {
	$init(AquaMenuItemUI$IndeterminateListener);
	$useLocalObjectStack();
	$var($ButtonUI, ui, $cast($ButtonUI, $nc(menuItem)->getUI()));
	if (!($instanceOf($AquaMenuItemUI, ui))) {
		return;
	}
	$var($AquaMenuItemUI, aquaUI, $cast($AquaMenuItemUI, ui));
	if ($nc(aquaUI)->fIsIndeterminate = "indeterminate"_s->equals(value)) {
		$AquaMenuItemUI::access$202(aquaUI, $($UIManager::getIcon($$str({$(aquaUI->getPropertyPrefix()), ".dashIcon"_s}))));
	} else {
		$AquaMenuItemUI::access$302(aquaUI, $($UIManager::getIcon($$str({$(aquaUI->getPropertyPrefix()), ".checkIcon"_s}))));
	}
}

bool AquaMenuItemUI$IndeterminateListener::isIndeterminate($JMenuItem* menuItem) {
	$init(AquaMenuItemUI$IndeterminateListener);
	return "indeterminate"_s->equals($($nc(menuItem)->getClientProperty(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY)));
}

AquaMenuItemUI$IndeterminateListener::AquaMenuItemUI$IndeterminateListener() {
}

void AquaMenuItemUI$IndeterminateListener::clinit$($Class* clazz) {
	$assignStatic(AquaMenuItemUI$IndeterminateListener::CLIENT_PROPERTY_KEY, "JMenuItem.selectedState"_s);
}

$Class* AquaMenuItemUI$IndeterminateListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaMenuItemUI$IndeterminateListener, CLIENT_PROPERTY_KEY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaMenuItemUI$IndeterminateListener, init$, void)},
		{"apply", "(Ljavax/swing/JMenuItem;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(AquaMenuItemUI$IndeterminateListener, apply, void, $JMenuItem*, Object$*)},
		{"install", "(Ljavax/swing/JMenuItem;)V", nullptr, $STATIC, $staticMethod(AquaMenuItemUI$IndeterminateListener, install, void, $JMenuItem*)},
		{"isIndeterminate", "(Ljavax/swing/JMenuItem;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaMenuItemUI$IndeterminateListener, isIndeterminate, bool, $JMenuItem*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaMenuItemUI$IndeterminateListener, propertyChange, void, $PropertyChangeEvent*)},
		{"uninstall", "(Ljavax/swing/JMenuItem;)V", nullptr, $STATIC, $staticMethod(AquaMenuItemUI$IndeterminateListener, uninstall, void, $JMenuItem*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMenuItemUI$IndeterminateListener", "com.apple.laf.AquaMenuItemUI", "IndeterminateListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaMenuItemUI$IndeterminateListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaMenuItemUI"
	};
	$loadClass(AquaMenuItemUI$IndeterminateListener, name, initialize, &classInfo$$, AquaMenuItemUI$IndeterminateListener::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMenuItemUI$IndeterminateListener);
	});
	return class$;
}

$Class* AquaMenuItemUI$IndeterminateListener::class$ = nullptr;

		} // laf
	} // apple
} // com