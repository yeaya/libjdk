#include <TestGlyphBreak.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $FontMetrics = ::java::awt::FontMetrics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestGlyphBreak$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestGlyphBreak$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestGlyphBreak::lambda$main$0();
	}
};
$Class* TestGlyphBreak$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestGlyphBreak$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestGlyphBreak$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestGlyphBreak$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestGlyphBreak$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGlyphBreak$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestGlyphBreak$$Lambda$lambda$main$0::class$ = nullptr;

class TestGlyphBreak$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestGlyphBreak$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestGlyphBreak::lambda$main$1();
	}
};
$Class* TestGlyphBreak$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestGlyphBreak$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestGlyphBreak$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestGlyphBreak$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestGlyphBreak$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGlyphBreak$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestGlyphBreak$$Lambda$lambda$main$1$1::class$ = nullptr;

$JFrame* TestGlyphBreak::f = nullptr;
int32_t TestGlyphBreak::btnHeight = 0;
$FontMetrics* TestGlyphBreak::fm = nullptr;

void TestGlyphBreak::init$() {
}

void TestGlyphBreak::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(TestGlyphBreak$$Lambda$lambda$main$0));
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& ex) {
	}
	$SwingUtilities::invokeAndWait($$new(TestGlyphBreak$$Lambda$lambda$main$1$1));
	$init(TestGlyphBreak);
	$nc($System::out)->println($$str({"metrics getHeight "_s, $$str($nc(TestGlyphBreak::fm)->getHeight()), " button height "_s, $$str(TestGlyphBreak::btnHeight)}));
	if (TestGlyphBreak::btnHeight > 2 * $nc(TestGlyphBreak::fm)->getHeight()) {
		$throwNew($RuntimeException, "TextView is broken into different lines"_s);
	}
}

void TestGlyphBreak::lambda$main$1() {
	$init(TestGlyphBreak);
	$nc(TestGlyphBreak::f)->dispose();
}

void TestGlyphBreak::lambda$main$0() {
	$useLocalObjectStack();
	$var($String, str, "<html><font size=2 color=red><bold>Three!</font></html>"_s);
	$var($JButton, b, $new($JButton));
	b->setText(str);
	$init(TestGlyphBreak);
	$assignStatic(TestGlyphBreak::f, $new($JFrame));
	TestGlyphBreak::f->add(b);
	$nc(TestGlyphBreak::f)->pack();
	$nc(TestGlyphBreak::f)->setVisible(true);
	TestGlyphBreak::btnHeight = b->getHeight();
	$assignStatic(TestGlyphBreak::fm, b->getFontMetrics($(b->getFont())));
}

TestGlyphBreak::TestGlyphBreak() {
}

$Class* TestGlyphBreak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestGlyphBreak$$Lambda$lambda$main$0")) {
			return TestGlyphBreak$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestGlyphBreak$$Lambda$lambda$main$1$1")) {
			return TestGlyphBreak$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestGlyphBreak, f)},
		{"btnHeight", "I", nullptr, $STATIC, $staticField(TestGlyphBreak, btnHeight)},
		{"fm", "Ljava/awt/FontMetrics;", nullptr, $STATIC, $staticField(TestGlyphBreak, fm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestGlyphBreak, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestGlyphBreak, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestGlyphBreak, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestGlyphBreak, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGlyphBreak",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestGlyphBreak, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGlyphBreak);
	});
	return class$;
}

$Class* TestGlyphBreak::class$ = nullptr;