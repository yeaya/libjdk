#include <MissingCharsKorean.h>
#include <MissingCharsKorean$1.h>
#include <java/awt/AWTException.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef BOLD
#undef CENTER
#undef EXIT_ON_CLOSE
#undef NORTH
#undef SOUTH
#undef VK_BACK_SLASH
#undef VK_BACK_SPACE
#undef VK_G
#undef VK_H
#undef VK_Q
#undef VK_SLASH

using $MissingCharsKorean$1 = ::MissingCharsKorean$1;
using $intArray2 = $Array<int32_t, 2>;
using $AWTException = ::java::awt::AWTException;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $Robot = ::java::awt::Robot;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;

class MissingCharsKorean$$Lambda$lambda$main$0 : public $Runnable {
	$class(MissingCharsKorean$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MissingCharsKorean::lambda$main$0();
	}
};
$Class* MissingCharsKorean$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingCharsKorean$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MissingCharsKorean$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MissingCharsKorean$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MissingCharsKorean$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingCharsKorean$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$main$0::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$setupUI$1$1 : public $ActionListener {
	$class(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* btnStartTest, $JButton* btnCancelTest) {
		$set(this, btnStartTest, btnStartTest);
		$set(this, btnCancelTest, btnCancelTest);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MissingCharsKorean::lambda$setupUI$1(btnStartTest, btnCancelTest, e);
	}
	$JButton* btnStartTest = nullptr;
	$JButton* btnCancelTest = nullptr;
};
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"btnStartTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnStartTest)},
		{"btnCancelTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnCancelTest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, init$, void, $JButton*, $JButton*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MissingCharsKorean$$Lambda$lambda$setupUI$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingCharsKorean$$Lambda$lambda$setupUI$1$1);
	});
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$1$1::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$setupUI$2$2 : public $ActionListener {
	$class(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MissingCharsKorean::lambda$setupUI$2(e);
	}
};
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MissingCharsKorean$$Lambda$lambda$setupUI$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingCharsKorean$$Lambda$lambda$setupUI$2$2);
	});
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$2$2::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$performTasks$3$3 : public $Runnable {
	$class(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MissingCharsKorean::lambda$performTasks$3();
	}
};
$Class* MissingCharsKorean$$Lambda$lambda$performTasks$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MissingCharsKorean$$Lambda$lambda$performTasks$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingCharsKorean$$Lambda$lambda$performTasks$3$3);
	});
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$performTasks$3$3::class$ = nullptr;

bool MissingCharsKorean::testPassed = false;
bool MissingCharsKorean::startTest = false;
$ints* MissingCharsKorean::expectedResults = nullptr;
$intArray2* MissingCharsKorean::inKeyCodes = nullptr;
$JFrame* MissingCharsKorean::frame = nullptr;
$JLabel* MissingCharsKorean::lblTestStatus = nullptr;
$JTextField* MissingCharsKorean::textFieldMain = nullptr;
$String* MissingCharsKorean::testResult = nullptr;
$CountDownLatch* MissingCharsKorean::testStartLatch = nullptr;

void MissingCharsKorean::init$() {
}

void MissingCharsKorean::main($StringArray* args) {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(MissingCharsKorean$$Lambda$lambda$main$0));
	MissingCharsKorean::testStartLatch->await();
	if (MissingCharsKorean::startTest) {
		glyphTest();
		$nc(MissingCharsKorean::frame)->dispose();
		if (MissingCharsKorean::testPassed) {
			$nc($System::out)->println(MissingCharsKorean::testResult);
		} else {
			$throwNew($RuntimeException, $$str({"Korean text missing characters : "_s, MissingCharsKorean::testResult}));
		}
	} else {
		$throwNew($RuntimeException, "User has not executed the test"_s);
	}
}

