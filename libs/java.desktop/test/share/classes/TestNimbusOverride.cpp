#include <TestNimbusOverride.h>
#include <TestNimbusOverride$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Action.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/Keymap.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef VK_SPACE

using $TestNimbusOverride$1 = ::TestNimbusOverride$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $Keymap = ::javax::swing::text::Keymap;

class TestNimbusOverride$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestNimbusOverride$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestNimbusOverride::lambda$main$0();
	}
};
$Class* TestNimbusOverride$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestNimbusOverride$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestNimbusOverride$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestNimbusOverride$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestNimbusOverride$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestNimbusOverride$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestNimbusOverride$$Lambda$lambda$main$0::class$ = nullptr;

class TestNimbusOverride$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestNimbusOverride$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestNimbusOverride::lambda$main$1();
	}
};
$Class* TestNimbusOverride$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestNimbusOverride$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestNimbusOverride$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestNimbusOverride$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestNimbusOverride$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestNimbusOverride$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestNimbusOverride$$Lambda$lambda$main$1$1::class$ = nullptr;

TestNimbusOverride* TestNimbusOverride::tf = nullptr;
bool TestNimbusOverride::passed = false;

void TestNimbusOverride::main($StringArray* args) {
	$init(TestNimbusOverride);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		$SwingUtilities::invokeAndWait($$new(TestNimbusOverride$$Lambda$lambda$main$0));
		robot->setAutoDelay(100);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_SPACE);
		robot->keyRelease($KeyEvent::VK_SPACE);
		robot->waitForIdle();
		if (!TestNimbusOverride::passed) {
			$throwNew($RuntimeException, "Setting Nimbus.Overrides property affects custom keymap installation"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(TestNimbusOverride$$Lambda$lambda$main$1$1));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestNimbusOverride::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$var($JEditorPane, pp, $new($JEditorPane));
	$var($UIDefaults, defaults, $new($UIDefaults));
	pp->putClientProperty("Nimbus.Overrides"_s, defaults);
	$var($JPanel, contentPanel, $new($JPanel));
	contentPanel->setLayout($$new($BorderLayout));
	setContentPane(contentPanel);
	contentPanel->setPreferredSize($$new($Dimension, 400, 300));
	contentPanel->add(pp, $BorderLayout::CENTER);
	$var($Keymap, origKeymap, pp->getKeymap());
	$var($Keymap, km, $JEditorPane::addKeymap("Test keymap"_s, origKeymap));
	$var($KeyStroke, var$0, $KeyStroke::getKeyStroke(u' '));
	$nc(km)->addActionForKeyStroke(var$0, $$new($TestNimbusOverride$1, this, "SHOW_SPACE"_s));
	pp->setKeymap(km);
}

void TestNimbusOverride::lambda$main$1() {
	$init(TestNimbusOverride);
	$nc(TestNimbusOverride::tf)->dispose();
}

void TestNimbusOverride::lambda$main$0() {
	$init(TestNimbusOverride);
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$assignStatic(TestNimbusOverride::tf, $new(TestNimbusOverride));
	TestNimbusOverride::tf->pack();
	$nc(TestNimbusOverride::tf)->setVisible(true);
}

void TestNimbusOverride::clinit$($Class* clazz) {
	TestNimbusOverride::passed = false;
}

TestNimbusOverride::TestNimbusOverride() {
}

$Class* TestNimbusOverride::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestNimbusOverride$$Lambda$lambda$main$0")) {
			return TestNimbusOverride$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestNimbusOverride$$Lambda$lambda$main$1$1")) {
			return TestNimbusOverride$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"tf", "LTestNimbusOverride;", nullptr, $PRIVATE | $STATIC, $staticField(TestNimbusOverride, tf)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestNimbusOverride, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestNimbusOverride, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestNimbusOverride, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestNimbusOverride, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestNimbusOverride, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestNimbusOverride$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestNimbusOverride",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestNimbusOverride$1"
	};
	$loadClass(TestNimbusOverride, name, initialize, &classInfo$$, TestNimbusOverride::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestNimbusOverride));
	});
	return class$;
}

$Class* TestNimbusOverride::class$ = nullptr;