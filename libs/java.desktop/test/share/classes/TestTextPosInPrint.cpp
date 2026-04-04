#include <TestTextPosInPrint.h>
#include <TestTextPosInPrint$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/print/PrintService.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef LEFT
#undef MILLISECONDS
#undef NORTH
#undef NO_SUCH_PAGE
#undef PAGE_EXISTS
#undef PLAIN
#undef SOUTH

using $TestTextPosInPrint$1 = ::TestTextPosInPrint$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;

class TestTextPosInPrint$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTextPosInPrint$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTextPosInPrint::lambda$main$0();
	}
};
$Class* TestTextPosInPrint$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$main$0::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestTextPosInPrint$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTextPosInPrint::lambda$main$1();
	}
};
$Class* TestTextPosInPrint$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$main$1$1::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2 : public $ActionListener {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(int64_t startTime, $Timer* timer, $JDialog* dialog, $JLabel* testTimeoutLabel) {
		this->startTime = startTime;
		$set(this, timer, timer);
		$set(this, dialog, dialog);
		$set(this, testTimeoutLabel, testTimeoutLabel);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$2(startTime, timer, dialog, testTimeoutLabel, e);
	}
	int64_t startTime = 0;
	$Timer* timer = nullptr;
	$JDialog* dialog = nullptr;
	$JLabel* testTimeoutLabel = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startTime", "J", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, startTime)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, timer)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, dialog)},
		{"testTimeoutLabel", "Ljavax/swing/JLabel;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, testTimeoutLabel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjavax/swing/Timer;Ljavax/swing/JDialog;Ljavax/swing/JLabel;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, init$, void, int64_t, $Timer*, $JDialog*, $JLabel*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3 : public $ActionListener {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* testButton, $JButton* passButton, $JButton* failButton, $JDialog* dialog) {
		$set(this, testButton, testButton);
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$5(testButton, passButton, failButton, dialog, e);
	}
	$JButton* testButton = nullptr;
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	$JDialog* dialog = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, testButton)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, failButton)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, init$, void, $JButton*, $JButton*, $JButton*, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4 : public $ActionListener {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$6(dialog, e);
	}
	$JDialog* dialog = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, init$, void, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5 : public $ActionListener {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$7(dialog, e);
	}
	$JDialog* dialog = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, init$, void, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6 : public $Runnable {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JButton* passButton, $JButton* failButton, $JDialog* dialog) {
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
		$set(this, dialog, dialog);
	}
	virtual void run() override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$4(passButton, failButton, dialog);
	}
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	$JDialog* dialog = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, failButton)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, init$, void, $JButton*, $JButton*, $JDialog*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6::class$ = nullptr;

class TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7 : public $Runnable {
	$class(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JButton* passButton, $JButton* failButton) {
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
	}
	virtual void run() override {
		TestTextPosInPrint::lambda$createAndShowTestDialog$3(passButton, failButton);
	}
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
};
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, failButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, init$, void, $JButton*, $JButton*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7);
	});
	return class$;
}
$Class* TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7::class$ = nullptr;

$CountDownLatch* TestTextPosInPrint::testEndedSignal = nullptr;
$volatile($String*) TestTextPosInPrint::testFailureMsg = nullptr;
$volatile(bool) TestTextPosInPrint::testPassed = false;
$volatile(bool) TestTextPosInPrint::testFinished = false;
$PrinterJob* TestTextPosInPrint::job = nullptr;
$JPanel* TestTextPosInPrint::panel = nullptr;
$JFrame* TestTextPosInPrint::f = nullptr;

void TestTextPosInPrint::init$() {
}

