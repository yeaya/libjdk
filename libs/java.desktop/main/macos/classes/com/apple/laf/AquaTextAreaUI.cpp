#include <com/apple/laf/AquaTextAreaUI.h>
#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
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
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $Caret = ::javax::swing::text::Caret;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$ComponentUI* AquaTextAreaUI::createUI($JComponent* c) {
	$init(AquaTextAreaUI);
	return $new(AquaTextAreaUI);
}

void AquaTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
	this->oldDragState = false;
}

void AquaTextAreaUI::installListeners() {
	$BasicTextAreaUI::installListeners();
	$var($JTextComponent, c, getComponent());
	$set(this, handler, $new($AquaFocusHandler));
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$AquaUtilControlSize::addSizePropertyListener(c);
}

void AquaTextAreaUI::uninstallListeners() {
	$var($JTextComponent, c, getComponent());
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextAreaUI::uninstallListeners();
}

void AquaTextAreaUI::installDefaults() {
	$useLocalObjectStack();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $$nc(getComponent())->getDragEnabled();
		$$nc(getComponent())->setDragEnabled(true);
	}
	$BasicTextAreaUI::installDefaults();
}

void AquaTextAreaUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$$nc(getComponent())->setDragEnabled(this->oldDragState);
	}
	$BasicTextAreaUI::uninstallDefaults();
}

void AquaTextAreaUI::installKeyboardActions() {
	$useLocalObjectStack();
	$BasicTextAreaUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

$Caret* AquaTextAreaUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextAreaUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaTextAreaUI::AquaTextAreaUI() {
}

$Class* AquaTextAreaUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, 0, $field(AquaTextAreaUI, handler)},
		{"oldDragState", "Z", nullptr, 0, $field(AquaTextAreaUI, oldDragState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaTextAreaUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, createCaret, $Caret*)},
		{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, createHighlighter, $Highlighter*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaTextAreaUI, createUI, $ComponentUI*, $JComponent*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, installDefaults, void)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, installListeners, void)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextAreaUI, uninstallListeners, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTextAreaUI",
		"javax.swing.plaf.basic.BasicTextAreaUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaTextAreaUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextAreaUI));
	});
	return class$;
}

$Class* AquaTextAreaUI::class$ = nullptr;

		} // laf
	} // apple
} // com