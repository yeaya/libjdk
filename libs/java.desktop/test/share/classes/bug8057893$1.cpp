#include <bug8057893$1.h>
#include <bug8057893.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug8057893 = ::bug8057893;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8057893$1::init$() {
}

void bug8057893$1::actionPerformed($ActionEvent* e) {
	if ("comboBoxEdited"_s->equals($($nc(e)->getActionCommand()))) {
		$init($bug8057893);
		$bug8057893::isComboBoxEdited = true;
	}
}

bug8057893$1::bug8057893$1() {
}

$Class* bug8057893$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8057893$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8057893$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8057893",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8057893$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8057893$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8057893"
	};
	$loadClass(bug8057893$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057893$1);
	});
	return class$;
}

$Class* bug8057893$1::class$ = nullptr;