#include <JapaneseReadingAttributes.h>
#include <JapaneseReadingAttributes$1.h>
#include <JapaneseReadingAttributes$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
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
#include <java/util/ArrayList.h>
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

#undef CENTER
#undef EXIT_ON_CLOSE
#undef NORTH
#undef SOUTH
#undef VK_A
#undef VK_B
#undef VK_E
#undef VK_ENTER
#undef VK_I
#undef VK_N
#undef VK_O
#undef VK_S
#undef VK_SPACE
#undef VK_U
#undef VK_Z

using $JapaneseReadingAttributes$1 = ::JapaneseReadingAttributes$1;
using $JapaneseReadingAttributes$2 = ::JapaneseReadingAttributes$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;

class JapaneseReadingAttributes$$Lambda$lambda$main$0 : public $Runnable {
	$class(JapaneseReadingAttributes$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JapaneseReadingAttributes::lambda$main$0();
	}
};
$Class* JapaneseReadingAttributes$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JapaneseReadingAttributes$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JapaneseReadingAttributes$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JapaneseReadingAttributes$$Lambda$lambda$main$0::class$ = nullptr;

class JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1 : public $ActionListener {
	$class(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* btnStartTest, $JButton* btnCancelTest) {
		$set(this, btnStartTest, btnStartTest);
		$set(this, btnCancelTest, btnCancelTest);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JapaneseReadingAttributes::lambda$setupUI$1(btnStartTest, btnCancelTest, e);
	}
	$JButton* btnStartTest = nullptr;
	$JButton* btnCancelTest = nullptr;
};
$Class* JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"btnStartTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, btnStartTest)},
		{"btnCancelTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, btnCancelTest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, init$, void, $JButton*, $JButton*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1);
	});
	return class$;
}
$Class* JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1::class$ = nullptr;

class JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2 : public $ActionListener {
	$class(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JapaneseReadingAttributes::lambda$setupUI$2(e);
	}
};
$Class* JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2);
	});
	return class$;
}
$Class* JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2::class$ = nullptr;

class JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3 : public $Runnable {
	$class(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JapaneseReadingAttributes::lambda$performTasks$3();
	}
};
$Class* JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3);
	});
	return class$;
}
$Class* JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3::class$ = nullptr;

class JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4 : public $Runnable {
	$class(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JapaneseReadingAttributes::lambda$performTasks$4();
	}
};
$Class* JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4);
	});
	return class$;
}
$Class* JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4::class$ = nullptr;

bool JapaneseReadingAttributes::testPassed = false;
bool JapaneseReadingAttributes::startTest = false;
$JFrame* JapaneseReadingAttributes::frame = nullptr;
$JLabel* JapaneseReadingAttributes::lblTestStatus = nullptr;
$JTextField* JapaneseReadingAttributes::textFieldMain = nullptr;
$JTextField* JapaneseReadingAttributes::textFieldReading = nullptr;
$String* JapaneseReadingAttributes::testResult = nullptr;
$String* JapaneseReadingAttributes::readingPass1 = nullptr;
$String* JapaneseReadingAttributes::readingPass2 = nullptr;
$CountDownLatch* JapaneseReadingAttributes::testStartLatch = nullptr;

void JapaneseReadingAttributes::init$() {
}

void JapaneseReadingAttributes::main($StringArray* args) {
	$init(JapaneseReadingAttributes);
	$SwingUtilities::invokeAndWait($$new(JapaneseReadingAttributes$$Lambda$lambda$main$0));
	JapaneseReadingAttributes::testStartLatch->await();
	if (JapaneseReadingAttributes::startTest) {
		glyphTest();
		$nc(JapaneseReadingAttributes::frame)->dispose();
		if (JapaneseReadingAttributes::testPassed) {
			$nc($System::out)->println(JapaneseReadingAttributes::testResult);
		} else {
			$throwNew($RuntimeException, JapaneseReadingAttributes::testResult);
		}
	} else {
		$throwNew($RuntimeException, "User has not executed the test"_s);
	}
}

