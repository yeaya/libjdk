#include <javax/swing/ColorChooserDialog.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Frame.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ColorChooserDialog$1.h>
#include <javax/swing/ColorChooserDialog$2.h>
#include <javax/swing/ColorChooserDialog$3.h>
#include <javax/swing/ColorChooserDialog$4.h>
#include <javax/swing/ColorChooserDialog$Closer.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef COLOR_CHOOSER_DIALOG
#undef SOUTH
#undef VK_ESCAPE
#undef WHEN_IN_FOCUSED_WINDOW

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $Frame = ::java::awt::Frame;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ColorChooserDialog$1 = ::javax::swing::ColorChooserDialog$1;
using $ColorChooserDialog$2 = ::javax::swing::ColorChooserDialog$2;
using $ColorChooserDialog$3 = ::javax::swing::ColorChooserDialog$3;
using $ColorChooserDialog$4 = ::javax::swing::ColorChooserDialog$4;
using $ColorChooserDialog$Closer = ::javax::swing::ColorChooserDialog$Closer;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $UIManager = ::javax::swing::UIManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

void ColorChooserDialog::init$($Dialog* owner, $String* title, bool modal, $Component* c, $JColorChooser* chooserPane, $ActionListener* okListener, $ActionListener* cancelListener) {
	$JDialog::init$(owner, title, modal);
	initColorChooserDialog(c, chooserPane, okListener, cancelListener);
}

void ColorChooserDialog::init$($Frame* owner, $String* title, bool modal, $Component* c, $JColorChooser* chooserPane, $ActionListener* okListener, $ActionListener* cancelListener) {
	$JDialog::init$(owner, title, modal);
	initColorChooserDialog(c, chooserPane, okListener, cancelListener);
}

void ColorChooserDialog::initColorChooserDialog($Component* c, $JColorChooser* chooserPane, $ActionListener* okListener, $ActionListener* cancelListener) {
	$useLocalObjectStack();
	$set(this, chooserPane, chooserPane);
	$var($Locale, locale, getLocale());
	$var($String, okString, $UIManager::getString("ColorChooser.okText"_s, locale));
	$var($String, cancelString, $UIManager::getString("ColorChooser.cancelText"_s, locale));
	$var($String, resetString, $UIManager::getString("ColorChooser.resetText"_s, locale));
	$var($Container, contentPane, getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	contentPane->add(chooserPane, $BorderLayout::CENTER);
	$var($JPanel, buttonPane, $new($JPanel));
	buttonPane->setLayout($$new($FlowLayout, $FlowLayout::CENTER));
	$var($JButton, okButton, $new($JButton, okString));
	$$nc(getRootPane())->setDefaultButton(okButton);
	$$nc(okButton->getAccessibleContext())->setAccessibleDescription(okString);
	okButton->setActionCommand("OK"_s);
	okButton->addActionListener($$new($ColorChooserDialog$1, this));
	if (okListener != nullptr) {
		okButton->addActionListener(okListener);
	}
	buttonPane->add(okButton);
	$set(this, cancelButton, $new($JButton, cancelString));
	$$nc(this->cancelButton->getAccessibleContext())->setAccessibleDescription(cancelString);
	$var($Action, cancelKeyAction, $new($ColorChooserDialog$2, this));
	$var($KeyStroke, cancelKeyStroke, $KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0));
	$var($InputMap, inputMap, $nc(this->cancelButton)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$var($ActionMap, actionMap, $nc(this->cancelButton)->getActionMap());
	if (inputMap != nullptr && actionMap != nullptr) {
		inputMap->put(cancelKeyStroke, "cancel"_s);
		actionMap->put("cancel"_s, cancelKeyAction);
	}
	$nc(this->cancelButton)->setActionCommand("cancel"_s);
	$nc(this->cancelButton)->addActionListener($$new($ColorChooserDialog$3, this));
	if (cancelListener != nullptr) {
		$nc(this->cancelButton)->addActionListener(cancelListener);
	}
	buttonPane->add(this->cancelButton);
	$var($JButton, resetButton, $new($JButton, resetString));
	$$nc(resetButton->getAccessibleContext())->setAccessibleDescription(resetString);
	resetButton->addActionListener($$new($ColorChooserDialog$4, this));
	int32_t mnemonic = $SwingUtilities2::getUIDefaultsInt("ColorChooser.resetMnemonic"_s, locale, -1);
	if (mnemonic != -1) {
		resetButton->setMnemonic(mnemonic);
	}
	buttonPane->add(resetButton);
	contentPane->add(buttonPane, $BorderLayout::SOUTH);
	if ($JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $$nc($UIManager::getLookAndFeel())->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			$$nc(getRootPane())->setWindowDecorationStyle($JRootPane::COLOR_CHOOSER_DIALOG);
		}
	}
	applyComponentOrientation($($nc(((c == nullptr) ? $$cast($Component, getRootPane()) : c))->getComponentOrientation()));
	pack();
	setLocationRelativeTo(c);
	this->addWindowListener($$new($ColorChooserDialog$Closer, this));
}

void ColorChooserDialog::show() {
	$set(this, initialColor, $nc(this->chooserPane)->getColor());
	$JDialog::show();
}

void ColorChooserDialog::reset() {
	$nc(this->chooserPane)->setColor(this->initialColor);
}

ColorChooserDialog::ColorChooserDialog() {
}

$Class* ColorChooserDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"initialColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ColorChooserDialog, initialColor)},
		{"chooserPane", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(ColorChooserDialog, chooserPane)},
		{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(ColorChooserDialog, cancelButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;ZLjava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $method(ColorChooserDialog, init$, void, $Dialog*, $String*, bool, $Component*, $JColorChooser*, $ActionListener*, $ActionListener*), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;ZLjava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $method(ColorChooserDialog, init$, void, $Frame*, $String*, bool, $Component*, $JColorChooser*, $ActionListener*, $ActionListener*), "java.awt.HeadlessException"},
		{"initColorChooserDialog", "(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V", nullptr, $PROTECTED, $virtualMethod(ColorChooserDialog, initColorChooserDialog, void, $Component*, $JColorChooser*, $ActionListener*, $ActionListener*)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog, reset, void)},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog, show, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ColorChooserDialog$DisposeOnClose", "javax.swing.ColorChooserDialog", "DisposeOnClose", $STATIC},
		{"javax.swing.ColorChooserDialog$Closer", "javax.swing.ColorChooserDialog", "Closer", 0},
		{"javax.swing.ColorChooserDialog$4", nullptr, nullptr, 0},
		{"javax.swing.ColorChooserDialog$3", nullptr, nullptr, 0},
		{"javax.swing.ColorChooserDialog$2", nullptr, nullptr, 0},
		{"javax.swing.ColorChooserDialog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ColorChooserDialog",
		"javax.swing.JDialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.ColorChooserDialog$DisposeOnClose,javax.swing.ColorChooserDialog$Closer,javax.swing.ColorChooserDialog$4,javax.swing.ColorChooserDialog$3,javax.swing.ColorChooserDialog$2,javax.swing.ColorChooserDialog$1"
	};
	$loadClass(ColorChooserDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorChooserDialog));
	});
	return class$;
}

$Class* ColorChooserDialog::class$ = nullptr;

	} // swing
} // javax