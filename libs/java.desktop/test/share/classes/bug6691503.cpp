#include <bug6691503.h>
#include <bug6691503$1.h>
#include <bug6691503$2.h>
#include <bug6691503$3.h>
#include <bug6691503$4.h>
#include <java/awt/Robot.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6691503$1 = ::bug6691503$1;
using $bug6691503$2 = ::bug6691503$2;
using $bug6691503$3 = ::bug6691503$3;
using $bug6691503$4 = ::bug6691503$4;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6691503::init$() {
	this->isAlwaysOnTop1 = false;
	this->isAlwaysOnTop2 = true;
}

void bug6691503::main($StringArray* args) {
	$var(bug6691503, test, $new(bug6691503));
	test->setupUI();
	test->testApplication();
	test->testApplet();
	test->checkResult();
	test->stopEDT();
}

void bug6691503::setupUI() {
	$SwingUtilities::invokeLater($$new($bug6691503$1, this));
}

void bug6691503::testApplication() {
	$SwingUtilities::invokeLater($$new($bug6691503$2, this));
}

void bug6691503::testApplet() {
	$SwingUtilities::invokeLater($$new($bug6691503$3, this));
}

void bug6691503::checkResult() {
	try {
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
	} catch ($Exception& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, "Unexpected failure"_s);
	}
	if (!this->isAlwaysOnTop1 || this->isAlwaysOnTop2) {
		$throwNew($RuntimeException, "Malicious applet can show always-on-top popup menu which has whole screen size"_s);
	}
	$nc($System::out)->println("Test passed"_s);
}

void bug6691503::stopEDT() {
	$SwingUtilities::invokeLater($$new($bug6691503$4, this));
}

bug6691503::bug6691503() {
}

$Class* bug6691503::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(bug6691503, popupMenu)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6691503, frame)},
		{"isAlwaysOnTop1", "Z", nullptr, $PRIVATE, $field(bug6691503, isAlwaysOnTop1)},
		{"isAlwaysOnTop2", "Z", nullptr, $PRIVATE, $field(bug6691503, isAlwaysOnTop2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6691503, init$, void)},
		{"checkResult", "()V", nullptr, $PRIVATE, $method(bug6691503, checkResult, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6691503, main, void, $StringArray*)},
		{"setupUI", "()V", nullptr, $PRIVATE, $method(bug6691503, setupUI, void)},
		{"stopEDT", "()V", nullptr, $PRIVATE, $method(bug6691503, stopEDT, void)},
		{"testApplet", "()V", nullptr, $PRIVATE, $method(bug6691503, testApplet, void)},
		{"testApplication", "()V", nullptr, $PRIVATE, $method(bug6691503, testApplication, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6691503$4", nullptr, nullptr, 0},
		{"bug6691503$3", nullptr, nullptr, 0},
		{"bug6691503$2", nullptr, nullptr, 0},
		{"bug6691503$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6691503",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6691503$4,bug6691503$3,bug6691503$2,bug6691503$1"
	};
	$loadClass(bug6691503, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6691503);
	});
	return class$;
}

$Class* bug6691503::class$ = nullptr;