void JapaneseReadingAttributes::setupUI() {
	$init(JapaneseReadingAttributes);
	$useLocalObjectStack();
	$var($String, description, " 1. Go to \"Language Preferences -> Add a Language\" and add \"Japanese\"\n 2. Set current IM to \"Japanese\" and IME option to \"Full width Katakana\" \n 3. Try typing in the text field to ensure that Japanese IME has been successfully selected \n 4. Now click on \"Start Test\" button \n"_s);
	$var($String, title, "Reading Attributes test Japanese IME (Windows)"_s);
	$assignStatic(JapaneseReadingAttributes::frame, $new($JFrame, title));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	$var($JPanel, textEditPanel, $new($JPanel, $$new($FlowLayout)));
	$assignStatic(JapaneseReadingAttributes::textFieldMain, $new($JTextField, 20));
	$assignStatic(JapaneseReadingAttributes::textFieldReading, $new($JTextField, 20));
	JapaneseReadingAttributes::textFieldReading->setEditable(false);
	textEditPanel->add(JapaneseReadingAttributes::textFieldMain);
	textEditPanel->add(JapaneseReadingAttributes::textFieldReading);
	mainPanel->add(textEditPanel, $BorderLayout::CENTER);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, btnStartTest, $new($JButton, "Start Test"_s));
	$var($JButton, btnCancelTest, $new($JButton, "Cancel Test"_s));
	btnStartTest->addActionListener($$new(JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1, btnStartTest, btnCancelTest));
	btnCancelTest->addActionListener($$new(JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2));
	mainPanel->add(textArea, $BorderLayout::NORTH);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(btnStartTest);
	buttonPanel->add(btnCancelTest);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$assignStatic(JapaneseReadingAttributes::lblTestStatus, $new($JLabel, ""_s));
	JapaneseReadingAttributes::lblTestStatus->setMinimumSize($$new($Dimension, 250, 20));
	$nc(JapaneseReadingAttributes::lblTestStatus)->setPreferredSize($$new($Dimension, 250, 20));
	$nc(JapaneseReadingAttributes::lblTestStatus)->setVisible(true);
	textEditPanel->add(JapaneseReadingAttributes::lblTestStatus);
	$nc(JapaneseReadingAttributes::frame)->add(mainPanel);
	$nc(JapaneseReadingAttributes::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(JapaneseReadingAttributes::frame)->pack();
	$nc(JapaneseReadingAttributes::frame)->setLocationRelativeTo(nullptr);
	$nc(JapaneseReadingAttributes::frame)->addWindowListener($$new($JapaneseReadingAttributes$1));
	$nc(JapaneseReadingAttributes::textFieldMain)->addInputMethodListener($$new($JapaneseReadingAttributes$2));
	$nc(JapaneseReadingAttributes::frame)->setVisible(true);
}

void JapaneseReadingAttributes::glyphTest() {
	$init(JapaneseReadingAttributes);
	$var($Robot, robotKeySimulator, $new($Robot));
	performTasks(robotKeySimulator);
}

