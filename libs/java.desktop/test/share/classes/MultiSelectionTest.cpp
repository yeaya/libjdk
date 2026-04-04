#include <MultiSelectionTest.h>
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

class MultiSelectionTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$0();
	}
};
$Class* MultiSelectionTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$0::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$1();
	}
};
$Class* MultiSelectionTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class MultiSelectionTest$$Lambda$requestFocus$2 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$requestFocus$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	$JComponent* inst$ = nullptr;
};
$Class* MultiSelectionTest$$Lambda$requestFocus$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$requestFocus$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$requestFocus$2, init$, void, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$requestFocus$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$requestFocus$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$requestFocus$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$requestFocus$2);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$requestFocus$2::class$ = nullptr;

class MultiSelectionTest$$Lambda$selectAll$3 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$selectAll$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JTextComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->selectAll();
	}
	$JTextComponent* inst$ = nullptr;
};
$Class* MultiSelectionTest$$Lambda$selectAll$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$selectAll$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$selectAll$3, init$, void, $JTextComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$selectAll$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$selectAll$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$selectAll$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$selectAll$3);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$selectAll$3::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$2$4 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$2$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$2();
	}
};
$Class* MultiSelectionTest$$Lambda$lambda$main$2$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$lambda$main$2$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$lambda$main$2$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$lambda$main$2$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$2$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$lambda$main$2$4);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$2$4::class$ = nullptr;

class MultiSelectionTest$$Lambda$clearSelectedPath$5 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$clearSelectedPath$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($MenuSelectionManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clearSelectedPath();
	}
	$MenuSelectionManager* inst$ = nullptr;
};
$Class* MultiSelectionTest$$Lambda$clearSelectedPath$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$clearSelectedPath$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$clearSelectedPath$5, init$, void, $MenuSelectionManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$clearSelectedPath$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$clearSelectedPath$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$clearSelectedPath$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$clearSelectedPath$5);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$clearSelectedPath$5::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$3$6 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$3$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$3();
	}
};
$Class* MultiSelectionTest$$Lambda$lambda$main$3$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$lambda$main$3$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$lambda$main$3$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$lambda$main$3$6",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$3$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$lambda$main$3$6);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$3$6::class$ = nullptr;

class MultiSelectionTest$$Lambda$dispose$7 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$dispose$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* MultiSelectionTest$$Lambda$dispose$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$dispose$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(MultiSelectionTest$$Lambda$dispose$7, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiSelectionTest$$Lambda$dispose$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiSelectionTest$$Lambda$dispose$7",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest$$Lambda$dispose$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest$$Lambda$dispose$7);
	});
	return class$;
}
$Class* MultiSelectionTest$$Lambda$dispose$7::class$ = nullptr;

$JTextField* MultiSelectionTest::field1 = nullptr;
$JTextField* MultiSelectionTest::field2 = nullptr;
$JFrame* MultiSelectionTest::frame = nullptr;
$Rectangle* MultiSelectionTest::bounds = nullptr;
$JMenu* MultiSelectionTest::menu = nullptr;
$JTextField* MultiSelectionTest::anotherWindow = nullptr;
$Point* MultiSelectionTest::menuLoc = nullptr;
$JFrame* MultiSelectionTest::frame2 = nullptr;

void MultiSelectionTest::init$() {
}

void MultiSelectionTest::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$lambda$main$0));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$lambda$main$1$1));
	$init(MultiSelectionTest);
	$var($BufferedImage, nosel, robot->createScreenCapture(MultiSelectionTest::bounds));
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$requestFocus$2, $nc(MultiSelectionTest::field2)));
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$selectAll$3, $nc(MultiSelectionTest::field2)));
	robot->waitForIdle();
	robot->delay(200);
	$var($BufferedImage, sel, robot->createScreenCapture(MultiSelectionTest::bounds));
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$lambda$main$2$4));
	robot->mouseMove($nc(MultiSelectionTest::menuLoc)->x, $nc(MultiSelectionTest::menuLoc)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->delay(50);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: menu hides selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$clearSelectedPath$5, $nc($($MenuSelectionManager::defaultManager()))));
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$requestFocus$2, $nc(MultiSelectionTest::field1)));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: focus lost hides single selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$selectAll$3, $nc(MultiSelectionTest::field1)));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: focus lost doesn\'t hide selection upon multi selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$requestFocus$2, $nc(MultiSelectionTest::field2)));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: focus gain hides selection upon multi selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$requestFocus$2, $nc(MultiSelectionTest::field2)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$lambda$main$3$6));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$requestFocus$2, $nc(MultiSelectionTest::anotherWindow)));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: switch window hides selection"_s);
	}
	$SwingUtilities::invokeAndWait($$new(MultiSelectionTest$$Lambda$selectAll$3, $nc(MultiSelectionTest::anotherWindow)));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: selection ownership is lost selection is shown"_s);
	}
	$SwingUtilities::invokeLater($$new(MultiSelectionTest$$Lambda$dispose$7, $nc(MultiSelectionTest::frame2)));
	$SwingUtilities::invokeLater($$new(MultiSelectionTest$$Lambda$dispose$7, $nc(MultiSelectionTest::frame)));
}

