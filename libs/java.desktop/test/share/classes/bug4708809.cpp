#include <bug4708809.h>
#include <bug4708809$1.h>
#include <bug4708809$2.h>
#include <bug4708809$3.h>
#include <bug4708809$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
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
#include <javax/swing/JLabel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $PointArray = $Array<::java::awt::Point>;
using $bug4708809$1 = ::bug4708809$1;
using $bug4708809$2 = ::bug4708809$2;
using $bug4708809$3 = ::bug4708809$3;
using $bug4708809$4 = ::bug4708809$4;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4708809$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4708809$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4708809::lambda$main$0();
	}
};
$Class* bug4708809$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4708809$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4708809$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4708809$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4708809$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4708809$$Lambda$lambda$main$0::class$ = nullptr;

$volatile(bool) bug4708809::do_test = false;
$volatile(bool) bug4708809::passed = false;
$JScrollPane* bug4708809::spane = nullptr;
$JScrollBar* bug4708809::sbar = nullptr;
$JFrame* bug4708809::fr = nullptr;

void bug4708809::init$() {
}

void bug4708809::main($StringArray* args) {
	$init(bug4708809);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(350);
		$SwingUtilities::invokeAndWait($$new($bug4708809$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug4708809$2));
		robot->waitForIdle();
		$var($Point, point, getClickPoint(0.5, 0.5));
		robot->mouseMove($nc(point)->x, $nc(point)->y);
		robot->mousePress($InputEvent::BUTTON1_MASK);
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug4708809$3));
		robot->waitForIdle();
		$assign(point, getClickPoint(0.5, 0.2));
		robot->mouseMove($nc(point)->x, $nc(point)->y);
		robot->mouseRelease($InputEvent::BUTTON1_MASK);
		robot->waitForIdle();
		if (!bug4708809::do_test || !bug4708809::passed) {
			$throwNew($Exception, "The scrollbar moved with incorrect direction"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug4708809::fr != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4708809$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$Point* bug4708809::getClickPoint(double scaleX, double scaleY) {
	$init(bug4708809);
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug4708809$4, result, scaleX, scaleY));
	return result->get(0);
}

void bug4708809::createAndShowGUI() {
	$init(bug4708809);
	$useLocalObjectStack();
	$assignStatic(bug4708809::fr, $new($JFrame, "Test"_s));
	$var($JLabel, label, $new($JLabel, "picture"_s));
	label->setPreferredSize($$new($Dimension, 500, 500));
	$assignStatic(bug4708809::spane, $new($JScrollPane, label));
	$$nc($nc(bug4708809::fr)->getContentPane())->add(bug4708809::spane);
	$assignStatic(bug4708809::sbar, $nc(bug4708809::spane)->getVerticalScrollBar());
	$nc(bug4708809::fr)->setSize(200, 200);
	$nc(bug4708809::fr)->setVisible(true);
}

void bug4708809::lambda$main$0() {
	$init(bug4708809);
	$nc(bug4708809::fr)->dispose();
}

void bug4708809::clinit$($Class* clazz) {
	bug4708809::do_test = false;
	bug4708809::passed = true;
}

bug4708809::bug4708809() {
}

$Class* bug4708809::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4708809$$Lambda$lambda$main$0")) {
			return bug4708809$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"do_test", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4708809, do_test)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4708809, passed)},
		{"spane", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4708809, spane)},
		{"sbar", "Ljavax/swing/JScrollBar;", nullptr, $PRIVATE | $STATIC, $staticField(bug4708809, sbar)},
		{"fr", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4708809, fr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4708809, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4708809, createAndShowGUI, void)},
		{"getClickPoint", "(DD)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4708809, getClickPoint, $Point*, double, double), "java.lang.Exception"},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4708809, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4708809, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4708809$4", nullptr, nullptr, 0},
		{"bug4708809$3", nullptr, nullptr, 0},
		{"bug4708809$2", nullptr, nullptr, 0},
		{"bug4708809$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4708809",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4708809$4,bug4708809$3,bug4708809$3$1,bug4708809$2,bug4708809$1"
	};
	$loadClass(bug4708809, name, initialize, &classInfo$$, bug4708809::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809);
	});
	return class$;
}

$Class* bug4708809::class$ = nullptr;