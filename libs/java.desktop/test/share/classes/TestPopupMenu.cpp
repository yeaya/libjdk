#include <TestPopupMenu.h>
#include <TestPopupMenu$TestInternalFrame.h>
#include <TestPopupMenu$TestInternalFrameWPopup.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON3_DOWN_MASK
#undef CTRL_MASK
#undef VK_CONTROL
#undef VK_U
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $TestPopupMenu$TestInternalFrame = ::TestPopupMenu$TestInternalFrame;
using $TestPopupMenu$TestInternalFrameWPopup = ::TestPopupMenu$TestInternalFrameWPopup;
using $Robot = ::java::awt::Robot;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JScrollPane = ::javax::swing::JScrollPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	TestPopupMenu* inst$ = nullptr;
	$JComponent* comp = nullptr;
};
$Class* TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, inst$)},
		{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestPopupMenu;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, init$, void, TestPopupMenu*, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0);
	});
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	TestPopupMenu* inst$ = nullptr;
};
$Class* TestPopupMenu$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(TestPopupMenu$$Lambda$lambda$new$1$1, init$, void, TestPopupMenu*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestPopupMenu$$Lambda$lambda$new$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestPopupMenu$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestPopupMenu$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPopupMenu$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$new$1$1::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$2();
	}
	TestPopupMenu* inst$ = nullptr;
};
$Class* TestPopupMenu$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$new$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(TestPopupMenu$$Lambda$lambda$new$2$2, init$, void, TestPopupMenu*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestPopupMenu$$Lambda$lambda$new$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestPopupMenu$$Lambda$lambda$new$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestPopupMenu$$Lambda$lambda$new$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPopupMenu$$Lambda$lambda$new$2$2);
	});
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$new$2$2::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3 : public $ActionListener {
	$class(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestPopupMenu* inst, $JDesktopPane* pane) {
		$set(this, inst$, inst);
		$set(this, pane, pane);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createAndShowUI$3(pane, e);
	}
	TestPopupMenu* inst$ = nullptr;
	$JDesktopPane* pane = nullptr;
};
$Class* TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, inst$)},
		{"pane", "Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, pane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestPopupMenu;Ljavax/swing/JDesktopPane;)V", nullptr, $PUBLIC, $method(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, init$, void, TestPopupMenu*, $JDesktopPane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3);
	});
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::class$ = nullptr;

void TestPopupMenu::main($StringArray* args) {
	$new(TestPopupMenu);
}

void TestPopupMenu::blockTillDisplayed($JComponent* comp) {
	$useLocalObjectStack();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait($$new(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, this, comp));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestPopupMenu::init$() {
	$useLocalObjectStack();
	$set(this, p, nullptr);
	$set(this, d, nullptr);
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(200);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(TestPopupMenu$$Lambda$lambda$new$1$1, this));
		blockTillDisplayed(this->label);
		robot->waitForIdle();
		robot->mouseMove($nc(this->p)->x + $nc(this->d)->width / 2, $nc(this->p)->y + $nc(this->d)->height / 2);
		robot->mousePress($InputEvent::BUTTON3_DOWN_MASK);
		robot->mouseRelease($InputEvent::BUTTON3_DOWN_MASK);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_CONTROL);
		robot->keyPress($KeyEvent::VK_U);
		robot->keyRelease($KeyEvent::VK_U);
		robot->keyRelease($KeyEvent::VK_CONTROL);
		robot->waitForIdle();
		$var($JPopupMenu, popup, $nc(this->label)->getComponentPopupMenu());
		if (popup != nullptr && popup->isVisible()) {
			$throwNew($RuntimeException, "Popup is visible in wrong internal frame"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(TestPopupMenu$$Lambda$lambda$new$2$2, this));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestPopupMenu::createAndShowUI() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame));
	this->frame->setTitle("Test Frame"_s);
	$nc(this->frame)->setSize(800, 600);
	$var($JDesktopPane, pane, $new($JDesktopPane));
	$var($TestPopupMenu$TestInternalFrameWPopup, testInternalFrame1, $new($TestPopupMenu$TestInternalFrameWPopup, this));
	pane->add(testInternalFrame1);
	testInternalFrame1->setVisible(true);
	$var($JScrollPane, scrollPane, $new($JScrollPane, pane));
	$$nc($nc(this->frame)->getContentPane())->add(scrollPane);
	testInternalFrame1->setMaximum(true);
	$var($ActionListener, var$0, $new(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, this, pane));
	$$nc($nc(this->frame)->getRootPane())->registerKeyboardAction(var$0, $($KeyStroke::getKeyStroke($KeyEvent::VK_U, $KeyEvent::CTRL_MASK)), $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT);
	$nc(this->frame)->setVisible(true);
}

void TestPopupMenu::lambda$createAndShowUI$3($JDesktopPane* pane, $ActionEvent* e) {
	$var($TestPopupMenu$TestInternalFrame, testInternalFrame2, $new($TestPopupMenu$TestInternalFrame, this));
	$nc(pane)->add(testInternalFrame2);
	try {
		testInternalFrame2->setMaximum(true);
	} catch ($PropertyVetoException& ex) {
		$throwNew($RuntimeException, ex);
	}
	testInternalFrame2->setVisible(true);
}

void TestPopupMenu::lambda$new$2() {
	$nc(this->frame)->dispose();
}

void TestPopupMenu::lambda$new$1() {
	try {
		createAndShowUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
}

void TestPopupMenu::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
	$set(this, d, comp->getSize());
}

TestPopupMenu::TestPopupMenu() {
}

$Class* TestPopupMenu::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0")) {
			return TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals("TestPopupMenu$$Lambda$lambda$new$1$1")) {
			return TestPopupMenu$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals("TestPopupMenu$$Lambda$lambda$new$2$2")) {
			return TestPopupMenu$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals("TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3")) {
			return TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(TestPopupMenu, frame)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(TestPopupMenu, label)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(TestPopupMenu, p)},
		{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(TestPopupMenu, d)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestPopupMenu, init$, void), "java.lang.Exception"},
		{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(TestPopupMenu, blockTillDisplayed, void, $JComponent*), "java.lang.Exception"},
		{"createAndShowUI", "()V", nullptr, $PRIVATE, $method(TestPopupMenu, createAndShowUI, void), "java.lang.Exception"},
		{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestPopupMenu, lambda$blockTillDisplayed$0, void, $JComponent*)},
		{"lambda$createAndShowUI$3", "(Ljavax/swing/JDesktopPane;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestPopupMenu, lambda$createAndShowUI$3, void, $JDesktopPane*, $ActionEvent*)},
		{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestPopupMenu, lambda$new$1, void)},
		{"lambda$new$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestPopupMenu, lambda$new$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestPopupMenu, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestPopupMenu$TestInternalFrame", "TestPopupMenu", "TestInternalFrame", 0},
		{"TestPopupMenu$TestInternalFrameWPopup", "TestPopupMenu", "TestInternalFrameWPopup", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestPopupMenu",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestPopupMenu$TestInternalFrame,TestPopupMenu$TestInternalFrameWPopup"
	};
	$loadClass(TestPopupMenu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPopupMenu);
	});
	return class$;
}

$Class* TestPopupMenu::class$ = nullptr;