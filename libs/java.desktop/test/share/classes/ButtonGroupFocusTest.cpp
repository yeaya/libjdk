#include <ButtonGroupFocusTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_TAB

using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ButtonGroupFocusTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ButtonGroupFocusTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGroupFocusTest::lambda$main$0();
	}
};
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGroupFocusTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGroupFocusTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$0::class$ = nullptr;

class ButtonGroupFocusTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(ButtonGroupFocusTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGroupFocusTest::lambda$main$1();
	}
};
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGroupFocusTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGroupFocusTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class ButtonGroupFocusTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(ButtonGroupFocusTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGroupFocusTest::lambda$main$2();
	}
};
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGroupFocusTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGroupFocusTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class ButtonGroupFocusTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(ButtonGroupFocusTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGroupFocusTest::lambda$main$3();
	}
};
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest$$Lambda$lambda$main$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGroupFocusTest$$Lambda$lambda$main$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGroupFocusTest$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* ButtonGroupFocusTest$$Lambda$lambda$main$3$3::class$ = nullptr;

class ButtonGroupFocusTest$$Lambda$dispose$4 : public $Runnable {
	$class(ButtonGroupFocusTest$$Lambda$dispose$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* ButtonGroupFocusTest$$Lambda$dispose$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ButtonGroupFocusTest$$Lambda$dispose$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest$$Lambda$dispose$4, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGroupFocusTest$$Lambda$dispose$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGroupFocusTest$$Lambda$dispose$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest$$Lambda$dispose$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest$$Lambda$dispose$4);
	});
	return class$;
}
$Class* ButtonGroupFocusTest$$Lambda$dispose$4::class$ = nullptr;

$JRadioButton* ButtonGroupFocusTest::button1 = nullptr;
$JRadioButton* ButtonGroupFocusTest::button2 = nullptr;
$JRadioButton* ButtonGroupFocusTest::button3 = nullptr;
$JRadioButton* ButtonGroupFocusTest::button4 = nullptr;
$JRadioButton* ButtonGroupFocusTest::button5 = nullptr;
$Robot* ButtonGroupFocusTest::robot = nullptr;
$JFrame* ButtonGroupFocusTest::frame = nullptr;

void ButtonGroupFocusTest::init$() {
}

void ButtonGroupFocusTest::main($StringArray* args) {
	$useLocalObjectStack();
	$init(ButtonGroupFocusTest);
	$assignStatic(ButtonGroupFocusTest::robot, $new($Robot));
	ButtonGroupFocusTest::robot->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new(ButtonGroupFocusTest$$Lambda$lambda$main$0));
	$nc(ButtonGroupFocusTest::robot)->waitForIdle();
	$nc(ButtonGroupFocusTest::robot)->delay(200);
	$SwingUtilities::invokeAndWait($$new(ButtonGroupFocusTest$$Lambda$lambda$main$1$1));
	$nc(ButtonGroupFocusTest::robot)->keyPress($KeyEvent::VK_TAB);
	$nc(ButtonGroupFocusTest::robot)->keyRelease($KeyEvent::VK_TAB);
	$nc(ButtonGroupFocusTest::robot)->waitForIdle();
	$nc(ButtonGroupFocusTest::robot)->delay(200);
	$SwingUtilities::invokeAndWait($$new(ButtonGroupFocusTest$$Lambda$lambda$main$2$2));
	$nc(ButtonGroupFocusTest::robot)->keyPress($KeyEvent::VK_TAB);
	$nc(ButtonGroupFocusTest::robot)->keyRelease($KeyEvent::VK_TAB);
	$nc(ButtonGroupFocusTest::robot)->waitForIdle();
	$nc(ButtonGroupFocusTest::robot)->delay(200);
	$SwingUtilities::invokeAndWait($$new(ButtonGroupFocusTest$$Lambda$lambda$main$3$3));
	$SwingUtilities::invokeLater($$new(ButtonGroupFocusTest$$Lambda$dispose$4, $nc(ButtonGroupFocusTest::frame)));
}

