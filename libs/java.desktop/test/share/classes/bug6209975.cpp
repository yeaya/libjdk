#include <bug6209975.h>
#include <bug6209975$1.h>
#include <bug6209975$2.h>
#include <bug6209975$3.h>
#include <bug6209975$MyIcon.h>
#include <bug6209975$ReturnObject.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
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
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE
#undef LEADING
#undef LEFT_TO_RIGHT
#undef RO1
#undef RO2
#undef TRAILING

using $PointArray = $Array<::java::awt::Point>;
using $bug6209975$1 = ::bug6209975$1;
using $bug6209975$2 = ::bug6209975$2;
using $bug6209975$3 = ::bug6209975$3;
using $bug6209975$MyIcon = ::bug6209975$MyIcon;
using $bug6209975$ReturnObject = ::bug6209975$ReturnObject;
using $BorderLayout = ::java::awt::BorderLayout;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Point = ::java::awt::Point;
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
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6209975$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6209975$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6209975::lambda$main$0();
	}
};
$Class* bug6209975$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6209975$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6209975$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug6209975$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6209975$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6209975$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug6209975$$Lambda$lambda$main$0::class$ = nullptr;

$bug6209975$ReturnObject* bug6209975::RO1 = nullptr;
$bug6209975$ReturnObject* bug6209975::RO2 = nullptr;
$JMenu* bug6209975::menu = nullptr;
$JButton* bug6209975::button = nullptr;
$JFrame* bug6209975::frame = nullptr;

void bug6209975::init$() {
}

void bug6209975::main($StringArray* args) {
	$init(bug6209975);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(500);
		$SwingUtilities::invokeAndWait($$new($bug6209975$1));
		robot->waitForIdle();
		$var($Point, clickPoint, getButtonClickPoint());
		robot->mouseMove($nc(clickPoint)->x, $nc(clickPoint)->y);
		robot->mousePress($InputEvent::BUTTON1_MASK);
		robot->mouseRelease($InputEvent::BUTTON1_MASK);
		robot->waitForIdle();
		$assign(clickPoint, getMenuClickPoint());
		robot->mouseMove($nc(clickPoint)->x, $nc(clickPoint)->y);
		robot->mousePress($InputEvent::BUTTON1_MASK);
		robot->mouseRelease($InputEvent::BUTTON1_MASK);
		robot->waitForIdle();
		if (bug6209975::RO1->itsValue <= bug6209975::RO2->itsValue) {
			$throwNew($RuntimeException, "Offset if the second icon is invalid."_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug6209975::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug6209975$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$Point* bug6209975::getButtonClickPoint() {
	$init(bug6209975);
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6209975$2, result));
	return result->get(0);
}

$Point* bug6209975::getMenuClickPoint() {
	$init(bug6209975);
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6209975$3, result));
	return result->get(0);
}

void bug6209975::createAndShowGUI() {
	$init(bug6209975);
	$useLocalObjectStack();
	$assignStatic(bug6209975::frame, $new($JFrame, "Test6209975"_s));
	bug6209975::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init($ComponentOrientation);
	$nc(bug6209975::frame)->applyComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	$nc(bug6209975::frame)->setLayout($$new($BorderLayout));
	$assignStatic(bug6209975::button, $new($JButton, "Focus holder"_s));
	$nc(bug6209975::frame)->add(bug6209975::button);
	$var($JMenuBar, mb, $new($JMenuBar));
	$assignStatic(bug6209975::menu, $new($JMenu, "File"_s));
	$var($JMenuItem, item, nullptr);
	$assign(item, $new($JMenuItem, "Just a menu item"_s));
	item->setIcon($$new($bug6209975$MyIcon, bug6209975::RO1));
	item->setHorizontalTextPosition($SwingConstants::LEADING);
	$nc(bug6209975::menu)->add(item);
	$assign(item, $new($JMenuItem, "Menu Item with another icon"_s));
	item->setIcon($$new($bug6209975$MyIcon, bug6209975::RO2));
	item->setHorizontalTextPosition($SwingConstants::TRAILING);
	$nc(bug6209975::menu)->add(item);
	mb->add(bug6209975::menu);
	$nc(bug6209975::frame)->setJMenuBar(mb);
	$nc(bug6209975::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug6209975::frame)->pack();
	$nc(bug6209975::frame)->setLocation(400, 300);
	$nc(bug6209975::frame)->setVisible(true);
}

void bug6209975::lambda$main$0() {
	$init(bug6209975);
	$nc(bug6209975::frame)->dispose();
}

void bug6209975::clinit$($Class* clazz) {
	$assignStatic(bug6209975::RO1, $new($bug6209975$ReturnObject));
	$assignStatic(bug6209975::RO2, $new($bug6209975$ReturnObject));
}

bug6209975::bug6209975() {
}

$Class* bug6209975::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug6209975$$Lambda$lambda$main$0")) {
			return bug6209975$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"RO1", "Lbug6209975$ReturnObject;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6209975, RO1)},
		{"RO2", "Lbug6209975$ReturnObject;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6209975, RO2)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, menu)},
		{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, button)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6209975, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6209975, createAndShowGUI, void)},
		{"getButtonClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6209975, getButtonClickPoint, $Point*), "java.lang.Exception"},
		{"getMenuClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6209975, getMenuClickPoint, $Point*), "java.lang.Exception"},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug6209975, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6209975, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6209975$MyIcon", "bug6209975", "MyIcon", $PUBLIC | $STATIC},
		{"bug6209975$ReturnObject", "bug6209975", "ReturnObject", $PUBLIC | $STATIC},
		{"bug6209975$3", nullptr, nullptr, 0},
		{"bug6209975$2", nullptr, nullptr, 0},
		{"bug6209975$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6209975",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6209975$MyIcon,bug6209975$ReturnObject,bug6209975$3,bug6209975$2,bug6209975$1"
	};
	$loadClass(bug6209975, name, initialize, &classInfo$$, bug6209975::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6209975);
	});
	return class$;
}

$Class* bug6209975::class$ = nullptr;