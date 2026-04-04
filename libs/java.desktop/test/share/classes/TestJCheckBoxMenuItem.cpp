#include <TestJCheckBoxMenuItem.h>
#include <TestJCheckBoxMenuItem$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef LEADING
#undef MINUTES
#undef VK_K

using $TestJCheckBoxMenuItem$1 = ::TestJCheckBoxMenuItem$1;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
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
using $JButton = ::javax::swing::JButton;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

class TestJCheckBoxMenuItem$$Lambda$createInstructionUI : public $Runnable {
	$class(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJCheckBoxMenuItem::createInstructionUI();
	}
};
$Class* TestJCheckBoxMenuItem$$Lambda$createInstructionUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJCheckBoxMenuItem$$Lambda$createInstructionUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJCheckBoxMenuItem$$Lambda$createInstructionUI);
	});
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$createInstructionUI::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$createTestUI$1 : public $Runnable {
	$class(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJCheckBoxMenuItem::createTestUI();
	}
};
$Class* TestJCheckBoxMenuItem$$Lambda$createTestUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJCheckBoxMenuItem$$Lambda$createTestUI$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJCheckBoxMenuItem$$Lambda$createTestUI$1);
	});
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$createTestUI$1::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2 : public $ActionListener {
	$class(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJCheckBoxMenuItem::lambda$createInstructionUI$0(e);
	}
};
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2);
	});
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3 : public $ActionListener {
	$class(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJCheckBoxMenuItem::lambda$createInstructionUI$1(e);
	}
};
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3);
	});
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::class$ = nullptr;

$JFrame* TestJCheckBoxMenuItem::instructionFrame = nullptr;
$JFrame* TestJCheckBoxMenuItem::testFrame = nullptr;
$volatile(bool) TestJCheckBoxMenuItem::testResult = false;
$volatile($CountDownLatch*) TestJCheckBoxMenuItem::countDownLatch = nullptr;
$String* TestJCheckBoxMenuItem::INSTRUCTIONS = nullptr;
$String* TestJCheckBoxMenuItem::synthStyleXML = nullptr;

void TestJCheckBoxMenuItem::init$() {
}

