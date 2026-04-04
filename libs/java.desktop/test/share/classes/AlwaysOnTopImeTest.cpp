#include <AlwaysOnTopImeTest.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class AlwaysOnTopImeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AlwaysOnTopImeTest::lambda$main$0();
	}
};
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlwaysOnTopImeTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AlwaysOnTopImeTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AlwaysOnTopImeTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(AlwaysOnTopImeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlwaysOnTopImeTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$0::class$ = nullptr;

class AlwaysOnTopImeTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AlwaysOnTopImeTest::lambda$main$1();
	}
};
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AlwaysOnTopImeTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class AlwaysOnTopImeTest$$Lambda$dispose$2 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* AlwaysOnTopImeTest$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AlwaysOnTopImeTest$$Lambda$dispose$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(AlwaysOnTopImeTest$$Lambda$dispose$2, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AlwaysOnTopImeTest$$Lambda$dispose$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AlwaysOnTopImeTest$$Lambda$dispose$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlwaysOnTopImeTest$$Lambda$dispose$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlwaysOnTopImeTest$$Lambda$dispose$2);
	});
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$dispose$2::class$ = nullptr;

$JDialog* AlwaysOnTopImeTest::d = nullptr;
$JFrame* AlwaysOnTopImeTest::f = nullptr;

void AlwaysOnTopImeTest::init$() {
}

void AlwaysOnTopImeTest::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeLater($$new(AlwaysOnTopImeTest$$Lambda$lambda$main$0));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1));
	robot->waitForIdle();
	robot->delay(200);
	$init(AlwaysOnTopImeTest);
	$SwingUtilities::invokeLater($$new(AlwaysOnTopImeTest$$Lambda$dispose$2, $nc(AlwaysOnTopImeTest::f)));
}

void AlwaysOnTopImeTest::lambda$main$1() {
	$init(AlwaysOnTopImeTest);
	$nc(AlwaysOnTopImeTest::d)->setVisible(false);
}

void AlwaysOnTopImeTest::lambda$main$0() {
	$init(AlwaysOnTopImeTest);
	$assignStatic(AlwaysOnTopImeTest::f, $new($JFrame));
	AlwaysOnTopImeTest::f->setVisible(true);
	$assignStatic(AlwaysOnTopImeTest::d, $new($JDialog, AlwaysOnTopImeTest::f));
	AlwaysOnTopImeTest::d->add($$new($JTextField));
	$nc(AlwaysOnTopImeTest::d)->pack();
	$nc(AlwaysOnTopImeTest::d)->setModal(true);
	$nc(AlwaysOnTopImeTest::f)->setAlwaysOnTop(true);
	$nc(AlwaysOnTopImeTest::d)->setVisible(true);
	$nc(AlwaysOnTopImeTest::f)->setAlwaysOnTop(false);
}

AlwaysOnTopImeTest::AlwaysOnTopImeTest() {
}

$Class* AlwaysOnTopImeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("AlwaysOnTopImeTest$$Lambda$lambda$main$0")) {
			return AlwaysOnTopImeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("AlwaysOnTopImeTest$$Lambda$lambda$main$1$1")) {
			return AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("AlwaysOnTopImeTest$$Lambda$dispose$2")) {
			return AlwaysOnTopImeTest$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"d", "Ljavax/swing/JDialog;", nullptr, $PRIVATE | $STATIC, $staticField(AlwaysOnTopImeTest, d)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(AlwaysOnTopImeTest, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlwaysOnTopImeTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AlwaysOnTopImeTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AlwaysOnTopImeTest, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AlwaysOnTopImeTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AlwaysOnTopImeTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlwaysOnTopImeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlwaysOnTopImeTest);
	});
	return class$;
}

$Class* AlwaysOnTopImeTest::class$ = nullptr;