#include <java/awt/SequencedEvent$2.h>
#include <java/awt/SequencedEvent.h>
#include <jcpp.h>

using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void SequencedEvent$2::init$() {
}

$Object* SequencedEvent$2::run() {
	$init($SequencedEvent);
	$SequencedEvent::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return nullptr;
}

SequencedEvent$2::SequencedEvent$2() {
}

$Class* SequencedEvent$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SequencedEvent$2, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SequencedEvent$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.SequencedEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SequencedEvent$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.SequencedEvent$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.SequencedEvent"
	};
	$loadClass(SequencedEvent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequencedEvent$2);
	});
	return class$;
}

$Class* SequencedEvent$2::class$ = nullptr;

	} // awt
} // java