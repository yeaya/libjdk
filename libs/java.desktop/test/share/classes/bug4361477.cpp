#include <bug4361477.h>
#include <bug4361477$1.h>
#include <bug4361477$2.h>
#include <bug4361477$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $bug4361477$1 = ::bug4361477$1;
using $bug4361477$2 = ::bug4361477$2;
using $bug4361477$3 = ::bug4361477$3;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
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
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4361477$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4361477$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4361477::lambda$main$0();
	}
};
$Class* bug4361477$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4361477$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4361477$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4361477$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4361477$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4361477$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4361477$$Lambda$lambda$main$0::class$ = nullptr;

$JTabbedPane* bug4361477::tabbedPane = nullptr;
$volatile(bool) bug4361477::bStateChanged = false;
$volatile($Rectangle*) bug4361477::bounds = nullptr;
$JFrame* bug4361477::frame = nullptr;

void bug4361477::init$() {
}

void bug4361477::main($StringArray* args) {
	$init(bug4361477);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(50);
		$SwingUtilities::invokeAndWait($$new($bug4361477$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug4361477$2));
		$var($Point, location, $nc(bug4361477::bounds)->getLocation());
		$SwingUtilities::convertPointToScreen(location, bug4361477::tabbedPane);
		robot->mouseMove($nc(location)->x + 1, $nc(location)->y + 1);
		robot->mousePress($InputEvent::BUTTON1_MASK);
		robot->mouseRelease($InputEvent::BUTTON1_MASK);
		if (!bug4361477::bStateChanged) {
			$throwNew($RuntimeException, "Tabbed pane state is not changed"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug4361477::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4361477$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug4361477::createAndShowUI() {
	$init(bug4361477);
	$useLocalObjectStack();
	$assignStatic(bug4361477::frame, $new($JFrame));
	$assignStatic(bug4361477::tabbedPane, $new($JTabbedPane));
	bug4361477::tabbedPane->add("Tab0"_s, $$new($JPanel));
	$nc(bug4361477::tabbedPane)->add("Tab1"_s, $$new($JPanel));
	$nc(bug4361477::tabbedPane)->add("Tab2"_s, $$new($JPanel));
	$nc(bug4361477::tabbedPane)->setSelectedIndex(2);
	$nc(bug4361477::tabbedPane)->addChangeListener($$new($bug4361477$3));
	$$nc($nc(bug4361477::frame)->getContentPane())->add(bug4361477::tabbedPane);
	$nc(bug4361477::frame)->setSize(300, 200);
	$nc(bug4361477::frame)->setVisible(true);
}

void bug4361477::lambda$main$0() {
	$init(bug4361477);
	$nc(bug4361477::frame)->dispose();
}

void bug4361477::clinit$($Class* clazz) {
	bug4361477::bStateChanged = false;
}

bug4361477::bug4361477() {
}

$Class* bug4361477::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4361477$$Lambda$lambda$main$0")) {
			return bug4361477$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $STATIC, $staticField(bug4361477, tabbedPane)},
		{"bStateChanged", "Z", nullptr, $STATIC | $VOLATILE, $staticField(bug4361477, bStateChanged)},
		{"bounds", "Ljava/awt/Rectangle;", nullptr, $STATIC | $VOLATILE, $staticField(bug4361477, bounds)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4361477, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4361477, init$, void)},
		{"createAndShowUI", "()V", nullptr, $STATIC, $staticMethod(bug4361477, createAndShowUI, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4361477, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4361477, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4361477$3", nullptr, nullptr, 0},
		{"bug4361477$2", nullptr, nullptr, 0},
		{"bug4361477$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4361477",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4361477$3,bug4361477$2,bug4361477$1"
	};
	$loadClass(bug4361477, name, initialize, &classInfo$$, bug4361477::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4361477);
	});
	return class$;
}

$Class* bug4361477::class$ = nullptr;