void MissingCharsKorean::setupUI() {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	$var($String, description, " 1. Go to \"System Preferences -> Keyboard -> Input Sources\" and add \"2-Set Korean\" from Korean language group \n 2. Set current IM to \"2-Set Korean\" \n 3. Try typing in the text field to ensure that Korean keyboard has been successfully selected \n 4. Now click on \"Start Test\" button \n"_s);
	$var($String, title, "Missing Characters Korean Test (Mac OS)"_s);
	$assignStatic(MissingCharsKorean::frame, $new($JFrame, title));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	$var($JPanel, textEditPanel, $new($JPanel, $$new($FlowLayout)));
	$assignStatic(MissingCharsKorean::textFieldMain, $new($JTextField, 20));
	$var($Font, font, $new($Font, "Source Han Serif K"_s, $Font::BOLD, 12));
	MissingCharsKorean::textFieldMain->setFont(font);
	textEditPanel->add(MissingCharsKorean::textFieldMain);
	mainPanel->add(textEditPanel, $BorderLayout::CENTER);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, btnStartTest, $new($JButton, "Start Test"_s));
	$var($JButton, btnCancelTest, $new($JButton, "Cancel Test"_s));
	btnStartTest->addActionListener($$new(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnStartTest, btnCancelTest));
	btnCancelTest->addActionListener($$new(MissingCharsKorean$$Lambda$lambda$setupUI$2$2));
	mainPanel->add(textArea, $BorderLayout::NORTH);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(btnStartTest);
	buttonPanel->add(btnCancelTest);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$assignStatic(MissingCharsKorean::lblTestStatus, $new($JLabel, ""_s));
	MissingCharsKorean::lblTestStatus->setMinimumSize($$new($Dimension, 150, 20));
	$nc(MissingCharsKorean::lblTestStatus)->setPreferredSize($$new($Dimension, 150, 20));
	$nc(MissingCharsKorean::lblTestStatus)->setVisible(true);
	textEditPanel->add(MissingCharsKorean::lblTestStatus);
	$nc(MissingCharsKorean::frame)->add(mainPanel);
	$nc(MissingCharsKorean::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(MissingCharsKorean::frame)->pack();
	$nc(MissingCharsKorean::frame)->setLocationRelativeTo(nullptr);
	$nc(MissingCharsKorean::frame)->addWindowListener($$new($MissingCharsKorean$1));
	$nc(MissingCharsKorean::frame)->setVisible(true);
}

void MissingCharsKorean::glyphTest() {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	try {
		$var($Robot, robotKeySimulator, $new($Robot));
		performTasks(robotKeySimulator);
	} catch ($AWTException& e) {
		$nc($System::err)->print($$str({"Creation Of Robot Failed : "_s, $(e->getMessage())}));
		MissingCharsKorean::testPassed = false;
	}
}

void MissingCharsKorean::performTasks($Robot* robotForKeyInput) {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	int32_t taskCount = 0;
	$nc(MissingCharsKorean::lblTestStatus)->setText("Running Tests.."_s);
	$nc(robotForKeyInput)->setAutoDelay(500);
	while (setKeyInput(taskCount)) {
		$nc(MissingCharsKorean::textFieldMain)->setText(""_s);
		$nc(MissingCharsKorean::textFieldMain)->requestFocusInWindow();
		enterInput(robotForKeyInput, MissingCharsKorean::inKeyCodes);
		++taskCount;
		try {
			$SwingUtilities::invokeAndWait($$new(MissingCharsKorean$$Lambda$lambda$performTasks$3$3));
		} catch ($Exception& e) {
			$nc($System::err)->print($$str({"validateInput Failed : "_s, $(e->getMessage())}));
			MissingCharsKorean::testPassed = false;
			break;
		}
		if (!MissingCharsKorean::testPassed) {
			break;
		}
		setTaskStatus(false, taskCount);
	}
	setTaskStatus(true, taskCount);
}

