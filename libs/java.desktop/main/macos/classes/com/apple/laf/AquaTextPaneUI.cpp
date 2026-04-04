#include <com/apple/laf/AquaTextPaneUI.h>
#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaCaret = ::com::apple::laf::AquaCaret;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $Caret = ::javax::swing::text::Caret;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$ComponentUI* AquaTextPaneUI::createUI($JComponent* c) {
	$init(AquaTextPaneUI);
	return $new(AquaTextPaneUI);
}

void AquaTextPaneUI::init$() {
	$BasicTextPaneUI::init$();
	this->oldDragState = false;
}

void AquaTextPaneUI::installListeners() {
	$BasicTextPaneUI::installListeners();
	$var($JComponent, c, getComponent());
	$set(this, handler, $new($AquaFocusHandler));
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$AquaUtilControlSize::addSizePropertyListener(c);
}

void AquaTextPaneUI::uninstallListeners() {
	$var($JComponent, c, getComponent());
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextPaneUI::uninstallListeners();
}

void AquaTextPaneUI::installDefaults() {
	$var($JTextComponent, c, getComponent());
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $nc(c)->getDragEnabled();
		c->setDragEnabled(true);
	}
	$BasicTextPaneUI::installDefaults();
}

void AquaTextPaneUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$$nc(getComponent())->setDragEnabled(this->oldDragState);
	}
	$BasicTextPaneUI::uninstallDefaults();
}

void AquaTextPaneUI::installKeyboardActions() {
	$useLocalObjectStack();
	$BasicTextPaneUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

$Caret* AquaTextPaneUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextPaneUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaTextPaneUI::AquaTextPaneUI() {
}

$Class* AquaTextPaneUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, 0, $field(AquaTextPaneUI, handler)},
		{"oldDragState", "Z", nullptr, 0, $field(AquaTextPaneUI, oldDragState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaTextPaneUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, createCaret, $Caret*)},
		{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, createHighlighter, $Highlighter*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaTextPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, installDefaults, void)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, installListeners, void)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPaneUI, uninstallListeners, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTextPaneUI",
		"javax.swing.plaf.basic.BasicTextPaneUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaTextPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextPaneUI));
	});
	return class$;
}

$Class* AquaTextPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com