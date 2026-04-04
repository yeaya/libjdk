#include <bug6578666$1.h>
#include <bug6578666.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug6578666 = ::bug6578666;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6578666$1::init$() {
	$KeyAdapter::init$();
}

void bug6578666$1::keyPressed($KeyEvent* e) {
	$init($bug6578666);
	$nc($bug6578666::tree)->updateUI();
}

bug6578666$1::bug6578666$1() {
}

$Class* bug6578666$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6578666$1, init$, void)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6578666$1, keyPressed, void, $KeyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6578666",
		"createGui",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6578666$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6578666$1",
		"java.awt.event.KeyAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6578666"
	};
	$loadClass(bug6578666$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6578666$1);
	});
	return class$;
}

$Class* bug6578666$1::class$ = nullptr;