#include <TestJFileChooserNewFolderAction.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
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
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJFileChooserNewFolderAction$$Lambda$createInstructionUI : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::createInstructionUI();
	}
};
$Class* TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJFileChooserNewFolderAction$$Lambda$createInstructionUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI);
	});
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$createTestUI$1 : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::createTestUI();
	}
};
$Class* TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJFileChooserNewFolderAction$$Lambda$createTestUI$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1);
	});
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$disposeUI$2 : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::disposeUI();
	}
};
$Class* TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJFileChooserNewFolderAction$$Lambda$disposeUI$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2);
	});
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3 : public $ActionListener {
	$class(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJFileChooserNewFolderAction::lambda$createInstructionUI$0(e);
	}
};
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3);
	});
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4 : public $ActionListener {
	$class(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJFileChooserNewFolderAction::lambda$createInstructionUI$1(e);
	}
};
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4);
	});
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::class$ = nullptr;

$JFrame* TestJFileChooserNewFolderAction::instructionFrame = nullptr;
$String* TestJFileChooserNewFolderAction::lafName = nullptr;
$volatile(bool) TestJFileChooserNewFolderAction::testPassed = false;
$volatile($CountDownLatch*) TestJFileChooserNewFolderAction::countDownLatch = nullptr;
$String* TestJFileChooserNewFolderAction::INSTRUCTIONS = nullptr;

void TestJFileChooserNewFolderAction::init$() {
}

void TestJFileChooserNewFolderAction::main($StringArray* args) {
	$init(TestJFileChooserNewFolderAction);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Mac"_s)) {
		$nc($System::out)->println("This test is meant for Mac platform only"_s);
		return;
	}
	$assignStatic(TestJFileChooserNewFolderAction::countDownLatch, $new($CountDownLatch, 1));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestJFileChooserNewFolderAction::lafName)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("Aqua L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$SwingUtilities::invokeAndWait($$new(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI));
	$SwingUtilities::invokeAndWait($$new(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1));
	$init($TimeUnit);
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->await(15, $TimeUnit::MINUTES);
	$SwingUtilities::invokeAndWait($$new(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2));
	if (!TestJFileChooserNewFolderAction::testPassed) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJFileChooserNewFolderAction::createInstructionUI() {
	$init(TestJFileChooserNewFolderAction);
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
	instructionTextArea->setText(TestJFileChooserNewFolderAction::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	mainControlPanel->add(instructionTextArea, gbc);
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener($$new(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(resultButtonPanel, gbc);
	TestJFileChooserNewFolderAction::instructionFrame->pack();
	TestJFileChooserNewFolderAction::instructionFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	TestJFileChooserNewFolderAction::instructionFrame->add(mainControlPanel);
	TestJFileChooserNewFolderAction::instructionFrame->pack();
	TestJFileChooserNewFolderAction::instructionFrame->setVisible(true);
}

void TestJFileChooserNewFolderAction::createTestUI() {
	$init(TestJFileChooserNewFolderAction);
	$$new($JFileChooser)->showSaveDialog(nullptr);
}

void TestJFileChooserNewFolderAction::disposeUI() {
	$init(TestJFileChooserNewFolderAction);
	TestJFileChooserNewFolderAction::instructionFrame->dispose();
}

void TestJFileChooserNewFolderAction::lambda$createInstructionUI$1($ActionEvent* e) {
	$init(TestJFileChooserNewFolderAction);
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->countDown();
}

void TestJFileChooserNewFolderAction::lambda$createInstructionUI$0($ActionEvent* e) {
	$init(TestJFileChooserNewFolderAction);
	TestJFileChooserNewFolderAction::testPassed = true;
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->countDown();
}

void TestJFileChooserNewFolderAction::clinit$($Class* clazz) {
	$assignStatic(TestJFileChooserNewFolderAction::lafName, "AquaLookAndFeel"_s);
	$assignStatic(TestJFileChooserNewFolderAction::INSTRUCTIONS, "INSTRUCTIONS:\n\nMake sure there is no folder named \"uninitializedValue\" in\nJFileChooser directory, else change JFileChooser directory.\nClick on \"New Folder\" button in JFileChooser. \nA JOptionPane will be opened to write the name of the folder.\nPress \"ESC\" key to close the JOptionPane without creating \nnew folder. Verify that JFileChooser current directory has not\nchanged and there is no folder named \"uninitializedValue\"\ncreated in the JFileChooser directory.\nIf yes, Press Pass, Otherwise, Press Fail.\n"_s);
	$assignStatic(TestJFileChooserNewFolderAction::instructionFrame, $new($JFrame));
	TestJFileChooserNewFolderAction::testPassed = false;
}

TestJFileChooserNewFolderAction::TestJFileChooserNewFolderAction() {
}

$Class* TestJFileChooserNewFolderAction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJFileChooserNewFolderAction$$Lambda$createInstructionUI")) {
			return TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::load$(name, initialize);
		}
		if (name->equals("TestJFileChooserNewFolderAction$$Lambda$createTestUI$1")) {
			return TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::load$(name, initialize);
		}
		if (name->equals("TestJFileChooserNewFolderAction$$Lambda$disposeUI$2")) {
			return TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::load$(name, initialize);
		}
		if (name->equals("TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3")) {
			return TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::load$(name, initialize);
		}
		if (name->equals("TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4")) {
			return TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"instructionFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, instructionFrame)},
		{"lafName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, lafName)},
		{"testPassed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJFileChooserNewFolderAction, testPassed)},
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJFileChooserNewFolderAction, countDownLatch)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, INSTRUCTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJFileChooserNewFolderAction, init$, void)},
		{"createInstructionUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJFileChooserNewFolderAction, createInstructionUI, void)},
		{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJFileChooserNewFolderAction, createTestUI, void)},
		{"disposeUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJFileChooserNewFolderAction, disposeUI, void)},
		{"lambda$createInstructionUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJFileChooserNewFolderAction, lambda$createInstructionUI$0, void, $ActionEvent*)},
		{"lambda$createInstructionUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJFileChooserNewFolderAction, lambda$createInstructionUI$1, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJFileChooserNewFolderAction, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJFileChooserNewFolderAction",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestJFileChooserNewFolderAction, name, initialize, &classInfo$$, TestJFileChooserNewFolderAction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJFileChooserNewFolderAction);
	});
	return class$;
}

$Class* TestJFileChooserNewFolderAction::class$ = nullptr;