void TestTextPosInPrint::main($StringArray* args) {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	$assignStatic(TestTextPosInPrint::job, $PrinterJob::getPrinterJob());
	if ($nc(TestTextPosInPrint::job)->getPrintService() == nullptr) {
		$nc($System::out)->println("This test requires printers to be installed. Exiting."_s);
		return;
	}
	$SwingUtilities::invokeLater($$new(TestTextPosInPrint$$Lambda$lambda$main$0));
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$init($TimeUnit);
			if (!TestTextPosInPrint::testEndedSignal->await(TestTextPosInPrint::testTimeout, $TimeUnit::MILLISECONDS)) {
				$throwNew($RuntimeException, $($String::format("Test timeout \'%d ms\' elapsed."_s, $$new($ObjectArray, {$($Integer::valueOf(TestTextPosInPrint::testTimeout))}))));
			}
			if (!TestTextPosInPrint::testPassed) {
				$var($String, failureMsg, TestTextPosInPrint::testFailureMsg);
				if ((failureMsg != nullptr) && (!$(failureMsg->trim())->isEmpty())) {
					$throwNew($RuntimeException, failureMsg);
				} else {
					$throwNew($RuntimeException, "Test failed."_s);
				}
			}
		} catch ($InterruptedException& ie) {
			$throwNew($RuntimeException, ie);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		TestTextPosInPrint::testFinished = true;
		$SwingUtilities::invokeAndWait($$new(TestTextPosInPrint$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestTextPosInPrint::doTest() {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$assignStatic(TestTextPosInPrint::f, $new($JFrame));
	TestTextPosInPrint::f->setLocationRelativeTo(nullptr);
	$assignStatic(TestTextPosInPrint::panel, $new($JPanel));
	TestTextPosInPrint::panel->setLayout($$new($BorderLayout));
	$var($Font, font, $new($Font, "Serif"_s, $Font::PLAIN, 12));
	$var($JLabel, l1, $new($JLabel, "      1. ABCDE"_s));
	l1->setHorizontalAlignment($SwingConstants::LEFT);
	$var($JLabel, l2, $new($JLabel, "      2. ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"_s));
	l2->setHorizontalAlignment($SwingConstants::LEFT);
	$var($JLabel, l3, $new($JLabel, "      3. ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"_s));
	l3->setHorizontalAlignment($SwingConstants::LEFT);
	$nc(TestTextPosInPrint::panel)->add($BorderLayout::NORTH, l1);
	$nc(TestTextPosInPrint::panel)->add($BorderLayout::CENTER, l2);
	$nc(TestTextPosInPrint::panel)->add($BorderLayout::SOUTH, l3);
	$$nc($nc(TestTextPosInPrint::f)->getContentPane())->add($BorderLayout::NORTH, TestTextPosInPrint::panel);
	$nc(TestTextPosInPrint::f)->setSize(400, 300);
	$nc(TestTextPosInPrint::f)->setVisible(true);
	$nc(TestTextPosInPrint::job)->setPrintable($$new(TestTextPosInPrint));
	if ($nc(TestTextPosInPrint::job)->printDialog()) {
		try {
			$nc(TestTextPosInPrint::job)->print();
		} catch ($PrinterException& pe) {
			$throwNew($RuntimeException, pe);
		}
	}
}

void TestTextPosInPrint::pass() {
	$init(TestTextPosInPrint);
	TestTextPosInPrint::testPassed = true;
	TestTextPosInPrint::testEndedSignal->countDown();
}

void TestTextPosInPrint::fail($String* failureMsg) {
	$init(TestTextPosInPrint);
	$assignStatic(TestTextPosInPrint::testFailureMsg, failureMsg);
	TestTextPosInPrint::testPassed = false;
	TestTextPosInPrint::testEndedSignal->countDown();
}

$String* TestTextPosInPrint::convertMillisToTimeStr(int32_t millis) {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	if (millis < 0) {
		return "00:00:00"_s;
	}
	int32_t hours = millis / 3600000;
	int32_t minutes = (millis - hours * 3600000) / 60000;
	int32_t seconds = (millis - hours * 3600000 - minutes * 60000) / 1000;
	return $String::format("%02d:%02d:%02d"_s, $$new($ObjectArray, {
		$($Integer::valueOf(hours)),
		$($Integer::valueOf(minutes)),
		$($Integer::valueOf(seconds))
	}));
}

void TestTextPosInPrint::createAndShowTestDialog() {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	$var($String, description, " 1. Click on \"Start Test\" button.\r\n 2. Multiple strings will be displayed on console.\r\n 3. A print dialog will be shown. Select any printer to print. \r\n If the printed output of the strings are same without any alignment issue, click on \"PASS\"\r\n button, otherwise click on \"FAIL\" button."_s);
	$var($JDialog, dialog, $new($JDialog));
	dialog->setTitle("SaveFileWithoutPrinter"_s);
	dialog->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	dialog->addWindowListener($$new($TestTextPosInPrint$1, dialog));
	$var($JLabel, testTimeoutLabel, $new($JLabel, $($String::format("Test timeout: %s"_s, $$new($ObjectArray, {$(convertMillisToTimeStr(TestTextPosInPrint::testTimeout))})))));
	int64_t startTime = $System::currentTimeMillis();
	$var($Timer, timer, $new($Timer, 0, nullptr));
	timer->setDelay(1000);
	timer->addActionListener($$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2, startTime, timer, dialog, testTimeoutLabel));
	timer->start();
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, testButton, $new($JButton, "Start Test"_s));
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	testButton->addActionListener($$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3, testButton, passButton, failButton, dialog));
	passButton->setEnabled(false);
	passButton->addActionListener($$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4, dialog));
	failButton->setEnabled(false);
	failButton->addActionListener($$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5, dialog));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	$var($JPanel, labelPanel, $new($JPanel, $$new($FlowLayout)));
	labelPanel->add(testTimeoutLabel);
	mainPanel->add(labelPanel, $BorderLayout::NORTH);
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(testButton);
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	dialog->add(mainPanel);
	dialog->pack();
	dialog->setVisible(true);
}