void ButtonGroupFocusTest::lambda$main$3() {
	$init(ButtonGroupFocusTest);
	if (!$nc(ButtonGroupFocusTest::button3)->hasFocus()) {
		$nc(ButtonGroupFocusTest::frame)->dispose();
		$throwNew($RuntimeException, "selected Button 3 should get focus"_s);
	}
}

void ButtonGroupFocusTest::lambda$main$2() {
	$init(ButtonGroupFocusTest);
	if (!$nc(ButtonGroupFocusTest::button4)->hasFocus()) {
		$nc(ButtonGroupFocusTest::frame)->dispose();
		$throwNew($RuntimeException, "Button 4 should get focus"_s);
	}
	$nc(ButtonGroupFocusTest::button3)->setSelected(true);
}

void ButtonGroupFocusTest::lambda$main$1() {
	$init(ButtonGroupFocusTest);
	if (!$nc(ButtonGroupFocusTest::button2)->hasFocus()) {
		$nc(ButtonGroupFocusTest::frame)->dispose();
		$throwNew($RuntimeException, "Button 2 should get focus after activation"_s);
	}
}

void ButtonGroupFocusTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(ButtonGroupFocusTest);
	$assignStatic(ButtonGroupFocusTest::frame, $new($JFrame));
	$var($Container, contentPane, ButtonGroupFocusTest::frame->getContentPane());
	$nc(contentPane)->setLayout($$new($FlowLayout));
	$assignStatic(ButtonGroupFocusTest::button1, $new($JRadioButton, "Button 1"_s));
	contentPane->add(ButtonGroupFocusTest::button1);
	$assignStatic(ButtonGroupFocusTest::button2, $new($JRadioButton, "Button 2"_s));
	contentPane->add(ButtonGroupFocusTest::button2);
	$assignStatic(ButtonGroupFocusTest::button3, $new($JRadioButton, "Button 3"_s));
	contentPane->add(ButtonGroupFocusTest::button3);
	$assignStatic(ButtonGroupFocusTest::button4, $new($JRadioButton, "Button 4"_s));
	contentPane->add(ButtonGroupFocusTest::button4);
	$assignStatic(ButtonGroupFocusTest::button5, $new($JRadioButton, "Button 5"_s));
	contentPane->add(ButtonGroupFocusTest::button5);
	$var($ButtonGroup, group, $new($ButtonGroup));
	group->add(ButtonGroupFocusTest::button1);
	group->add(ButtonGroupFocusTest::button2);
	group->add(ButtonGroupFocusTest::button3);
	$assign(group, $new($ButtonGroup));
	group->add(ButtonGroupFocusTest::button4);
	group->add(ButtonGroupFocusTest::button5);
	$nc(ButtonGroupFocusTest::button2)->setSelected(true);
	$nc(ButtonGroupFocusTest::frame)->pack();
	$nc(ButtonGroupFocusTest::frame)->setVisible(true);
}

ButtonGroupFocusTest::ButtonGroupFocusTest() {
}

$Class* ButtonGroupFocusTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ButtonGroupFocusTest$$Lambda$lambda$main$0")) {
			return ButtonGroupFocusTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("ButtonGroupFocusTest$$Lambda$lambda$main$1$1")) {
			return ButtonGroupFocusTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("ButtonGroupFocusTest$$Lambda$lambda$main$2$2")) {
			return ButtonGroupFocusTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("ButtonGroupFocusTest$$Lambda$lambda$main$3$3")) {
			return ButtonGroupFocusTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("ButtonGroupFocusTest$$Lambda$dispose$4")) {
			return ButtonGroupFocusTest$$Lambda$dispose$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"button1", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, button1)},
		{"button2", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, button2)},
		{"button3", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, button3)},
		{"button4", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, button4)},
		{"button5", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, button5)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, robot)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGroupFocusTest, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGroupFocusTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGroupFocusTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGroupFocusTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGroupFocusTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGroupFocusTest, lambda$main$3, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ButtonGroupFocusTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ButtonGroupFocusTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ButtonGroupFocusTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGroupFocusTest);
	});
	return class$;
}

$Class* ButtonGroupFocusTest::class$ = nullptr;