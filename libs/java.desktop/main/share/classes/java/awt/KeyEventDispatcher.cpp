#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* KeyEventDispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyEventDispatcher, dispatchKeyEvent, bool, $KeyEvent*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.KeyEventDispatcher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(KeyEventDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyEventDispatcher);
	});
	return class$;
}

$Class* KeyEventDispatcher::class$ = nullptr;

	} // awt
} // java