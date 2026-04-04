#include <com/apple/laf/AquaSpinnerUI.h>
#include <com/apple/laf/AquaSpinnerUI$1.h>
#include <com/apple/laf/AquaSpinnerUI$2.h>
#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaSpinnerUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaSpinnerUI$SpinPainter.h>
#include <com/apple/laf/AquaSpinnerUI$SpinnerLayout.h>
#include <com/apple/laf/AquaSpinnerUI$TransparentButton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $ComponentArray = $Array<::java::awt::Component>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $AquaSpinnerUI$1 = ::com::apple::laf::AquaSpinnerUI$1;
using $AquaSpinnerUI$2 = ::com::apple::laf::AquaSpinnerUI$2;
using $AquaSpinnerUI$ArrowButtonHandler = ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler;
using $AquaSpinnerUI$PropertyChangeHandler = ::com::apple::laf::AquaSpinnerUI$PropertyChangeHandler;
using $AquaSpinnerUI$SpinPainter = ::com::apple::laf::AquaSpinnerUI$SpinPainter;
using $AquaSpinnerUI$SpinnerLayout = ::com::apple::laf::AquaSpinnerUI$SpinnerLayout;
using $AquaSpinnerUI$TransparentButton = ::com::apple::laf::AquaSpinnerUI$TransparentButton;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaSpinnerUI::propertyChangeListener = nullptr;
$AquaUtils$RecyclableSingleton* AquaSpinnerUI::nextButtonHandler = nullptr;
$AquaUtils$RecyclableSingleton* AquaSpinnerUI::previousButtonHandler = nullptr;

void AquaSpinnerUI::init$() {
	$SpinnerUI::init$();
}

$PropertyChangeListener* AquaSpinnerUI::getPropertyChangeListener() {
	$init(AquaSpinnerUI);
	return $cast($PropertyChangeListener, AquaSpinnerUI::propertyChangeListener->get());
}

$AquaSpinnerUI$ArrowButtonHandler* AquaSpinnerUI::getNextButtonHandler() {
	$init(AquaSpinnerUI);
	return $cast($AquaSpinnerUI$ArrowButtonHandler, AquaSpinnerUI::nextButtonHandler->get());
}

$AquaSpinnerUI$ArrowButtonHandler* AquaSpinnerUI::getPreviousButtonHandler() {
	$init(AquaSpinnerUI);
	return $cast($AquaSpinnerUI$ArrowButtonHandler, AquaSpinnerUI::previousButtonHandler->get());
}

$ComponentUI* AquaSpinnerUI::createUI($JComponent* c) {
	$init(AquaSpinnerUI);
	return $new(AquaSpinnerUI);
}

void AquaSpinnerUI::maybeAdd($Component* c, $String* s) {
	if (c != nullptr) {
		$nc(this->spinner)->add(c, s);
	}
}

void AquaSpinnerUI::installUI($JComponent* c) {
	$set(this, spinner, $cast($JSpinner, c));
	installDefaults();
	installListeners();
	$set(this, next, createNextButton());
	$set(this, prev, createPreviousButton());
	$set(this, spinPainter, $new($AquaSpinnerUI$SpinPainter, this, this->next, this->prev));
	maybeAdd(this->next, "Next"_s);
	maybeAdd(this->prev, "Previous"_s);
	maybeAdd($(createEditor()), "Editor"_s);
	maybeAdd(this->spinPainter, "Painter"_s);
	updateEnabledState();
	installKeyboardActions();
	this->wasOpaque = $nc(this->spinner)->isOpaque();
	$nc(this->spinner)->setOpaque(false);
}

void AquaSpinnerUI::uninstallUI($JComponent* c) {
	$useLocalObjectStack();
	uninstallDefaults();
	uninstallListeners();
	$nc(this->spinner)->setOpaque(this->wasOpaque);
	$set(this, spinPainter, nullptr);
	$set(this, spinner, nullptr);
	$$sure($ButtonUI, $nc(this->next)->getUI())->uninstallUI(this->next);
	$$sure($ButtonUI, $nc(this->prev)->getUI())->uninstallUI(this->prev);
	$set(this, next, nullptr);
	$set(this, prev, nullptr);
	$nc(c)->removeAll();
}

void AquaSpinnerUI::installListeners() {
	$useLocalObjectStack();
	$nc(this->spinner)->addPropertyChangeListener($(getPropertyChangeListener()));
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $cast($JSpinner$DefaultEditor, editor)->getTextField());
		if (tf != nullptr) {
			tf->addFocusListener($(getNextButtonHandler()));
			tf->addFocusListener($(getPreviousButtonHandler()));
		}
	}
}

void AquaSpinnerUI::uninstallListeners() {
	$useLocalObjectStack();
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $cast($JSpinner$DefaultEditor, editor)->getTextField());
		if (tf != nullptr) {
			tf->removeFocusListener($(getNextButtonHandler()));
			tf->removeFocusListener($(getPreviousButtonHandler()));
		}
	}
	$nc(this->spinner)->removePropertyChangeListener($(getPropertyChangeListener()));
}

void AquaSpinnerUI::installDefaults() {
	$nc(this->spinner)->setLayout($(createLayout()));
	$LookAndFeel::installBorder(this->spinner, "Spinner.border"_s);
	$LookAndFeel::installColorsAndFont(this->spinner, "Spinner.background"_s, "Spinner.foreground"_s, "Spinner.font"_s);
}

void AquaSpinnerUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->spinner);
	$nc(this->spinner)->setLayout(nullptr);
}

$LayoutManager* AquaSpinnerUI::createLayout() {
	return $new($AquaSpinnerUI$SpinnerLayout);
}

$PropertyChangeListener* AquaSpinnerUI::createPropertyChangeListener() {
	return $new($AquaSpinnerUI$PropertyChangeHandler);
}

$AquaSpinnerUI$TransparentButton* AquaSpinnerUI::createPreviousButton() {
	$useLocalObjectStack();
	$var($AquaSpinnerUI$TransparentButton, b, $new($AquaSpinnerUI$TransparentButton, this));
	b->addActionListener($(getPreviousButtonHandler()));
	b->addMouseListener($(getPreviousButtonHandler()));
	b->setInheritsPopupMenu(true);
	return b;
}

$AquaSpinnerUI$TransparentButton* AquaSpinnerUI::createNextButton() {
	$useLocalObjectStack();
	$var($AquaSpinnerUI$TransparentButton, b, $new($AquaSpinnerUI$TransparentButton, this));
	b->addActionListener($(getNextButtonHandler()));
	b->addMouseListener($(getNextButtonHandler()));
	b->setInheritsPopupMenu(true);
	return b;
}

int32_t AquaSpinnerUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$SpinnerUI::getBaseline(c, width, height);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	$var($Insets, insets, $nc(this->spinner)->getInsets());
	width = width - $nc(insets)->left - $nc(insets)->right;
	height = height - insets->top - insets->bottom;
	if (width >= 0 && height >= 0) {
		int32_t baseline = $nc(editor)->getBaseline(width, height);
		if (baseline >= 0) {
			return insets->top + baseline;
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* AquaSpinnerUI::getBaselineResizeBehavior($JComponent* c) {
	$SpinnerUI::getBaselineResizeBehavior(c);
	return $$nc($nc(this->spinner)->getEditor())->getBaselineResizeBehavior();
}

$JComponent* AquaSpinnerUI::createEditor() {
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	fixupEditor(editor);
	return editor;
}

void AquaSpinnerUI::replaceEditor($JComponent* oldEditor, $JComponent* newEditor) {
	$nc(this->spinner)->remove(oldEditor);
	fixupEditor(newEditor);
	$nc(this->spinner)->add(newEditor, "Editor"_s);
}

void AquaSpinnerUI::fixupEditor($JComponent* editor) {
	$useLocalObjectStack();
	if (!($instanceOf($JSpinner$DefaultEditor, editor))) {
		return;
	}
	$nc(editor)->setOpaque(false);
	editor->setInheritsPopupMenu(true);
	if ($instanceOf($UIResource, $(editor->getFont()))) {
		$var($Font, font, $nc(this->spinner)->getFont());
		editor->setFont(font == nullptr ? ($Font*)nullptr : $$cast($Font, $new($FontUIResource, font)));
	}
	$var($JFormattedTextField, editorTextField, $cast($JSpinner$DefaultEditor, editor)->getTextField());
	if ($instanceOf($UIResource, $($nc(editorTextField)->getFont()))) {
		$var($Font, font, $nc(this->spinner)->getFont());
		editorTextField->setFont(font == nullptr ? ($Font*)nullptr : $$cast($Font, $new($FontUIResource, font)));
	}
	$var($InputMap, spinnerInputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($InputMap, editorInputMap, editorTextField->getInputMap());
	$var($KeyStrokeArray, keys, $nc(spinnerInputMap)->keys());
	{
		$var($KeyStrokeArray, arr$, keys);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($KeyStroke, k, arr$->get(i$));
			{
				$nc(editorInputMap)->put(k, $(spinnerInputMap->get(k)));
			}
		}
	}
}

void AquaSpinnerUI::updateEnabledState() {
	updateEnabledState(this->spinner, $nc(this->spinner)->isEnabled());
}

void AquaSpinnerUI::updateEnabledState($Container* c, bool enabled) {
	$useLocalObjectStack();
	for (int32_t counter = $nc(c)->getComponentCount() - 1; counter >= 0; --counter) {
		$var($Component, child, c->getComponent(counter));
		$nc(child)->setEnabled(enabled);
		if ($instanceOf($Container, child)) {
			updateEnabledState($cast($Container, child), enabled);
		}
	}
}

void AquaSpinnerUI::installKeyboardActions() {
	$useLocalObjectStack();
	$var($InputMap, iMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->spinner, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, iMap);
	$SwingUtilities::replaceUIActionMap(this->spinner, $(getActionMap()));
}

$InputMap* AquaSpinnerUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $UIManager::get("Spinner.ancestorInputMap"_s));
	}
	return nullptr;
}

$ActionMap* AquaSpinnerUI::getActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get("Spinner.actionMap"_s)));
	if (map == nullptr) {
		$assign(map, createActionMap());
		if (map != nullptr) {
			$$nc($UIManager::getLookAndFeelDefaults())->put("Spinner.actionMap"_s, map);
		}
	}
	return map;
}

$ActionMap* AquaSpinnerUI::createActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, map, $new($ActionMapUIResource));
	map->put("increment"_s, $(getNextButtonHandler()));
	map->put("decrement"_s, $(getPreviousButtonHandler()));
	return map;
}

void AquaSpinnerUI::updateToolTipTextForChildren($JComponent* spinnerComponent) {
	$useLocalObjectStack();
	$var($String, toolTipText, $nc(spinnerComponent)->getToolTipText());
	$var($ComponentArray, children, spinnerComponent->getComponents());
	{
		$var($ComponentArray, arr$, children);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, element, arr$->get(i$));
			if ($instanceOf($JSpinner$DefaultEditor, element)) {
				$var($JTextField, tf, $cast($JSpinner$DefaultEditor, element)->getTextField());
				if (tf != nullptr) {
					tf->setToolTipText(toolTipText);
				}
			} else if ($instanceOf($JComponent, element)) {
				$cast($JComponent, element)->setToolTipText(toolTipText);
			}
		}
	}
}

void AquaSpinnerUI::clinit$($Class* clazz) {
	$load($AquaSpinnerUI$PropertyChangeHandler);
	$assignStatic(AquaSpinnerUI::propertyChangeListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaSpinnerUI$PropertyChangeHandler::class$));
	$assignStatic(AquaSpinnerUI::nextButtonHandler, $new($AquaSpinnerUI$1));
	$assignStatic(AquaSpinnerUI::previousButtonHandler, $new($AquaSpinnerUI$2));
}

AquaSpinnerUI::AquaSpinnerUI() {
}

$Class* AquaSpinnerUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propertyChangeListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<+Ljava/beans/PropertyChangeListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, propertyChangeListener)},
		{"nextButtonHandler", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, nextButtonHandler)},
		{"previousButtonHandler", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSpinnerUI, previousButtonHandler)},
		{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(AquaSpinnerUI, spinner)},
		{"spinPainter", "Lcom/apple/laf/AquaSpinnerUI$SpinPainter;", nullptr, $PRIVATE, $field(AquaSpinnerUI, spinPainter)},
		{"next", "Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PRIVATE, $field(AquaSpinnerUI, next)},
		{"prev", "Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PRIVATE, $field(AquaSpinnerUI, prev)},
		{"wasOpaque", "Z", nullptr, 0, $field(AquaSpinnerUI, wasOpaque)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaSpinnerUI, init$, void)},
		{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $method(AquaSpinnerUI, createActionMap, $ActionMap*)},
		{"createEditor", "()Ljavax/swing/JComponent;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, createEditor, $JComponent*)},
		{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, createLayout, $LayoutManager*)},
		{"createNextButton", "()Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, createNextButton, $AquaSpinnerUI$TransparentButton*)},
		{"createPreviousButton", "()Lcom/apple/laf/AquaSpinnerUI$TransparentButton;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, createPreviousButton, $AquaSpinnerUI$TransparentButton*)},
		{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, createPropertyChangeListener, $PropertyChangeListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaSpinnerUI, createUI, $ComponentUI*, $JComponent*)},
		{"fixupEditor", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, fixupEditor, void, $JComponent*)},
		{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $method(AquaSpinnerUI, getActionMap, $ActionMap*)},
		{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI, getBaseline, int32_t, $JComponent*, int32_t, int32_t)},
		{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*, $JComponent*)},
		{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PRIVATE, $method(AquaSpinnerUI, getInputMap, $InputMap*, int32_t)},
		{"getNextButtonHandler", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $STATIC, $staticMethod(AquaSpinnerUI, getNextButtonHandler, $AquaSpinnerUI$ArrowButtonHandler*)},
		{"getPreviousButtonHandler", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $STATIC, $staticMethod(AquaSpinnerUI, getPreviousButtonHandler, $AquaSpinnerUI$ArrowButtonHandler*)},
		{"getPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $STATIC, $staticMethod(AquaSpinnerUI, getPropertyChangeListener, $PropertyChangeListener*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, installDefaults, void)},
		{"installKeyboardActions", "()V", nullptr, $PRIVATE, $method(AquaSpinnerUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, installListeners, void)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI, installUI, void, $JComponent*)},
		{"maybeAdd", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(AquaSpinnerUI, maybeAdd, void, $Component*, $String*)},
		{"replaceEditor", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, replaceEditor, void, $JComponent*, $JComponent*)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI, uninstallListeners, void)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI, uninstallUI, void, $JComponent*)},
		{"updateEnabledState", "()V", nullptr, 0, $virtualMethod(AquaSpinnerUI, updateEnabledState, void)},
		{"updateEnabledState", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE, $method(AquaSpinnerUI, updateEnabledState, void, $Container*, bool)},
		{"updateToolTipTextForChildren", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(AquaSpinnerUI, updateToolTipTextForChildren, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler", "com.apple.laf.AquaSpinnerUI", "PropertyChangeHandler", $STATIC},
		{"com.apple.laf.AquaSpinnerUI$SpinnerLayout", "com.apple.laf.AquaSpinnerUI", "SpinnerLayout", $STATIC},
		{"com.apple.laf.AquaSpinnerUI$SpinPainter", "com.apple.laf.AquaSpinnerUI", "SpinPainter", 0},
		{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
		{"com.apple.laf.AquaSpinnerUI$TransparentButton", "com.apple.laf.AquaSpinnerUI", "TransparentButton", 0},
		{"com.apple.laf.AquaSpinnerUI$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaSpinnerUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI",
		"javax.swing.plaf.SpinnerUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler,com.apple.laf.AquaSpinnerUI$SpinnerLayout,com.apple.laf.AquaSpinnerUI$SpinPainter,com.apple.laf.AquaSpinnerUI$ArrowButtonHandler,com.apple.laf.AquaSpinnerUI$TransparentButton,com.apple.laf.AquaSpinnerUI$2,com.apple.laf.AquaSpinnerUI$1"
	};
	$loadClass(AquaSpinnerUI, name, initialize, &classInfo$$, AquaSpinnerUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSpinnerUI);
	});
	return class$;
}

$Class* AquaSpinnerUI::class$ = nullptr;

		} // laf
	} // apple
} // com