#include <TestSelectedTextBackgroundColor.h>
#include <TestSelectedTextBackgroundColor$1.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestSelectedTextBackgroundColor$1 = ::TestSelectedTextBackgroundColor$1;
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
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestSelectedTextBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestSelectedTextBackgroundColor::lambda$main$0();
	}
};
$Class* TestSelectedTextBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestSelectedTextBackgroundColor$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestSelectedTextBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestSelectedTextBackgroundColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestSelectedTextBackgroundColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestSelectedTextBackgroundColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestSelectedTextBackgroundColor$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestSelectedTextBackgroundColor$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestSelectedTextBackgroundColor$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestSelectedTextBackgroundColor$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestSelectedTextBackgroundColor$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSelectedTextBackgroundColor$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestSelectedTextBackgroundColor$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestSelectedTextBackgroundColor::frame = nullptr;
$JSpinner* TestSelectedTextBackgroundColor::listModelSpinner = nullptr;
$Point* TestSelectedTextBackgroundColor::point = nullptr;
$Rectangle* TestSelectedTextBackgroundColor::rect = nullptr;
$Robot* TestSelectedTextBackgroundColor::robot = nullptr;
$String* TestSelectedTextBackgroundColor::GTK_LAF_CLASS = nullptr;
int32_t TestSelectedTextBackgroundColor::minColorDifference = 0;

void TestSelectedTextBackgroundColor::init$() {
}

void TestSelectedTextBackgroundColor::blockTillDisplayed($Component* comp) {
	$init(TestSelectedTextBackgroundColor);
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

$JFormattedTextField* TestSelectedTextBackgroundColor::getTextField($JSpinner* spinner) {
	$init(TestSelectedTextBackgroundColor);
	$useLocalObjectStack();
	$var($JComponent, editor, $nc(spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		return $cast($JSpinner$DefaultEditor, editor)->getTextField();
	} else {
		$nc($System::err)->println($$str({"Unexpected editor type: "_s, $$of($nc(spinner->getEditor()))->getClass(), " isn\'t a descendant of DefaultEditor"_s}));
		return nullptr;
	}
}

int32_t TestSelectedTextBackgroundColor::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestSelectedTextBackgroundColor);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = c1->getGreen();
	int32_t var$2 = $Math::abs(var$3 - c2->getGreen());
	int32_t var$4 = c1->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - c2->getBlue())));
}

void TestSelectedTextBackgroundColor::main($StringArray* args) {
	$init(TestSelectedTextBackgroundColor);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestSelectedTextBackgroundColor::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$assignStatic(TestSelectedTextBackgroundColor::robot, $new($Robot));
	TestSelectedTextBackgroundColor::robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($TestSelectedTextBackgroundColor$1));
		$nc(TestSelectedTextBackgroundColor::robot)->waitForIdle();
		$nc(TestSelectedTextBackgroundColor::robot)->delay(500);
		blockTillDisplayed(TestSelectedTextBackgroundColor::listModelSpinner);
		$SwingUtilities::invokeAndWait($$new(TestSelectedTextBackgroundColor$$Lambda$lambda$main$0));
		$nc(TestSelectedTextBackgroundColor::robot)->waitForIdle();
		$nc(TestSelectedTextBackgroundColor::robot)->delay(500);
		$var($Color, backgroundColor, $nc(TestSelectedTextBackgroundColor::robot)->getPixelColor($nc(TestSelectedTextBackgroundColor::point)->x + $nc(TestSelectedTextBackgroundColor::rect)->width / 2, $nc(TestSelectedTextBackgroundColor::point)->y + $nc(TestSelectedTextBackgroundColor::rect)->height / 2));
		$nc(TestSelectedTextBackgroundColor::robot)->waitForIdle();
		$nc(TestSelectedTextBackgroundColor::robot)->delay(500);
		$var($JFormattedTextField, formattedTextField, getTextField(TestSelectedTextBackgroundColor::listModelSpinner));
		$nc(formattedTextField)->selectAll();
		$nc(TestSelectedTextBackgroundColor::robot)->waitForIdle();
		$nc(TestSelectedTextBackgroundColor::robot)->delay(500);
		$var($Color, highlightColor, $nc(TestSelectedTextBackgroundColor::robot)->getPixelColor($nc(TestSelectedTextBackgroundColor::point)->x + $nc(TestSelectedTextBackgroundColor::rect)->width / 2, $nc(TestSelectedTextBackgroundColor::point)->y + $nc(TestSelectedTextBackgroundColor::rect)->height / 2));
		$nc(TestSelectedTextBackgroundColor::robot)->waitForIdle();
		$nc(TestSelectedTextBackgroundColor::robot)->delay(500);
		int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
		if (actualColorDifference < TestSelectedTextBackgroundColor::minColorDifference) {
			$throwNew($RuntimeException, "The expected background color for Selected Text was not found"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (TestSelectedTextBackgroundColor::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestSelectedTextBackgroundColor$$Lambda$dispose$1, TestSelectedTextBackgroundColor::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestSelectedTextBackgroundColor::lambda$main$0() {
	$init(TestSelectedTextBackgroundColor);
	$assignStatic(TestSelectedTextBackgroundColor::point, $nc(TestSelectedTextBackgroundColor::listModelSpinner)->getLocationOnScreen());
	$assignStatic(TestSelectedTextBackgroundColor::rect, $nc(TestSelectedTextBackgroundColor::listModelSpinner)->getBounds());
}

void TestSelectedTextBackgroundColor::clinit$($Class* clazz) {
	$assignStatic(TestSelectedTextBackgroundColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestSelectedTextBackgroundColor::minColorDifference = 100;
}

TestSelectedTextBackgroundColor::TestSelectedTextBackgroundColor() {
}

$Class* TestSelectedTextBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestSelectedTextBackgroundColor$$Lambda$lambda$main$0")) {
			return TestSelectedTextBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestSelectedTextBackgroundColor$$Lambda$dispose$1")) {
			return TestSelectedTextBackgroundColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, frame)},
		{"listModelSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, listModelSpinner)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, point)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, rect)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, robot)},
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestSelectedTextBackgroundColor, GTK_LAF_CLASS)},
		{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestSelectedTextBackgroundColor, minColorDifference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestSelectedTextBackgroundColor, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestSelectedTextBackgroundColor, blockTillDisplayed, void, $Component*)},
		{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestSelectedTextBackgroundColor, getMaxColorDiff, int32_t, $Color*, $Color*)},
		{"getTextField", "(Ljavax/swing/JSpinner;)Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE | $STATIC, $staticMethod(TestSelectedTextBackgroundColor, getTextField, $JFormattedTextField*, $JSpinner*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestSelectedTextBackgroundColor, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestSelectedTextBackgroundColor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestSelectedTextBackgroundColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestSelectedTextBackgroundColor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestSelectedTextBackgroundColor$1"
	};
	$loadClass(TestSelectedTextBackgroundColor, name, initialize, &classInfo$$, TestSelectedTextBackgroundColor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestSelectedTextBackgroundColor);
	});
	return class$;
}

$Class* TestSelectedTextBackgroundColor::class$ = nullptr;