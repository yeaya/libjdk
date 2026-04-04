#include <TestCaretPositionJTextPane.h>
#include <TestCaretPositionJTextPane$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef PLAIN

using $TestCaretPositionJTextPane$1 = ::TestCaretPositionJTextPane$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Font = ::java::awt::Font;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestCaretPositionJTextPane$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestCaretPositionJTextPane$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPositionJTextPane::lambda$main$0();
	}
};
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPositionJTextPane$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCaretPositionJTextPane$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestCaretPositionJTextPane$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestCaretPositionJTextPane$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPositionJTextPane$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$0::class$ = nullptr;

class TestCaretPositionJTextPane$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPositionJTextPane::lambda$main$1();
	}
};
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestCaretPositionJTextPane$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::class$ = nullptr;

$JTextPane* TestCaretPositionJTextPane::textPane = nullptr;
$JFrame* TestCaretPositionJTextPane::f = nullptr;

void TestCaretPositionJTextPane::init$() {
}

void TestCaretPositionJTextPane::createUI() {
	$useLocalObjectStack();
	$init(TestCaretPositionJTextPane);
	$assignStatic(TestCaretPositionJTextPane::f, $new($JFrame, "Test Cursor/Caret with Java 9"_s));
	$assignStatic(TestCaretPositionJTextPane::textPane, $new($JTextPane));
	TestCaretPositionJTextPane::textPane->setFont($$new($Font, "Dialog"_s, $Font::PLAIN, 12));
	fillTextPane(TestCaretPositionJTextPane::textPane);
	$nc(TestCaretPositionJTextPane::textPane)->addMouseListener($$new($TestCaretPositionJTextPane$1));
	$init($BorderLayout);
	$nc(TestCaretPositionJTextPane::f)->add($$new($JScrollPane, TestCaretPositionJTextPane::textPane), $BorderLayout::CENTER);
	$nc(TestCaretPositionJTextPane::f)->pack();
	$nc(TestCaretPositionJTextPane::f)->setVisible(true);
}

void TestCaretPositionJTextPane::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(200);
		$SwingUtilities::invokeAndWait($$new(TestCaretPositionJTextPane$$Lambda$lambda$main$0));
		robot->waitForIdle();
		$init(TestCaretPositionJTextPane);
		$var($Point, p, $nc(TestCaretPositionJTextPane::textPane)->getLocationOnScreen());
		robot->mouseMove($nc(p)->x + 380, $nc(p)->y + 6);
		robot->waitForIdle();
		robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		robot->waitForIdle();
		robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		robot->waitForIdle();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestCaretPositionJTextPane::fillTextPane($JTextPane* textPane) {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < 30; ++i) {
		$var($StringBuilder, row, $new($StringBuilder));
		for (int32_t j = 0; j < 50; ++j) {
			row->append(j);
			if (j % 5 == 0) {
				row->append(" "_s);
			}
		}
		buf->append($cast($CharSequence, row))->append($($System::lineSeparator()));
	}
	$nc(textPane)->setText($(buf->toString()));
	textPane->setCaretPosition(0);
}

void TestCaretPositionJTextPane::lambda$main$1() {
	$init(TestCaretPositionJTextPane);
	$nc(TestCaretPositionJTextPane::f)->dispose();
}

void TestCaretPositionJTextPane::lambda$main$0() {
	createUI();
}

TestCaretPositionJTextPane::TestCaretPositionJTextPane() {
}

$Class* TestCaretPositionJTextPane::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestCaretPositionJTextPane$$Lambda$lambda$main$0")) {
			return TestCaretPositionJTextPane$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestCaretPositionJTextPane$$Lambda$lambda$main$1$1")) {
			return TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"textPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPositionJTextPane, textPane)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPositionJTextPane, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPositionJTextPane, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestCaretPositionJTextPane, createUI, void)},
		{"fillTextPane", "(Ljavax/swing/JTextPane;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestCaretPositionJTextPane, fillTextPane, void, $JTextPane*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestCaretPositionJTextPane, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestCaretPositionJTextPane, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestCaretPositionJTextPane, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCaretPositionJTextPane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestCaretPositionJTextPane",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestCaretPositionJTextPane$1"
	};
	$loadClass(TestCaretPositionJTextPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPositionJTextPane);
	});
	return class$;
}

$Class* TestCaretPositionJTextPane::class$ = nullptr;