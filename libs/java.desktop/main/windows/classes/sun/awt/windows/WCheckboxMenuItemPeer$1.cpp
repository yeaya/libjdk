#include <sun/awt/windows/WCheckboxMenuItemPeer$1.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WCheckboxMenuItemPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WCheckboxMenuItemPeer = ::sun::awt::windows::WCheckboxMenuItemPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WCheckboxMenuItemPeer$1::init$($WCheckboxMenuItemPeer* this$0, $CheckboxMenuItem* val$target, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$target, val$target);
	this->val$state = val$state;
}

void WCheckboxMenuItemPeer$1::run() {
	$useLocalObjectStack();
	$nc(this->val$target)->setState(this->val$state);
	this->this$0->postEvent($$new($ItemEvent, this->val$target, $ItemEvent::ITEM_STATE_CHANGED, $(this->val$target->getLabel()), this->val$state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WCheckboxMenuItemPeer$1::WCheckboxMenuItemPeer$1() {
}

$Class* WCheckboxMenuItemPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WCheckboxMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, this$0)},
		{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, val$state)},
		{"val$target", "Ljava/awt/CheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, val$target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WCheckboxMenuItemPeer;Ljava/awt/CheckboxMenuItem;Z)V", "()V", 0, $method(WCheckboxMenuItemPeer$1, init$, void, $WCheckboxMenuItemPeer*, $CheckboxMenuItem*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WCheckboxMenuItemPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WCheckboxMenuItemPeer",
		"handleAction",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WCheckboxMenuItemPeer$1",
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
		"sun.awt.windows.WCheckboxMenuItemPeer"
	};
	$loadClass(WCheckboxMenuItemPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WCheckboxMenuItemPeer$1);
	});
	return class$;
}

$Class* WCheckboxMenuItemPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun