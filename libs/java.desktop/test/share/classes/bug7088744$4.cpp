#include <bug7088744$4.h>
#include <bug7088744.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef BUTTON_EVENTS_SEQUENCE

using $bug7088744 = ::bug7088744;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug7088744$4::init$() {
}

void bug7088744$4::run() {
	$init($bug7088744);
	$nc($bug7088744::frame)->dispose();
	if ($bug7088744::eventCount != $nc($bug7088744::BUTTON_EVENTS_SEQUENCE)->length) {
		$throwNew($RuntimeException, "Not all events received"_s);
	}
}

bug7088744$4::bug7088744$4() {
}

$Class* bug7088744$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7088744$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7088744$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7088744",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7088744$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7088744$4",
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
		"bug7088744"
	};
	$loadClass(bug7088744$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7088744$4);
	});
	return class$;
}

$Class* bug7088744$4::class$ = nullptr;