#include <bug4449413$1.h>
#include <bug4449413.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $bug4449413 = ::bug4449413;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4449413$1::init$($bug4449413* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void bug4449413$1::windowClosing($WindowEvent* e) {
	$init($bug4449413);
	$nc($bug4449413::latch)->countDown();
}

bug4449413$1::bug4449413$1() {
}

$Class* bug4449413$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4449413;", nullptr, $FINAL | $SYNTHETIC, $field(bug4449413$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4449413;)V", nullptr, 0, $method(bug4449413$1, init$, void, $bug4449413*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4449413$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4449413",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4449413$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4449413$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4449413"
	};
	$loadClass(bug4449413$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4449413$1));
	});
	return class$;
}

$Class* bug4449413$1::class$ = nullptr;