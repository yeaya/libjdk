#include <bug4242228.h>
#include <bug4242228$1.h>
#include <bug4242228$2.h>
#include <java/awt/Robot.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug4242228$1 = ::bug4242228$1;
using $bug4242228$2 = ::bug4242228$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JTabbedPane* bug4242228::tabPane = nullptr;
$JFrame* bug4242228::frame = nullptr;

void bug4242228::init$() {
}

void bug4242228::main($StringArray* argv) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug4242228$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4242228$2));
}

bug4242228::bug4242228() {
}

$Class* bug4242228::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tabPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4242228, tabPane)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4242228, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4242228, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4242228, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4242228$2", nullptr, nullptr, 0},
		{"bug4242228$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4242228",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4242228$2,bug4242228$1,bug4242228$1$1"
	};
	$loadClass(bug4242228, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4242228);
	});
	return class$;
}

$Class* bug4242228::class$ = nullptr;