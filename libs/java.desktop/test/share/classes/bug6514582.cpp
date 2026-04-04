#include <bug6514582.h>
#include <bug6514582$1.h>
#include <bug6514582$2.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6514582$1 = ::bug6514582$1;
using $bug6514582$2 = ::bug6514582$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JPopupMenu* bug6514582::popup = nullptr;

void bug6514582::init$() {
}

void bug6514582::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug6514582$1));
	robot->waitForIdle();
	$init(bug6514582);
	if (!$nc(bug6514582::popup)->isShowing()) {
		$throwNew($RuntimeException, "Where is my popup ?"_s);
	}
	$SwingUtilities::invokeAndWait($$new($bug6514582$2));
	robot->waitForIdle();
	if ($nc(bug6514582::popup)->isShowing()) {
		$throwNew($RuntimeException, "Empty popup is shown"_s);
	}
	$nc(bug6514582::popup)->setVisible(false);
}

bug6514582::bug6514582() {
}

$Class* bug6514582::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"popup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6514582, popup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6514582, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug6514582, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6514582$2", nullptr, nullptr, 0},
		{"bug6514582$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6514582",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6514582$2,bug6514582$1"
	};
	$loadClass(bug6514582, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6514582);
	});
	return class$;
}

$Class* bug6514582::class$ = nullptr;