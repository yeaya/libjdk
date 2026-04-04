#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void FocusAdapter::init$() {
}

void FocusAdapter::focusGained($FocusEvent* e) {
}

void FocusAdapter::focusLost($FocusEvent* e) {
}

FocusAdapter::FocusAdapter() {
}

$Class* FocusAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(FocusAdapter, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(FocusAdapter, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(FocusAdapter, focusLost, void, $FocusEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.event.FocusAdapter",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(FocusAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusAdapter);
	});
	return class$;
}

$Class* FocusAdapter::class$ = nullptr;

		} // event
	} // awt
} // java