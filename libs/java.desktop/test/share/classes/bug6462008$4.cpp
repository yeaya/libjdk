#include <bug6462008$4.h>
#include <bug6462008.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $bug6462008 = ::bug6462008;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6462008$4::init$() {
}

void bug6462008$4::run() {
	$useLocalObjectStack();
	$init($bug6462008);
	$$nc($$nc($nc($bug6462008::list)->getActionMap())->get("scrollDownExtendSelection"_s))->actionPerformed($$new($ActionEvent, $bug6462008::list, $ActionEvent::ACTION_PERFORMED, nullptr));
}

bug6462008$4::bug6462008$4() {
}

$Class* bug6462008$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6462008$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"scrollDownExtendSelection",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6462008"
	};
	$loadClass(bug6462008$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$4);
	});
	return class$;
}

$Class* bug6462008$4::class$ = nullptr;