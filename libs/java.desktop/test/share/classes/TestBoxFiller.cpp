#include <TestBoxFiller.h>
#include <java/awt/Component.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/Box.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_TAB

using $Component = ::java::awt::Component;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Box = ::javax::swing::Box;
using $Box$Filler = ::javax::swing::Box$Filler;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestBoxFiller$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestBoxFiller$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBoxFiller::lambda$main$0();
	}
};
$Class* TestBoxFiller$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBoxFiller$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBoxFiller$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBoxFiller$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestBoxFiller$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBoxFiller$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestBoxFiller$$Lambda$lambda$main$0::class$ = nullptr;

class TestBoxFiller$$Lambda$dispose$1 : public $Runnable {
	$class(TestBoxFiller$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestBoxFiller$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestBoxFiller$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestBoxFiller$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBoxFiller$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBoxFiller$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestBoxFiller$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBoxFiller$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestBoxFiller$$Lambda$dispose$1::class$ = nullptr;

class TestBoxFiller$$Lambda$showFocusOwner$2 : public $PropertyChangeListener {
	$class(TestBoxFiller$$Lambda$showFocusOwner$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* e) override {
		TestBoxFiller::showFocusOwner(e);
	}
};
$Class* TestBoxFiller$$Lambda$showFocusOwner$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBoxFiller$$Lambda$showFocusOwner$2, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestBoxFiller$$Lambda$showFocusOwner$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBoxFiller$$Lambda$showFocusOwner$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestBoxFiller$$Lambda$showFocusOwner$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBoxFiller$$Lambda$showFocusOwner$2);
	});
	return class$;
}
$Class* TestBoxFiller$$Lambda$showFocusOwner$2::class$ = nullptr;

$JFrame* TestBoxFiller::frame = nullptr;

void TestBoxFiller::init$() {
}

void TestBoxFiller::showFocusOwner($PropertyChangeEvent* e) {
	$var($Object, c, $nc(e)->getNewValue());
	if ($instanceOf($Box$Filler, c)) {
		$throwNew($RuntimeException, "Box.Filler having focus"_s);
	}
}

void TestBoxFiller::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(100);
		$SwingUtilities::invokeAndWait($$new(TestBoxFiller$$Lambda$lambda$main$0));
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_TAB);
		robot->keyRelease($KeyEvent::VK_TAB);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(TestBoxFiller);
		if (TestBoxFiller::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(TestBoxFiller$$Lambda$dispose$1, TestBoxFiller::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestBoxFiller::lambda$main$0() {
	$useLocalObjectStack();
	$init(TestBoxFiller);
	$assignStatic(TestBoxFiller::frame, $new($JFrame));
	$var($KeyboardFocusManager, m, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$nc(m)->addPropertyChangeListener("focusOwner"_s, $$new(TestBoxFiller$$Lambda$showFocusOwner$2));
	$var($Box, box, $Box::createHorizontalBox());
	$var($JTextField, tf1, $new($JTextField, "Test"_s));
	tf1->setColumns(40);
	$var($JTextField, tf2, $new($JTextField, "Test"_s));
	tf2->setColumns(40);
	$nc(box)->add(tf1);
	box->add($($Box::createHorizontalStrut(20)));
	box->add(tf2);
	$nc(TestBoxFiller::frame)->setContentPane(box);
	$nc(TestBoxFiller::frame)->setFocusTraversalPolicy($$new($ContainerOrderFocusTraversalPolicy));
	$nc(TestBoxFiller::frame)->pack();
	$nc(TestBoxFiller::frame)->setVisible(true);
	$nc(TestBoxFiller::frame)->setLocationRelativeTo(nullptr);
	tf1->requestFocusInWindow();
}

TestBoxFiller::TestBoxFiller() {
}

$Class* TestBoxFiller::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestBoxFiller$$Lambda$lambda$main$0")) {
			return TestBoxFiller$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestBoxFiller$$Lambda$dispose$1")) {
			return TestBoxFiller$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals("TestBoxFiller$$Lambda$showFocusOwner$2")) {
			return TestBoxFiller$$Lambda$showFocusOwner$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestBoxFiller, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBoxFiller, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestBoxFiller, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestBoxFiller, main, void, $StringArray*), "java.lang.Exception"},
		{"showFocusOwner", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestBoxFiller, showFocusOwner, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestBoxFiller",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestBoxFiller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBoxFiller);
	});
	return class$;
}

$Class* TestBoxFiller::class$ = nullptr;