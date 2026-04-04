#include <bug7170657.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

#undef CTRL_MASK
#undef FAILED
#undef META_DOWN_MASK
#undef NOBUTTON

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Frame = ::java::awt::Frame;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

bool bug7170657::FAILED = false;

void bug7170657::init$() {
}

void bug7170657::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t mask = $InputEvent::META_DOWN_MASK | $InputEvent::CTRL_MASK;
	$var($Frame, f, $new($Frame));
	$var($MouseEvent, mwe, $new($MouseWheelEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, 1, 1, 1));
	$var($MouseEvent, mdme, $new($MenuDragMouseEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, nullptr, nullptr));
	$var($MouseEvent, me, $new($MouseEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, $MouseEvent::NOBUTTON));
	test(f, mwe);
	test(f, mdme);
	test(f, me);
	$init(bug7170657);
	if (bug7170657::FAILED) {
		$throwNew($RuntimeException, "Wrong mouse event"_s);
	}
}

void bug7170657::test($Frame* frame, $MouseEvent* me) {
	$var($MouseEvent, newme, $SwingUtilities::convertMouseEvent(frame, me, frame));
	int32_t var$1 = $nc(me)->getModifiersEx();
	bool var$0 = var$1 != $nc(newme)->getModifiersEx();
	if (!var$0) {
		int32_t var$2 = me->getModifiers();
		var$0 = var$2 != newme->getModifiers();
	}
	if (var$0) {
		fail(me, newme);
	}
}

void bug7170657::fail($MouseEvent* exp, $MouseEvent* act) {
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Expected: "_s, exp}));
	$System::err->println($$str({"Actual: "_s, act}));
	$init(bug7170657);
	bug7170657::FAILED = true;
}

bug7170657::bug7170657() {
}

$Class* bug7170657::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FAILED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug7170657, FAILED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7170657, init$, void)},
		{"fail", "(Ljava/awt/event/MouseEvent;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7170657, fail, void, $MouseEvent*, $MouseEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7170657, main, void, $StringArray*)},
		{"test", "(Ljava/awt/Frame;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7170657, test, void, $Frame*, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"bug7170657",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug7170657, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7170657);
	});
	return class$;
}

$Class* bug7170657::class$ = nullptr;