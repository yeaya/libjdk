#include <sun/awt/windows/WButtonPeer$1.h>
#include <java/awt/Button.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/windows/WButtonPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $Button = ::java::awt::Button;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WButtonPeer = ::sun::awt::windows::WButtonPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WButtonPeer$1::init$($WButtonPeer* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void WButtonPeer$1::run() {
	$useLocalObjectStack();
	this->this$0->postEvent($$new($ActionEvent, this->this$0->target, $ActionEvent::ACTION_PERFORMED, $($nc($cast($Button, this->this$0->target))->getActionCommand()), this->val$when, this->val$modifiers));
}

WButtonPeer$1::WButtonPeer$1() {
}

$Class* WButtonPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WButtonPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, this$0)},
		{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, val$modifiers)},
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, val$when)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WButtonPeer;JI)V", "()V", 0, $method(WButtonPeer$1, init$, void, $WButtonPeer*, int64_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WButtonPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WButtonPeer",
		"handleAction",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WButtonPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WButtonPeer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WButtonPeer"
	};
	$loadClass(WButtonPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WButtonPeer$1);
	});
	return class$;
}

$Class* WButtonPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun