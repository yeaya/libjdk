#include <javax/swing/JOptionPane.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/ClientPropertyKey.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JOptionPane$1.h>
#include <javax/swing/JOptionPane$2.h>
#include <javax/swing/JOptionPane$3.h>
#include <javax/swing/JOptionPane$4.h>
#include <javax/swing/JOptionPane$5.h>
#include <javax/swing/JOptionPane$AccessibleJOptionPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities$SharedOwnerFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/OptionPaneUI.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef CANCEL_OPTION
#undef CENTER
#undef CLOSED_OPTION
#undef DEFAULT_OPTION
#undef ERROR_DIALOG
#undef ERROR_MESSAGE
#undef ICON_PROPERTY
#undef INFORMATION_DIALOG
#undef INFORMATION_MESSAGE
#undef INITIAL_SELECTION_VALUE_PROPERTY
#undef INITIAL_VALUE_PROPERTY
#undef INPUT_VALUE_PROPERTY
#undef MAX_VALUE
#undef MESSAGE_PROPERTY
#undef MESSAGE_TYPE_PROPERTY
#undef MODAL_LAYER
#undef NO_OPTION
#undef OK_CANCEL_OPTION
#undef OK_OPTION
#undef OPTIONS_PROPERTY
#undef OPTION_TYPE_PROPERTY
#undef PLAIN_DIALOG
#undef PLAIN_MESSAGE
#undef QUESTION_DIALOG
#undef QUESTION_MESSAGE
#undef SELECTION_VALUES_PROPERTY
#undef TRUE
#undef UNINITIALIZED_VALUE
#undef VALUE_PROPERTY
#undef WANTS_INPUT_PROPERTY
#undef WARNING_DIALOG
#undef WARNING_MESSAGE
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION
#undef YES_OPTION

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JDialog = ::javax::swing::JDialog;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JOptionPane$1 = ::javax::swing::JOptionPane$1;
using $JOptionPane$2 = ::javax::swing::JOptionPane$2;
using $JOptionPane$3 = ::javax::swing::JOptionPane$3;
using $JOptionPane$4 = ::javax::swing::JOptionPane$4;
using $JOptionPane$5 = ::javax::swing::JOptionPane$5;
using $JOptionPane$AccessibleJOptionPane = ::javax::swing::JOptionPane$AccessibleJOptionPane;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingUtilities$SharedOwnerFrame = ::javax::swing::SwingUtilities$SharedOwnerFrame;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $OptionPaneUI = ::javax::swing::plaf::OptionPaneUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace javax {
	namespace swing {

$String* JOptionPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JOptionPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JOptionPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JOptionPane::clone() {
	 return this->$JComponent::clone();
}

void JOptionPane::finalize() {
	this->$JComponent::finalize();
}

$String* JOptionPane::uiClassID = nullptr;
$Object* JOptionPane::UNINITIALIZED_VALUE = nullptr;
$String* JOptionPane::ICON_PROPERTY = nullptr;
$String* JOptionPane::MESSAGE_PROPERTY = nullptr;
$String* JOptionPane::VALUE_PROPERTY = nullptr;
$String* JOptionPane::OPTIONS_PROPERTY = nullptr;
$String* JOptionPane::INITIAL_VALUE_PROPERTY = nullptr;
$String* JOptionPane::MESSAGE_TYPE_PROPERTY = nullptr;
$String* JOptionPane::OPTION_TYPE_PROPERTY = nullptr;
$String* JOptionPane::SELECTION_VALUES_PROPERTY = nullptr;
$String* JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY = nullptr;
$String* JOptionPane::INPUT_VALUE_PROPERTY = nullptr;
$String* JOptionPane::WANTS_INPUT_PROPERTY = nullptr;
$Object* JOptionPane::sharedFrameKey = nullptr;

$String* JOptionPane::showInputDialog(Object$* message) {
	$init(JOptionPane);
	return showInputDialog(($Component*)nullptr, message);
}

$String* JOptionPane::showInputDialog(Object$* message, Object$* initialSelectionValue) {
	$init(JOptionPane);
	return showInputDialog(nullptr, message, initialSelectionValue);
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInputDialog(parentComponent, message, $($UIManager::getString("OptionPane.inputDialogTitle"_s, parentComponent)), JOptionPane::QUESTION_MESSAGE);
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, Object$* initialSelectionValue) {
	$init(JOptionPane);
	return $cast($String, showInputDialog(parentComponent, message, $($UIManager::getString("OptionPane.inputDialogTitle"_s, parentComponent)), JOptionPane::QUESTION_MESSAGE, nullptr, nullptr, initialSelectionValue));
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	return $cast($String, showInputDialog(parentComponent, message, title, messageType, nullptr, nullptr, nullptr));
}

$Object* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue) {
	$init(JOptionPane);
	$useLocalObjectStack();
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, JOptionPane::OK_CANCEL_OPTION, icon, nullptr, nullptr));
	pane->setWantsInput(true);
	pane->setSelectionValues(selectionValues);
	pane->setInitialSelectionValue(initialSelectionValue);
	pane->setComponentOrientation($($nc(((parentComponent == nullptr) ? $$cast($Component, getRootFrame()) : parentComponent))->getComponentOrientation()));
	int32_t style = styleFromMessageType(messageType);
	$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
	pane->selectInitialValue();
	$nc(dialog)->show();
	dialog->dispose();
	$var($Object, value, pane->getInputValue());
	if ($equals(value, JOptionPane::UNINITIALIZED_VALUE)) {
		return nullptr;
	}
	return value;
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	showMessageDialog(parentComponent, message, $($UIManager::getString("OptionPane.messageDialogTitle"_s, parentComponent)), JOptionPane::INFORMATION_MESSAGE);
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	showMessageDialog(parentComponent, message, title, messageType, nullptr);
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	showOptionDialog(parentComponent, message, title, JOptionPane::DEFAULT_OPTION, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, $($UIManager::getString("OptionPane.titleText"_s)), JOptionPane::YES_NO_CANCEL_OPTION);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, title, optionType, JOptionPane::QUESTION_MESSAGE);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, title, optionType, messageType, nullptr);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	return showOptionDialog(parentComponent, message, title, optionType, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showOptionDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$init(JOptionPane);
	$useLocalObjectStack();
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, optionType, icon, options, initialValue));
	pane->setInitialValue(initialValue);
	pane->setComponentOrientation($($nc(((parentComponent == nullptr) ? $$cast($Component, getRootFrame()) : parentComponent))->getComponentOrientation()));
	int32_t style = styleFromMessageType(messageType);
	$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
	pane->selectInitialValue();
	$nc(dialog)->show();
	dialog->dispose();
	$var($Object, selectedValue, pane->getValue());
	if (selectedValue == nullptr) {
		return JOptionPane::CLOSED_OPTION;
	}
	if (options == nullptr) {
		if ($instanceOf($Integer, selectedValue)) {
			return $cast($Integer, selectedValue)->intValue();
		}
		return JOptionPane::CLOSED_OPTION;
	}
	for (int32_t counter = 0, maxCounter = $nc(options)->length; counter < maxCounter; ++counter) {
		if ($nc(options->get(counter))->equals(selectedValue)) {
			return counter;
		}
	}
	return JOptionPane::CLOSED_OPTION;
}

$JDialog* JOptionPane::createDialog($Component* parentComponent, $String* title) {
	int32_t style = styleFromMessageType(getMessageType());
	return createDialog(parentComponent, title, style);
}

$JDialog* JOptionPane::createDialog($String* title) {
	int32_t style = styleFromMessageType(getMessageType());
	$var($JDialog, dialog, $new($JDialog, ($Dialog*)nullptr, title, true));
	initDialog(dialog, style, nullptr);
	return dialog;
}

$JDialog* JOptionPane::createDialog($Component* parentComponent, $String* title, int32_t style) {
	$useLocalObjectStack();
	$var($JDialog, dialog, nullptr);
	$var($Window, window, JOptionPane::getWindowForComponent(parentComponent));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($JDialog, $cast($Frame, window), title, true));
	} else {
		$assign(dialog, $new($JDialog, $cast($Dialog, window), title, true));
	}
	if ($instanceOf($SwingUtilities$SharedOwnerFrame, window)) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		$nc(dialog)->addWindowListener(ownerShutdownListener);
	}
	initDialog(dialog, style, parentComponent);
	return dialog;
}

void JOptionPane::initDialog($JDialog* dialog, int32_t style, $Component* parentComponent) {
	$useLocalObjectStack();
	$nc(dialog)->setComponentOrientation($(this->getComponentOrientation()));
	$var($Container, contentPane, dialog->getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	contentPane->add(this, $BorderLayout::CENTER);
	dialog->setResizable(false);
	if ($JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $$nc($UIManager::getLookAndFeel())->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			dialog->setUndecorated(true);
			$$nc(getRootPane())->setWindowDecorationStyle(style);
		}
	}
	dialog->pack();
	dialog->setLocationRelativeTo(parentComponent);
	$var($PropertyChangeListener, listener, $new($JOptionPane$1, this, dialog));
	$var($WindowAdapter, adapter, $new($JOptionPane$2, this, listener, dialog));
	dialog->addWindowListener(adapter);
	dialog->addWindowFocusListener(adapter);
	dialog->addComponentListener($$new($JOptionPane$3, this));
	addPropertyChangeListener(listener);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	showInternalMessageDialog(parentComponent, message, $($UIManager::getString("OptionPane.messageDialogTitle"_s, parentComponent)), JOptionPane::INFORMATION_MESSAGE);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	showInternalMessageDialog(parentComponent, message, title, messageType, nullptr);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	showInternalOptionDialog(parentComponent, message, title, JOptionPane::DEFAULT_OPTION, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, $($UIManager::getString("OptionPane.titleText"_s)), JOptionPane::YES_NO_CANCEL_OPTION);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, title, optionType, JOptionPane::QUESTION_MESSAGE);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, title, optionType, messageType, nullptr);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	return showInternalOptionDialog(parentComponent, message, title, optionType, messageType, icon, nullptr, nullptr);
}

bool JOptionPane::checkFrameForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return false;
	}
	if ($instanceOf($Frame, parentComponent)) {
		return true;
	}
	return checkFrameForComponent($($nc(parentComponent)->getParent()));
}

int32_t JOptionPane::showInternalOptionDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$init(JOptionPane);
	$useLocalObjectStack();
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, optionType, icon, options, initialValue));
	$init($ClientPropertyKey);
	pane->putClientProperty($ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP, $Boolean::TRUE);
	$var($Component, fo, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	pane->setInitialValue(initialValue);
	if (checkFrameForComponent(parentComponent)) {
		$var($JInternalFrame, dialog, pane->createInternalFrame(parentComponent, title));
		pane->selectInitialValue();
		$nc(dialog)->setVisible(true);
		bool var$0 = dialog->isVisible();
		if (var$0 && !dialog->isShowing()) {
			$var($Container, parent, dialog->getParent());
			while (parent != nullptr) {
				if (parent->isVisible() == false) {
					parent->setVisible(true);
				}
				$assign(parent, parent->getParent());
			}
		}
		$$nc($AWTAccessor::getContainerAccessor())->startLWModal(dialog);
	} else {
		pane->setComponentOrientation($($$nc(getRootFrame())->getComponentOrientation()));
		int32_t style = styleFromMessageType(messageType);
		$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
		pane->selectInitialValue();
		$nc(dialog)->setVisible(true);
	}
	if ($instanceOf($JInternalFrame, parentComponent)) {
		try {
			$cast($JInternalFrame, parentComponent)->setSelected(true);
		} catch ($PropertyVetoException& e) {
		}
	}
	$var($Object, selectedValue, pane->getValue());
	if (fo != nullptr && fo->isShowing()) {
		fo->requestFocus();
	}
	if (selectedValue == nullptr) {
		return JOptionPane::CLOSED_OPTION;
	}
	if (options == nullptr) {
		if ($instanceOf($Integer, selectedValue)) {
			return $cast($Integer, selectedValue)->intValue();
		}
		return JOptionPane::CLOSED_OPTION;
	}
	for (int32_t counter = 0, maxCounter = $nc(options)->length; counter < maxCounter; ++counter) {
		if ($nc(options->get(counter))->equals(selectedValue)) {
			return counter;
		}
	}
	return JOptionPane::CLOSED_OPTION;
}

$String* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInternalInputDialog(parentComponent, message, $($UIManager::getString("OptionPane.inputDialogTitle"_s, parentComponent)), JOptionPane::QUESTION_MESSAGE);
}

$String* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	return $cast($String, showInternalInputDialog(parentComponent, message, title, messageType, nullptr, nullptr, nullptr));
}

$Object* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue) {
	$init(JOptionPane);
	$useLocalObjectStack();
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, JOptionPane::OK_CANCEL_OPTION, icon, nullptr, nullptr));
	$init($ClientPropertyKey);
	pane->putClientProperty($ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP, $Boolean::TRUE);
	$var($Component, fo, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	pane->setWantsInput(true);
	pane->setSelectionValues(selectionValues);
	pane->setInitialSelectionValue(initialSelectionValue);
	$var($JInternalFrame, dialog, pane->createInternalFrame(parentComponent, title));
	pane->selectInitialValue();
	$nc(dialog)->setVisible(true);
	bool var$0 = dialog->isVisible();
	if (var$0 && !dialog->isShowing()) {
		$var($Container, parent, dialog->getParent());
		while (parent != nullptr) {
			if (parent->isVisible() == false) {
				parent->setVisible(true);
			}
			$assign(parent, parent->getParent());
		}
	}
	$$nc($AWTAccessor::getContainerAccessor())->startLWModal(dialog);
	if ($instanceOf($JInternalFrame, parentComponent)) {
		try {
			$cast($JInternalFrame, parentComponent)->setSelected(true);
		} catch ($PropertyVetoException& e) {
		}
	}
	if (fo != nullptr && fo->isShowing()) {
		fo->requestFocus();
	}
	$var($Object, value, pane->getInputValue());
	if ($equals(value, JOptionPane::UNINITIALIZED_VALUE)) {
		return nullptr;
	}
	return value;
}

$JInternalFrame* JOptionPane::createInternalFrame($Component* parentComponent, $String* title) {
	$useLocalObjectStack();
	$var($Container, parent, JOptionPane::getDesktopPaneForComponent(parentComponent));
	if (parent == nullptr && (parentComponent == nullptr || ($assign(parent, parentComponent->getParent())) == nullptr)) {
		$throwNew($RuntimeException, "JOptionPane: parentComponent does not have a valid parent"_s);
	}
	$var($JInternalFrame, iFrame, $new($JInternalFrame, title, false, true, false, false));
	iFrame->putClientProperty("JInternalFrame.frameType"_s, "optionDialog"_s);
	iFrame->putClientProperty("JInternalFrame.messageType"_s, $($Integer::valueOf(getMessageType())));
	iFrame->addInternalFrameListener($$new($JOptionPane$4, this));
	addPropertyChangeListener($$new($JOptionPane$5, this, iFrame));
	$init($BorderLayout);
	$$nc(iFrame->getContentPane())->add(this, $BorderLayout::CENTER);
	if ($instanceOf($JDesktopPane, parent)) {
		$init($JLayeredPane);
		parent->add(iFrame, $JLayeredPane::MODAL_LAYER);
	} else {
		$nc(parent)->add(iFrame, $BorderLayout::CENTER);
	}
	$var($Dimension, iFrameSize, iFrame->getPreferredSize());
	$var($Dimension, rootSize, $nc(parent)->getSize());
	$var($Dimension, parentSize, $nc(parentComponent)->getSize());
	iFrame->setBounds(($nc(rootSize)->width - $nc(iFrameSize)->width) / 2, ($nc(rootSize)->height - $nc(iFrameSize)->height) / 2, $nc(iFrameSize)->width, $nc(iFrameSize)->height);
	$var($Point, iFrameCoord, $SwingUtilities::convertPoint(parentComponent, 0, 0, parent));
	int32_t x = ($nc(parentSize)->width - iFrameSize->width) / 2 + $nc(iFrameCoord)->x;
	int32_t y = (parentSize->height - iFrameSize->height) / 2 + iFrameCoord->y;
	int32_t ovrx = x + iFrameSize->width - rootSize->width;
	int32_t ovry = y + iFrameSize->height - rootSize->height;
	x = $Math::max((ovrx > 0 ? x - ovrx : x), 0);
	y = $Math::max((ovry > 0 ? y - ovry : y), 0);
	iFrame->setBounds(x, y, iFrameSize->width, iFrameSize->height);
	parent->validate();
	try {
		iFrame->setSelected(true);
	} catch ($PropertyVetoException& e) {
	}
	return iFrame;
}

$Frame* JOptionPane::getFrameForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return getRootFrame();
	}
	if ($instanceOf($Frame, parentComponent)) {
		return $cast($Frame, parentComponent);
	}
	return JOptionPane::getFrameForComponent($($nc(parentComponent)->getParent()));
}

$Window* JOptionPane::getWindowForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return getRootFrame();
	}
	if ($instanceOf($Frame, parentComponent) || $instanceOf($Dialog, parentComponent)) {
		return $cast($Window, parentComponent);
	}
	return JOptionPane::getWindowForComponent($($nc(parentComponent)->getParent()));
}

$JDesktopPane* JOptionPane::getDesktopPaneForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return nullptr;
	}
	if ($instanceOf($JDesktopPane, parentComponent)) {
		return $cast($JDesktopPane, parentComponent);
	}
	return getDesktopPaneForComponent($($nc(parentComponent)->getParent()));
}

void JOptionPane::setRootFrame($Frame* newRootFrame) {
	$init(JOptionPane);
	if (newRootFrame != nullptr) {
		$SwingUtilities::appContextPut(JOptionPane::sharedFrameKey, newRootFrame);
	} else {
		$SwingUtilities::appContextRemove(JOptionPane::sharedFrameKey);
	}
}

$Frame* JOptionPane::getRootFrame() {
	$init(JOptionPane);
	$var($Frame, sharedFrame, $cast($Frame, $SwingUtilities::appContextGet(JOptionPane::sharedFrameKey)));
	if (sharedFrame == nullptr) {
		$assign(sharedFrame, $SwingUtilities::getSharedOwnerFrame());
		$SwingUtilities::appContextPut(JOptionPane::sharedFrameKey, sharedFrame);
	}
	return sharedFrame;
}

void JOptionPane::init$() {
	JOptionPane::init$("JOptionPane message"_s);
}

void JOptionPane::init$(Object$* message) {
	JOptionPane::init$(message, JOptionPane::PLAIN_MESSAGE);
}

void JOptionPane::init$(Object$* message, int32_t messageType) {
	JOptionPane::init$(message, messageType, JOptionPane::DEFAULT_OPTION);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType) {
	JOptionPane::init$(message, messageType, optionType, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon) {
	JOptionPane::init$(message, messageType, optionType, icon, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon, $ObjectArray* options) {
	JOptionPane::init$(message, messageType, optionType, icon, options, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$JComponent::init$();
	$set(this, message, message);
	$set(this, options, options == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(options, options->length));
	$set(this, initialValue, initialValue);
	$set(this, icon, icon);
	setMessageType(messageType);
	setOptionType(optionType);
	$set(this, value, JOptionPane::UNINITIALIZED_VALUE);
	$set(this, inputValue, JOptionPane::UNINITIALIZED_VALUE);
	updateUI();
}

void JOptionPane::setUI($OptionPaneUI* ui) {
	if (!$equals(this->ui, ui)) {
		$JComponent::setUI(ui);
		invalidate();
	}
}

$ComponentUI* JOptionPane::getUI() {
	return $cast($OptionPaneUI, this->ui);
}

void JOptionPane::updateUI() {
	setUI($$cast($OptionPaneUI, $UIManager::getUI(this)));
}

$String* JOptionPane::getUIClassID() {
	return JOptionPane::uiClassID;
}

void JOptionPane::setMessage(Object$* newMessage) {
	$var($Object, oldMessage, this->message);
	$set(this, message, newMessage);
	firePropertyChange(JOptionPane::MESSAGE_PROPERTY, oldMessage, this->message);
}

$Object* JOptionPane::getMessage() {
	return this->message;
}

void JOptionPane::setIcon($Icon* newIcon) {
	$var($Object, oldIcon, this->icon);
	$set(this, icon, newIcon);
	firePropertyChange(JOptionPane::ICON_PROPERTY, oldIcon, this->icon);
}

$Icon* JOptionPane::getIcon() {
	return this->icon;
}

void JOptionPane::setValue(Object$* newValue) {
	$var($Object, oldValue, this->value);
	$set(this, value, newValue);
	firePropertyChange(JOptionPane::VALUE_PROPERTY, oldValue, this->value);
}

$Object* JOptionPane::getValue() {
	return this->value;
}

void JOptionPane::setOptions($ObjectArray* newOptions) {
	$var($ObjectArray, oldOptions, this->options);
	$set(this, options, newOptions == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(newOptions, newOptions->length));
	firePropertyChange(JOptionPane::OPTIONS_PROPERTY, oldOptions, this->options);
}

$ObjectArray* JOptionPane::getOptions() {
	return this->options == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(this->options, this->options->length);
}

void JOptionPane::setInitialValue(Object$* newInitialValue) {
	$var($Object, oldIV, this->initialValue);
	$set(this, initialValue, newInitialValue);
	firePropertyChange(JOptionPane::INITIAL_VALUE_PROPERTY, oldIV, this->initialValue);
}

$Object* JOptionPane::getInitialValue() {
	return this->initialValue;
}

void JOptionPane::setMessageType(int32_t newType) {
	checkMessageType(newType);
	int32_t oldType = this->messageType;
	this->messageType = newType;
	firePropertyChange(JOptionPane::MESSAGE_TYPE_PROPERTY, oldType, this->messageType);
}

void JOptionPane::checkMessageType(int32_t newType) {
	$init(JOptionPane);
	if (newType != JOptionPane::ERROR_MESSAGE && newType != JOptionPane::INFORMATION_MESSAGE && newType != JOptionPane::WARNING_MESSAGE && newType != JOptionPane::QUESTION_MESSAGE && newType != JOptionPane::PLAIN_MESSAGE) {
		$throwNew($RuntimeException, "JOptionPane: type must be one of JOptionPane.ERROR_MESSAGE, JOptionPane.INFORMATION_MESSAGE, JOptionPane.WARNING_MESSAGE, JOptionPane.QUESTION_MESSAGE or JOptionPane.PLAIN_MESSAGE"_s);
	}
}

int32_t JOptionPane::getMessageType() {
	return this->messageType;
}

void JOptionPane::setOptionType(int32_t newType) {
	checkOptionType(newType);
	int32_t oldType = this->optionType;
	this->optionType = newType;
	firePropertyChange(JOptionPane::OPTION_TYPE_PROPERTY, oldType, this->optionType);
}

void JOptionPane::checkOptionType(int32_t newType) {
	$init(JOptionPane);
	if (newType != JOptionPane::DEFAULT_OPTION && newType != JOptionPane::YES_NO_OPTION && newType != JOptionPane::YES_NO_CANCEL_OPTION && newType != JOptionPane::OK_CANCEL_OPTION) {
		$throwNew($RuntimeException, "JOptionPane: option type must be one of JOptionPane.DEFAULT_OPTION, JOptionPane.YES_NO_OPTION, JOptionPane.YES_NO_CANCEL_OPTION or JOptionPane.OK_CANCEL_OPTION"_s);
	}
}

int32_t JOptionPane::getOptionType() {
	return this->optionType;
}

void JOptionPane::setSelectionValues($ObjectArray* newValues) {
	$var($ObjectArray, oldValues, this->selectionValues);
	$set(this, selectionValues, newValues == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(newValues, newValues->length));
	firePropertyChange(JOptionPane::SELECTION_VALUES_PROPERTY, oldValues, newValues);
	if (this->selectionValues != nullptr) {
		setWantsInput(true);
	}
}

$ObjectArray* JOptionPane::getSelectionValues() {
	return this->selectionValues == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(this->selectionValues, this->selectionValues->length);
}

void JOptionPane::setInitialSelectionValue(Object$* newValue) {
	$var($Object, oldValue, this->initialSelectionValue);
	$set(this, initialSelectionValue, newValue);
	firePropertyChange(JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY, oldValue, newValue);
}

$Object* JOptionPane::getInitialSelectionValue() {
	return this->initialSelectionValue;
}

void JOptionPane::setInputValue(Object$* newValue) {
	$var($Object, oldValue, this->inputValue);
	$set(this, inputValue, newValue);
	firePropertyChange(JOptionPane::INPUT_VALUE_PROPERTY, oldValue, newValue);
}

$Object* JOptionPane::getInputValue() {
	return this->inputValue;
}

int32_t JOptionPane::getMaxCharactersPerLineCount() {
	return $Integer::MAX_VALUE;
}

void JOptionPane::setWantsInput(bool newValue) {
	bool oldValue = this->wantsInput;
	this->wantsInput = newValue;
	firePropertyChange(JOptionPane::WANTS_INPUT_PROPERTY, oldValue, newValue);
}

bool JOptionPane::getWantsInput() {
	return this->wantsInput;
}

void JOptionPane::selectInitialValue() {
	$var($OptionPaneUI, ui, $cast($OptionPaneUI, getUI()));
	if (ui != nullptr) {
		ui->selectInitialValue(this);
	}
}

int32_t JOptionPane::styleFromMessageType(int32_t messageType) {
	$init(JOptionPane);
	switch (messageType) {
	case JOptionPane::ERROR_MESSAGE:
		return $JRootPane::ERROR_DIALOG;
	case JOptionPane::QUESTION_MESSAGE:
		return $JRootPane::QUESTION_DIALOG;
	case JOptionPane::WARNING_MESSAGE:
		return $JRootPane::WARNING_DIALOG;
	case JOptionPane::INFORMATION_MESSAGE:
		return $JRootPane::INFORMATION_DIALOG;
	case JOptionPane::PLAIN_MESSAGE:
	default:
		return $JRootPane::PLAIN_DIALOG;
	}
}

void JOptionPane::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$var($Vector, values, $new($Vector));
	$nc(s)->defaultWriteObject();
	if (this->icon != nullptr && $instanceOf($Serializable, this->icon)) {
		values->addElement("icon"_s);
		values->addElement(this->icon);
	}
	if (this->message != nullptr && $instanceOf($Serializable, this->message)) {
		values->addElement("message"_s);
		values->addElement(this->message);
	}
	if (this->options != nullptr) {
		$var($Vector, serOptions, $new($Vector));
		for (int32_t counter = 0, maxCounter = this->options->length; counter < maxCounter; ++counter) {
			if ($instanceOf($Serializable, this->options->get(counter))) {
				serOptions->addElement(this->options->get(counter));
			}
		}
		if (serOptions->size() > 0) {
			int32_t optionCount = serOptions->size();
			$var($ObjectArray, arrayOptions, $new($ObjectArray, optionCount));
			serOptions->copyInto(arrayOptions);
			values->addElement("options"_s);
			values->addElement(arrayOptions);
		}
	}
	if (this->initialValue != nullptr && $instanceOf($Serializable, this->initialValue)) {
		values->addElement("initialValue"_s);
		values->addElement(this->initialValue);
	}
	if (this->value != nullptr && $instanceOf($Serializable, this->value)) {
		values->addElement("value"_s);
		values->addElement(this->value);
	}
	if (this->selectionValues != nullptr) {
		bool serialize = true;
		for (int32_t counter = 0, maxCounter = this->selectionValues->length; counter < maxCounter; ++counter) {
			if (this->selectionValues->get(counter) != nullptr && !($instanceOf($Serializable, this->selectionValues->get(counter)))) {
				serialize = false;
				break;
			}
		}
		if (serialize) {
			values->addElement("selectionValues"_s);
			values->addElement(this->selectionValues);
		}
	}
	if (this->inputValue != nullptr && $instanceOf($Serializable, this->inputValue)) {
		values->addElement("inputValue"_s);
		values->addElement(this->inputValue);
	}
	if (this->initialSelectionValue != nullptr && $instanceOf($Serializable, this->initialSelectionValue)) {
		values->addElement("initialSelectionValue"_s);
		values->addElement(this->initialSelectionValue);
	}
	s->writeObject(values);
}

void JOptionPane::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	int32_t newMessageType = $nc(f)->get("messageType"_s, 0);
	checkMessageType(newMessageType);
	this->messageType = newMessageType;
	int32_t newOptionType = f->get("optionType"_s, 0);
	checkOptionType(newOptionType);
	this->optionType = newOptionType;
	this->wantsInput = f->get("wantsInput"_s, false);
	$var($Vector, values, $cast($Vector, s->readObject()));
	int32_t indexCounter = 0;
	int32_t maxCounter = $nc(values)->size();
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("icon"_s)) {
		$set(this, icon, $cast($Icon, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("message"_s)) {
		$set(this, message, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("options"_s)) {
		$set(this, options, $cast($ObjectArray, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("initialValue"_s)) {
		$set(this, initialValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("value"_s)) {
		$set(this, value, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("selectionValues"_s)) {
		$set(this, selectionValues, $cast($ObjectArray, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("inputValue"_s)) {
		$set(this, inputValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $$nc(values->elementAt(indexCounter))->equals("initialSelectionValue"_s)) {
		$set(this, initialSelectionValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if ($$nc(getUIClassID())->equals(JOptionPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JOptionPane::paramString() {
	$useLocalObjectStack();
	$var($String, iconString, this->icon != nullptr ? this->icon->toString() : ""_s);
	$var($String, initialValueString, this->initialValue != nullptr ? this->initialValue->toString() : ""_s);
	$var($String, messageString, this->message != nullptr ? this->message->toString() : ""_s);
	$var($String, messageTypeString, nullptr);
	if (this->messageType == JOptionPane::ERROR_MESSAGE) {
		$assign(messageTypeString, "ERROR_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::INFORMATION_MESSAGE) {
		$assign(messageTypeString, "INFORMATION_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::WARNING_MESSAGE) {
		$assign(messageTypeString, "WARNING_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::QUESTION_MESSAGE) {
		$assign(messageTypeString, "QUESTION_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::PLAIN_MESSAGE) {
		$assign(messageTypeString, "PLAIN_MESSAGE"_s);
	} else {
		$assign(messageTypeString, ""_s);
	}
	$var($String, optionTypeString, nullptr);
	if (this->optionType == JOptionPane::DEFAULT_OPTION) {
		$assign(optionTypeString, "DEFAULT_OPTION"_s);
	} else if (this->optionType == JOptionPane::YES_NO_OPTION) {
		$assign(optionTypeString, "YES_NO_OPTION"_s);
	} else if (this->optionType == JOptionPane::YES_NO_CANCEL_OPTION) {
		$assign(optionTypeString, "YES_NO_CANCEL_OPTION"_s);
	} else if (this->optionType == JOptionPane::OK_CANCEL_OPTION) {
		$assign(optionTypeString, "OK_CANCEL_OPTION"_s);
	} else {
		$assign(optionTypeString, ""_s);
	}
	$var($String, wantsInputString, this->wantsInput ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",icon="_s, iconString, ",initialValue="_s, initialValueString, ",message="_s, messageString, ",messageType="_s, messageTypeString, ",optionType="_s, optionTypeString, ",wantsInput="_s, wantsInputString});
}

$AccessibleContext* JOptionPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JOptionPane$AccessibleJOptionPane, this));
	}
	return this->accessibleContext;
}

void JOptionPane::clinit$($Class* clazz) {
	$assignStatic(JOptionPane::uiClassID, "OptionPaneUI"_s);
	$assignStatic(JOptionPane::ICON_PROPERTY, "icon"_s);
	$assignStatic(JOptionPane::MESSAGE_PROPERTY, "message"_s);
	$assignStatic(JOptionPane::VALUE_PROPERTY, "value"_s);
	$assignStatic(JOptionPane::OPTIONS_PROPERTY, "options"_s);
	$assignStatic(JOptionPane::INITIAL_VALUE_PROPERTY, "initialValue"_s);
	$assignStatic(JOptionPane::MESSAGE_TYPE_PROPERTY, "messageType"_s);
	$assignStatic(JOptionPane::OPTION_TYPE_PROPERTY, "optionType"_s);
	$assignStatic(JOptionPane::SELECTION_VALUES_PROPERTY, "selectionValues"_s);
	$assignStatic(JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY, "initialSelectionValue"_s);
	$assignStatic(JOptionPane::INPUT_VALUE_PROPERTY, "inputValue"_s);
	$assignStatic(JOptionPane::WANTS_INPUT_PROPERTY, "wantsInput"_s);
	$assignStatic(JOptionPane::UNINITIALIZED_VALUE, "uninitializedValue"_s);
	$assignStatic(JOptionPane::sharedFrameKey, JOptionPane::class$);
}

JOptionPane::JOptionPane() {
}

$Class* JOptionPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JOptionPane, uiClassID)},
		{"UNINITIALIZED_VALUE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, UNINITIALIZED_VALUE)},
		{"DEFAULT_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, DEFAULT_OPTION)},
		{"YES_NO_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_NO_OPTION)},
		{"YES_NO_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_NO_CANCEL_OPTION)},
		{"OK_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, OK_CANCEL_OPTION)},
		{"YES_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_OPTION)},
		{"NO_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, NO_OPTION)},
		{"CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, CANCEL_OPTION)},
		{"OK_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, OK_OPTION)},
		{"CLOSED_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, CLOSED_OPTION)},
		{"ERROR_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, ERROR_MESSAGE)},
		{"INFORMATION_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, INFORMATION_MESSAGE)},
		{"WARNING_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, WARNING_MESSAGE)},
		{"QUESTION_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, QUESTION_MESSAGE)},
		{"PLAIN_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, PLAIN_MESSAGE)},
		{"ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, ICON_PROPERTY)},
		{"MESSAGE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, MESSAGE_PROPERTY)},
		{"VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, VALUE_PROPERTY)},
		{"OPTIONS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, OPTIONS_PROPERTY)},
		{"INITIAL_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INITIAL_VALUE_PROPERTY)},
		{"MESSAGE_TYPE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, MESSAGE_TYPE_PROPERTY)},
		{"OPTION_TYPE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, OPTION_TYPE_PROPERTY)},
		{"SELECTION_VALUES_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, SELECTION_VALUES_PROPERTY)},
		{"INITIAL_SELECTION_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INITIAL_SELECTION_VALUE_PROPERTY)},
		{"INPUT_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INPUT_VALUE_PROPERTY)},
		{"WANTS_INPUT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, WANTS_INPUT_PROPERTY)},
		{"icon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, icon)},
		{"message", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, message)},
		{"options", "[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, options)},
		{"initialValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, initialValue)},
		{"messageType", "I", nullptr, $PROTECTED, $field(JOptionPane, messageType)},
		{"optionType", "I", nullptr, $PROTECTED, $field(JOptionPane, optionType)},
		{"value", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, value)},
		{"selectionValues", "[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, selectionValues)},
		{"inputValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, inputValue)},
		{"initialSelectionValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, initialSelectionValue)},
		{"wantsInput", "Z", nullptr, $PROTECTED, $field(JOptionPane, wantsInput)},
		{"sharedFrameKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JOptionPane, sharedFrameKey)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this option pane"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getMaxCharactersPerLineCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMaxCharactersPerLineCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMaxCharactersPerLineCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIconmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s type icon."},
		{}
	};
	$CompoundAttribute setIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInitialSelectionValuemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The option pane\'s initial selection value object."},
		{}
	};
	$CompoundAttribute setInitialSelectionValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInitialSelectionValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInitialValuemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s initial value object."},
		{}
	};
	$CompoundAttribute setInitialValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInitialValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInputValuemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s input value object."},
		{}
	};
	$CompoundAttribute setInputValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInputValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMessagemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The optionpane\'s message object."},
		{}
	};
	$CompoundAttribute setMessagemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMessagemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMessageTypemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s message type."},
		{}
	};
	$CompoundAttribute setMessageTypemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMessageTypemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setOptionTypemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s option type."},
		{}
	};
	$CompoundAttribute setOptionTypemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOptionTypemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setOptionsmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The option pane\'s options objects."},
		{}
	};
	$CompoundAttribute setOptionsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOptionsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionValuesmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The option pane\'s selection values."},
		{}
	};
	$CompoundAttribute setSelectionValuesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionValuesmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The UI object that implements the optionpane\'s LookAndFeel"},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValuemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The option pane\'s value object."},
		{}
	};
	$CompoundAttribute setValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setWantsInputmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Flag which allows the user to input a value."},
		{}
	};
	$CompoundAttribute setWantsInputmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setWantsInputmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JOptionPane, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*)},
		{"<init>", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*, int32_t)},
		{"<init>", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*, int32_t, int32_t, $Icon*)},
		{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*, int32_t, int32_t, $Icon*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JOptionPane, init$, void, Object$*, int32_t, int32_t, $Icon*, $ObjectArray*, Object$*)},
		{"checkFrameForComponent", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JOptionPane, checkFrameForComponent, bool, $Component*)},
		{"checkMessageType", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JOptionPane, checkMessageType, void, int32_t)},
		{"checkOptionType", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JOptionPane, checkOptionType, void, int32_t)},
		{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, createDialog, $JDialog*, $Component*, $String*), "java.awt.HeadlessException"},
		{"createDialog", "(Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, createDialog, $JDialog*, $String*), "java.awt.HeadlessException"},
		{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JDialog;", nullptr, $PRIVATE, $method(JOptionPane, createDialog, $JDialog*, $Component*, $String*, int32_t), "java.awt.HeadlessException"},
		{"createInternalFrame", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, createInternalFrame, $JInternalFrame*, $Component*, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getDesktopPaneForComponent", "(Ljava/awt/Component;)Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, getDesktopPaneForComponent, $JDesktopPane*, $Component*)},
		{"getFrameForComponent", "(Ljava/awt/Component;)Ljava/awt/Frame;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, getFrameForComponent, $Frame*, $Component*), "java.awt.HeadlessException"},
		{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getIcon, $Icon*)},
		{"getInitialSelectionValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getInitialSelectionValue, $Object*)},
		{"getInitialValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getInitialValue, $Object*)},
		{"getInputValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getInputValue, $Object*)},
		{"getMaxCharactersPerLineCount", "()I", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getMaxCharactersPerLineCount, int32_t), nullptr, nullptr, getMaxCharactersPerLineCountmethodAnnotations$$},
		{"getMessage", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getMessage, $Object*)},
		{"getMessageType", "()I", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getMessageType, int32_t)},
		{"getOptionType", "()I", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getOptionType, int32_t)},
		{"getOptions", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getOptions, $ObjectArray*)},
		{"getRootFrame", "()Ljava/awt/Frame;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, getRootFrame, $Frame*), "java.awt.HeadlessException"},
		{"getSelectionValues", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getSelectionValues, $ObjectArray*)},
		{"getUI", "()Ljavax/swing/plaf/OptionPaneUI;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getValue, $Object*)},
		{"getWantsInput", "()Z", nullptr, $PUBLIC, $virtualMethod(JOptionPane, getWantsInput, bool)},
		{"getWindowForComponent", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $STATIC, $staticMethod(JOptionPane, getWindowForComponent, $Window*, $Component*), "java.awt.HeadlessException"},
		{"initDialog", "(Ljavax/swing/JDialog;ILjava/awt/Component;)V", nullptr, $PRIVATE, $method(JOptionPane, initDialog, void, $JDialog*, int32_t, $Component*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JOptionPane, paramString, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JOptionPane, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"selectInitialValue", "()V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, selectInitialValue, void)},
		{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setIcon, void, $Icon*), nullptr, nullptr, setIconmethodAnnotations$$},
		{"setInitialSelectionValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setInitialSelectionValue, void, Object$*), nullptr, nullptr, setInitialSelectionValuemethodAnnotations$$},
		{"setInitialValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setInitialValue, void, Object$*), nullptr, nullptr, setInitialValuemethodAnnotations$$},
		{"setInputValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setInputValue, void, Object$*), nullptr, nullptr, setInputValuemethodAnnotations$$},
		{"setMessage", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setMessage, void, Object$*), nullptr, nullptr, setMessagemethodAnnotations$$},
		{"setMessageType", "(I)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setMessageType, void, int32_t), nullptr, nullptr, setMessageTypemethodAnnotations$$},
		{"setOptionType", "(I)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setOptionType, void, int32_t), nullptr, nullptr, setOptionTypemethodAnnotations$$},
		{"setOptions", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setOptions, void, $ObjectArray*), nullptr, nullptr, setOptionsmethodAnnotations$$},
		{"setRootFrame", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, setRootFrame, void, $Frame*)},
		{"setSelectionValues", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setSelectionValues, void, $ObjectArray*), nullptr, nullptr, setSelectionValuesmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/OptionPaneUI;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setUI, void, $OptionPaneUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setValue, void, Object$*), nullptr, nullptr, setValuemethodAnnotations$$},
		{"setWantsInput", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, setWantsInput, void, bool), nullptr, nullptr, setWantsInputmethodAnnotations$$},
		{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showConfirmDialog, int32_t, $Component*, Object$*), "java.awt.HeadlessException"},
		{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t), "java.awt.HeadlessException"},
		{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t), "java.awt.HeadlessException"},
		{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t, $Icon*), "java.awt.HeadlessException"},
		{"showInputDialog", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $String*, Object$*), "java.awt.HeadlessException"},
		{"showInputDialog", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $String*, Object$*, Object$*)},
		{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $String*, $Component*, Object$*), "java.awt.HeadlessException"},
		{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $String*, $Component*, Object$*, Object$*)},
		{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $String*, $Component*, Object$*, $String*, int32_t), "java.awt.HeadlessException"},
		{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInputDialog, $Object*, $Component*, Object$*, $String*, int32_t, $Icon*, $ObjectArray*, Object$*), "java.awt.HeadlessException"},
		{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalConfirmDialog, int32_t, $Component*, Object$*)},
		{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t)},
		{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t)},
		{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalConfirmDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t, $Icon*)},
		{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalInputDialog, $String*, $Component*, Object$*)},
		{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalInputDialog, $String*, $Component*, Object$*, $String*, int32_t)},
		{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalInputDialog, $Object*, $Component*, Object$*, $String*, int32_t, $Icon*, $ObjectArray*, Object$*)},
		{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalMessageDialog, void, $Component*, Object$*)},
		{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalMessageDialog, void, $Component*, Object$*, $String*, int32_t)},
		{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalMessageDialog, void, $Component*, Object$*, $String*, int32_t, $Icon*)},
		{"showInternalOptionDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showInternalOptionDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t, $Icon*, $ObjectArray*, Object$*)},
		{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showMessageDialog, void, $Component*, Object$*), "java.awt.HeadlessException"},
		{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showMessageDialog, void, $Component*, Object$*, $String*, int32_t), "java.awt.HeadlessException"},
		{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showMessageDialog, void, $Component*, Object$*, $String*, int32_t, $Icon*), "java.awt.HeadlessException"},
		{"showOptionDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JOptionPane, showOptionDialog, int32_t, $Component*, Object$*, $String*, int32_t, int32_t, $Icon*, $ObjectArray*, Object$*), "java.awt.HeadlessException"},
		{"styleFromMessageType", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(JOptionPane, styleFromMessageType, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JOptionPane, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JOptionPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JOptionPane$AccessibleJOptionPane", "javax.swing.JOptionPane", "AccessibleJOptionPane", $PROTECTED},
		{"javax.swing.JOptionPane$5", nullptr, nullptr, 0},
		{"javax.swing.JOptionPane$4", nullptr, nullptr, 0},
		{"javax.swing.JOptionPane$3", nullptr, nullptr, 0},
		{"javax.swing.JOptionPane$2", nullptr, nullptr, 0},
		{"javax.swing.JOptionPane$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component which implements standard dialog box controls."},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JOptionPane",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JOptionPane$AccessibleJOptionPane,javax.swing.JOptionPane$5,javax.swing.JOptionPane$4,javax.swing.JOptionPane$3,javax.swing.JOptionPane$2,javax.swing.JOptionPane$1"
	};
	$loadClass(JOptionPane, name, initialize, &classInfo$$, JOptionPane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JOptionPane));
	});
	return class$;
}

$Class* JOptionPane::class$ = nullptr;

	} // swing
} // javax