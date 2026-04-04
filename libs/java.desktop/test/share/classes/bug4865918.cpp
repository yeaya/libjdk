#include <bug4865918.h>
#include <bug4865918$1.h>
#include <bug4865918$2.h>
#include <bug4865918$3.h>
#include <bug4865918$TestScrollBar.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $bug4865918$1 = ::bug4865918$1;
using $bug4865918$2 = ::bug4865918$2;
using $bug4865918$3 = ::bug4865918$3;
using $bug4865918$TestScrollBar = ::bug4865918$TestScrollBar;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4865918$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4865918$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4865918::lambda$main$0();
	}
};
$Class* bug4865918$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4865918$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4865918$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4865918$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4865918$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4865918$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4865918$$Lambda$lambda$main$0::class$ = nullptr;

$bug4865918$TestScrollBar* bug4865918::sbar = nullptr;
$JFrame* bug4865918::frame = nullptr;

void bug4865918::init$() {
}

void bug4865918::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		$SwingUtilities::invokeAndWait($$new($bug4865918$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug4865918$2));
		robot->waitForIdle();
		int32_t value = getValue();
		if (value != 9) {
			$throwNew($Error, "The scrollbar block increment is incorect"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(bug4865918);
		if (bug4865918::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4865918$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t bug4865918::getValue() {
	$useLocalObjectStack();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4865918$3, result));
	return result->get(0);
}

void bug4865918::createAndShowGUI() {
	$useLocalObjectStack();
	$init(bug4865918);
	$assignStatic(bug4865918::frame, $new($JFrame, "bug4865918"_s));
	bug4865918::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug4865918::sbar, $new($bug4865918$TestScrollBar, $JScrollBar::HORIZONTAL, -1, 10, -100, 100));
	bug4865918::sbar->setPreferredSize($$new($Dimension, 200, 20));
	$nc(bug4865918::sbar)->setBlockIncrement(10);
	$$nc($nc(bug4865918::frame)->getContentPane())->add(bug4865918::sbar);
	$nc(bug4865918::frame)->pack();
	$nc(bug4865918::frame)->setVisible(true);
}

void bug4865918::lambda$main$0() {
	$init(bug4865918);
	$nc(bug4865918::frame)->dispose();
}

bug4865918::bug4865918() {
}

$Class* bug4865918::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4865918$$Lambda$lambda$main$0")) {
			return bug4865918$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"sbar", "Lbug4865918$TestScrollBar;", nullptr, $PRIVATE | $STATIC, $staticField(bug4865918, sbar)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4865918, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4865918, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4865918, createAndShowGUI, void)},
		{"getValue", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4865918, getValue, int32_t), "java.lang.Exception"},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4865918, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4865918, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4865918$TestScrollBar", "bug4865918", "TestScrollBar", $STATIC},
		{"bug4865918$3", nullptr, nullptr, 0},
		{"bug4865918$2", nullptr, nullptr, 0},
		{"bug4865918$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4865918",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4865918$TestScrollBar,bug4865918$3,bug4865918$2,bug4865918$1"
	};
	$loadClass(bug4865918, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4865918);
	});
	return class$;
}

$Class* bug4865918::class$ = nullptr;