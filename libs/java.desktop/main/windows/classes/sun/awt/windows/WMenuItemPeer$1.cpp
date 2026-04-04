#include <sun/awt/windows/WMenuItemPeer$1.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WMenuItemPeer$1::init$($WMenuItemPeer* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void WMenuItemPeer$1::run() {
	$useLocalObjectStack();
	this->this$0->postEvent($$new($ActionEvent, this->this$0->target, $ActionEvent::ACTION_PERFORMED, $($nc($cast($MenuItem, this->this$0->target))->getActionCommand()), this->val$when, this->val$modifiers));
}

WMenuItemPeer$1::WMenuItemPeer$1() {
}

$Class* WMenuItemPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, this$0)},
		{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, val$modifiers)},
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, val$when)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WMenuItemPeer;JI)V", "()V", 0, $method(WMenuItemPeer$1, init$, void, $WMenuItemPeer*, int64_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WMenuItemPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WMenuItemPeer",
		"handleAction",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WMenuItemPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WMenuItemPeer$1",
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
		"sun.awt.windows.WMenuItemPeer"
	};
	$loadClass(WMenuItemPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WMenuItemPeer$1);
	});
	return class$;
}

$Class* WMenuItemPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun