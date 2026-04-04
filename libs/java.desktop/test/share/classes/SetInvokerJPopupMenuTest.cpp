#include <SetInvokerJPopupMenuTest.h>
#include <SetInvokerJPopupMenuTest$1.h>
#include <SetInvokerJPopupMenuTest$MyButton.h>
#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
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
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef DISPOSE_ON_CLOSE
#undef LF

using $SetInvokerJPopupMenuTest$1 = ::SetInvokerJPopupMenuTest$1;
using $SetInvokerJPopupMenuTest$MyButton = ::SetInvokerJPopupMenuTest$MyButton;
using $SetInvokerJPopupMenuTest$MyPopupMenu = ::SetInvokerJPopupMenuTest$MyPopupMenu;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
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
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$0();
	}
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SetInvokerJPopupMenuTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::class$ = nullptr;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$1();
	}
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$2();
	}
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$SetInvokerJPopupMenuTest$MyPopupMenu* SetInvokerJPopupMenuTest::popup = nullptr;
$SetInvokerJPopupMenuTest$MyButton* SetInvokerJPopupMenuTest::jtb = nullptr;
$Robot* SetInvokerJPopupMenuTest::robot = nullptr;
$JFrame* SetInvokerJPopupMenuTest::f = nullptr;
$Point* SetInvokerJPopupMenuTest::p = nullptr;
bool SetInvokerJPopupMenuTest::isPopupVisible = false;

void SetInvokerJPopupMenuTest::init$() {
}

void SetInvokerJPopupMenuTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, nullptr);
	$assign(installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$init(SetInvokerJPopupMenuTest);
						$assignStatic(SetInvokerJPopupMenuTest::robot, $new($Robot));
						$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
						$SwingUtilities::invokeAndWait($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0));
						$nc(SetInvokerJPopupMenuTest::robot)->waitForIdle();
						$nc(SetInvokerJPopupMenuTest::robot)->setAutoDelay(50);
						$nc(SetInvokerJPopupMenuTest::robot)->mouseMove($nc(SetInvokerJPopupMenuTest::p)->x + 15, $nc(SetInvokerJPopupMenuTest::p)->y + 15);
						$nc(SetInvokerJPopupMenuTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
						$nc(SetInvokerJPopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
						$nc(SetInvokerJPopupMenuTest::robot)->waitForIdle();
						$nc(SetInvokerJPopupMenuTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
						$nc(SetInvokerJPopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
					} catch ($UnsupportedLookAndFeelException& e) {
						$nc($System::out)->println($$str({"Note: LookAndFeel "_s, $($nc(LF)->getClassName()), " is not supported on this configuration"_s}));
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$init(SetInvokerJPopupMenuTest);
					if (SetInvokerJPopupMenuTest::f != nullptr) {
						$SwingUtilities::invokeAndWait($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1));
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				$SwingUtilities::invokeAndWait($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2));
				$init(SetInvokerJPopupMenuTest);
				if (SetInvokerJPopupMenuTest::isPopupVisible) {
					$throwNew($RuntimeException, "PopupMenu is not taken down after single button click"_s);
				}
			}
		}
	}
}

void SetInvokerJPopupMenuTest::postUp() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::popup)->setInvoker(SetInvokerJPopupMenuTest::jtb);
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(true);
}

void SetInvokerJPopupMenuTest::postDown() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(false);
}

void SetInvokerJPopupMenuTest::lambda$main$2() {
	$init(SetInvokerJPopupMenuTest);
	SetInvokerJPopupMenuTest::isPopupVisible = $nc(SetInvokerJPopupMenuTest::popup)->isVisible();
}

void SetInvokerJPopupMenuTest::lambda$main$1() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::f)->dispose();
}

void SetInvokerJPopupMenuTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(SetInvokerJPopupMenuTest);
	$assignStatic(SetInvokerJPopupMenuTest::jtb, $new($SetInvokerJPopupMenuTest$MyButton, "Press Me"_s));
	SetInvokerJPopupMenuTest::jtb->addActionListener($$new($SetInvokerJPopupMenuTest$1));
	$assignStatic(SetInvokerJPopupMenuTest::f, $new($JFrame));
	SetInvokerJPopupMenuTest::f->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(SetInvokerJPopupMenuTest::f)->setLocationRelativeTo(nullptr);
	$nc(SetInvokerJPopupMenuTest::f)->setSize(300, 400);
	$var($Container, c, $nc(SetInvokerJPopupMenuTest::f)->getContentPane());
	$nc(c)->setLayout($$new($FlowLayout));
	c->add(SetInvokerJPopupMenuTest::jtb);
	$nc(SetInvokerJPopupMenuTest::f)->setVisible(true);
	$assignStatic(SetInvokerJPopupMenuTest::popup, $new($SetInvokerJPopupMenuTest$MyPopupMenu));
	SetInvokerJPopupMenuTest::popup->add($$new($JMenuItem, "A"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->add($$new($JMenuItem, "B"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->add($$new($JMenuItem, "C"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(false);
	$assignStatic(SetInvokerJPopupMenuTest::p, $nc(SetInvokerJPopupMenuTest::jtb)->getLocationOnScreen());
}

SetInvokerJPopupMenuTest::SetInvokerJPopupMenuTest() {
}

$Class* SetInvokerJPopupMenuTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SetInvokerJPopupMenuTest$$Lambda$lambda$main$0")) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1")) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2")) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"popup", "LSetInvokerJPopupMenuTest$MyPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, popup)},
		{"jtb", "LSetInvokerJPopupMenuTest$MyButton;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, jtb)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, robot)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, f)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, p)},
		{"isPopupVisible", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, isPopupVisible)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetInvokerJPopupMenuTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SetInvokerJPopupMenuTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SetInvokerJPopupMenuTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SetInvokerJPopupMenuTest, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetInvokerJPopupMenuTest, main, void, $StringArray*), "java.lang.Exception"},
		{"postDown", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetInvokerJPopupMenuTest, postDown, void)},
		{"postUp", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetInvokerJPopupMenuTest, postUp, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetInvokerJPopupMenuTest$MyPopupMenu", "SetInvokerJPopupMenuTest", "MyPopupMenu", $PRIVATE | $STATIC},
		{"SetInvokerJPopupMenuTest$MyButton", "SetInvokerJPopupMenuTest", "MyButton", $PRIVATE | $STATIC},
		{"SetInvokerJPopupMenuTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetInvokerJPopupMenuTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SetInvokerJPopupMenuTest$MyPopupMenu,SetInvokerJPopupMenuTest$MyButton,SetInvokerJPopupMenuTest$1"
	};
	$loadClass(SetInvokerJPopupMenuTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetInvokerJPopupMenuTest);
	});
	return class$;
}

$Class* SetInvokerJPopupMenuTest::class$ = nullptr;