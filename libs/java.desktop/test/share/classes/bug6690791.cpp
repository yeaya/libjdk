#include <bug6690791.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

#undef ALT_MASK
#undef BUTTON1
#undef MOUSE_CLICKED

using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

void bug6690791::init$() {
}

void bug6690791::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Component, var$0, $new($JLabel));
	$var($MouseEvent, me, $new($MouseEvent, var$0, $MouseEvent::MOUSE_CLICKED, $System::currentTimeMillis(), $MouseEvent::ALT_MASK, 10, 10, 100, 100, 1, false, $MouseEvent::BUTTON1));
	me->setSource($$new($Object));
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(me);
}

bug6690791::bug6690791() {
}

$Class* bug6690791::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6690791, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6690791, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6690791",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6690791, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6690791);
	});
	return class$;
}

$Class* bug6690791::class$ = nullptr;