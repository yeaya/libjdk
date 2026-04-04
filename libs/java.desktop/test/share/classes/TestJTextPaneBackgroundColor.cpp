#include <TestJTextPaneBackgroundColor.h>
#include <TestJTextPaneBackgroundColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJTextPaneBackgroundColor$1 = ::TestJTextPaneBackgroundColor$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJTextPaneBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTextPaneBackgroundColor::lambda$main$0();
	}
};
$Class* TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJTextPaneBackgroundColor$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestJTextPaneBackgroundColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestJTextPaneBackgroundColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestJTextPaneBackgroundColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJTextPaneBackgroundColor$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestJTextPaneBackgroundColor$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJTextPaneBackgroundColor$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJTextPaneBackgroundColor$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestJTextPaneBackgroundColor$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTextPaneBackgroundColor$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestJTextPaneBackgroundColor$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestJTextPaneBackgroundColor::frame = nullptr;
$JTextPane* TestJTextPaneBackgroundColor::textPane = nullptr;
$Point* TestJTextPaneBackgroundColor::point = nullptr;
$Rectangle* TestJTextPaneBackgroundColor::rect = nullptr;
$Robot* TestJTextPaneBackgroundColor::robot = nullptr;
$String* TestJTextPaneBackgroundColor::GTK_LAF_CLASS = nullptr;

void TestJTextPaneBackgroundColor::init$() {
}

void TestJTextPaneBackgroundColor::blockTillDisplayed($Component* comp) {
	$init(TestJTextPaneBackgroundColor);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestJTextPaneBackgroundColor::main($StringArray* args) {
	$init(TestJTextPaneBackgroundColor);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestJTextPaneBackgroundColor::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$assignStatic(TestJTextPaneBackgroundColor::robot, $new($Robot));
	TestJTextPaneBackgroundColor::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($TestJTextPaneBackgroundColor$1));
		$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
		$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
		blockTillDisplayed(TestJTextPaneBackgroundColor::textPane);
		$SwingUtilities::invokeAndWait($$new(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0));
		$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
		$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
		$var($Color, textpaneBackgroundColor, $nc(TestJTextPaneBackgroundColor::robot)->getPixelColor($nc(TestJTextPaneBackgroundColor::point)->x + $nc(TestJTextPaneBackgroundColor::rect)->width / 2, $nc(TestJTextPaneBackgroundColor::point)->y + $nc(TestJTextPaneBackgroundColor::rect)->height / 2));
		$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
		$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
		$var($Color, panelColor, $nc(TestJTextPaneBackgroundColor::robot)->getPixelColor($nc(TestJTextPaneBackgroundColor::point)->x - $nc(TestJTextPaneBackgroundColor::rect)->width / 2, $nc(TestJTextPaneBackgroundColor::point)->y + $nc(TestJTextPaneBackgroundColor::rect)->height / 2));
		$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
		$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
		$nc($System::out)->println(textpaneBackgroundColor);
		$System::out->println(panelColor);
		if ($nc(textpaneBackgroundColor)->equals(panelColor)) {
			$throwNew($RuntimeException, "The expected background color for TextPane was not found"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestJTextPaneBackgroundColor::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestJTextPaneBackgroundColor$$Lambda$dispose$1, TestJTextPaneBackgroundColor::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestJTextPaneBackgroundColor::lambda$main$0() {
	$init(TestJTextPaneBackgroundColor);
	$assignStatic(TestJTextPaneBackgroundColor::point, $nc(TestJTextPaneBackgroundColor::textPane)->getLocationOnScreen());
	$assignStatic(TestJTextPaneBackgroundColor::rect, $nc(TestJTextPaneBackgroundColor::textPane)->getBounds());
}

TestJTextPaneBackgroundColor::TestJTextPaneBackgroundColor() {
}

void TestJTextPaneBackgroundColor::clinit$($Class* clazz) {
	$assignStatic(TestJTextPaneBackgroundColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* TestJTextPaneBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJTextPaneBackgroundColor$$Lambda$lambda$main$0")) {
			return TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestJTextPaneBackgroundColor$$Lambda$dispose$1")) {
			return TestJTextPaneBackgroundColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, frame)},
		{"textPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, textPane)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, point)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, rect)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, robot)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJTextPaneBackgroundColor, GTK_LAF_CLASS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJTextPaneBackgroundColor, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJTextPaneBackgroundColor, blockTillDisplayed, void, $Component*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJTextPaneBackgroundColor, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJTextPaneBackgroundColor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTextPaneBackgroundColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJTextPaneBackgroundColor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJTextPaneBackgroundColor$1"
	};
	$loadClass(TestJTextPaneBackgroundColor, name, initialize, &classInfo$$, TestJTextPaneBackgroundColor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTextPaneBackgroundColor);
	});
	return class$;
}

$Class* TestJTextPaneBackgroundColor::class$ = nullptr;