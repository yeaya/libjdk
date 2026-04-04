#include <com/apple/laf/AquaEditorPaneUI.h>
#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaCaret = ::com::apple::laf::AquaCaret;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $Caret = ::javax::swing::text::Caret;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
	this->oldDragState = false;
}

$ComponentUI* AquaEditorPaneUI::createUI($JComponent* c) {
	$init(AquaEditorPaneUI);
	return $new(AquaEditorPaneUI);
}

void AquaEditorPaneUI::installDefaults() {
	$useLocalObjectStack();
	$BasicEditorPaneUI::installDefaults();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $$nc(getComponent())->getDragEnabled();
		$$nc(getComponent())->setDragEnabled(true);
	}
}

void AquaEditorPaneUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$$nc(getComponent())->setDragEnabled(this->oldDragState);
	}
	$BasicEditorPaneUI::uninstallDefaults();
}

void AquaEditorPaneUI::installListeners() {
	$BasicEditorPaneUI::installListeners();
	$set(this, focusListener, createFocusListener());
	$$nc(getComponent())->addFocusListener(this->focusListener);
}

void AquaEditorPaneUI::installKeyboardActions() {
	$useLocalObjectStack();
	$BasicEditorPaneUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

void AquaEditorPaneUI::uninstallListeners() {
	$$nc(getComponent())->removeFocusListener(this->focusListener);
	$BasicEditorPaneUI::uninstallListeners();
}

$FocusListener* AquaEditorPaneUI::createFocusListener() {
	return $new($AquaFocusHandler);
}

$Caret* AquaEditorPaneUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaEditorPaneUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaEditorPaneUI::AquaEditorPaneUI() {
}

$Class* AquaEditorPaneUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oldDragState", "Z", nullptr, 0, $field(AquaEditorPaneUI, oldDragState)},
		{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, 0, $field(AquaEditorPaneUI, focusListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaEditorPaneUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, createCaret, $Caret*)},
		{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, createFocusListener, $FocusListener*)},
		{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, createHighlighter, $Highlighter*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaEditorPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, installDefaults, void)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, installListeners, void)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaEditorPaneUI, uninstallListeners, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaEditorPaneUI",
		"javax.swing.plaf.basic.BasicEditorPaneUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaEditorPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaEditorPaneUI));
	});
	return class$;
}

$Class* AquaEditorPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com