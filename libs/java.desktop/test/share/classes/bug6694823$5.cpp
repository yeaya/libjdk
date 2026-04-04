#include <bug6694823$5.h>
#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6694823$5::init$($Point* val$point) {
	$set(this, val$point, val$point);
}

void bug6694823$5::run() {
	$useLocalObjectStack();
	$init($bug6694823);
	$var($Point, frameLoc, $nc($bug6694823::frame)->getLocationOnScreen());
	if ($$nc($nc($bug6694823::popup)->getLocationOnScreen())->equals($$new($Point, $nc(frameLoc)->x, $nc(frameLoc)->y + $nc(this->val$point)->y))) {
		$throwNew($RuntimeException, "Popup is not shifted"_s);
	}
	$nc($bug6694823::popup)->setVisible(false);
	$nc($bug6694823::frame)->dispose();
}

bug6694823$5::bug6694823$5() {
}

$Class* bug6694823$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$point", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6694823$5, val$point)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;)V", "()V", 0, $method(bug6694823$5, init$, void, $Point*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6694823$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6694823",
		"checkPopup",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6694823$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6694823$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6694823"
	};
	$loadClass(bug6694823$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6694823$5);
	});
	return class$;
}

$Class* bug6694823$5::class$ = nullptr;