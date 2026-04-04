#include <MotifHiDPIIconsTest.h>
#include <MotifHiDPIIconsTest$1.h>
#include <MotifHiDPIIconsTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef INSTRUCTIONS
#undef MINUTES
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef Y_AXIS

using $MotifHiDPIIconsTest$1 = ::MotifHiDPIIconsTest$1;
using $MotifHiDPIIconsTest$2 = ::MotifHiDPIIconsTest$2;
using $Color = ::java::awt::Color;
using $FlowLayout = ::java::awt::FlowLayout;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class MotifHiDPIIconsTest$$Lambda$createUI : public $Runnable {
	$class(MotifHiDPIIconsTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MotifHiDPIIconsTest::createUI();
	}
};
$Class* MotifHiDPIIconsTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifHiDPIIconsTest$$Lambda$createUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MotifHiDPIIconsTest$$Lambda$createUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MotifHiDPIIconsTest$$Lambda$createUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifHiDPIIconsTest$$Lambda$createUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifHiDPIIconsTest$$Lambda$createUI);
	});
	return class$;
}
$Class* MotifHiDPIIconsTest$$Lambda$createUI::class$ = nullptr;

class MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MotifHiDPIIconsTest::lambda$createUI$0(mainFrame, e);
	}
	$JFrame* mainFrame = nullptr;
};
$Class* MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1);
	});
	return class$;
}
$Class* MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$volatile(bool) MotifHiDPIIconsTest::testResult = false;
$volatile($CountDownLatch*) MotifHiDPIIconsTest::countDownLatch = nullptr;
$String* MotifHiDPIIconsTest::INSTRUCTIONS = nullptr;

void MotifHiDPIIconsTest::init$() {
}

void MotifHiDPIIconsTest::main($StringArray* args) {
	$init(MotifHiDPIIconsTest);
	$assignStatic(MotifHiDPIIconsTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater($$new(MotifHiDPIIconsTest$$Lambda$createUI));
	$init($TimeUnit);
	$nc(MotifHiDPIIconsTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!MotifHiDPIIconsTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void MotifHiDPIIconsTest::createUI() {
	$init(MotifHiDPIIconsTest);
	$useLocalObjectStack();
	$var($JFrame, mainFrame, $new($JFrame, "Motif L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, layout));
	$var($JPanel, resultButtonPanel, $new($JPanel, layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JPanel, testPanel, createJPanel());
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(testPanel, gbc);
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(MotifHiDPIIconsTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(instructionTextArea, gbc);
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener($$new(MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($MotifHiDPIIconsTest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(resultButtonPanel, gbc);
	mainFrame->add(mainControlPanel);
	mainFrame->pack();
	mainFrame->addWindowListener($$new($MotifHiDPIIconsTest$2, mainFrame));
	mainFrame->setVisible(true);
}

$JPanel* MotifHiDPIIconsTest::createJPanel() {
	$init(MotifHiDPIIconsTest);
	$useLocalObjectStack();
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BoxLayout, panel, $BoxLayout::Y_AXIS));
	$var($JPanel, iconPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JRadioButton, radioButton, $new($JRadioButton));
	radioButton->setSelected(false);
	iconPanel->add(radioButton);
	$assign(radioButton, $new($JRadioButton));
	radioButton->setSelected(true);
	iconPanel->add(radioButton);
	panel->add(iconPanel);
	$assign(iconPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JCheckBox, checkBox, $new($JCheckBox));
	checkBox->setSelected(false);
	iconPanel->add(checkBox);
	$assign(checkBox, $new($JCheckBox));
	checkBox->setSelected(true);
	iconPanel->add(checkBox);
	panel->add(iconPanel);
	$assign(iconPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JComboBox, comboBox, $new($JComboBox, $$new($StringArray, {
		"111"_s,
		"222"_s
	})));
	iconPanel->add(comboBox);
	panel->add(iconPanel);
	$assign(iconPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JTextArea, textArea, $new($JTextArea, 3, 7));
	textArea->setText("AAA"_s);
	$var($JScrollPane, scrollPane, $new($JScrollPane, textArea));
	scrollPane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS);
	scrollPane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS);
	iconPanel->add(scrollPane);
	panel->add(iconPanel);
	return panel;
}

void MotifHiDPIIconsTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(MotifHiDPIIconsTest);
	MotifHiDPIIconsTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(MotifHiDPIIconsTest::countDownLatch)->countDown();
}

void MotifHiDPIIconsTest::clinit$($Class* clazz) {
	$assignStatic(MotifHiDPIIconsTest::INSTRUCTIONS, "INSTRUCTIONS:\nCheck that the icons are painted smoothly on Swing UI controls:\n  - JRadioButton\n  - JCheckBox\n  - JComboBox\n  - JScrollPane (vertical and horizontal scroll bars)\n\nIf so, press PASS, else press FAIL.\n"_s);
	MotifHiDPIIconsTest::testResult = false;
}

MotifHiDPIIconsTest::MotifHiDPIIconsTest() {
}

$Class* MotifHiDPIIconsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MotifHiDPIIconsTest$$Lambda$createUI")) {
			return MotifHiDPIIconsTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals("MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1")) {
			return MotifHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MotifHiDPIIconsTest, testResult)},
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MotifHiDPIIconsTest, countDownLatch)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifHiDPIIconsTest, INSTRUCTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifHiDPIIconsTest, init$, void)},
		{"createJPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticMethod(MotifHiDPIIconsTest, createJPanel, $JPanel*)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MotifHiDPIIconsTest, createUI, void)},
		{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MotifHiDPIIconsTest, lambda$createUI$0, void, $JFrame*, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifHiDPIIconsTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MotifHiDPIIconsTest$2", nullptr, nullptr, 0},
		{"MotifHiDPIIconsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MotifHiDPIIconsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MotifHiDPIIconsTest$2,MotifHiDPIIconsTest$1"
	};
	$loadClass(MotifHiDPIIconsTest, name, initialize, &classInfo$$, MotifHiDPIIconsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MotifHiDPIIconsTest);
	});
	return class$;
}

$Class* MotifHiDPIIconsTest::class$ = nullptr;