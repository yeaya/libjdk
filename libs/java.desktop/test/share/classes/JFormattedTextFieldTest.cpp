#include <JFormattedTextFieldTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventObject.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Component = ::java::awt::Component;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $NumberFormat = ::java::text::NumberFormat;
using $JButton = ::javax::swing::JButton;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class JFormattedTextFieldTest$$Lambda$lambda$createUI$0 : public $Runnable {
	$class(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JFormattedTextFieldTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$createUI$0();
	}
	JFormattedTextFieldTest* inst$ = nullptr;
};
$Class* JFormattedTextFieldTest$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJFormattedTextFieldTest;)V", nullptr, $PUBLIC, $method(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, init$, void, JFormattedTextFieldTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JFormattedTextFieldTest$$Lambda$lambda$createUI$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFormattedTextFieldTest$$Lambda$lambda$createUI$0);
	});
	return class$;
}
$Class* JFormattedTextFieldTest$$Lambda$lambda$createUI$0::class$ = nullptr;

$GridBagLayout* JFormattedTextFieldTest::layout = nullptr;
$JPanel* JFormattedTextFieldTest::mainControlPanel = nullptr;
$JPanel* JFormattedTextFieldTest::resultButtonPanel = nullptr;
$JLabel* JFormattedTextFieldTest::instructionText = nullptr;
$JButton* JFormattedTextFieldTest::passButton = nullptr;
$JButton* JFormattedTextFieldTest::failButton = nullptr;
$JFrame* JFormattedTextFieldTest::mainFrame = nullptr;

void JFormattedTextFieldTest::main($StringArray* args) {
	$init(JFormattedTextFieldTest);
	$var(JFormattedTextFieldTest, jFormattedTextFieldTest, $new(JFormattedTextFieldTest));
}

void JFormattedTextFieldTest::init$() {
	createUI();
}

void JFormattedTextFieldTest::createUI() {
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, this));
}

void JFormattedTextFieldTest::actionPerformed($ActionEvent* evt) {
	$useLocalObjectStack();
	if ($instanceOf($JButton, $($nc(evt)->getSource()))) {
		$var($JButton, btn, $cast($JButton, evt->getSource()));
		cleanUp();
		{
			$var($String, s4882$, $nc(btn)->getActionCommand());
			int32_t tmp4882$ = -1;
			switch ($nc(s4882$)->hashCode()) {
			case 0x0025d831:
				if (s4882$->equals("Pass"_s)) {
					tmp4882$ = 0;
				}
				break;
			case 0x00214b3e:
				if (s4882$->equals("Fail"_s)) {
					tmp4882$ = 1;
				}
				break;
			}
			switch (tmp4882$) {
			case 0:
				break;
			case 1:
				$throwNew($AssertionError, $of("User Clicked Fail!"_s));
			}
		}
	}
}

void JFormattedTextFieldTest::cleanUp() {
	$init(JFormattedTextFieldTest);
	$nc(JFormattedTextFieldTest::mainFrame)->dispose();
}

void JFormattedTextFieldTest::lambda$createUI$0() {
	$useLocalObjectStack();
	$assignStatic(JFormattedTextFieldTest::mainFrame, $new($JFrame, "Window LAF JFormattedTextField Test"_s));
	$assignStatic(JFormattedTextFieldTest::layout, $new($GridBagLayout));
	$assignStatic(JFormattedTextFieldTest::mainControlPanel, $new($JPanel, JFormattedTextFieldTest::layout));
	$assignStatic(JFormattedTextFieldTest::resultButtonPanel, $new($JPanel, JFormattedTextFieldTest::layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "<html>INSTRUCTIONS:<br>Set Windows Theme to HighContrast#1.<br><br>(ControlPanel->Personalization->High Contrast#1)<br><br>If TextFiled colors are same test passes else failed.<br><br></html>"_s);
	$assignStatic(JFormattedTextFieldTest::instructionText, $new($JLabel));
	JFormattedTextFieldTest::instructionText->setText(instructions);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc(JFormattedTextFieldTest::mainControlPanel)->add(JFormattedTextFieldTest::instructionText, gbc);
	$assignStatic(JFormattedTextFieldTest::passButton, $new($JButton, "Pass"_s));
	JFormattedTextFieldTest::passButton->setActionCommand("Pass"_s);
	$nc(JFormattedTextFieldTest::passButton)->addActionListener(this);
	$assignStatic(JFormattedTextFieldTest::failButton, $new($JButton, "Fail"_s));
	JFormattedTextFieldTest::failButton->setActionCommand("Fail"_s);
	$nc(JFormattedTextFieldTest::failButton)->addActionListener(this);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(JFormattedTextFieldTest::passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(JFormattedTextFieldTest::failButton, gbc);
	gbc->gridx = 3;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add($$new($JTextField, "12345"_s), gbc);
	$var($NumberFormat, format, $NumberFormat::getIntegerInstance());
	$nc(format)->setMaximumIntegerDigits(5);
	$var($JFormattedTextField, formatted, $new($JFormattedTextField, format));
	formatted->setText("67891"_s);
	gbc->gridx = 5;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(formatted, gbc);
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc(JFormattedTextFieldTest::mainControlPanel)->add(JFormattedTextFieldTest::resultButtonPanel, gbc);
	$nc(JFormattedTextFieldTest::mainFrame)->add(JFormattedTextFieldTest::mainControlPanel);
	$nc(JFormattedTextFieldTest::mainFrame)->setSize(400, 200);
	$nc(JFormattedTextFieldTest::mainFrame)->setLocationRelativeTo(nullptr);
	$nc(JFormattedTextFieldTest::mainFrame)->setVisible(true);
}

JFormattedTextFieldTest::JFormattedTextFieldTest() {
}

$Class* JFormattedTextFieldTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JFormattedTextFieldTest$$Lambda$lambda$createUI$0")) {
			return JFormattedTextFieldTest$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, layout)},
		{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, mainControlPanel)},
		{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, resultButtonPanel)},
		{"instructionText", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, instructionText)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, failButton)},
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFormattedTextFieldTest, init$, void), "java.lang.Exception"},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextFieldTest, actionPerformed, void, $ActionEvent*)},
		{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFormattedTextFieldTest, cleanUp, void)},
		{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(JFormattedTextFieldTest, createUI, void), "java.lang.Exception"},
		{"lambda$createUI$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(JFormattedTextFieldTest, lambda$createUI$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JFormattedTextFieldTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JFormattedTextFieldTest",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JFormattedTextFieldTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFormattedTextFieldTest);
	});
	return class$;
}

$Class* JFormattedTextFieldTest::class$ = nullptr;