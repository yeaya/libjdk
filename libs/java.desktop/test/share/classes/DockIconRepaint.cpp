#include <DockIconRepaint.h>
#include <DockIconRepaint$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef BLUE
#undef GREEN
#undef RED

using $DockIconRepaint$1 = ::DockIconRepaint$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPanel = ::javax::swing::JPanel;

class DockIconRepaint$$Lambda$createUI : public $Runnable {
	$class(DockIconRepaint$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::createUI();
	}
};
$Class* DockIconRepaint$$Lambda$createUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DockIconRepaint$$Lambda$createUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DockIconRepaint$$Lambda$createUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DockIconRepaint$$Lambda$createUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DockIconRepaint$$Lambda$createUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DockIconRepaint$$Lambda$createUI);
	});
	return class$;
}
$Class* DockIconRepaint$$Lambda$createUI::class$ = nullptr;

class DockIconRepaint$$Lambda$lambda$test$0$1 : public $Runnable {
	$class(DockIconRepaint$$Lambda$lambda$test$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::lambda$test$0();
	}
};
$Class* DockIconRepaint$$Lambda$lambda$test$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DockIconRepaint$$Lambda$lambda$test$0$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DockIconRepaint$$Lambda$lambda$test$0$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DockIconRepaint$$Lambda$lambda$test$0$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DockIconRepaint$$Lambda$lambda$test$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DockIconRepaint$$Lambda$lambda$test$0$1);
	});
	return class$;
}
$Class* DockIconRepaint$$Lambda$lambda$test$0$1::class$ = nullptr;

class DockIconRepaint$$Lambda$lambda$test$1$2 : public $Runnable {
	$class(DockIconRepaint$$Lambda$lambda$test$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::lambda$test$1();
	}
};
$Class* DockIconRepaint$$Lambda$lambda$test$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DockIconRepaint$$Lambda$lambda$test$1$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DockIconRepaint$$Lambda$lambda$test$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DockIconRepaint$$Lambda$lambda$test$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DockIconRepaint$$Lambda$lambda$test$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DockIconRepaint$$Lambda$lambda$test$1$2);
	});
	return class$;
}
$Class* DockIconRepaint$$Lambda$lambda$test$1$2::class$ = nullptr;

$volatile($Color*) DockIconRepaint::color = nullptr;
$JFrame* DockIconRepaint::frame = nullptr;
$JInternalFrame* DockIconRepaint::jif = nullptr;
$Robot* DockIconRepaint::robot = nullptr;
$Point* DockIconRepaint::iconLoc = nullptr;
$Rectangle* DockIconRepaint::iconBounds = nullptr;

void DockIconRepaint::init$() {
}

void DockIconRepaint::main($StringArray* args) {
	$useLocalObjectStack();
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::robot, $new($Robot));
	$EventQueue::invokeAndWait($$new(DockIconRepaint$$Lambda$createUI));
	$var($Throwable, var$0, nullptr);
	try {
		$nc(DockIconRepaint::robot)->waitForIdle();
		$init($Color);
		$assignStatic(DockIconRepaint::color, $Color::BLUE);
		test();
		$assignStatic(DockIconRepaint::color, $Color::RED);
		test();
		$assignStatic(DockIconRepaint::color, $Color::GREEN);
		test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(DockIconRepaint::frame)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void DockIconRepaint::test() {
	$useLocalObjectStack();
	$EventQueue::invokeAndWait($$new(DockIconRepaint$$Lambda$lambda$test$0$1));
	$init(DockIconRepaint);
	$nc(DockIconRepaint::robot)->waitForIdle();
	$Thread::sleep(1000);
	$EventQueue::invokeAndWait($$new(DockIconRepaint$$Lambda$lambda$test$1$2));
	$nc(DockIconRepaint::robot)->waitForIdle();
	$Thread::sleep(1000);
	$var($Color, c, $nc(DockIconRepaint::robot)->getPixelColor($nc(DockIconRepaint::iconLoc)->x + $nc(DockIconRepaint::iconBounds)->width / 2, $nc(DockIconRepaint::iconLoc)->y + $nc(DockIconRepaint::iconBounds)->height / 2));
	int32_t var$0 = $nc(c)->getRGB();
	if (var$0 != $nc(DockIconRepaint::color)->getRGB()) {
		$nc($System::err)->println($$str({"Exp: "_s, $($Integer::toHexString($nc(DockIconRepaint::color)->getRGB()))}));
		$System::err->println($$str({"Actual: "_s, $($Integer::toHexString(c->getRGB()))}));
		$throwNew($RuntimeException, "Wrong color."_s);
	}
}

void DockIconRepaint::createUI() {
	$useLocalObjectStack();
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::frame, $new($JFrame));
	DockIconRepaint::frame->setUndecorated(true);
	$nc(DockIconRepaint::frame)->setSize(300, 300);
	$nc(DockIconRepaint::frame)->setLocationRelativeTo(nullptr);
	$var($JDesktopPane, pane, $new($JDesktopPane));
	$var($JPanel, panel, $new($DockIconRepaint$1));
	$assignStatic(DockIconRepaint::jif, $new($JInternalFrame));
	DockIconRepaint::jif->add(panel);
	$nc(DockIconRepaint::jif)->setVisible(true);
	$nc(DockIconRepaint::jif)->setSize(300, 300);
	pane->add(DockIconRepaint::jif);
	$nc(DockIconRepaint::frame)->add(pane);
	$nc(DockIconRepaint::frame)->setVisible(true);
}

void DockIconRepaint::lambda$test$1() {
	$useLocalObjectStack();
	try {
		$init(DockIconRepaint);
		$nc(DockIconRepaint::jif)->setIcon(true);
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, e);
	}
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::iconLoc, $$nc($nc(DockIconRepaint::jif)->getDesktopIcon())->getLocationOnScreen());
	$assignStatic(DockIconRepaint::iconBounds, $$nc($nc(DockIconRepaint::jif)->getDesktopIcon())->getBounds());
}

void DockIconRepaint::lambda$test$0() {
	try {
		$init(DockIconRepaint);
		$nc(DockIconRepaint::jif)->setIcon(false);
		$nc(DockIconRepaint::jif)->setMaximum(true);
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, e);
	}
}

DockIconRepaint::DockIconRepaint() {
}

$Class* DockIconRepaint::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DockIconRepaint$$Lambda$createUI")) {
			return DockIconRepaint$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals("DockIconRepaint$$Lambda$lambda$test$0$1")) {
			return DockIconRepaint$$Lambda$lambda$test$0$1::load$(name, initialize);
		}
		if (name->equals("DockIconRepaint$$Lambda$lambda$test$1$2")) {
			return DockIconRepaint$$Lambda$lambda$test$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"color", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DockIconRepaint, color)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, frame)},
		{"jif", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, jif)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, robot)},
		{"iconLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, iconLoc)},
		{"iconBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, iconBounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DockIconRepaint, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DockIconRepaint, createUI, void)},
		{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DockIconRepaint, lambda$test$0, void)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DockIconRepaint, lambda$test$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DockIconRepaint, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DockIconRepaint, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DockIconRepaint$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"DockIconRepaint",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DockIconRepaint$1"
	};
	$loadClass(DockIconRepaint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DockIconRepaint);
	});
	return class$;
}

$Class* DockIconRepaint::class$ = nullptr;