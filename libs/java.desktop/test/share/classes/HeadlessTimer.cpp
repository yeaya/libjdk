#include <HeadlessTimer.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;

void HeadlessTimer::init$() {
}

void HeadlessTimer::main($StringArray* args) {
	$var($Timer, t, $new($Timer, 100, nullptr));
}

HeadlessTimer::HeadlessTimer() {
}

$Class* HeadlessTimer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessTimer, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessTimer, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessTimer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessTimer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessTimer);
	});
	return class$;
}

$Class* HeadlessTimer::class$ = nullptr;