bool MissingCharsKorean::setKeyInput(int32_t iCount) {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	bool inputSet = true;
	switch (iCount) {
	case 0:
		$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
			12610,
			47
		}));
		$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_SLASH})
		}));
		break;
	case 1:
		$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
			12610,
			47,
			0x0000d638,
			92
		}));
		$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_SLASH}),
			$$new($ints, {$KeyEvent::VK_G}),
			$$new($ints, {$KeyEvent::VK_H}),
			$$new($ints, {$KeyEvent::VK_BACK_SLASH})
		}));
		break;
	case 2:
		$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
			12610,
			47,
			0x0000d649,
			92
		}));
		$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_SLASH}),
			$$new($ints, {$KeyEvent::VK_G}),
			$$new($ints, {$KeyEvent::VK_H}),
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_BACK_SLASH})
		}));
		break;
	case 3:
		$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
			12610,
			47,
			0x0000d638,
			92
		}));
		$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_SLASH}),
			$$new($ints, {$KeyEvent::VK_G}),
			$$new($ints, {$KeyEvent::VK_H}),
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
			$$new($ints, {$KeyEvent::VK_BACK_SLASH})
		}));
		break;
	case 4:
		$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
			12610,
			47,
			12622,
			92
		}));
		$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_SLASH}),
			$$new($ints, {$KeyEvent::VK_G}),
			$$new($ints, {$KeyEvent::VK_H}),
			$$new($ints, {$KeyEvent::VK_Q}),
			$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
			$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
			$$new($ints, {$KeyEvent::VK_BACK_SLASH})
		}));
		break;
	default:
		inputSet = false;
		break;
	}
	return inputSet;
}

void MissingCharsKorean::enterInput($Robot* robotKeyInput, $intArray2* keyInputs) {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(keyInputs)->length; ++i) {
		$var($String, strKeyInput, "KeyPress=>"_s);
		int32_t noOfKeyInputs = $nc(keyInputs->get(i))->length;
		for (int32_t j = 0; j < noOfKeyInputs; ++j) {
			$nc(robotKeyInput)->keyPress($nc(keyInputs->get(i))->get(j));
			$plusAssign(strKeyInput, $$str({($($Integer::toHexString($nc(keyInputs->get(i))->get(j)))), ":"_s}));
		}
		$plusAssign(strKeyInput, "KeyRelease=>"_s);
		for (int32_t j = noOfKeyInputs - 1; j >= 0; --j) {
			$nc(robotKeyInput)->keyRelease($nc(keyInputs->get(i))->get(j));
			$plusAssign(strKeyInput, $$str({($($Integer::toHexString($nc(keyInputs->get(i))->get(j)))), ":"_s}));
		}
		$nc($System::out)->println(strKeyInput);
	}
}

void MissingCharsKorean::validateInput() {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	MissingCharsKorean::testPassed = false;
	if (MissingCharsKorean::expectedResults != nullptr) {
		$var($String, strCurr, $nc(MissingCharsKorean::textFieldMain)->getText());
		if ($nc(MissingCharsKorean::expectedResults)->length == $nc(strCurr)->length()) {
			MissingCharsKorean::testPassed = true;
			for (int32_t i = 0; i < strCurr->length(); ++i) {
				int32_t charActual = strCurr->charAt(i);
				if (charActual != MissingCharsKorean::expectedResults->get(i)) {
					$nc($System::err)->println($$str({"<"_s, $$str(i), "> Actual = "_s, $$str(charActual), " Expected = "_s, $$str(MissingCharsKorean::expectedResults->get(i))}));
					MissingCharsKorean::testPassed = false;
					break;
				}
			}
		}
	}
}

void MissingCharsKorean::setTaskStatus(bool allTasksPerformed, int32_t taskCount) {
	$init(MissingCharsKorean);
	$useLocalObjectStack();
	if (MissingCharsKorean::testPassed) {
		if (allTasksPerformed) {
			$assignStatic(MissingCharsKorean::testResult, "All Tests Passed"_s);
		} else {
			$assignStatic(MissingCharsKorean::testResult, $str({"Test "_s, $($Integer::toString(taskCount)), " Passed"_s}));
		}
	} else {
		$assignStatic(MissingCharsKorean::testResult, $str({"Test "_s, $($Integer::toString(taskCount)), " Failed"_s}));
	}
	$nc(MissingCharsKorean::lblTestStatus)->setText(MissingCharsKorean::testResult);
}

void MissingCharsKorean::lambda$performTasks$3() {
	$init(MissingCharsKorean);
	validateInput();
}

