#include <SwingFontMetricsTest.h>
#include <SwingFontMetricsTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef KEY_TEXT_ANTIALIASING
#undef LOWER_CASE_TEXT
#undef SECONDS
#undef TEXT
#undef UPPER_CASE_TEXT
#undef VALUE_TEXT_ANTIALIAS_DEFAULT

using $SwingFontMetricsTest$1 = ::SwingFontMetricsTest$1;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Map = ::java::util::Map;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class SwingFontMetricsTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(SwingFontMetricsTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SwingFontMetricsTest::createAndShowGUI();
	}
};
$Class* SwingFontMetricsTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SwingFontMetricsTest$$Lambda$createAndShowGUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SwingFontMetricsTest$$Lambda$createAndShowGUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SwingFontMetricsTest$$Lambda$createAndShowGUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SwingFontMetricsTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingFontMetricsTest$$Lambda$createAndShowGUI);
	});
	return class$;
}
$Class* SwingFontMetricsTest$$Lambda$createAndShowGUI::class$ = nullptr;

$String* SwingFontMetricsTest::LOWER_CASE_TEXT = nullptr;
$String* SwingFontMetricsTest::UPPER_CASE_TEXT = nullptr;
$String* SwingFontMetricsTest::TEXT = nullptr;
bool SwingFontMetricsTest::passed = false;
$CountDownLatch* SwingFontMetricsTest::latch = nullptr;
$Object* SwingFontMetricsTest::aaHint = nullptr;

void SwingFontMetricsTest::init$() {
}

void SwingFontMetricsTest::main($StringArray* args) {
	$init(SwingFontMetricsTest);
	$useLocalObjectStack();
	$var($Map, map, $cast($Map, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("awt.font.desktophints"_s)));
	$init($RenderingHints);
	$assignStatic(SwingFontMetricsTest::aaHint, $nc(map)->get($RenderingHints::KEY_TEXT_ANTIALIASING));
	if (SwingFontMetricsTest::aaHint == nullptr) {
		$assignStatic(SwingFontMetricsTest::aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
	}
	$SwingUtilities::invokeAndWait($$new(SwingFontMetricsTest$$Lambda$createAndShowGUI));
	$init($TimeUnit);
	$nc(SwingFontMetricsTest::latch)->await(5, $TimeUnit::SECONDS);
	if (!SwingFontMetricsTest::passed) {
		$throwNew($RuntimeException, "Test Failed!"_s);
	}
}

void SwingFontMetricsTest::createAndShowGUI() {
	$init(SwingFontMetricsTest);
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	frame->setSize(300, 300);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JLabel, label, $new($SwingFontMetricsTest$1, SwingFontMetricsTest::TEXT, frame));
	frame->add(label);
	frame->setVisible(true);
}

void SwingFontMetricsTest::clinit$($Class* clazz) {
	$assignStatic(SwingFontMetricsTest::LOWER_CASE_TEXT, "the quick brown fox jumps over the lazy dog"_s);
	$assignStatic(SwingFontMetricsTest::UPPER_CASE_TEXT, SwingFontMetricsTest::LOWER_CASE_TEXT->toUpperCase());
	$assignStatic(SwingFontMetricsTest::TEXT, $str({SwingFontMetricsTest::LOWER_CASE_TEXT, SwingFontMetricsTest::UPPER_CASE_TEXT}));
	SwingFontMetricsTest::passed = false;
	$assignStatic(SwingFontMetricsTest::latch, $new($CountDownLatch, 1));
	$assignStatic(SwingFontMetricsTest::aaHint, nullptr);
}

SwingFontMetricsTest::SwingFontMetricsTest() {
}

$Class* SwingFontMetricsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SwingFontMetricsTest$$Lambda$createAndShowGUI")) {
			return SwingFontMetricsTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"LOWER_CASE_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, LOWER_CASE_TEXT)},
		{"UPPER_CASE_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, UPPER_CASE_TEXT)},
		{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, TEXT)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, passed)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, latch)},
		{"aaHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, aaHint)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SwingFontMetricsTest, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SwingFontMetricsTest, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingFontMetricsTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwingFontMetricsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SwingFontMetricsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SwingFontMetricsTest$1"
	};
	$loadClass(SwingFontMetricsTest, name, initialize, &classInfo$$, SwingFontMetricsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SwingFontMetricsTest);
	});
	return class$;
}

$Class* SwingFontMetricsTest::class$ = nullptr;