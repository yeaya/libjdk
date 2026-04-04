#include <bug6544309.h>
#include <bug6544309$1.h>
#include <bug6544309$2.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef VK_DOWN
#undef VK_SPACE

using $bug6544309$1 = ::bug6544309$1;
using $bug6544309$2 = ::bug6544309$2;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$Robot* bug6544309::robot = nullptr;

void bug6544309::init$() {
}

void bug6544309::main($StringArray* args) {
	$useLocalObjectStack();
	$init(bug6544309);
	$assignStatic(bug6544309::robot, $new($Robot));
	bug6544309::robot->setAutoDelay(100);
	$nc(bug6544309::robot)->mouseMove(100, 100);
	$nc(bug6544309::robot)->waitForIdle();
	$var(bug6544309, test, $new(bug6544309));
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug6544309$1, test));
		$nc(bug6544309::robot)->waitForIdle();
		$nc(bug6544309::robot)->delay(1000);
		test->test();
		$nc($System::out)->println("Test passed"_s);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (test->dialog != nullptr) {
			test->dialog->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6544309::setupUI() {
	$useLocalObjectStack();
	$set(this, dialog, $new($JDialog));
	this->dialog->setDefaultCloseOperation($JDialog::DISPOSE_ON_CLOSE);
	$nc(this->dialog)->setSize(200, 100);
	$nc(this->dialog)->setLocationRelativeTo(nullptr);
	$nc(this->dialog)->setVisible(true);
	$var($JPopupMenu, popup, $new($JPopupMenu));
	popup->add($$new($JMenuItem, "one"_s));
	$var($JMenuItem, two, $new($JMenuItem, "two"_s));
	two->addActionListener($$new($bug6544309$2, this));
	popup->add(two);
	popup->add($$new($JMenuItem, "three"_s));
	popup->show(this->dialog, 50, 50);
}

void bug6544309::test() {
	testImpl();
	checkResult();
}

void bug6544309::testImpl() {
	$nc(bug6544309::robot)->waitForIdle();
	$nc($System::out)->println("Pressing DOWN ARROW"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->waitForIdle();
	$System::out->println("Pressing DOWN ARROW"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->waitForIdle();
	$System::out->println("Pressing SPACE"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_SPACE);
}

void bug6544309::checkResult() {
	$nc(bug6544309::robot)->waitForIdle();
	if (!this->passed) {
		$throwNew($RuntimeException, "If a JDialog is invoker for JPopupMenu, the menu cannot be handled by keyboard."_s);
	}
}

bug6544309::bug6544309() {
}

$Class* bug6544309::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(bug6544309, dialog)},
		{"passed", "Z", nullptr, $PRIVATE, $field(bug6544309, passed)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6544309, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6544309, init$, void)},
		{"checkResult", "()V", nullptr, $PRIVATE, $method(bug6544309, checkResult, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6544309, main, void, $StringArray*), "java.lang.Exception"},
		{"setupUI", "()V", nullptr, $PRIVATE, $method(bug6544309, setupUI, void)},
		{"test", "()V", nullptr, $PRIVATE, $method(bug6544309, test, void), "java.lang.Exception"},
		{"testImpl", "()V", nullptr, $PRIVATE, $method(bug6544309, testImpl, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6544309$2", nullptr, nullptr, 0},
		{"bug6544309$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6544309",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6544309$2,bug6544309$1"
	};
	$loadClass(bug6544309, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6544309);
	});
	return class$;
}

$Class* bug6544309::class$ = nullptr;