void JapaneseReadingAttributes::performTasks($Robot* robotForKeyInput) {
	$init(JapaneseReadingAttributes);
	$useLocalObjectStack();
	$nc(JapaneseReadingAttributes::lblTestStatus)->setText("Running Tests.."_s);
	$nc(robotForKeyInput)->setAutoDelay(500);
	$var($ArrayList, keyCodesToUse, $new($ArrayList));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_A)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_B)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_E)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_SPACE)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_SPACE)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_ENTER)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_S)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_I)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_N)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_Z)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_O)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_U)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_SPACE)));
	keyCodesToUse->add($($Integer::valueOf($KeyEvent::VK_ENTER)));
	$nc(JapaneseReadingAttributes::textFieldMain)->requestFocusInWindow();
	robotForKeyInput->waitForIdle();
	enterInput(robotForKeyInput, keyCodesToUse);
	$SwingUtilities::invokeAndWait($$new(JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3));
	if (setTaskStatus(JapaneseReadingAttributes::readingPass1, 1)) {
		keyCodesToUse->remove($($Integer::valueOf($KeyEvent::VK_ENTER)));
		enterInput(robotForKeyInput, keyCodesToUse);
		$SwingUtilities::invokeAndWait($$new(JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4));
		if (setTaskStatus(JapaneseReadingAttributes::readingPass2, 2)) {
			if ($nc(JapaneseReadingAttributes::readingPass1)->equals(JapaneseReadingAttributes::readingPass2)) {
				JapaneseReadingAttributes::testPassed = true;
				$assignStatic(JapaneseReadingAttributes::testResult, "Test Passed : Same reading attribute obtained from both passes "_s);
				$nc(JapaneseReadingAttributes::lblTestStatus)->setText(JapaneseReadingAttributes::testResult);
			} else {
				$assignStatic(JapaneseReadingAttributes::testResult, $str({"Test Failed : Reading attribute from Pass 1 <"_s, JapaneseReadingAttributes::readingPass1, "> != Reading attribute from Pass 2 <"_s, JapaneseReadingAttributes::readingPass2, ">"_s}));
			}
		}
	}
}

void JapaneseReadingAttributes::enterInput($Robot* robotKeyInput, $ArrayList* keyInputs) {
	$init(JapaneseReadingAttributes);
	$useLocalObjectStack();
	$nc(JapaneseReadingAttributes::textFieldReading)->setText(""_s);
	$nc(JapaneseReadingAttributes::textFieldMain)->setText(""_s);
	$var($String, strKeyInput, "KeyPress=>"_s);
	int32_t nOfKeyInputs = $nc(keyInputs)->size();
	for (int32_t i = 0; i < nOfKeyInputs; ++i) {
		int32_t keyToUse = $$sure($Integer, keyInputs->get(i))->intValue();
		$nc(robotKeyInput)->keyPress(keyToUse);
		robotKeyInput->keyRelease(keyToUse);
		$plusAssign(strKeyInput, $$str({($($Integer::toHexString(keyToUse))), ":"_s}));
	}
	$nc($System::out)->println(strKeyInput);
}

bool JapaneseReadingAttributes::setTaskStatus($String* readingValue, int32_t passCount) {
	$init(JapaneseReadingAttributes);
	$useLocalObjectStack();
	bool status = false;
	if (!$nc(readingValue)->isEmpty()) {
		$assignStatic(JapaneseReadingAttributes::testResult, $str({"Attribute : "_s, readingValue, "read from pass "_s, $($Integer::toString(passCount))}));
		status = true;
	} else {
		$assignStatic(JapaneseReadingAttributes::testResult, $str({"Failed to read Reading attribute from pass  "_s, $($Integer::toString(passCount))}));
	}
	$nc(JapaneseReadingAttributes::lblTestStatus)->setText(JapaneseReadingAttributes::testResult);
	return status;
}

void JapaneseReadingAttributes::lambda$performTasks$4() {
	$init(JapaneseReadingAttributes);
	$assignStatic(JapaneseReadingAttributes::readingPass2, $nc(JapaneseReadingAttributes::textFieldReading)->getText());
}

void JapaneseReadingAttributes::lambda$performTasks$3() {
	$init(JapaneseReadingAttributes);
	$assignStatic(JapaneseReadingAttributes::readingPass1, $nc(JapaneseReadingAttributes::textFieldReading)->getText());
}

void JapaneseReadingAttributes::lambda$setupUI$2($ActionEvent* e) {
	$init(JapaneseReadingAttributes);
	$nc(JapaneseReadingAttributes::frame)->dispose();
	JapaneseReadingAttributes::testStartLatch->countDown();
}

void JapaneseReadingAttributes::lambda$setupUI$1($JButton* btnStartTest, $JButton* btnCancelTest, $ActionEvent* e) {
	$init(JapaneseReadingAttributes);
	$nc(btnStartTest)->setEnabled(false);
	$nc(btnCancelTest)->setEnabled(false);
	JapaneseReadingAttributes::startTest = true;
	JapaneseReadingAttributes::testStartLatch->countDown();
}