void MissingCharsKorean::lambda$setupUI$2($ActionEvent* e) {
	$init(MissingCharsKorean);
	$nc(MissingCharsKorean::frame)->dispose();
	MissingCharsKorean::testStartLatch->countDown();
}

void MissingCharsKorean::lambda$setupUI$1($JButton* btnStartTest, $JButton* btnCancelTest, $ActionEvent* e) {
	$init(MissingCharsKorean);
	$nc(btnStartTest)->setEnabled(false);
	$nc(btnCancelTest)->setEnabled(false);
	MissingCharsKorean::startTest = true;
	MissingCharsKorean::testStartLatch->countDown();
}

void MissingCharsKorean::lambda$main$0() {
	$init(MissingCharsKorean);
	setupUI();
}

void MissingCharsKorean::clinit$($Class* clazz) {
	MissingCharsKorean::testPassed = false;
	MissingCharsKorean::startTest = false;
	$assignStatic(MissingCharsKorean::expectedResults, nullptr);
	$assignStatic(MissingCharsKorean::inKeyCodes, nullptr);
	$assignStatic(MissingCharsKorean::frame, nullptr);
	$assignStatic(MissingCharsKorean::lblTestStatus, nullptr);
	$assignStatic(MissingCharsKorean::textFieldMain, nullptr);
	$assignStatic(MissingCharsKorean::testStartLatch, $new($CountDownLatch, 1));
}

MissingCharsKorean::MissingCharsKorean() {
}

$Class* MissingCharsKorean::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MissingCharsKorean$$Lambda$lambda$main$0")) {
			return MissingCharsKorean$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("MissingCharsKorean$$Lambda$lambda$setupUI$1$1")) {
			return MissingCharsKorean$$Lambda$lambda$setupUI$1$1::load$(name, initialize);
		}
		if (name->equals("MissingCharsKorean$$Lambda$lambda$setupUI$2$2")) {
			return MissingCharsKorean$$Lambda$lambda$setupUI$2$2::load$(name, initialize);
		}
		if (name->equals("MissingCharsKorean$$Lambda$lambda$performTasks$3$3")) {
			return MissingCharsKorean$$Lambda$lambda$performTasks$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, testPassed)},
		{"startTest", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, startTest)},
		{"expectedResults", "[I", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, expectedResults)},
		{"inKeyCodes", "[[I", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, inKeyCodes)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, frame)},
		{"lblTestStatus", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, lblTestStatus)},
		{"textFieldMain", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, textFieldMain)},
		{"testResult", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, testResult)},
		{"testStartLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MissingCharsKorean, testStartLatch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingCharsKorean, init$, void)},
		{"enterInput", "(Ljava/awt/Robot;[[I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MissingCharsKorean, enterInput, void, $Robot*, $intArray2*)},
		{"glyphTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MissingCharsKorean, glyphTest, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MissingCharsKorean, lambda$main$0, void)},
		{"lambda$performTasks$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MissingCharsKorean, lambda$performTasks$3, void)},
		{"lambda$setupUI$1", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MissingCharsKorean, lambda$setupUI$1, void, $JButton*, $JButton*, $ActionEvent*)},
		{"lambda$setupUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MissingCharsKorean, lambda$setupUI$2, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MissingCharsKorean, main, void, $StringArray*), "java.lang.Exception"},
		{"performTasks", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MissingCharsKorean, performTasks, void, $Robot*)},
		{"setKeyInput", "(I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MissingCharsKorean, setKeyInput, bool, int32_t)},
		{"setTaskStatus", "(ZI)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MissingCharsKorean, setTaskStatus, void, bool, int32_t)},
		{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MissingCharsKorean, setupUI, void)},
		{"validateInput", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MissingCharsKorean, validateInput, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MissingCharsKorean$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MissingCharsKorean",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MissingCharsKorean$1"
	};
	$loadClass(MissingCharsKorean, name, initialize, &classInfo$$, MissingCharsKorean::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MissingCharsKorean);
	});
	return class$;
}

$Class* MissingCharsKorean::class$ = nullptr;