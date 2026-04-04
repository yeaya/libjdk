#include <SetInvokerJPopupMenuTest$MyButton.h>
#include <SetInvokerJPopupMenuTest.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

void SetInvokerJPopupMenuTest$MyButton::init$($String* string) {
	$JButton::init$(string);
}

void SetInvokerJPopupMenuTest$MyButton::processMouseEvent($MouseEvent* e) {
	$JButton::processMouseEvent(e);
}

SetInvokerJPopupMenuTest$MyButton::SetInvokerJPopupMenuTest$MyButton() {
}

$Class* SetInvokerJPopupMenuTest$MyButton::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SetInvokerJPopupMenuTest$MyButton, init$, void, $String*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(SetInvokerJPopupMenuTest$MyButton, processMouseEvent, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetInvokerJPopupMenuTest$MyButton", "SetInvokerJPopupMenuTest", "MyButton", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SetInvokerJPopupMenuTest$MyButton",
		"javax.swing.JButton",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SetInvokerJPopupMenuTest"
	};
	$loadClass(SetInvokerJPopupMenuTest$MyButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SetInvokerJPopupMenuTest$MyButton));
	});
	return class$;
}

$Class* SetInvokerJPopupMenuTest$MyButton::class$ = nullptr;