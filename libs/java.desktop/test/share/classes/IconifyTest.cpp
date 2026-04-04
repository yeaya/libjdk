#include <IconifyTest.h>
#include <IconifyTest$1.h>
#include <IconifyTest$2.h>
#include <java/awt/Robot.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $IconifyTest$1 = ::IconifyTest$1;
using $IconifyTest$2 = ::IconifyTest$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$volatile(bool) IconifyTest::windowIconifiedIsCalled = false;
$volatile(bool) IconifyTest::frameIsRepainted = false;
$JFrame* IconifyTest::frame = nullptr;
$JButton* IconifyTest::button = nullptr;

void IconifyTest::init$() {
}

void IconifyTest::main($StringArray* args) {
	$init(IconifyTest);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($IconifyTest$1));
	robot->waitForIdle();
	robot->delay(1000);
	$SwingUtilities::invokeAndWait($$new($IconifyTest$2));
	robot->waitForIdle();
	robot->delay(1000);
	if (!IconifyTest::windowIconifiedIsCalled) {
		$throwNew($Exception, "Test failed: window was not iconified."_s);
	}
	if (IconifyTest::frameIsRepainted) {
		$throwNew($Exception, "Test failed: frame was repainted when window was iconified."_s);
	}
}

void IconifyTest::clinit$($Class* clazz) {
	IconifyTest::windowIconifiedIsCalled = false;
	IconifyTest::frameIsRepainted = false;
}

IconifyTest::IconifyTest() {
}

$Class* IconifyTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"windowIconifiedIsCalled", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(IconifyTest, windowIconifiedIsCalled)},
		{"frameIsRepainted", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(IconifyTest, frameIsRepainted)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(IconifyTest, frame)},
		{"button", "Ljavax/swing/JButton;", nullptr, $STATIC, $staticField(IconifyTest, button)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IconifyTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IconifyTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconifyTest$2", nullptr, nullptr, 0},
		{"IconifyTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IconifyTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"IconifyTest$2,IconifyTest$1,IconifyTest$1$1"
	};
	$loadClass(IconifyTest, name, initialize, &classInfo$$, IconifyTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IconifyTest);
	});
	return class$;
}

$Class* IconifyTest::class$ = nullptr;