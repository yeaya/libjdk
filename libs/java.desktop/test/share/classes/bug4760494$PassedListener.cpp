#include <bug4760494$PassedListener.h>
#include <bug4760494.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug4760494 = ::bug4760494;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4760494$PassedListener::init$() {
}

void bug4760494$PassedListener::actionPerformed($ActionEvent* ev) {
	$init($bug4760494);
	$bug4760494::passed = true;
	$nc($System::out)->println("passed!"_s);
}

bug4760494$PassedListener::bug4760494$PassedListener() {
}

$Class* bug4760494$PassedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4760494$PassedListener, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4760494$PassedListener, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4760494$PassedListener", "bug4760494", "PassedListener", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4760494$PassedListener",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4760494"
	};
	$loadClass(bug4760494$PassedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4760494$PassedListener);
	});
	return class$;
}

$Class* bug4760494$PassedListener::class$ = nullptr;