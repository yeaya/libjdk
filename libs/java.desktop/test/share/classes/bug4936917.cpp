#include <bug4936917.h>
#include <bug4936917$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Timer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug4936917$1 = ::bug4936917$1;
using $Color = ::java::awt::Color;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4936917$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(bug4936917$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4936917* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	bug4936917* inst$ = nullptr;
	$JComponent* comp = nullptr;
};
$Class* bug4936917$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4936917$$Lambda$lambda$blockTillDisplayed$0, inst$)},
		{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug4936917$$Lambda$lambda$blockTillDisplayed$0, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4936917;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(bug4936917$$Lambda$lambda$blockTillDisplayed$0, init$, void, bug4936917*, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4936917$$Lambda$lambda$blockTillDisplayed$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4936917$$Lambda$lambda$blockTillDisplayed$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4936917$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4936917$$Lambda$lambda$blockTillDisplayed$0);
	});
	return class$;
}
$Class* bug4936917$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class bug4936917$$Lambda$lambda$destroy$1$1 : public $Runnable {
	$class(bug4936917$$Lambda$lambda$destroy$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4936917::lambda$destroy$1();
	}
};
$Class* bug4936917$$Lambda$lambda$destroy$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4936917$$Lambda$lambda$destroy$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4936917$$Lambda$lambda$destroy$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4936917$$Lambda$lambda$destroy$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4936917$$Lambda$lambda$destroy$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4936917$$Lambda$lambda$destroy$1$1);
	});
	return class$;
}
$Class* bug4936917$$Lambda$lambda$destroy$1$1::class$ = nullptr;

$JFrame* bug4936917::f = nullptr;

void bug4936917::init$() {
	this->passed = false;
	$set(this, p, nullptr);
	$set(this, text, "<html><head><style>body {background-color: #cccccc; margin-top: 36.000000pt;}</style></head><body> some text </body></html>"_s);
}

void bug4936917::init() {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug4936917$1, this));
	blockTillDisplayed(this->editorPane);
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(300);
	int32_t x0 = $nc(this->p)->x + 15;
	int32_t y = $nc(this->p)->y + 15;
	int32_t match = 0;
	int32_t nonmatch = 0;
	this->passed = true;
	for (int32_t x = x0; x < x0 + 10; ++x) {
		$nc($System::out)->println($$str({"color ("_s, $$str(x), ","_s, $$str(y), ")="_s, $(robot->getPixelColor(x, y))}));
		if (!$$nc(robot->getPixelColor(x, y))->equals($$new($Color, 204, 204, 204))) {
			++nonmatch;
		} else {
			++match;
		}
	}
	if (nonmatch > match) {
		this->passed = false;
	}
}

void bug4936917::blockTillDisplayed($JComponent* comp) {
	$useLocalObjectStack();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait($$new(bug4936917$$Lambda$lambda$blockTillDisplayed$0, this, comp));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void bug4936917::destroy() {
	$SwingUtilities::invokeAndWait($$new(bug4936917$$Lambda$lambda$destroy$1$1));
	if (!this->passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void bug4936917::main($StringArray* args) {
	$var(bug4936917, test, $new(bug4936917));
	test->init();
	test->destroy();
}

void bug4936917::lambda$destroy$1() {
	$init(bug4936917);
	$nc(bug4936917::f)->dispose();
}

void bug4936917::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
}

bug4936917::bug4936917() {
}

$Class* bug4936917::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4936917$$Lambda$lambda$blockTillDisplayed$0")) {
			return bug4936917$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals("bug4936917$$Lambda$lambda$destroy$1$1")) {
			return bug4936917$$Lambda$lambda$destroy$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $PRIVATE, $field(bug4936917, passed)},
		{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE, $field(bug4936917, timer)},
		{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug4936917, editorPane)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4936917, f)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4936917, p)},
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(bug4936917, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4936917, init$, void)},
		{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(bug4936917, blockTillDisplayed, void, $JComponent*), "java.lang.Exception"},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(bug4936917, destroy, void), "java.lang.Exception"},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4936917, init, void), "java.lang.Exception"},
		{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4936917, lambda$blockTillDisplayed$0, void, $JComponent*)},
		{"lambda$destroy$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4936917, lambda$destroy$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4936917, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4936917$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4936917",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4936917$1"
	};
	$loadClass(bug4936917, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4936917);
	});
	return class$;
}

$Class* bug4936917::class$ = nullptr;