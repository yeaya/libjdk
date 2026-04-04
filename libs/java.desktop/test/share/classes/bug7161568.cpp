#include <bug7161568.h>
#include <bug7161568$1.h>
#include <bug7161568$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef FALSE
#undef N
#undef VK_LEFT

using $bug7161568$1 = ::bug7161568$1;
using $bug7161568$2 = ::bug7161568$2;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug7161568$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug7161568$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug7161568::lambda$main$0();
	}
};
$Class* bug7161568$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7161568$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7161568$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug7161568$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug7161568$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7161568$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug7161568$$Lambda$lambda$main$0::class$ = nullptr;

$JTabbedPane* bug7161568::tabbedPane = nullptr;
$JFrame* bug7161568::frame = nullptr;

void bug7161568::init$() {
}

void bug7161568::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::put("TabbedPane.selectionFollowsFocus"_s, $Boolean::FALSE);
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(50);
		$SwingUtilities::invokeAndWait($$new($bug7161568$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug7161568$2));
		robot->waitForIdle();
		for (int32_t i = 0; i < bug7161568::N; ++i) {
			robot->keyPress($KeyEvent::VK_LEFT);
			robot->keyRelease($KeyEvent::VK_LEFT);
			robot->waitForIdle();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(bug7161568);
		if (bug7161568::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug7161568$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug7161568::createAndShowUI() {
	$useLocalObjectStack();
	$init(bug7161568);
	$assignStatic(bug7161568::frame, $new($JFrame, "Test"_s));
	bug7161568::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug7161568::frame)->setSize(100, 100);
	$assignStatic(bug7161568::tabbedPane, $new($JTabbedPane));
	for (int32_t i = 0; i < bug7161568::N; ++i) {
		$nc(bug7161568::tabbedPane)->addTab($$str({"Tab: "_s, $$str(i)}), $$new($JLabel, "Test"_s));
	}
	$nc(bug7161568::tabbedPane)->setSelectedIndex(0);
	$$nc($nc(bug7161568::frame)->getContentPane())->add(bug7161568::tabbedPane);
	$nc(bug7161568::frame)->setVisible(true);
}

void bug7161568::lambda$main$0() {
	$init(bug7161568);
	$nc(bug7161568::frame)->dispose();
}

bug7161568::bug7161568() {
}

$Class* bug7161568::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug7161568$$Lambda$lambda$main$0")) {
			return bug7161568$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug7161568, N)},
		{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug7161568, tabbedPane)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7161568, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7161568, init$, void)},
		{"createAndShowUI", "()V", nullptr, $STATIC, $staticMethod(bug7161568, createAndShowUI, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug7161568, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7161568, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7161568$2", nullptr, nullptr, 0},
		{"bug7161568$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7161568",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7161568$2,bug7161568$1"
	};
	$loadClass(bug7161568, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7161568);
	});
	return class$;
}

$Class* bug7161568::class$ = nullptr;