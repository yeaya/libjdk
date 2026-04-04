#include <PopupMenuTest.h>
#include <PopMenuUIExt.h>
#include <PopupMenuTest$MousePopupListener.h>
#include <PopupMenuTest$PopupListener.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef BUTTON3_DOWN_MASK

using $PopMenuUIExt = ::PopMenuUIExt;
using $PopupMenuTest$MousePopupListener = ::PopupMenuTest$MousePopupListener;
using $PopupMenuTest$PopupListener = ::PopupMenuTest$PopupListener;
using $Component = ::java::awt::Component;
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
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class PopupMenuTest$$Lambda$lambda$createUI$0 : public $Runnable {
	$class(PopupMenuTest$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(PopupMenuTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$createUI$0();
	}
	PopupMenuTest* inst$ = nullptr;
};
$Class* PopupMenuTest$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PopupMenuTest$$Lambda$lambda$createUI$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPopupMenuTest;)V", nullptr, $PUBLIC, $method(PopupMenuTest$$Lambda$lambda$createUI$0, init$, void, PopupMenuTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$$Lambda$lambda$createUI$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PopupMenuTest$$Lambda$lambda$createUI$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PopupMenuTest$$Lambda$lambda$createUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuTest$$Lambda$lambda$createUI$0);
	});
	return class$;
}
$Class* PopupMenuTest$$Lambda$lambda$createUI$0::class$ = nullptr;

class PopupMenuTest$$Lambda$lambda$dispose$1$1 : public $Runnable {
	$class(PopupMenuTest$$Lambda$lambda$dispose$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PopupMenuTest::lambda$dispose$1();
	}
};
$Class* PopupMenuTest$$Lambda$lambda$dispose$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PopupMenuTest$$Lambda$lambda$dispose$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$$Lambda$lambda$dispose$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PopupMenuTest$$Lambda$lambda$dispose$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(PopupMenuTest$$Lambda$lambda$dispose$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuTest$$Lambda$lambda$dispose$1$1);
	});
	return class$;
}
$Class* PopupMenuTest$$Lambda$lambda$dispose$1$1::class$ = nullptr;

$volatile(bool) PopupMenuTest::isLightWeight = false;
$JFrame* PopupMenuTest::frame = nullptr;
$Robot* PopupMenuTest::robot = nullptr;
$JPanel* PopupMenuTest::panel = nullptr;

void PopupMenuTest::init$() {
}

void PopupMenuTest::main($StringArray* s) {
	$var(PopupMenuTest, obj, $new(PopupMenuTest));
	obj->createUI();
	$assignStatic(PopupMenuTest::robot, $new($Robot));
	PopupMenuTest::robot->waitForIdle();
	$nc(PopupMenuTest::robot)->delay(1000);
	obj->exectuteTest();
	obj->dispose();
	if (PopupMenuTest::isLightWeight) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void PopupMenuTest::createUI() {
	$SwingUtilities::invokeAndWait($$new(PopupMenuTest$$Lambda$lambda$createUI$0, this));
}

void PopupMenuTest::dispose() {
	$SwingUtilities::invokeAndWait($$new(PopupMenuTest$$Lambda$lambda$dispose$1$1));
}

void PopupMenuTest::exectuteTest() {
	$useLocalObjectStack();
	$var($Point, p, $nc(PopupMenuTest::frame)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(PopupMenuTest::frame)->getBounds());
	$nc(PopupMenuTest::robot)->mouseMove($nc(p)->x + $nc(rect)->width / 2, $nc(p)->y + $nc(rect)->height / 2);
	$nc(PopupMenuTest::robot)->mousePress($InputEvent::BUTTON3_DOWN_MASK);
	$nc(PopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON3_DOWN_MASK);
	$nc(PopupMenuTest::robot)->delay(1000);
	$nc(PopupMenuTest::robot)->mouseMove(p->x + rect->width / 2 - 10, p->y + rect->height / 2 - 10);
	$nc(PopupMenuTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(PopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(PopupMenuTest::robot)->delay(1000);
}

void PopupMenuTest::lambda$dispose$1() {
	$var($Popup, popup, $PopMenuUIExt::getPopup());
	if (popup != nullptr) {
		popup->hide();
	}
	$init(PopupMenuTest);
	$nc(PopupMenuTest::frame)->dispose();
}

void PopupMenuTest::lambda$createUI$0() {
	$useLocalObjectStack();
	$assignStatic(PopupMenuTest::frame, $new($JFrame, "Popup Menu"_s));
	$set(this, jpopup, $new($JPopupMenu));
	this->jpopup->setUI($$new($PopMenuUIExt));
	$var($JMenuItem, item, $new($JMenuItem, "Menu Item1"_s));
	$nc(this->jpopup)->add(item);
	$assign(item, $new($JMenuItem, "Menu Item2"_s));
	$nc(this->jpopup)->setLabel("Justification"_s);
	$nc(this->jpopup)->add(item);
	$nc(this->jpopup)->setLabel("Justification"_s);
	$nc(this->jpopup)->addPopupMenuListener($$new($PopupMenuTest$PopupListener, this));
	$assignStatic(PopupMenuTest::panel, $new($JPanel));
	PopupMenuTest::panel->addMouseListener($$new($PopupMenuTest$MousePopupListener, this));
	$nc(PopupMenuTest::frame)->setContentPane(PopupMenuTest::panel);
	$nc(PopupMenuTest::frame)->setSize(300, 300);
	$nc(PopupMenuTest::frame)->setLocationRelativeTo(nullptr);
	$nc(PopupMenuTest::frame)->setVisible(true);
}

PopupMenuTest::PopupMenuTest() {
}

$Class* PopupMenuTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("PopupMenuTest$$Lambda$lambda$createUI$0")) {
			return PopupMenuTest$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
		if (name->equals("PopupMenuTest$$Lambda$lambda$dispose$1$1")) {
			return PopupMenuTest$$Lambda$lambda$dispose$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"jpopup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(PopupMenuTest, jpopup)},
		{"isLightWeight", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(PopupMenuTest, isLightWeight)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(PopupMenuTest, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(PopupMenuTest, robot)},
		{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(PopupMenuTest, panel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PopupMenuTest, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE, $method(PopupMenuTest, createUI, void), "java.lang.Exception"},
		{"dispose", "()V", nullptr, $PRIVATE, $method(PopupMenuTest, dispose, void), "java.lang.Exception"},
		{"exectuteTest", "()V", nullptr, $PRIVATE, $method(PopupMenuTest, exectuteTest, void)},
		{"lambda$createUI$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(PopupMenuTest, lambda$createUI$0, void)},
		{"lambda$dispose$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PopupMenuTest, lambda$dispose$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PopupMenuTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopupMenuTest$PopupListener", "PopupMenuTest", "PopupListener", 0},
		{"PopupMenuTest$MousePopupListener", "PopupMenuTest", "MousePopupListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PopupMenuTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"PopupMenuTest$PopupListener,PopupMenuTest$MousePopupListener"
	};
	$loadClass(PopupMenuTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuTest);
	});
	return class$;
}

$Class* PopupMenuTest::class$ = nullptr;