int32_t TestTextPosInPrint::print($Graphics* pg, $PageFormat* pf, int32_t pageNum) {
	if (pageNum > 0) {
		return $Printable::NO_SUCH_PAGE;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, pg));
	double var$0 = $nc(pf)->getImageableX();
	$nc(g2)->translate(var$0, pf->getImageableY());
	$nc(TestTextPosInPrint::panel)->paint(g2);
	return $Printable::PAGE_EXISTS;
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$7($JDialog* dialog, $ActionEvent* e) {
	$init(TestTextPosInPrint);
	$nc(dialog)->dispose();
	fail("Printed texts are not aligned as shown in console"_s);
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$6($JDialog* dialog, $ActionEvent* e) {
	$init(TestTextPosInPrint);
	$nc(dialog)->dispose();
	pass();
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$5($JButton* testButton, $JButton* passButton, $JButton* failButton, $JDialog* dialog, $ActionEvent* e) {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	$nc(testButton)->setEnabled(false);
	$$new($Thread, $$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6, passButton, failButton, dialog))->start();
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$4($JButton* passButton, $JButton* failButton, $JDialog* dialog) {
	$init(TestTextPosInPrint);
	try {
		doTest();
		$SwingUtilities::invokeLater($$new(TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7, passButton, failButton));
	} catch ($Throwable& t) {
		t->printStackTrace();
		$nc(dialog)->dispose();
		fail("Exception occurred in a thread executing the test."_s);
	}
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$3($JButton* passButton, $JButton* failButton) {
	$init(TestTextPosInPrint);
	$nc(passButton)->setEnabled(true);
	$nc(failButton)->setEnabled(true);
}

void TestTextPosInPrint::lambda$createAndShowTestDialog$2(int64_t startTime, $Timer* timer, $JDialog* dialog, $JLabel* testTimeoutLabel, $ActionEvent* e) {
	$init(TestTextPosInPrint);
	$useLocalObjectStack();
	int32_t leftTime = TestTextPosInPrint::testTimeout - (int32_t)($System::currentTimeMillis() - startTime);
	if ((leftTime < 0) || TestTextPosInPrint::testFinished) {
		$nc(timer)->stop();
		$nc(dialog)->dispose();
	}
	$nc(testTimeoutLabel)->setText($($String::format("Test timeout: %s"_s, $$new($ObjectArray, {$(convertMillisToTimeStr(leftTime))}))));
}

void TestTextPosInPrint::lambda$main$1() {
	$init(TestTextPosInPrint);
	$nc(TestTextPosInPrint::f)->dispose();
}

void TestTextPosInPrint::lambda$main$0() {
	$init(TestTextPosInPrint);
	createAndShowTestDialog();
}

void TestTextPosInPrint::clinit$($Class* clazz) {
	$assignStatic(TestTextPosInPrint::testEndedSignal, $new($CountDownLatch, 1));
}

TestTextPosInPrint::TestTextPosInPrint() {
}

$Class* TestTextPosInPrint::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$main$0")) {
			return TestTextPosInPrint$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$main$1$1")) {
			return TestTextPosInPrint$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$2$2::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$5$3::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$6$4::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$7$5::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$4$6::load$(name, initialize);
		}
		if (name->equals("TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7")) {
			return TestTextPosInPrint$$Lambda$lambda$createAndShowTestDialog$3$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testEndedSignal", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestTextPosInPrint, testEndedSignal)},
		{"testTimeout", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestTextPosInPrint, testTimeout)},
		{"testFailureMsg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestTextPosInPrint, testFailureMsg)},
		{"testPassed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestTextPosInPrint, testPassed)},
		{"testFinished", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestTextPosInPrint, testFinished)},
		{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE | $STATIC, $staticField(TestTextPosInPrint, job)},
		{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TestTextPosInPrint, panel)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTextPosInPrint, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTextPosInPrint, init$, void)},
		{"convertMillisToTimeStr", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTextPosInPrint, convertMillisToTimeStr, $String*, int32_t)},
		{"createAndShowTestDialog", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTextPosInPrint, createAndShowTestDialog, void)},
		{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTextPosInPrint, doTest, void), "java.lang.Exception"},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTextPosInPrint, fail, void, $String*)},
		{"lambda$createAndShowTestDialog$2", "(JLjavax/swing/Timer;Ljavax/swing/JDialog;Ljavax/swing/JLabel;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$2, void, int64_t, $Timer*, $JDialog*, $JLabel*, $ActionEvent*)},
		{"lambda$createAndShowTestDialog$3", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$3, void, $JButton*, $JButton*)},
		{"lambda$createAndShowTestDialog$4", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$4, void, $JButton*, $JButton*, $JDialog*)},
		{"lambda$createAndShowTestDialog$5", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$5, void, $JButton*, $JButton*, $JButton*, $JDialog*, $ActionEvent*)},
		{"lambda$createAndShowTestDialog$6", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$6, void, $JDialog*, $ActionEvent*)},
		{"lambda$createAndShowTestDialog$7", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$createAndShowTestDialog$7, void, $JDialog*, $ActionEvent*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTextPosInPrint, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTextPosInPrint, main, void, $StringArray*), "java.lang.Exception"},
		{"pass", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTextPosInPrint, pass, void)},
		{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint, print, int32_t, $Graphics*, $PageFormat*, int32_t), "java.awt.print.PrinterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTextPosInPrint$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTextPosInPrint",
		"java.lang.Object",
		"java.awt.print.Printable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestTextPosInPrint$1"
	};
	$loadClass(TestTextPosInPrint, name, initialize, &classInfo$$, TestTextPosInPrint::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestTextPosInPrint);
	});
	return class$;
}

$Class* TestTextPosInPrint::class$ = nullptr;