bool MultiSelectionTest::biEqual($BufferedImage* i1, $BufferedImage* i2) {
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

void MultiSelectionTest::lambda$main$3() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::frame2, $new($JFrame));
	$var($Point, loc, $nc(MultiSelectionTest::frame)->getLocationOnScreen());
	$nc(loc)->translate(0, $nc(MultiSelectionTest::frame)->getHeight());
	$nc(MultiSelectionTest::frame2)->setLocation(loc);
	$assignStatic(MultiSelectionTest::anotherWindow, $new($JTextField, "textField3"_s));
	$nc(MultiSelectionTest::frame2)->add(MultiSelectionTest::anotherWindow);
	$nc(MultiSelectionTest::frame2)->pack();
	$nc(MultiSelectionTest::frame2)->setVisible(true);
}

void MultiSelectionTest::lambda$main$2() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::menuLoc, $nc(MultiSelectionTest::menu)->getLocationOnScreen());
	$nc(MultiSelectionTest::menuLoc)->translate(10, 10);
}

void MultiSelectionTest::lambda$main$1() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::bounds, $nc(MultiSelectionTest::field2)->getBounds());
	$nc(MultiSelectionTest::bounds)->setLocation($($nc(MultiSelectionTest::field2)->getLocationOnScreen()));
}

void MultiSelectionTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::frame, $new($JFrame));
	$assignStatic(MultiSelectionTest::field1, $new($JTextField, "field1                       "_s));
	$assignStatic(MultiSelectionTest::field2, $new($JTextField, "field2                       "_s));
	MultiSelectionTest::field1->setEditable(false);
	$nc(MultiSelectionTest::field2)->setEditable(false);
	$$nc($nc(MultiSelectionTest::frame)->getContentPane())->setLayout($$new($FlowLayout));
	$$nc($nc(MultiSelectionTest::frame)->getContentPane())->add(MultiSelectionTest::field1);
	$$nc($nc(MultiSelectionTest::frame)->getContentPane())->add(MultiSelectionTest::field2);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(MultiSelectionTest::menu, $new($JMenu, "menu"_s));
	MultiSelectionTest::menu->add($$new($JMenuItem, "item"_s));
	menuBar->add(MultiSelectionTest::menu);
	$nc(MultiSelectionTest::frame)->setJMenuBar(menuBar);
	$nc(MultiSelectionTest::frame)->pack();
	$nc(MultiSelectionTest::frame)->setVisible(true);
}

MultiSelectionTest::MultiSelectionTest() {
}

$Class* MultiSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MultiSelectionTest$$Lambda$lambda$main$0")) {
			return MultiSelectionTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$lambda$main$1$1")) {
			return MultiSelectionTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$requestFocus$2")) {
			return MultiSelectionTest$$Lambda$requestFocus$2::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$selectAll$3")) {
			return MultiSelectionTest$$Lambda$selectAll$3::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$lambda$main$2$4")) {
			return MultiSelectionTest$$Lambda$lambda$main$2$4::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$clearSelectedPath$5")) {
			return MultiSelectionTest$$Lambda$clearSelectedPath$5::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$lambda$main$3$6")) {
			return MultiSelectionTest$$Lambda$lambda$main$3$6::load$(name, initialize);
		}
		if (name->equals("MultiSelectionTest$$Lambda$dispose$7")) {
			return MultiSelectionTest$$Lambda$dispose$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"field1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, field1)},
		{"field2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, field2)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, frame)},
		{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, bounds)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, menu)},
		{"anotherWindow", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, anotherWindow)},
		{"menuLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, menuLoc)},
		{"frame2", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, frame2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiSelectionTest, init$, void)},
		{"biEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $STATIC, $staticMethod(MultiSelectionTest, biEqual, bool, $BufferedImage*, $BufferedImage*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiSelectionTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiSelectionTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiSelectionTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiSelectionTest, lambda$main$3, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiSelectionTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultiSelectionTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiSelectionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiSelectionTest);
	});
	return class$;
}

$Class* MultiSelectionTest::class$ = nullptr;