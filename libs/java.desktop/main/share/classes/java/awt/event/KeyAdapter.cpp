#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void KeyAdapter::init$() {
}

void KeyAdapter::keyTyped($KeyEvent* e) {
}

void KeyAdapter::keyPressed($KeyEvent* e) {
}

void KeyAdapter::keyReleased($KeyEvent* e) {
}

KeyAdapter::KeyAdapter() {
}

$Class* KeyAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(KeyAdapter, init$, void)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(KeyAdapter, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(KeyAdapter, keyReleased, void, $KeyEvent*)},
		{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(KeyAdapter, keyTyped, void, $KeyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.event.KeyAdapter",
		"java.lang.Object",
		"java.awt.event.KeyListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyAdapter);
	});
	return class$;
}

$Class* KeyAdapter::class$ = nullptr;

		} // event
	} // awt
} // java