void JapaneseReadingAttributes::lambda$main$0() {
	$init(JapaneseReadingAttributes);
	setupUI();
}

void JapaneseReadingAttributes::clinit$($Class* clazz) {
	JapaneseReadingAttributes::testPassed = false;
	JapaneseReadingAttributes::startTest = false;
	$assignStatic(JapaneseReadingAttributes::frame, nullptr);
	$assignStatic(JapaneseReadingAttributes::lblTestStatus, nullptr);
	$assignStatic(JapaneseReadingAttributes::textFieldMain, nullptr);
	$assignStatic(JapaneseReadingAttributes::textFieldReading, nullptr);
	$assignStatic(JapaneseReadingAttributes::testStartLatch, $new($CountDownLatch, 1));
}

JapaneseReadingAttributes::JapaneseReadingAttributes() {
}

$Class* JapaneseReadingAttributes::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JapaneseReadingAttributes$$Lambda$lambda$main$0")) {
			return JapaneseReadingAttributes$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1")) {
			return JapaneseReadingAttributes$$Lambda$lambda$setupUI$1$1::load$(name, initialize);
		}
		if (name->equals("JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2")) {
			return JapaneseReadingAttributes$$Lambda$lambda$setupUI$2$2::load$(name, initialize);
		}
		if (name->equals("JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3")) {
			return JapaneseReadingAttributes$$Lambda$lambda$performTasks$3$3::load$(name, initialize);
		}
		if (name->equals("JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4")) {
			return JapaneseReadingAttributes$$Lambda$lambda$performTasks$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, testPassed)},
		{"startTest", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, startTest)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, frame)},
		{"lblTestStatus", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, lblTestStatus)},
		{"textFieldMain", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, textFieldMain)},
		{"textFieldReading", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, textFieldReading)},
		{"testResult", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, testResult)},
		{"readingPass1", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, readingPass1)},
		{"readingPass2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JapaneseReadingAttributes, readingPass2)},
		{"testStartLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JapaneseReadingAttributes, testStartLatch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JapaneseReadingAttributes, init$, void)},
		{"enterInput", "(Ljava/awt/Robot;Ljava/util/ArrayList;)V", "(Ljava/awt/Robot;Ljava/util/ArrayList<Ljava/lang/Integer;>;)V", $PRIVATE | $STATIC, $staticMethod(JapaneseReadingAttributes, enterInput, void, $Robot*, $ArrayList*)},
		{"glyphTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JapaneseReadingAttributes, glyphTest, void), "java.lang.Exception"},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JapaneseReadingAttributes, lambda$main$0, void)},
		{"lambda$performTasks$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JapaneseReadingAttributes, lambda$performTasks$3, void)},
		{"lambda$performTasks$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JapaneseReadingAttributes, lambda$performTasks$4, void)},
		{"lambda$setupUI$1", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JapaneseReadingAttributes, lambda$setupUI$1, void, $JButton*, $JButton*, $ActionEvent*)},
		{"lambda$setupUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JapaneseReadingAttributes, lambda$setupUI$2, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseReadingAttributes, main, void, $StringArray*), "java.lang.Exception"},
		{"performTasks", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseReadingAttributes, performTasks, void, $Robot*), "java.lang.Exception"},
		{"setTaskStatus", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JapaneseReadingAttributes, setTaskStatus, bool, $String*, int32_t)},
		{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JapaneseReadingAttributes, setupUI, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JapaneseReadingAttributes$2", nullptr, nullptr, 0},
		{"JapaneseReadingAttributes$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JapaneseReadingAttributes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JapaneseReadingAttributes$2,JapaneseReadingAttributes$1"
	};
	$loadClass(JapaneseReadingAttributes, name, initialize, &classInfo$$, JapaneseReadingAttributes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes);
	});
	return class$;
}

$Class* JapaneseReadingAttributes::class$ = nullptr;