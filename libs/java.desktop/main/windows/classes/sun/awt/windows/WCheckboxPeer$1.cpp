#include <sun/awt/windows/WCheckboxPeer$1.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WCheckboxPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WCheckboxPeer = ::sun::awt::windows::WCheckboxPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WCheckboxPeer$1::init$($WCheckboxPeer* this$0, $Checkbox* val$cb, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$cb, val$cb);
	this->val$state = val$state;
}

void WCheckboxPeer$1::run() {
	$useLocalObjectStack();
	$var($CheckboxGroup, chg, $nc(this->val$cb)->getCheckboxGroup());
	bool var$0 = (chg != nullptr) && (this->val$cb == chg->getSelectedCheckbox());
	if (var$0 && this->val$cb->getState()) {
		return;
	}
	this->val$cb->setState(this->val$state);
	this->this$0->postEvent($$new($ItemEvent, this->val$cb, $ItemEvent::ITEM_STATE_CHANGED, $(this->val$cb->getLabel()), this->val$state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WCheckboxPeer$1::WCheckboxPeer$1() {
}

$Class* WCheckboxPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, this$0)},
		{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, val$state)},
		{"val$cb", "Ljava/awt/Checkbox;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, val$cb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WCheckboxPeer;Ljava/awt/Checkbox;Z)V", "()V", 0, $method(WCheckboxPeer$1, init$, void, $WCheckboxPeer*, $Checkbox*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WCheckboxPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WCheckboxPeer",
		"handleAction",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WCheckboxPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WCheckboxPeer$1",
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
		"sun.awt.windows.WCheckboxPeer"
	};
	$loadClass(WCheckboxPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WCheckboxPeer$1);
	});
	return class$;
}

$Class* WCheckboxPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun