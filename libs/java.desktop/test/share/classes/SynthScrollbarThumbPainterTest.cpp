#include <SynthScrollbarThumbPainterTest.h>
#include <FillPainter.h>
#include <MyFrame.h>
#include <SynthScrollbarThumbPainterTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE
#undef BUTTON1_DOWN_MASK
#undef GREEN
#undef RED

using $FillPainter = ::FillPainter;
using $MyFrame = ::MyFrame;
using $SynthScrollbarThumbPainterTest$1 = ::SynthScrollbarThumbPainterTest$1;
using $Color = ::java::awt::Color;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0 : public $Runnable {
	$class(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SynthScrollbarThumbPainterTest::lambda$disposeTestUI$0();
	}
};
$Class* SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0);
	});
	return class$;
}
$Class* SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::class$ = nullptr;

$Robot* SynthScrollbarThumbPainterTest::testRobot = nullptr;
$Point* SynthScrollbarThumbPainterTest::pos = nullptr;
$MyFrame* SynthScrollbarThumbPainterTest::testFrame = nullptr;

void SynthScrollbarThumbPainterTest::init$() {
}

void SynthScrollbarThumbPainterTest::main($StringArray* args) {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalObjectStack();
	$assignStatic(SynthScrollbarThumbPainterTest::testRobot, $new($Robot));
	$var($String, lookAndFeelString, "javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new($SynthScrollbarThumbPainterTest$1, lookAndFeelString));
	$nc(SynthScrollbarThumbPainterTest::testRobot)->waitForIdle();
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	testScrollBarThumbPainter();
	disposeTestUI();
}

void SynthScrollbarThumbPainterTest::disposeTestUI() {
	$init(SynthScrollbarThumbPainterTest);
	$SwingUtilities::invokeAndWait($$new(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0));
}

void SynthScrollbarThumbPainterTest::constructTestUI($String* lookAndFeelString) {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel(lookAndFeelString);
	$init($Color);
	$$nc($UIManager::getLookAndFeelDefaults())->put("ScrollBar:ScrollBarThumb[Enabled].backgroundPainter"_s, $$new($FillPainter, $Color::RED));
	$$nc($UIManager::getLookAndFeelDefaults())->put("ScrollBar:ScrollBarThumb[MouseOver].backgroundPainter"_s, $$new($FillPainter, $Color::GREEN));
	$$nc($UIManager::getLookAndFeelDefaults())->put("ScrollBar:ScrollBarThumb[Pressed].backgroundPainter"_s, $$new($FillPainter, $Color::BLUE));
	$assignStatic(SynthScrollbarThumbPainterTest::testFrame, $new($MyFrame));
}

void SynthScrollbarThumbPainterTest::testScrollBarThumbPainter() {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalObjectStack();
	$var($Point, p, $nc(SynthScrollbarThumbPainterTest::testFrame)->getLocation());
	$nc(SynthScrollbarThumbPainterTest::pos)->setLocation($nc(p)->x + 185, $nc(p)->y + 80);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$var($Color, ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - p->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	$init($Color);
	if (!$nc(ScrollbarColor)->equals($Color::RED)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'Enable\' state color does not match expected color"_s);
	}
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mouseMove($nc(SynthScrollbarThumbPainterTest::pos)->x, $nc(SynthScrollbarThumbPainterTest::pos)->y);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$assign(ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - p->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	if (!$nc(ScrollbarColor)->equals($Color::GREEN)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'MouseOver\' state color does not match expected color"_s);
	}
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$assign(ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - p->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	if (!$nc(ScrollbarColor)->equals($Color::BLUE)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'Pressed\' state color does not match expected color"_s);
	}
}

void SynthScrollbarThumbPainterTest::lambda$disposeTestUI$0() {
	$init(SynthScrollbarThumbPainterTest);
	$nc(SynthScrollbarThumbPainterTest::testFrame)->dispose();
}

void SynthScrollbarThumbPainterTest::clinit$($Class* clazz) {
	$assignStatic(SynthScrollbarThumbPainterTest::pos, $new($Point));
}

SynthScrollbarThumbPainterTest::SynthScrollbarThumbPainterTest() {
}

$Class* SynthScrollbarThumbPainterTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0")) {
			return SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testRobot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, testRobot)},
		{"pos", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, pos)},
		{"testFrame", "LMyFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, testFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthScrollbarThumbPainterTest, init$, void)},
		{"constructTestUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthScrollbarThumbPainterTest, constructTestUI, void, $String*), "java.lang.Exception"},
		{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthScrollbarThumbPainterTest, disposeTestUI, void), "java.lang.Exception"},
		{"lambda$disposeTestUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SynthScrollbarThumbPainterTest, lambda$disposeTestUI$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthScrollbarThumbPainterTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testScrollBarThumbPainter", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthScrollbarThumbPainterTest, testScrollBarThumbPainter, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SynthScrollbarThumbPainterTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SynthScrollbarThumbPainterTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SynthScrollbarThumbPainterTest$1"
	};
	$loadClass(SynthScrollbarThumbPainterTest, name, initialize, &classInfo$$, SynthScrollbarThumbPainterTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SynthScrollbarThumbPainterTest);
	});
	return class$;
}

$Class* SynthScrollbarThumbPainterTest::class$ = nullptr;