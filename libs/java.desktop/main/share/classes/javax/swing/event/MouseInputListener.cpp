#include <javax/swing/event/MouseInputListener.h>
#include <java/awt/event/MouseListener.h>
#include <jcpp.h>

using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

int32_t MouseInputListener::hashCode() {
	return this->$MouseListener::hashCode();
}

bool MouseInputListener::equals(Object$* arg0) {
	return this->$MouseListener::equals(arg0);
}

$Object* MouseInputListener::clone() {
	return this->$MouseListener::clone();
}

$String* MouseInputListener::toString() {
	return this->$MouseListener::toString();
}

void MouseInputListener::finalize() {
	this->$MouseListener::finalize();
}

$Class* MouseInputListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.MouseInputListener",
		nullptr,
		"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MouseInputListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MouseInputListener));
	});
	return class$;
}

$Class* MouseInputListener::class$ = nullptr;

		} // event
	} // swing
} // javax