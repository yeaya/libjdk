#include <bug4870644.h>
#include <bug4870644$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef EXIT_ON_CLOSE
#undef NORTH
#undef SOUTH
#undef VK_CONTROL
#undef VK_DOWN
#undef VK_ENTER
#undef VK_F10

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4870644$1 = ::bug4870644$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4870644$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	bug4870644* inst$ = nullptr;
	$JComponent* comp = nullptr;
};
$Class* bug4870644$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$blockTillDisplayed$0, inst$)},
		{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$blockTillDisplayed$0, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4870644;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(bug4870644$$Lambda$lambda$blockTillDisplayed$0, init$, void, bug4870644*, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4870644$$Lambda$lambda$blockTillDisplayed$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4870644$$Lambda$lambda$blockTillDisplayed$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4870644$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644$$Lambda$lambda$blockTillDisplayed$0);
	});
	return class$;
}
$Class* bug4870644$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class bug4870644$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4870644::lambda$main$1(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* bug4870644$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$main$1$1, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4870644$$Lambda$lambda$main$1$1, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4870644$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4870644$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4870644$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug4870644$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$2();
	}
	bug4870644* inst$ = nullptr;
};
$Class* bug4870644$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(bug4870644$$Lambda$lambda$new$2$2, init$, void, bug4870644*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4870644$$Lambda$lambda$new$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4870644$$Lambda$lambda$new$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4870644$$Lambda$lambda$new$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644$$Lambda$lambda$new$2$2);
	});
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$2$2::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$3$3 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$3();
	}
	bug4870644* inst$ = nullptr;
};
$Class* bug4870644$$Lambda$lambda$new$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(bug4870644$$Lambda$lambda$new$3$3, init$, void, bug4870644*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4870644$$Lambda$lambda$new$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4870644$$Lambda$lambda$new$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4870644$$Lambda$lambda$new$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644$$Lambda$lambda$new$3$3);
	});
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$3$3::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$4$4 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$4();
	}
	bug4870644* inst$ = nullptr;
};
$Class* bug4870644$$Lambda$lambda$new$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$4$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(bug4870644$$Lambda$lambda$new$4$4, init$, void, bug4870644*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4870644$$Lambda$lambda$new$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4870644$$Lambda$lambda$new$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4870644$$Lambda$lambda$new$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644$$Lambda$lambda$new$4$4);
	});
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$4$4::class$ = nullptr;

$Robot* bug4870644::robot = nullptr;
bool bug4870644::passed = false;

void bug4870644::blockTillDisplayed($JComponent* comp) {
	$useLocalObjectStack();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait($$new(bug4870644$$Lambda$lambda$blockTillDisplayed$0, this, comp));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void bug4870644::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(bug4870644);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4870644::main($StringArray* args) {
	$init(bug4870644);
	$useLocalObjectStack();
	$assignStatic(bug4870644::robot, $new($Robot));
	bug4870644::robot->setAutoDelay(100);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			try {
				$SwingUtilities::invokeAndWait($$new(bug4870644$$Lambda$lambda$main$1$1, laf));
				$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				$new(bug4870644);
				$System::out->println($$str({"Test passed for LookAndFeel "_s, $(laf->getClassName())}));
			} catch ($Exception& e) {
				$throwNew($RuntimeException, e);
			}
		}
	}
}

void bug4870644::init$() {
	$useLocalObjectStack();
	$set(this, p, nullptr);
	$set(this, d, nullptr);
	$SwingUtilities::invokeAndWait($$new(bug4870644$$Lambda$lambda$new$2$2, this));
	blockTillDisplayed(this->b1);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->delay(500);
	$nc(bug4870644::robot)->mouseMove($nc(this->p)->x + $nc(this->d)->width - 1, $nc(this->p)->y + $nc(this->d)->height / 2);
	$nc(bug4870644::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug4870644::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_F10);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_F10);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug4870644::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug4870644$$Lambda$lambda$new$3$3, this));
	blockTillDisplayed(this->popup);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->mouseMove($nc(this->p)->x + $nc(this->d)->width - 1, $nc(this->p)->y + $nc(this->d)->height / 2);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_CONTROL);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_ENTER);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_ENTER);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_CONTROL);
	$nc(bug4870644::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug4870644$$Lambda$lambda$new$4$4, this));
	if (!bug4870644::passed) {
		$var($String, cause, "Default button reacted on \"ctrl ENTER\" while menu is active."_s);
		$throwNew($RuntimeException, cause);
	}
}

