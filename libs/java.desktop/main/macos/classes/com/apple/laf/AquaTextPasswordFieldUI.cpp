#include <com/apple/laf/AquaTextPasswordFieldUI.h>
#include <com/apple/laf/AquaTextFieldUI.h>
#include <com/apple/laf/AquaTextPasswordFieldUI$AquaPasswordView.h>
#include <com/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef VK_CAPS_LOCK

using $AquaTextFieldUI = ::com::apple::laf::AquaTextFieldUI;
using $AquaTextPasswordFieldUI$AquaPasswordView = ::com::apple::laf::AquaTextPasswordFieldUI$AquaPasswordView;
using $AquaTextPasswordFieldUI$CapsLockSymbolPainter = ::com::apple::laf::AquaTextPasswordFieldUI$CapsLockSymbolPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaTextPasswordFieldUI::capsLockPainter = nullptr;

$JTextComponent* AquaTextPasswordFieldUI::access$000(AquaTextPasswordFieldUI* x0) {
	$init(AquaTextPasswordFieldUI);
	return $nc(x0)->getComponent();
}

void AquaTextPasswordFieldUI::init$() {
	$AquaTextFieldUI::init$();
}

$AquaTextPasswordFieldUI$CapsLockSymbolPainter* AquaTextPasswordFieldUI::getCapsLockPainter() {
	$init(AquaTextPasswordFieldUI);
	return $cast($AquaTextPasswordFieldUI$CapsLockSymbolPainter, AquaTextPasswordFieldUI::capsLockPainter->get());
}

$ComponentUI* AquaTextPasswordFieldUI::createUI($JComponent* c) {
	$init(AquaTextPasswordFieldUI);
	return $new(AquaTextPasswordFieldUI);
}

$String* AquaTextPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

$View* AquaTextPasswordFieldUI::create($Element* elem) {
	return $new($AquaTextPasswordFieldUI$AquaPasswordView, this, elem);
}

void AquaTextPasswordFieldUI::installListeners() {
	$useLocalObjectStack();
	$AquaTextFieldUI::installListeners();
	$$nc(getComponent())->addKeyListener($(getCapsLockPainter()));
}

void AquaTextPasswordFieldUI::uninstallListeners() {
	$useLocalObjectStack();
	$$nc(getComponent())->removeKeyListener($(getCapsLockPainter()));
	$AquaTextFieldUI::uninstallListeners();
}

void AquaTextPasswordFieldUI::paintBackgroundSafely($Graphics* g) {
	$useLocalObjectStack();
	$AquaTextFieldUI::paintBackgroundSafely(g);
	$var($JTextComponent, component, getComponent());
	if (component == nullptr) {
		return;
	}
	if (!$nc(component)->isFocusOwner()) {
		return;
	}
	bool capsLockDown = $$nc($Toolkit::getDefaultToolkit())->getLockingKeyState($KeyEvent::VK_CAPS_LOCK);
	if (!capsLockDown) {
		return;
	}
	$var($Rectangle, bounds, component->getBounds());
	$$nc(getCapsLockPainter())->paintBorder(component, g, $nc(bounds)->x, $nc(bounds)->y, $nc(bounds)->width, $nc(bounds)->height);
}

void AquaTextPasswordFieldUI::clinit$($Class* clazz) {
	$load($AquaTextPasswordFieldUI$CapsLockSymbolPainter);
	$assignStatic(AquaTextPasswordFieldUI::capsLockPainter, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaTextPasswordFieldUI$CapsLockSymbolPainter::class$));
}

AquaTextPasswordFieldUI::AquaTextPasswordFieldUI() {
}

$Class* AquaTextPasswordFieldUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capsLockPainter", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextPasswordFieldUI, capsLockPainter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaTextPasswordFieldUI, init$, void)},
		{"access$000", "(Lcom/apple/laf/AquaTextPasswordFieldUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AquaTextPasswordFieldUI, access$000, $JTextComponent*, AquaTextPasswordFieldUI*)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI, create, $View*, $Element*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaTextPasswordFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getCapsLockPainter", "()Lcom/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter;", nullptr, $STATIC, $staticMethod(AquaTextPasswordFieldUI, getCapsLockPainter, $AquaTextPasswordFieldUI$CapsLockSymbolPainter*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI, getPropertyPrefix, $String*)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI, installListeners, void)},
		{"paintBackgroundSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI, paintBackgroundSafely, void, $Graphics*)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI, uninstallListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter", "com.apple.laf.AquaTextPasswordFieldUI", "CapsLockSymbolPainter", $STATIC},
		{"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView", "com.apple.laf.AquaTextPasswordFieldUI", "AquaPasswordView", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTextPasswordFieldUI",
		"com.apple.laf.AquaTextFieldUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter,com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView"
	};
	$loadClass(AquaTextPasswordFieldUI, name, initialize, &classInfo$$, AquaTextPasswordFieldUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextPasswordFieldUI));
	});
	return class$;
}

$Class* AquaTextPasswordFieldUI::class$ = nullptr;

		} // laf
	} // apple
} // com