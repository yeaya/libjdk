#include <HidingSelectionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK

using $FlowLayout = ::java::awt::FlowLayout;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class HidingSelectionTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$0();
	}
};
$Class* HidingSelectionTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$0::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$1();
	}
};
$Class* HidingSelectionTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class HidingSelectionTest$$Lambda$requestFocus$2 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$requestFocus$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	$JComponent* inst$ = nullptr;
};
$Class* HidingSelectionTest$$Lambda$requestFocus$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$requestFocus$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$requestFocus$2, init$, void, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$requestFocus$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$requestFocus$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$requestFocus$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$requestFocus$2);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$requestFocus$2::class$ = nullptr;

class HidingSelectionTest$$Lambda$selectAll$3 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$selectAll$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JTextComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->selectAll();
	}
	$JTextComponent* inst$ = nullptr;
};
$Class* HidingSelectionTest$$Lambda$selectAll$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$selectAll$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$selectAll$3, init$, void, $JTextComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$selectAll$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$selectAll$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$selectAll$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$selectAll$3);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$selectAll$3::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$2$4 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$2$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$2();
	}
};
$Class* HidingSelectionTest$$Lambda$lambda$main$2$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$lambda$main$2$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$lambda$main$2$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$lambda$main$2$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$2$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$lambda$main$2$4);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$2$4::class$ = nullptr;

class HidingSelectionTest$$Lambda$clearSelectedPath$5 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$clearSelectedPath$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($MenuSelectionManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clearSelectedPath();
	}
	$MenuSelectionManager* inst$ = nullptr;
};
$Class* HidingSelectionTest$$Lambda$clearSelectedPath$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$clearSelectedPath$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$clearSelectedPath$5, init$, void, $MenuSelectionManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$clearSelectedPath$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$clearSelectedPath$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$clearSelectedPath$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$clearSelectedPath$5);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$clearSelectedPath$5::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$3$6 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$3$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$3();
	}
};
$Class* HidingSelectionTest$$Lambda$lambda$main$3$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$lambda$main$3$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$lambda$main$3$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$lambda$main$3$6",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$3$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$lambda$main$3$6);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$3$6::class$ = nullptr;

class HidingSelectionTest$$Lambda$dispose$7 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$dispose$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* HidingSelectionTest$$Lambda$dispose$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$dispose$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(HidingSelectionTest$$Lambda$dispose$7, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HidingSelectionTest$$Lambda$dispose$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HidingSelectionTest$$Lambda$dispose$7",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest$$Lambda$dispose$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest$$Lambda$dispose$7);
	});
	return class$;
}
$Class* HidingSelectionTest$$Lambda$dispose$7::class$ = nullptr;

$JTextField* HidingSelectionTest::field1 = nullptr;
$JTextField* HidingSelectionTest::field2 = nullptr;
$JFrame* HidingSelectionTest::frame = nullptr;
$Rectangle* HidingSelectionTest::bounds = nullptr;
$JMenu* HidingSelectionTest::menu = nullptr;
$JTextField* HidingSelectionTest::anotherWindow = nullptr;
$Point* HidingSelectionTest::menuLoc = nullptr;
$JFrame* HidingSelectionTest::frame2 = nullptr;

void HidingSelectionTest::init$() {
}

void HidingSelectionTest::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$lambda$main$0));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$lambda$main$1$1));
	$init(HidingSelectionTest);
	$var($BufferedImage, nosel, robot->createScreenCapture(HidingSelectionTest::bounds));
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$requestFocus$2, $nc(HidingSelectionTest::field2)));
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$selectAll$3, $nc(HidingSelectionTest::field2)));
	robot->waitForIdle();
	robot->delay(200);
	$var($BufferedImage, sel, robot->createScreenCapture(HidingSelectionTest::bounds));
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$lambda$main$2$4));
	robot->mouseMove($nc(HidingSelectionTest::menuLoc)->x, $nc(HidingSelectionTest::menuLoc)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->delay(50);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: menu hides selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$clearSelectedPath$5, $nc($($MenuSelectionManager::defaultManager()))));
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$requestFocus$2, $nc(HidingSelectionTest::field1)));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: focus lost doesn\'t hide selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$requestFocus$2, $nc(HidingSelectionTest::field2)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$lambda$main$3$6));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$requestFocus$2, $nc(HidingSelectionTest::anotherWindow)));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: switch window hides selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(HidingSelectionTest$$Lambda$selectAll$3, $nc(HidingSelectionTest::anotherWindow)));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: selection ownership is lost selection is shown"_s);
	}
	$SwingUtilities::invokeLater($$new(HidingSelectionTest$$Lambda$dispose$7, $nc(HidingSelectionTest::frame2)));
	$SwingUtilities::invokeLater($$new(HidingSelectionTest$$Lambda$dispose$7, $nc(HidingSelectionTest::frame)));
}

bool HidingSelectionTest::biEqual($BufferedImage* i1, $BufferedImage* i2) {
	int32_t var$1 = $nc(i1)->getWidth();
	bool var$0 = var$1 == $nc(i2)->getWidth();
	if (var$0) {
		int32_t var$2 = i1->getHeight();
		var$0 = var$2 == i2->getHeight();
	}
	if (var$0) {
		for (int32_t x = 0; x < i1->getWidth(); ++x) {
			for (int32_t y = 0; y < i1->getHeight(); ++y) {
				int32_t var$3 = i1->getRGB(x, y);
				if (var$3 != i2->getRGB(x, y)) {
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

void HidingSelectionTest::lambda$main$3() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::frame2, $new($JFrame));
	$var($Point, loc, $nc(HidingSelectionTest::frame)->getLocationOnScreen());
	$nc(loc)->translate(0, $nc(HidingSelectionTest::frame)->getHeight());
	$nc(HidingSelectionTest::frame2)->setLocation(loc);
	$assignStatic(HidingSelectionTest::anotherWindow, $new($JTextField, "textField3"_s));
	$nc(HidingSelectionTest::frame2)->add(HidingSelectionTest::anotherWindow);
	$nc(HidingSelectionTest::frame2)->pack();
	$nc(HidingSelectionTest::frame2)->setVisible(true);
}

void HidingSelectionTest::lambda$main$2() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::menuLoc, $nc(HidingSelectionTest::menu)->getLocationOnScreen());
	$nc(HidingSelectionTest::menuLoc)->translate(10, 10);
}

void HidingSelectionTest::lambda$main$1() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::bounds, $nc(HidingSelectionTest::field2)->getBounds());
	$nc(HidingSelectionTest::bounds)->setLocation($($nc(HidingSelectionTest::field2)->getLocationOnScreen()));
}

void HidingSelectionTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::frame, $new($JFrame));
	$assignStatic(HidingSelectionTest::field1, $new($JTextField, "field1                       "_s));
	$assignStatic(HidingSelectionTest::field2, $new($JTextField, "field2                       "_s));
	HidingSelectionTest::field1->setEditable(false);
	$nc(HidingSelectionTest::field2)->setEditable(false);
	$$nc($nc(HidingSelectionTest::frame)->getContentPane())->setLayout($$new($FlowLayout));
	$$nc($nc(HidingSelectionTest::frame)->getContentPane())->add(HidingSelectionTest::field1);
	$$nc($nc(HidingSelectionTest::frame)->getContentPane())->add(HidingSelectionTest::field2);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(HidingSelectionTest::menu, $new($JMenu, "menu"_s));
	HidingSelectionTest::menu->add($$new($JMenuItem, "item"_s));
	menuBar->add(HidingSelectionTest::menu);
	$nc(HidingSelectionTest::frame)->setJMenuBar(menuBar);
	$nc(HidingSelectionTest::frame)->pack();
	$nc(HidingSelectionTest::frame)->setVisible(true);
}

HidingSelectionTest::HidingSelectionTest() {
}

$Class* HidingSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("HidingSelectionTest$$Lambda$lambda$main$0")) {
			return HidingSelectionTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$lambda$main$1$1")) {
			return HidingSelectionTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$requestFocus$2")) {
			return HidingSelectionTest$$Lambda$requestFocus$2::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$selectAll$3")) {
			return HidingSelectionTest$$Lambda$selectAll$3::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$lambda$main$2$4")) {
			return HidingSelectionTest$$Lambda$lambda$main$2$4::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$clearSelectedPath$5")) {
			return HidingSelectionTest$$Lambda$clearSelectedPath$5::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$lambda$main$3$6")) {
			return HidingSelectionTest$$Lambda$lambda$main$3$6::load$(name, initialize);
		}
		if (name->equals("HidingSelectionTest$$Lambda$dispose$7")) {
			return HidingSelectionTest$$Lambda$dispose$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"field1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, field1)},
		{"field2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, field2)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, frame)},
		{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, bounds)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, menu)},
		{"anotherWindow", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, anotherWindow)},
		{"menuLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, menuLoc)},
		{"frame2", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, frame2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HidingSelectionTest, init$, void)},
		{"biEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $STATIC, $staticMethod(HidingSelectionTest, biEqual, bool, $BufferedImage*, $BufferedImage*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HidingSelectionTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HidingSelectionTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HidingSelectionTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HidingSelectionTest, lambda$main$3, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HidingSelectionTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HidingSelectionTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HidingSelectionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HidingSelectionTest);
	});
	return class$;
}

$Class* HidingSelectionTest::class$ = nullptr;