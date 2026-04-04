#include <javax/swing/JToggleButton$1.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef ACTIVATION
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP

using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace javax {
	namespace swing {

$ints* JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause = nullptr;

void JToggleButton$1::clinit$($Class* clazz) {
	$assignStatic(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause, $new($ints, $($FocusEvent$Cause::values())->length));
	{
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::ACTIVATION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::TRAVERSAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::TRAVERSAL_UP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::TRAVERSAL_DOWN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::TRAVERSAL_FORWARD->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause->set($FocusEvent$Cause::TRAVERSAL_BACKWARD->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JToggleButton$1::JToggleButton$1() {
}

$Class* JToggleButton$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$event$FocusEvent$Cause", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JToggleButton$1, $SwitchMap$java$awt$event$FocusEvent$Cause)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JToggleButton",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToggleButton$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.JToggleButton$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JToggleButton"
	};
	$loadClass(JToggleButton$1, name, initialize, &classInfo$$, JToggleButton$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JToggleButton$1);
	});
	return class$;
}

$Class* JToggleButton$1::class$ = nullptr;

	} // swing
} // javax