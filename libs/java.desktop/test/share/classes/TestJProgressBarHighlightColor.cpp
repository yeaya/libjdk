#include <TestJProgressBarHighlightColor.h>
#include <TestJProgressBarHighlightColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJProgressBarHighlightColor$1 = ::TestJProgressBarHighlightColor$1;
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
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JProgressBar = ::javax::swing::JProgressBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJProgressBarHighlightColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJProgressBarHighlightColor::lambda$main$0();
	}
};
$Class* TestJProgressBarHighlightColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJProgressBarHighlightColor$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJProgressBarHighlightColor$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestJProgressBarHighlightColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestJProgressBarHighlightColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestJProgressBarHighlightColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestJProgressBarHighlightColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJProgressBarHighlightColor$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestJProgressBarHighlightColor$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJProgressBarHighlightColor$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJProgressBarHighlightColor$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestJProgressBarHighlightColor$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJProgressBarHighlightColor$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestJProgressBarHighlightColor$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestJProgressBarHighlightColor::frame = nullptr;
$JProgressBar* TestJProgressBarHighlightColor::progressBar = nullptr;
$Point* TestJProgressBarHighlightColor::point = nullptr;
$Rectangle* TestJProgressBarHighlightColor::rect = nullptr;
$Robot* TestJProgressBarHighlightColor::robot = nullptr;
$String* TestJProgressBarHighlightColor::GTK_LAF_CLASS = nullptr;
int32_t TestJProgressBarHighlightColor::minColorDifference = 0;

void TestJProgressBarHighlightColor::init$() {
}

void TestJProgressBarHighlightColor::blockTillDisplayed($Component* comp) {
	$init(TestJProgressBarHighlightColor);
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

int32_t TestJProgressBarHighlightColor::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestJProgressBarHighlightColor);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = c1->getGreen();
	int32_t var$2 = $Math::abs(var$3 - c2->getGreen());
	int32_t var$4 = c1->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - c2->getBlue())));
}

void TestJProgressBarHighlightColor::main($StringArray* args) {
	$init(TestJProgressBarHighlightColor);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestJProgressBarHighlightColor::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$assignStatic(TestJProgressBarHighlightColor::robot, $new($Robot));
	TestJProgressBarHighlightColor::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($TestJProgressBarHighlightColor$1));
		$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
		$nc(TestJProgressBarHighlightColor::robot)->delay(500);
		blockTillDisplayed(TestJProgressBarHighlightColor::progressBar);
		$SwingUtilities::invokeAndWait($$new(TestJProgressBarHighlightColor$$Lambda$lambda$main$0));
		$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
		$nc(TestJProgressBarHighlightColor::robot)->delay(500);
		$var($Color, backgroundColor, $nc(TestJProgressBarHighlightColor::robot)->getPixelColor($nc(TestJProgressBarHighlightColor::point)->x + $nc(TestJProgressBarHighlightColor::rect)->width * 3 / 4, $nc(TestJProgressBarHighlightColor::point)->y + $nc(TestJProgressBarHighlightColor::rect)->height / 2));
		$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
		$nc(TestJProgressBarHighlightColor::robot)->delay(500);
		$var($Color, highlightColor, $nc(TestJProgressBarHighlightColor::robot)->getPixelColor($nc(TestJProgressBarHighlightColor::point)->x + $nc(TestJProgressBarHighlightColor::rect)->width / 4, $nc(TestJProgressBarHighlightColor::point)->y + $nc(TestJProgressBarHighlightColor::rect)->height / 2));
		$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
		$nc(TestJProgressBarHighlightColor::robot)->delay(500);
		int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
		if (actualColorDifference < TestJProgressBarHighlightColor::minColorDifference) {
			$throwNew($RuntimeException, "The expected highlight color for JProgressBar was not found"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestJProgressBarHighlightColor::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestJProgressBarHighlightColor$$Lambda$dispose$1, TestJProgressBarHighlightColor::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestJProgressBarHighlightColor::lambda$main$0() {
	$init(TestJProgressBarHighlightColor);
	$assignStatic(TestJProgressBarHighlightColor::point, $nc(TestJProgressBarHighlightColor::progressBar)->getLocationOnScreen());
	$assignStatic(TestJProgressBarHighlightColor::rect, $nc(TestJProgressBarHighlightColor::progressBar)->getBounds());
}

void TestJProgressBarHighlightColor::clinit$($Class* clazz) {
	$assignStatic(TestJProgressBarHighlightColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestJProgressBarHighlightColor::minColorDifference = 100;
}

TestJProgressBarHighlightColor::TestJProgressBarHighlightColor() {
}

$Class* TestJProgressBarHighlightColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJProgressBarHighlightColor$$Lambda$lambda$main$0")) {
			return TestJProgressBarHighlightColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestJProgressBarHighlightColor$$Lambda$dispose$1")) {
			return TestJProgressBarHighlightColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, frame)},
		{"progressBar", "Ljavax/swing/JProgressBar;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, progressBar)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, point)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, rect)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, robot)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJProgressBarHighlightColor, GTK_LAF_CLASS)},
		{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, minColorDifference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJProgressBarHighlightColor, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJProgressBarHighlightColor, blockTillDisplayed, void, $Component*)},
		{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJProgressBarHighlightColor, getMaxColorDiff, int32_t, $Color*, $Color*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJProgressBarHighlightColor, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJProgressBarHighlightColor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJProgressBarHighlightColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJProgressBarHighlightColor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJProgressBarHighlightColor$1"
	};
	$loadClass(TestJProgressBarHighlightColor, name, initialize, &classInfo$$, TestJProgressBarHighlightColor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJProgressBarHighlightColor);
	});
	return class$;
}

$Class* TestJProgressBarHighlightColor::class$ = nullptr;