#include <bug8031573.h>
#include <bug8031573$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef INSTRUCTIONS
#undef MINUTES
#undef SOUTH

using $bug8031573$1 = ::bug8031573$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JButton = ::javax::swing::JButton;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug8031573$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8031573$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031573::lambda$main$0();
	}
};
$Class* bug8031573$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031573$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8031573$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8031573$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8031573$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031573$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug8031573$$Lambda$lambda$main$0::class$ = nullptr;

class bug8031573$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8031573$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031573::lambda$main$1();
	}
};
$Class* bug8031573$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031573$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8031573$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8031573$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8031573$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031573$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug8031573$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug8031573$$Lambda$lambda$createTestGUI$2$2 : public $ActionListener {
	$class(bug8031573$$Lambda$lambda$createTestGUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8031573::lambda$createTestGUI$2(e);
	}
};
$Class* bug8031573$$Lambda$lambda$createTestGUI$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031573$$Lambda$lambda$createTestGUI$2$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8031573$$Lambda$lambda$createTestGUI$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8031573$$Lambda$lambda$createTestGUI$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8031573$$Lambda$lambda$createTestGUI$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031573$$Lambda$lambda$createTestGUI$2$2);
	});
	return class$;
}
$Class* bug8031573$$Lambda$lambda$createTestGUI$2$2::class$ = nullptr;

class bug8031573$$Lambda$lambda$createTestGUI$3$3 : public $ActionListener {
	$class(bug8031573$$Lambda$lambda$createTestGUI$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8031573::lambda$createTestGUI$3(e);
	}
};
$Class* bug8031573$$Lambda$lambda$createTestGUI$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031573$$Lambda$lambda$createTestGUI$3$3, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8031573$$Lambda$lambda$createTestGUI$3$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8031573$$Lambda$lambda$createTestGUI$3$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8031573$$Lambda$lambda$createTestGUI$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031573$$Lambda$lambda$createTestGUI$3$3);
	});
	return class$;
}
$Class* bug8031573$$Lambda$lambda$createTestGUI$3$3::class$ = nullptr;

$volatile($JFrame*) bug8031573::frame = nullptr;
$volatile(bool) bug8031573::passed = false;
$CountDownLatch* bug8031573::latch = nullptr;
$String* bug8031573::INSTRUCTIONS = nullptr;

void bug8031573::init$() {
}

void bug8031573::main($StringArray* args) {
	$init(bug8031573);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(bug8031573$$Lambda$lambda$main$0));
		$init($TimeUnit);
		if (!bug8031573::latch->await(5, $TimeUnit::MINUTES)) {
			$throwNew($RuntimeException, "Test has timed out!"_s);
		}
		if (!bug8031573::passed) {
			$throwNew($RuntimeException, "Test failed!"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(bug8031573$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug8031573::createTestGUI() {
	$init(bug8031573);
	$useLocalObjectStack();
	$assignStatic(bug8031573::frame, $new($JFrame, "bug8031573"_s));
	$var($JMenuBar, bar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "Menu"_s));
	$var($JCheckBoxMenuItem, checkBoxMenuItem, $new($JCheckBoxMenuItem, "JCheckBoxMenuItem"_s));
	checkBoxMenuItem->setSelected(true);
	menu->add(checkBoxMenuItem);
	bar->add(menu);
	$nc(bug8031573::frame)->setJMenuBar(bar);
	$var($JPanel, panel, $new($JPanel, $$new($BorderLayout)));
	$var($JTextComponent, textComponent, $new($JTextArea, bug8031573::INSTRUCTIONS));
	textComponent->setEditable(false);
	panel->add(textComponent, $BorderLayout::CENTER);
	$var($JPanel, buttonsPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->addActionListener($$new(bug8031573$$Lambda$lambda$createTestGUI$2$2));
	$var($JButton, failsButton, $new($JButton, "Fail"_s));
	failsButton->addActionListener($$new(bug8031573$$Lambda$lambda$createTestGUI$3$3));
	buttonsPanel->add(passButton);
	buttonsPanel->add(failsButton);
	panel->add(buttonsPanel, $BorderLayout::SOUTH);
	$$nc($nc(bug8031573::frame)->getContentPane())->add(panel);
	$nc(bug8031573::frame)->addWindowListener($$new($bug8031573$1));
	$nc(bug8031573::frame)->pack();
	$nc(bug8031573::frame)->setLocationRelativeTo(nullptr);
	$nc(bug8031573::frame)->setVisible(true);
}

void bug8031573::lambda$createTestGUI$3($ActionEvent* e) {
	$init(bug8031573);
	bug8031573::passed = false;
	bug8031573::latch->countDown();
}

void bug8031573::lambda$createTestGUI$2($ActionEvent* e) {
	$init(bug8031573);
	$nc($System::out)->println("Test passed!"_s);
	bug8031573::passed = true;
	bug8031573::latch->countDown();
}

void bug8031573::lambda$main$1() {
	$init(bug8031573);
	if (bug8031573::frame != nullptr) {
		$nc(bug8031573::frame)->dispose();
	}
}

void bug8031573::lambda$main$0() {
	$init(bug8031573);
	createTestGUI();
}

void bug8031573::clinit$($Class* clazz) {
	$assignStatic(bug8031573::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that high resolution system icons are used for JCheckBoxMenuItem on HiDPI displays.\nIf the display does not support HiDPI mode press PASS.\n1. Run the test on HiDPI Display.\n2. Open the Menu.\n3. Check that the icon on the JCheckBoxMenuItem is smooth.\n   If so, press PASS, else press FAIL.\n"_s);
	bug8031573::passed = false;
	$assignStatic(bug8031573::latch, $new($CountDownLatch, 1));
}

bug8031573::bug8031573() {
}

$Class* bug8031573::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8031573$$Lambda$lambda$main$0")) {
			return bug8031573$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug8031573$$Lambda$lambda$main$1$1")) {
			return bug8031573$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("bug8031573$$Lambda$lambda$createTestGUI$2$2")) {
			return bug8031573$$Lambda$lambda$createTestGUI$2$2::load$(name, initialize);
		}
		if (name->equals("bug8031573$$Lambda$lambda$createTestGUI$3$3")) {
			return bug8031573$$Lambda$lambda$createTestGUI$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8031573, frame)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8031573, passed)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8031573, latch)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8031573, INSTRUCTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031573, init$, void)},
		{"createTestGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8031573, createTestGUI, void)},
		{"lambda$createTestGUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8031573, lambda$createTestGUI$2, void, $ActionEvent*)},
		{"lambda$createTestGUI$3", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8031573, lambda$createTestGUI$3, void, $ActionEvent*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8031573, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8031573, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8031573, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8031573$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8031573",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8031573$1"
	};
	$loadClass(bug8031573, name, initialize, &classInfo$$, bug8031573::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031573);
	});
	return class$;
}

$Class* bug8031573::class$ = nullptr;