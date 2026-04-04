#include <bug6274267.h>
#include <bug6274267$1.h>
#include <bug6274267$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL_SPLIT

using $bug6274267$1 = ::bug6274267$1;
using $bug6274267$2 = ::bug6274267$2;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6274267::init$() {
}

void bug6274267::main($StringArray* args) {
	$useLocalObjectStack();
	$var(bug6274267, test, $new(bug6274267));
	$var($Robot, robot, $new($Robot));
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug6274267$1, test));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug6274267$2, test));
		test->test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (test->frame != nullptr) {
			test->frame->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6274267::setupUI1() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame));
	this->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$set(this, left, $new($JPanel));
	this->left->setPreferredSize($$new($Dimension, 100, 100));
	$var($JPanel, rightPanel, $new($JPanel));
	rightPanel->setPreferredSize($$new($Dimension, 100, 50));
	$var($Component, right, $new($JScrollPane, rightPanel));
	$var($JSplitPane, split, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, this->left, right));
	$set(this, frame, $new($JFrame));
	this->frame->add(split);
	$nc(this->frame)->pack();
}

void bug6274267::setupUI2() {
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->setVisible(true);
}

void bug6274267::test() {
	if ($nc($($nc(this->left)->getSize()))->width == 100) {
		$nc($System::out)->println("Test passed"_s);
	} else {
		$throwNew($RuntimeException, "ScrollPaneLayout sometimes improperly calculates the preferred layout size. "_s);
	}
}

bug6274267::bug6274267() {
}

$Class* bug6274267::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6274267, frame)},
		{"left", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(bug6274267, left)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6274267, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6274267, main, void, $StringArray*), "java.lang.Exception"},
		{"setupUI1", "()V", nullptr, $PRIVATE, $method(bug6274267, setupUI1, void)},
		{"setupUI2", "()V", nullptr, $PRIVATE, $method(bug6274267, setupUI2, void)},
		{"test", "()V", nullptr, $PRIVATE, $method(bug6274267, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6274267$2", nullptr, nullptr, 0},
		{"bug6274267$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6274267",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6274267$2,bug6274267$1"
	};
	$loadClass(bug6274267, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6274267);
	});
	return class$;
}

$Class* bug6274267::class$ = nullptr;