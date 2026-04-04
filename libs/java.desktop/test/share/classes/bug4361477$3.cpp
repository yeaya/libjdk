#include <bug4361477$3.h>
#include <bug4361477.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4361477 = ::bug4361477;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug4361477$3::init$() {
}

void bug4361477$3::stateChanged($ChangeEvent* pick) {
	$init($bug4361477);
	$bug4361477::bStateChanged = true;
	if ($nc($bug4361477::tabbedPane)->getTabCount() == 3) {
		$nc($bug4361477::tabbedPane)->remove(2);
	}
}

bug4361477$3::bug4361477$3() {
}

$Class* bug4361477$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4361477$3, init$, void)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4361477$3, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4361477",
		"createAndShowUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4361477$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4361477$3",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4361477"
	};
	$loadClass(bug4361477$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4361477$3);
	});
	return class$;
}

$Class* bug4361477$3::class$ = nullptr;