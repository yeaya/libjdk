#include <TestFormViewNPE.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
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
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER

using $BorderLayout = ::java::awt::BorderLayout;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestFormViewNPE$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestFormViewNPE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestFormViewNPE::lambda$main$0();
	}
};
$Class* TestFormViewNPE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestFormViewNPE$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestFormViewNPE$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestFormViewNPE$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestFormViewNPE$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestFormViewNPE$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestFormViewNPE$$Lambda$lambda$main$0::class$ = nullptr;

class TestFormViewNPE$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestFormViewNPE$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestFormViewNPE::lambda$main$1();
	}
};
$Class* TestFormViewNPE$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestFormViewNPE$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestFormViewNPE$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestFormViewNPE$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestFormViewNPE$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestFormViewNPE$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestFormViewNPE$$Lambda$lambda$main$1$1::class$ = nullptr;

$JEditorPane* TestFormViewNPE::html = nullptr;
$JFrame* TestFormViewNPE::frame = nullptr;

void TestFormViewNPE::init$() {
}

void TestFormViewNPE::setup() {
	$init(TestFormViewNPE);
	$assignStatic(TestFormViewNPE::html, $new($JEditorPane, "text/html"_s, "<html><body><form action=\"http://localhost.cgi\"><select name=select id=\"myCourses\" autofocus> \n            <option ></option> \n        </select> <input type=submit name=submit value=\"submit\"/></form></body></html>"_s));
	$assignStatic(TestFormViewNPE::frame, $new($JFrame));
	TestFormViewNPE::frame->setLayout($$new($BorderLayout));
	$nc(TestFormViewNPE::frame)->add(TestFormViewNPE::html, $BorderLayout::CENTER);
	$nc(TestFormViewNPE::frame)->setSize(TestFormViewNPE::width, TestFormViewNPE::height);
	$nc(TestFormViewNPE::frame)->setVisible(true);
}

void TestFormViewNPE::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(TestFormViewNPE$$Lambda$lambda$main$0));
		robot->waitForIdle();
		robot->delay(500);
		robot->mouseMove(TestFormViewNPE::width / 2, TestFormViewNPE::height / 2);
		robot->delay(500);
		robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(TestFormViewNPE$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestFormViewNPE::lambda$main$1() {
	$init(TestFormViewNPE);
	$nc(TestFormViewNPE::frame)->dispose();
}

void TestFormViewNPE::lambda$main$0() {
	setup();
}

TestFormViewNPE::TestFormViewNPE() {
}

$Class* TestFormViewNPE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestFormViewNPE$$Lambda$lambda$main$0")) {
			return TestFormViewNPE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestFormViewNPE$$Lambda$lambda$main$1$1")) {
			return TestFormViewNPE$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"html", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestFormViewNPE, html)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestFormViewNPE, frame)},
		{"width", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestFormViewNPE, width)},
		{"height", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestFormViewNPE, height)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestFormViewNPE, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestFormViewNPE, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestFormViewNPE, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestFormViewNPE, main, void, $StringArray*), "java.lang.Exception"},
		{"setup", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestFormViewNPE, setup, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestFormViewNPE",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestFormViewNPE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestFormViewNPE);
	});
	return class$;
}

$Class* TestFormViewNPE::class$ = nullptr;