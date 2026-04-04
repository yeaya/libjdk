#include <bug8021253$3.h>
#include <bug8021253.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8021253 = ::bug8021253;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8021253$3::init$() {
}

void bug8021253$3::actionPerformed($ActionEvent* e) {
	$init($bug8021253);
	$bug8021253::defaultKeyPressed = true;
	$nc($bug8021253::frame)->dispose();
}

bug8021253$3::bug8021253$3() {
}

$Class* bug8021253$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8021253$3, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8021253$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8021253",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8021253$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8021253$3",
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
		"bug8021253"
	};
	$loadClass(bug8021253$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8021253$3);
	});
	return class$;
}

$Class* bug8021253$3::class$ = nullptr;