void bug4870644::lambda$new$4() {
	$nc(this->frame)->dispose();
}

void bug4870644::lambda$new$3() {
	$set(this, popup, $nc(this->menu)->getPopupMenu());
}

void bug4870644::lambda$new$2() {
	$useLocalObjectStack();
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$set(this, menu, $new($JMenu, "Menu"_s));
	menuBar->add(this->menu);
	$var($JMenuItem, menuItem, $new($JMenuItem, "Item"_s));
	$nc(this->menu)->add(menuItem);
	$nc(this->menu)->add($$new($JMenuItem, "Item 2"_s));
	$set(this, frame, $new($JFrame, "test"_s));
	this->frame->setJMenuBar(menuBar);
	$set(this, b1, $new($JButton, "One"_s));
	$set(this, b2, $new($JButton, "Two"_s));
	$set(this, b3, $new($JButton, "Default"_s));
	this->b3->addActionListener($$new($bug4870644$1, this));
	$init($BorderLayout);
	$$nc($nc(this->frame)->getContentPane())->add(this->b1, $BorderLayout::NORTH);
	$$nc($nc(this->frame)->getContentPane())->add(this->b2, $BorderLayout::CENTER);
	$$nc($nc(this->frame)->getContentPane())->add(this->b3, $BorderLayout::SOUTH);
	$$nc($nc(this->frame)->getRootPane())->setDefaultButton(this->b3);
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
}

void bug4870644::lambda$main$1($UIManager$LookAndFeelInfo* laf) {
	$init(bug4870644);
	setLookAndFeel(laf);
}

void bug4870644::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
	$set(this, d, comp->getSize());
}

void bug4870644::clinit$($Class* clazz) {
	bug4870644::passed = true;
}

bug4870644::bug4870644() {
}

$Class* bug4870644::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4870644$$Lambda$lambda$blockTillDisplayed$0")) {
			return bug4870644$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals("bug4870644$$Lambda$lambda$main$1$1")) {
			return bug4870644$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("bug4870644$$Lambda$lambda$new$2$2")) {
			return bug4870644$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals("bug4870644$$Lambda$lambda$new$3$3")) {
			return bug4870644$$Lambda$lambda$new$3$3::load$(name, initialize);
		}
		if (name->equals("bug4870644$$Lambda$lambda$new$4$4")) {
			return bug4870644$$Lambda$lambda$new$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"b1", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b1)},
		{"b2", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b2)},
		{"b3", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b3)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(bug4870644, frame)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, 0, $field(bug4870644, menu)},
		{"popup", "Ljavax/swing/JPopupMenu;", nullptr, 0, $field(bug4870644, popup)},
		{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(bug4870644, robot)},
		{"passed", "Z", nullptr, $STATIC, $staticField(bug4870644, passed)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4870644, p)},
		{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(bug4870644, d)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4870644, init$, void), "java.lang.Exception"},
		{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(bug4870644, blockTillDisplayed, void, $JComponent*), "java.lang.Exception"},
		{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4870644, lambda$blockTillDisplayed$0, void, $JComponent*)},
		{"lambda$main$1", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4870644, lambda$main$1, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$new$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4870644, lambda$new$2, void)},
		{"lambda$new$3", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4870644, lambda$new$3, void)},
		{"lambda$new$4", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4870644, lambda$new$4, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4870644, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4870644, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4870644$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4870644",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4870644$1"
	};
	$loadClass(bug4870644, name, initialize, &classInfo$$, bug4870644::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4870644);
	});
	return class$;
}

$Class* bug4870644::class$ = nullptr;