#include <TestCaretPosition.h>
#include <TestCaretPosition$1.h>
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
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef PLAIN

using $TestCaretPosition$1 = ::TestCaretPosition$1;
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
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestCaretPosition$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestCaretPosition$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPosition::lambda$main$0();
	}
};
$Class* TestCaretPosition$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPosition$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestCaretPosition$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestCaretPosition$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPosition$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestCaretPosition$$Lambda$lambda$main$0::class$ = nullptr;

class TestCaretPosition$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestCaretPosition$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPosition::lambda$main$1();
	}
};
$Class* TestCaretPosition$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPosition$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestCaretPosition$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestCaretPosition$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPosition$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestCaretPosition$$Lambda$lambda$main$1$1::class$ = nullptr;

$JTextArea* TestCaretPosition::jTextArea1 = nullptr;
$JFrame* TestCaretPosition::f = nullptr;

void TestCaretPosition::init$() {
}

void TestCaretPosition::createUI() {
	$useLocalObjectStack();
	$init(TestCaretPosition);
	$assignStatic(TestCaretPosition::jTextArea1, $new($JTextArea, 5, 80));
	$assignStatic(TestCaretPosition::f, $new($JFrame));
	TestCaretPosition::jTextArea1->setFont($$new($Font, "Arial"_s, $Font::PLAIN, 12));
	fillTextArea(TestCaretPosition::jTextArea1);
	$nc(TestCaretPosition::jTextArea1)->setLineWrap(true);
	$nc(TestCaretPosition::jTextArea1)->addMouseListener($$new($TestCaretPosition$1));
	$init($BorderLayout);
	$nc(TestCaretPosition::f)->add($$new($JScrollPane, TestCaretPosition::jTextArea1), $BorderLayout::CENTER);
	$nc(TestCaretPosition::f)->pack();
	$nc(TestCaretPosition::f)->setVisible(true);
}

void TestCaretPosition::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(TestCaretPosition$$Lambda$lambda$main$0));
		$init(TestCaretPosition);
		$var($Point, p, $nc(TestCaretPosition::jTextArea1)->getLocationOnScreen());
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(200);
		robot->mouseMove($nc(p)->x + 480, $nc(p)->y + 6);
		robot->waitForIdle();
		robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		robot->waitForIdle();
		robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		robot->waitForIdle();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(TestCaretPosition$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestCaretPosition::fillTextArea($JTextArea* area) {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < 3; ++i) {
		$var($StringBuilder, row, $new($StringBuilder));
		for (int32_t j = 0; j < 50; ++j) {
			row->append(j);
			if (j % 5 == 0) {
				row->append(" "_s);
			}
		}
		buf->append($cast($CharSequence, row))->append($($System::lineSeparator()));
	}
	$nc(area)->setText($(buf->toString()));
	area->setCaretPosition(0);
}

void TestCaretPosition::lambda$main$1() {
	$init(TestCaretPosition);
	$nc(TestCaretPosition::f)->dispose();
}

void TestCaretPosition::lambda$main$0() {
	createUI();
}

TestCaretPosition::TestCaretPosition() {
}

$Class* TestCaretPosition::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestCaretPosition$$Lambda$lambda$main$0")) {
			return TestCaretPosition$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestCaretPosition$$Lambda$lambda$main$1$1")) {
			return TestCaretPosition$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"jTextArea1", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPosition, jTextArea1)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPosition, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCaretPosition, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestCaretPosition, createUI, void)},
		{"fillTextArea", "(Ljavax/swing/JTextArea;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestCaretPosition, fillTextArea, void, $JTextArea*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestCaretPosition, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestCaretPosition, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestCaretPosition, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCaretPosition$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestCaretPosition",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestCaretPosition$1"
	};
	$loadClass(TestCaretPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPosition);
	});
	return class$;
}

$Class* TestCaretPosition::class$ = nullptr;