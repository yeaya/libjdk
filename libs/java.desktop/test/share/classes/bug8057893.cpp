#include <bug8057893.h>
#include <bug8057893$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_A
#undef VK_ENTER

using $bug8057893$1 = ::bug8057893$1;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $WindowConstants = ::javax::swing::WindowConstants;

class bug8057893$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8057893$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8057893::lambda$main$0();
	}
};
$Class* bug8057893$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8057893$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8057893$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8057893$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8057893$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057893$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug8057893$$Lambda$lambda$main$0::class$ = nullptr;

class bug8057893$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8057893$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8057893::lambda$main$1();
	}
};
$Class* bug8057893$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8057893$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8057893$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8057893$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8057893$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057893$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug8057893$$Lambda$lambda$main$1$1::class$ = nullptr;

$volatile(bool) bug8057893::isComboBoxEdited = false;
$JFrame* bug8057893::frame = nullptr;

void bug8057893::init$() {
}

void bug8057893::main($StringArray* args) {
	$init(bug8057893);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$EventQueue::invokeAndWait($$new(bug8057893$$Lambda$lambda$main$0));
	robot->waitForIdle();
	robot->delay(1000);
	robot->keyPress($KeyEvent::VK_A);
	robot->keyRelease($KeyEvent::VK_A);
	robot->keyPress($KeyEvent::VK_ENTER);
	robot->keyRelease($KeyEvent::VK_ENTER);
	robot->waitForIdle();
	if (bug8057893::frame != nullptr) {
		$EventQueue::invokeAndWait($$new(bug8057893$$Lambda$lambda$main$1$1));
	}
	if (!bug8057893::isComboBoxEdited) {
		$throwNew($RuntimeException, "ComboBoxEdited event is not fired!"_s);
	}
}

void bug8057893::lambda$main$1() {
	$init(bug8057893);
	$nc(bug8057893::frame)->dispose();
}

void bug8057893::lambda$main$0() {
	$init(bug8057893);
	$useLocalObjectStack();
	$assignStatic(bug8057893::frame, $new($JFrame));
	bug8057893::frame->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$var($JComboBox, comboBox, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s
	})));
	comboBox->setEditable(true);
	comboBox->addActionListener($$new($bug8057893$1));
	$nc(bug8057893::frame)->add(comboBox);
	$nc(bug8057893::frame)->pack();
	$nc(bug8057893::frame)->setVisible(true);
	$nc(bug8057893::frame)->setLocationRelativeTo(nullptr);
	comboBox->requestFocusInWindow();
}

void bug8057893::clinit$($Class* clazz) {
	bug8057893::isComboBoxEdited = false;
}

bug8057893::bug8057893() {
}

$Class* bug8057893::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8057893$$Lambda$lambda$main$0")) {
			return bug8057893$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug8057893$$Lambda$lambda$main$1$1")) {
			return bug8057893$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"isComboBoxEdited", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8057893, isComboBoxEdited)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8057893, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8057893, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8057893, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8057893, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8057893, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8057893$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8057893",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8057893$1"
	};
	$loadClass(bug8057893, name, initialize, &classInfo$$, bug8057893::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057893);
	});
	return class$;
}

$Class* bug8057893::class$ = nullptr;