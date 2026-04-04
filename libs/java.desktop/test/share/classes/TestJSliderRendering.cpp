#include <TestJSliderRendering.h>
#include <TestJSliderRendering$1.h>
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
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJSliderRendering$1 = ::TestJSliderRendering$1;
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
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJSliderRendering$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJSliderRendering$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSliderRendering::lambda$main$0();
	}
};
$Class* TestJSliderRendering$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSliderRendering$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJSliderRendering$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSliderRendering$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJSliderRendering$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSliderRendering$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestJSliderRendering$$Lambda$lambda$main$0::class$ = nullptr;

class TestJSliderRendering$$Lambda$dispose$1 : public $Runnable {
	$class(TestJSliderRendering$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestJSliderRendering$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSliderRendering$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestJSliderRendering$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJSliderRendering$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJSliderRendering$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestJSliderRendering$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSliderRendering$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestJSliderRendering$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestJSliderRendering::frame = nullptr;
$JSlider* TestJSliderRendering::slider = nullptr;
$Point* TestJSliderRendering::point = nullptr;
$Rectangle* TestJSliderRendering::rect = nullptr;
$Robot* TestJSliderRendering::robot = nullptr;
$String* TestJSliderRendering::GTK_LAF_CLASS = nullptr;
int32_t TestJSliderRendering::minColorDifference = 0;

void TestJSliderRendering::init$() {
}

void TestJSliderRendering::blockTillDisplayed($Component* comp) {
	$init(TestJSliderRendering);
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

int32_t TestJSliderRendering::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestJSliderRendering);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = c1->getGreen();
	int32_t var$2 = $Math::abs(var$3 - c2->getGreen());
	int32_t var$4 = c1->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - c2->getBlue())));
}

void TestJSliderRendering::main($StringArray* args) {
	$init(TestJSliderRendering);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestJSliderRendering::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$assignStatic(TestJSliderRendering::robot, $new($Robot));
	TestJSliderRendering::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($TestJSliderRendering$1));
		$nc(TestJSliderRendering::robot)->waitForIdle();
		$nc(TestJSliderRendering::robot)->delay(500);
		blockTillDisplayed(TestJSliderRendering::slider);
		$SwingUtilities::invokeAndWait($$new(TestJSliderRendering$$Lambda$lambda$main$0));
		$nc(TestJSliderRendering::robot)->waitForIdle();
		$nc(TestJSliderRendering::robot)->delay(500);
		int32_t h = $nc(TestJSliderRendering::point)->y + $nc(TestJSliderRendering::rect)->height * 6 / 7;
		$var($Color, backgroundColor, $nc(TestJSliderRendering::robot)->getPixelColor(TestJSliderRendering::point->x + TestJSliderRendering::rect->width / 4, h));
		$nc(TestJSliderRendering::robot)->waitForIdle();
		bool knobFound = false;
		for (int32_t i = $nc(TestJSliderRendering::point)->x + $nc(TestJSliderRendering::rect)->width / 4; i < $nc(TestJSliderRendering::point)->x + $nc(TestJSliderRendering::rect)->width * 3 / 4; i += 2) {
			$var($Color, highlightColor, $nc(TestJSliderRendering::robot)->getPixelColor(i, h));
			if (getMaxColorDiff(backgroundColor, highlightColor) > TestJSliderRendering::minColorDifference) {
				knobFound = true;
				break;
			}
			$nc(TestJSliderRendering::robot)->waitForIdle();
		}
		if (!knobFound) {
			$throwNew($RuntimeException, "The slider is not rendered properly"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestJSliderRendering::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestJSliderRendering$$Lambda$dispose$1, TestJSliderRendering::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestJSliderRendering::lambda$main$0() {
	$init(TestJSliderRendering);
	$assignStatic(TestJSliderRendering::point, $nc(TestJSliderRendering::slider)->getLocationOnScreen());
	$assignStatic(TestJSliderRendering::rect, $nc(TestJSliderRendering::slider)->getBounds());
}

void TestJSliderRendering::clinit$($Class* clazz) {
	$assignStatic(TestJSliderRendering::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestJSliderRendering::minColorDifference = 50;
}

TestJSliderRendering::TestJSliderRendering() {
}

$Class* TestJSliderRendering::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJSliderRendering$$Lambda$lambda$main$0")) {
			return TestJSliderRendering$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestJSliderRendering$$Lambda$dispose$1")) {
			return TestJSliderRendering$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, frame)},
		{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, slider)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, point)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, rect)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, robot)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSliderRendering, GTK_LAF_CLASS)},
		{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, minColorDifference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJSliderRendering, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJSliderRendering, blockTillDisplayed, void, $Component*)},
		{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJSliderRendering, getMaxColorDiff, int32_t, $Color*, $Color*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestJSliderRendering, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJSliderRendering, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJSliderRendering$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJSliderRendering",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJSliderRendering$1"
	};
	$loadClass(TestJSliderRendering, name, initialize, &classInfo$$, TestJSliderRendering::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSliderRendering);
	});
	return class$;
}

$Class* TestJSliderRendering::class$ = nullptr;