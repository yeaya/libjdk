#include <SpinnerTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_SPACE

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class SpinnerTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SpinnerTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SpinnerTest::lambda$main$0();
	}
};
$Class* SpinnerTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpinnerTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpinnerTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SpinnerTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SpinnerTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpinnerTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SpinnerTest$$Lambda$lambda$main$0::class$ = nullptr;

class SpinnerTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SpinnerTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SpinnerTest::lambda$main$1();
	}
};
$Class* SpinnerTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpinnerTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpinnerTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SpinnerTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SpinnerTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpinnerTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* SpinnerTest$$Lambda$lambda$main$1$1::class$ = nullptr;

$JFrame* SpinnerTest::frame = nullptr;
$JSpinner* SpinnerTest::spinner = nullptr;

void SpinnerTest::init$() {
}

void SpinnerTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(SpinnerTest$$Lambda$lambda$main$0));
		robot->waitForIdle();
		robot->delay(1000);
		$init(SpinnerTest);
		$var($Point, loc, $nc(SpinnerTest::spinner)->getLocationOnScreen());
		robot->mouseMove($nc(loc)->x, $nc(loc)->y);
		robot->keyPress($KeyEvent::VK_SPACE);
		robot->keyRelease($KeyEvent::VK_SPACE);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(SpinnerTest);
		if (SpinnerTest::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(SpinnerTest$$Lambda$lambda$main$1$1));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SpinnerTest::lambda$main$1() {
	$init(SpinnerTest);
	$nc(SpinnerTest::frame)->dispose();
}

void SpinnerTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(SpinnerTest);
	$assignStatic(SpinnerTest::frame, $new($JFrame, "SpinnerDemo"_s));
	SpinnerTest::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	$var($StringArray, values, $new($StringArray, {
		"Month: "_s,
		"Year: "_s,
		nullptr,
		"Date"_s,
		"Sent"_s
	}));
	$var($SpinnerListModel, listModel, $new($SpinnerListModel, values));
	$var($JLabel, l, $new($JLabel, "Spinner"_s));
	panel->add(l);
	$assignStatic(SpinnerTest::spinner, $new($JSpinner, listModel));
	l->setLabelFor(SpinnerTest::spinner);
	panel->add(SpinnerTest::spinner);
	panel->setOpaque(true);
	$nc(SpinnerTest::frame)->setContentPane(panel);
	$nc(SpinnerTest::frame)->pack();
	$nc(SpinnerTest::frame)->setVisible(true);
	$nc(SpinnerTest::frame)->setLocationRelativeTo(nullptr);
}

SpinnerTest::SpinnerTest() {
}

$Class* SpinnerTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SpinnerTest$$Lambda$lambda$main$0")) {
			return SpinnerTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("SpinnerTest$$Lambda$lambda$main$1$1")) {
			return SpinnerTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SpinnerTest, frame)},
		{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(SpinnerTest, spinner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpinnerTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpinnerTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpinnerTest, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpinnerTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SpinnerTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SpinnerTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpinnerTest);
	});
	return class$;
}

$Class* SpinnerTest::class$ = nullptr;