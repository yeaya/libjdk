#include <TestTooltipBackgroundColor.h>
#include <TestTooltipBackgroundColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestTooltipBackgroundColor$1 = ::TestTooltipBackgroundColor$1;
using $ComponentArray = $Array<::java::awt::Component>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
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
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestTooltipBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTooltipBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTooltipBackgroundColor::lambda$main$0();
	}
};
$Class* TestTooltipBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTooltipBackgroundColor$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTooltipBackgroundColor$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTooltipBackgroundColor$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTooltipBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTooltipBackgroundColor$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestTooltipBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestTooltipBackgroundColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestTooltipBackgroundColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestTooltipBackgroundColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestTooltipBackgroundColor$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestTooltipBackgroundColor$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTooltipBackgroundColor$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTooltipBackgroundColor$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTooltipBackgroundColor$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTooltipBackgroundColor$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestTooltipBackgroundColor$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestTooltipBackgroundColor::frame = nullptr;
$JLabel* TestTooltipBackgroundColor::label = nullptr;
$Point* TestTooltipBackgroundColor::point = nullptr;
$Rectangle* TestTooltipBackgroundColor::rect = nullptr;
$Robot* TestTooltipBackgroundColor::robot = nullptr;
$String* TestTooltipBackgroundColor::GTK_LAF_CLASS = nullptr;
int32_t TestTooltipBackgroundColor::minColorDifference = 0;
$CountDownLatch* TestTooltipBackgroundColor::latch = nullptr;

void TestTooltipBackgroundColor::init$() {
}

void TestTooltipBackgroundColor::blockTillDisplayed($Component* comp) {
	$init(TestTooltipBackgroundColor);
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

$Component* TestTooltipBackgroundColor::findSubComponent($Component* parent, $String* className) {
	$init(TestTooltipBackgroundColor);
	$useLocalObjectStack();
	$var($String, parentClassName, $nc($of(parent))->getClass()->getName());
	if ($nc(parentClassName)->contains(className)) {
		return parent;
	}
	if ($instanceOf($Container, parent)) {
		$var($ComponentArray, arr$, $cast($Container, parent)->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				$var($Component, subComponent, findSubComponent(child, className));
				if (subComponent != nullptr) {
					return subComponent;
				}
			}
		}
	}
	return nullptr;
}

int32_t TestTooltipBackgroundColor::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestTooltipBackgroundColor);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = c1->getGreen();
	int32_t var$2 = $Math::abs(var$3 - c2->getGreen());
	int32_t var$4 = c1->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - c2->getBlue())));
}

void TestTooltipBackgroundColor::main($StringArray* args) {
	$init(TestTooltipBackgroundColor);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestTooltipBackgroundColor::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$assignStatic(TestTooltipBackgroundColor::robot, $new($Robot));
	TestTooltipBackgroundColor::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($TestTooltipBackgroundColor$1));
		$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
		$nc(TestTooltipBackgroundColor::robot)->delay(500);
		blockTillDisplayed(TestTooltipBackgroundColor::label);
		$SwingUtilities::invokeAndWait($$new(TestTooltipBackgroundColor$$Lambda$lambda$main$0));
		$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
		$nc(TestTooltipBackgroundColor::robot)->delay(500);
		$var($Color, backgroundColor, $nc(TestTooltipBackgroundColor::robot)->getPixelColor($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height * 2));
		$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
		$nc(TestTooltipBackgroundColor::robot)->delay(500);
		$nc(TestTooltipBackgroundColor::robot)->mouseMove($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height / 2);
		TestTooltipBackgroundColor::latch->await();
		$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
		$nc(TestTooltipBackgroundColor::robot)->delay(500);
		$var($Color, highlightColor, $nc(TestTooltipBackgroundColor::robot)->getPixelColor($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height * 2));
		$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
		$nc(TestTooltipBackgroundColor::robot)->delay(500);
		int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
		if (actualColorDifference < TestTooltipBackgroundColor::minColorDifference) {
			$throwNew($RuntimeException, "The expected background color for tooltip not found"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestTooltipBackgroundColor::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestTooltipBackgroundColor$$Lambda$dispose$1, TestTooltipBackgroundColor::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestTooltipBackgroundColor::lambda$main$0() {
	$init(TestTooltipBackgroundColor);
	$assignStatic(TestTooltipBackgroundColor::point, $nc(TestTooltipBackgroundColor::label)->getLocationOnScreen());
	$assignStatic(TestTooltipBackgroundColor::rect, $nc(TestTooltipBackgroundColor::label)->getBounds());
}

void TestTooltipBackgroundColor::clinit$($Class* clazz) {
	$assignStatic(TestTooltipBackgroundColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestTooltipBackgroundColor::minColorDifference = 100;
	$assignStatic(TestTooltipBackgroundColor::latch, $new($CountDownLatch, 1));
}

TestTooltipBackgroundColor::TestTooltipBackgroundColor() {
}

$Class* TestTooltipBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTooltipBackgroundColor$$Lambda$lambda$main$0")) {
			return TestTooltipBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestTooltipBackgroundColor$$Lambda$dispose$1")) {
			return TestTooltipBackgroundColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, frame)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, label)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, point)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, rect)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, robot)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestTooltipBackgroundColor, GTK_LAF_CLASS)},
		{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, minColorDifference)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestTooltipBackgroundColor, latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTooltipBackgroundColor, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTooltipBackgroundColor, blockTillDisplayed, void, $Component*)},
		{"findSubComponent", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTooltipBackgroundColor, findSubComponent, $Component*, $Component*, $String*)},
		{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTooltipBackgroundColor, getMaxColorDiff, int32_t, $Color*, $Color*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTooltipBackgroundColor, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTooltipBackgroundColor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTooltipBackgroundColor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestTooltipBackgroundColor$1,TestTooltipBackgroundColor$1$2,TestTooltipBackgroundColor$1$1"
	};
	$loadClass(TestTooltipBackgroundColor, name, initialize, &classInfo$$, TestTooltipBackgroundColor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestTooltipBackgroundColor);
	});
	return class$;
}

$Class* TestTooltipBackgroundColor::class$ = nullptr;