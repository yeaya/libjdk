#include <TestJSpinnerPressUnpress.h>
#include <TestJSpinnerPressUnpress$1.h>
#include <java/awt/Component.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
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
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $TestJSpinnerPressUnpress$1 = ::TestJSpinnerPressUnpress$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $Window = ::java::awt::Window;
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
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJSpinnerPressUnpress$$Lambda$createUI : public $Runnable {
	$class(TestJSpinnerPressUnpress$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSpinnerPressUnpress::createUI();
	}
};
$Class* TestJSpinnerPressUnpress$$Lambda$createUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSpinnerPressUnpress$$Lambda$createUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJSpinnerPressUnpress$$Lambda$createUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSpinnerPressUnpress$$Lambda$createUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJSpinnerPressUnpress$$Lambda$createUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSpinnerPressUnpress$$Lambda$createUI);
	});
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$createUI::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$dispose$1 : public $Runnable {
	$class(TestJSpinnerPressUnpress$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestJSpinnerPressUnpress$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSpinnerPressUnpress$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestJSpinnerPressUnpress$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJSpinnerPressUnpress$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSpinnerPressUnpress$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestJSpinnerPressUnpress$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSpinnerPressUnpress$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$dispose$1::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2 : public $ActionListener {
	$class(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJSpinnerPressUnpress::lambda$createUI$0(e);
	}
};
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2);
	});
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3 : public $ActionListener {
	$class(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJSpinnerPressUnpress::lambda$createUI$1(e);
	}
};
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3);
	});
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::class$ = nullptr;

$JFrame* TestJSpinnerPressUnpress::mainFrame = nullptr;
$volatile(bool) TestJSpinnerPressUnpress::testResult = false;
$volatile($CountDownLatch*) TestJSpinnerPressUnpress::countDownLatch = nullptr;
$String* TestJSpinnerPressUnpress::GTK_LAF_CLASS = nullptr;
$String* TestJSpinnerPressUnpress::INSTRUCTIONS = nullptr;

void TestJSpinnerPressUnpress::init$() {
}

void TestJSpinnerPressUnpress::main($StringArray* args) {
	$init(TestJSpinnerPressUnpress);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	$assignStatic(TestJSpinnerPressUnpress::countDownLatch, $new($CountDownLatch, 1));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestJSpinnerPressUnpress::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$SwingUtilities::invokeLater($$new(TestJSpinnerPressUnpress$$Lambda$createUI));
	$init($TimeUnit);
	$nc(TestJSpinnerPressUnpress::countDownLatch)->await(15, $TimeUnit::MINUTES);
	$SwingUtilities::invokeLater($$new(TestJSpinnerPressUnpress$$Lambda$dispose$1, $nc(TestJSpinnerPressUnpress::mainFrame)));
	if (!TestJSpinnerPressUnpress::testResult) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJSpinnerPressUnpress::createUI() {
	$init(TestJSpinnerPressUnpress);
	$useLocalObjectStack();
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, layout));
	$var($JPanel, resultButtonPanel, $new($JPanel, layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add($$new($JSpinner), gbc);
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TestJSpinnerPressUnpress::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(instructionTextArea, gbc);
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener($$new(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(resultButtonPanel, gbc);
	$nc(TestJSpinnerPressUnpress::mainFrame)->add(mainControlPanel);
	$nc(TestJSpinnerPressUnpress::mainFrame)->pack();
	$nc(TestJSpinnerPressUnpress::mainFrame)->addWindowListener($$new($TestJSpinnerPressUnpress$1));
	$nc(TestJSpinnerPressUnpress::mainFrame)->setVisible(true);
}

void TestJSpinnerPressUnpress::lambda$createUI$1($ActionEvent* e) {
	$init(TestJSpinnerPressUnpress);
	$nc(TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

void TestJSpinnerPressUnpress::lambda$createUI$0($ActionEvent* e) {
	$init(TestJSpinnerPressUnpress);
	TestJSpinnerPressUnpress::testResult = true;
	$nc(TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

void TestJSpinnerPressUnpress::clinit$($Class* clazz) {
	$assignStatic(TestJSpinnerPressUnpress::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	$assignStatic(TestJSpinnerPressUnpress::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that when spinner up/down button is pressed to change\nthe spinner value, the button\'s rendering is changed to show\nthe pressed state. If yes, Press Pass, Otherwise, Press Fail."_s);
	$assignStatic(TestJSpinnerPressUnpress::mainFrame, $new($JFrame));
	TestJSpinnerPressUnpress::testResult = false;
}

TestJSpinnerPressUnpress::TestJSpinnerPressUnpress() {
}

$Class* TestJSpinnerPressUnpress::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJSpinnerPressUnpress$$Lambda$createUI")) {
			return TestJSpinnerPressUnpress$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals("TestJSpinnerPressUnpress$$Lambda$dispose$1")) {
			return TestJSpinnerPressUnpress$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals("TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2")) {
			return TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::load$(name, initialize);
		}
		if (name->equals("TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3")) {
			return TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSpinnerPressUnpress, mainFrame)},
		{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJSpinnerPressUnpress, testResult)},
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJSpinnerPressUnpress, countDownLatch)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSpinnerPressUnpress, GTK_LAF_CLASS)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSpinnerPressUnpress, INSTRUCTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSpinnerPressUnpress, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJSpinnerPressUnpress, createUI, void)},
		{"lambda$createUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJSpinnerPressUnpress, lambda$createUI$0, void, $ActionEvent*)},
		{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJSpinnerPressUnpress, lambda$createUI$1, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJSpinnerPressUnpress, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJSpinnerPressUnpress$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJSpinnerPressUnpress",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJSpinnerPressUnpress$1"
	};
	$loadClass(TestJSpinnerPressUnpress, name, initialize, &classInfo$$, TestJSpinnerPressUnpress::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSpinnerPressUnpress);
	});
	return class$;
}

$Class* TestJSpinnerPressUnpress::class$ = nullptr;