#include <bug8049533.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Panel.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef PRECISE_WHEEL_ROTATION

using $Component = ::java::awt::Component;
using $Frame = ::java::awt::Frame;
using $Panel = ::java::awt::Panel;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

double bug8049533::PRECISE_WHEEL_ROTATION = 0.0;

void bug8049533::init$() {
}

void bug8049533::main($StringArray* args) {
	$init(bug8049533);
	$useLocalObjectStack();
	$var($Frame, frame, $new($Frame));
	$var($Panel, panel, $new($Panel));
	frame->add(panel);
	$var($MouseWheelEvent, event, $new($MouseWheelEvent, panel, 0, 0, 0, 0, 0, 0, 0, 0, false, 0, 0, 2, bug8049533::PRECISE_WHEEL_ROTATION));
	$var($MouseWheelEvent, convertedEvent, $cast($MouseWheelEvent, $SwingUtilities::convertMouseEvent($(event->getComponent()), event, nullptr)));
	if ($nc(convertedEvent)->getPreciseWheelRotation() != bug8049533::PRECISE_WHEEL_ROTATION) {
		$throwNew($RuntimeException, "PreciseWheelRotation field is not copied!"_s);
	}
}

bug8049533::bug8049533() {
}

void bug8049533::clinit$($Class* clazz) {
	bug8049533::PRECISE_WHEEL_ROTATION = 3.14;
}

$Class* bug8049533::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PRECISE_WHEEL_ROTATION", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8049533, PRECISE_WHEEL_ROTATION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8049533, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8049533, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8049533",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8049533, name, initialize, &classInfo$$, bug8049533::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8049533);
	});
	return class$;
}

$Class* bug8049533::class$ = nullptr;