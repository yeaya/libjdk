#include <sun/lwawt/LWCheckboxPeer$1.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/Component.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <jcpp.h>

#undef ITEM_STATE_CHANGED
#undef SELECTED

using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;

namespace sun {
	namespace lwawt {

void LWCheckboxPeer$1::init$($LWCheckboxPeer* this$0, $ItemEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void LWCheckboxPeer$1::run() {
	$useLocalObjectStack();
	bool postEvent = true;
	$var($CheckboxGroup, group, $$sure($Checkbox, this->this$0->getTarget())->getCheckboxGroup());
	if (group != nullptr) {
		if ($nc(this->val$e)->getStateChange() == $ItemEvent::SELECTED) {
			if (!$equals(group->getSelectedCheckbox(), this->this$0->getTarget())) {
				group->setSelectedCheckbox($$cast($Checkbox, this->this$0->getTarget()));
			} else {
				postEvent = false;
			}
		} else {
			postEvent = false;
			if ($equals(group->getSelectedCheckbox(), this->this$0->getTarget())) {
				$$sure($Checkbox, this->this$0->getTarget())->setState(true);
			}
		}
	} else {
		$$sure($Checkbox, this->this$0->getTarget())->setState($nc(this->val$e)->getStateChange() == $ItemEvent::SELECTED);
	}
	if (postEvent) {
		$var($ItemSelectable, var$0, $cast($ItemSelectable, this->this$0->getTarget()));
		$var($Object, var$1, $$sure($Checkbox, this->this$0->getTarget())->getLabel());
		this->this$0->postEvent($$new($ItemEvent, var$0, $ItemEvent::ITEM_STATE_CHANGED, var$1, $nc(this->val$e)->getStateChange()));
	}
}

LWCheckboxPeer$1::LWCheckboxPeer$1() {
}

$Class* LWCheckboxPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$1, this$0)},
		{"val$e", "Ljava/awt/event/ItemEvent;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$1, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWCheckboxPeer;Ljava/awt/event/ItemEvent;)V", "()V", 0, $method(LWCheckboxPeer$1, init$, void, $LWCheckboxPeer*, $ItemEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWCheckboxPeer",
		"itemStateChanged",
		"(Ljava/awt/event/ItemEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWCheckboxPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWCheckboxPeer$1",
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
		"sun.lwawt.LWCheckboxPeer"
	};
	$loadClass(LWCheckboxPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCheckboxPeer$1);
	});
	return class$;
}

$Class* LWCheckboxPeer$1::class$ = nullptr;

	} // lwawt
} // sun