void TestJCheckBoxMenuItem::main($StringArray* args) {
	$init(TestJCheckBoxMenuItem);
	$useLocalObjectStack();
	$assignStatic(TestJCheckBoxMenuItem::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeAndWait($$new(TestJCheckBoxMenuItem$$Lambda$createInstructionUI));
	$var($SynthLookAndFeel, lookAndFeel, $new($SynthLookAndFeel));
	lookAndFeel->load($$new($ByteArrayInputStream, $(TestJCheckBoxMenuItem::synthStyleXML->getBytes("UTF8"_s))), TestJCheckBoxMenuItem::class$);
	try {
		$UIManager::setLookAndFeel(lookAndFeel);
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println("Synth L&F could not be set, so this test cannot be run in this scenario "_s);
		return;
	}
	$SwingUtilities::invokeAndWait($$new(TestJCheckBoxMenuItem$$Lambda$createTestUI$1));
	$init($TimeUnit);
	$nc(TestJCheckBoxMenuItem::countDownLatch)->await(15, $TimeUnit::MINUTES);
	disposeUI();
	if (!TestJCheckBoxMenuItem::testResult) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJCheckBoxMenuItem::createInstructionUI() {
	$init(TestJCheckBoxMenuItem);
	$useLocalObjectStack();
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, layout));
	$var($JPanel, resultButtonPanel, $new($JPanel, layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TestJCheckBoxMenuItem::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	mainControlPanel->add(instructionTextArea, gbc);
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener($$new(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(resultButtonPanel, gbc);
	TestJCheckBoxMenuItem::instructionFrame->pack();
	TestJCheckBoxMenuItem::instructionFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	TestJCheckBoxMenuItem::instructionFrame->add(mainControlPanel);
	TestJCheckBoxMenuItem::instructionFrame->pack();
	TestJCheckBoxMenuItem::instructionFrame->addWindowListener($$new($TestJCheckBoxMenuItem$1));
	TestJCheckBoxMenuItem::instructionFrame->setVisible(true);
}

void TestJCheckBoxMenuItem::createTestUI() {
	$init(TestJCheckBoxMenuItem);
	$useLocalObjectStack();
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "Menu"_s));
	$var($JCheckBoxMenuItem, checkBoxMenuItem, $new($JCheckBoxMenuItem));
	checkBoxMenuItem->setSelected(false);
	checkBoxMenuItem->setMnemonic($KeyEvent::VK_K);
	checkBoxMenuItem->setText("JCheckBoxMenuItem Sample Text"_s);
	checkBoxMenuItem->setHorizontalTextPosition($JCheckBoxMenuItem::LEADING);
	checkBoxMenuItem->setVerticalTextPosition($JCheckBoxMenuItem::CENTER);
	menu->add(checkBoxMenuItem);
	menuBar->add(menu);
	TestJCheckBoxMenuItem::testFrame->setJMenuBar(menuBar);
	int32_t var$1 = TestJCheckBoxMenuItem::instructionFrame->getX();
	int32_t var$0 = var$1 + TestJCheckBoxMenuItem::instructionFrame->getWidth();
	TestJCheckBoxMenuItem::testFrame->setLocation(var$0, TestJCheckBoxMenuItem::instructionFrame->getY());
	int32_t var$2 = TestJCheckBoxMenuItem::instructionFrame->getWidth();
	TestJCheckBoxMenuItem::testFrame->setPreferredSize($$new($Dimension, var$2, TestJCheckBoxMenuItem::instructionFrame->getHeight()));
	TestJCheckBoxMenuItem::testFrame->pack();
	TestJCheckBoxMenuItem::testFrame->setTitle("Test"_s);
	TestJCheckBoxMenuItem::testFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	TestJCheckBoxMenuItem::testFrame->setVisible(true);
}

void TestJCheckBoxMenuItem::disposeUI() {
	$init(TestJCheckBoxMenuItem);
	TestJCheckBoxMenuItem::instructionFrame->dispose();
	TestJCheckBoxMenuItem::testFrame->dispose();
}

void TestJCheckBoxMenuItem::lambda$createInstructionUI$1($ActionEvent* e) {
	$init(TestJCheckBoxMenuItem);
	$nc(TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

void TestJCheckBoxMenuItem::lambda$createInstructionUI$0($ActionEvent* e) {
	$init(TestJCheckBoxMenuItem);
	TestJCheckBoxMenuItem::testResult = true;
	$nc(TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

void TestJCheckBoxMenuItem::clinit$($Class* clazz) {
	$assignStatic(TestJCheckBoxMenuItem::INSTRUCTIONS, "INSTRUCTIONS:\n\nClick on the menu \"Menu\" in Test frame. Verify that the \nJCheckBoxMenuItem is resized properly and text \n\"JCheckBoxMenuItem Sample Text\" is not truncated.\nIf yes, Press Pass, Otherwise, Press Fail."_s);
	$assignStatic(TestJCheckBoxMenuItem::synthStyleXML, "<synth><style id=\"Default\"><font name=\"Dialog\" size=\"14\" /></style><bind style=\"Default\" type=\"region\" key=\".*\" /><style id=\"Check Box Menu Item\"><imageIcon id=\"CheckBoxMenuItem_Check_Icon_Selected\" path=\"Check_Icon.png\" /><insets top=\"4\" left=\"9\" bottom=\"4\" right=\"9\" /><state><property key=\"CheckBoxMenuItem.checkIcon\" value=\"CheckBoxMenuItem_Check_Icon_Selected\" /><imagePainter method=\"checkBoxMenuItemBackground\" path=\"MenuItem_Selected.png\" sourceInsets=\"2 2 2 2\" paintCenter=\"true\" stretch=\"true\" center=\"false\" /></state></style><bind style=\"Check Box Menu Item\" type=\"region\" key=\"CheckBoxMenuItem\" /></synth>"_s);
	$assignStatic(TestJCheckBoxMenuItem::instructionFrame, $new($JFrame));
	$assignStatic(TestJCheckBoxMenuItem::testFrame, $new($JFrame));
	TestJCheckBoxMenuItem::testResult = false;
}

TestJCheckBoxMenuItem::TestJCheckBoxMenuItem() {
}

$Class* TestJCheckBoxMenuItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJCheckBoxMenuItem$$Lambda$createInstructionUI")) {
			return TestJCheckBoxMenuItem$$Lambda$createInstructionUI::load$(name, initialize);
		}
		if (name->equals("TestJCheckBoxMenuItem$$Lambda$createTestUI$1")) {
			return TestJCheckBoxMenuItem$$Lambda$createTestUI$1::load$(name, initialize);
		}
		if (name->equals("TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2")) {
			return TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::load$(name, initialize);
		}
		if (name->equals("TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3")) {
			return TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"instructionFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, instructionFrame)},
		{"testFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, testFrame)},
		{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJCheckBoxMenuItem, testResult)},
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJCheckBoxMenuItem, countDownLatch)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, INSTRUCTIONS)},
		{"synthStyleXML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, synthStyleXML)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJCheckBoxMenuItem, init$, void)},
		{"createInstructionUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJCheckBoxMenuItem, createInstructionUI, void)},
		{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJCheckBoxMenuItem, createTestUI, void)},
		{"disposeUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJCheckBoxMenuItem, disposeUI, void)},
		{"lambda$createInstructionUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJCheckBoxMenuItem, lambda$createInstructionUI$0, void, $ActionEvent*)},
		{"lambda$createInstructionUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJCheckBoxMenuItem, lambda$createInstructionUI$1, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJCheckBoxMenuItem, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJCheckBoxMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJCheckBoxMenuItem",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJCheckBoxMenuItem$1"
	};
	$loadClass(TestJCheckBoxMenuItem, name, initialize, &classInfo$$, TestJCheckBoxMenuItem::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJCheckBoxMenuItem);
	});
	return class$;
}

$Class* TestJCheckBoxMenuItem::class$ = nullptr;