#include <bug6578666.h>
#include <bug6578666$1.h>
#include <bug6578666$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_SPACE

using $bug6578666$1 = ::bug6578666$1;
using $bug6578666$2 = ::bug6578666$2;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JTree* bug6578666::tree = nullptr;

void bug6578666::init$() {
}

void bug6578666::createGui() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init(bug6578666);
	$assignStatic(bug6578666::tree, $new($JTree));
	frame->add(bug6578666::tree);
	$nc(bug6578666::tree)->addKeyListener($$new($bug6578666$1));
	frame->setSize(200, 200);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

void bug6578666::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(10);
	$SwingUtilities::invokeAndWait($$new($bug6578666$2));
	robot->waitForIdle();
	$init(bug6578666);
	$nc(bug6578666::tree)->requestFocus();
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_SPACE);
	robot->keyRelease($KeyEvent::VK_SPACE);
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_SPACE);
	robot->keyRelease($KeyEvent::VK_SPACE);
}

bug6578666::bug6578666() {
}

$Class* bug6578666::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(bug6578666, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6578666, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6578666, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6578666, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6578666$2", nullptr, nullptr, 0},
		{"bug6578666$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6578666",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6578666$2,bug6578666$1"
	};
	$loadClass(bug6578666, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6578666);
	});
	return class$;
}

$Class* bug6578666::class$ = nullptr;