#include <sun/awt/windows/WListPeer$2.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/List.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WListPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $ItemSelectable = ::java::awt::ItemSelectable;
using $List = ::java::awt::List;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WListPeer = ::sun::awt::windows::WListPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WListPeer$2::init$($WListPeer* this$0, $List* val$l, int32_t val$index) {
	$set(this, this$0, this$0);
	$set(this, val$l, val$l);
	this->val$index = val$index;
}

void WListPeer$2::run() {
	$useLocalObjectStack();
	$var($ItemSelectable, var$0, this->val$l);
	$var($Object, var$1, $Integer::valueOf(this->val$index));
	this->this$0->postEvent($$new($ItemEvent, var$0, $ItemEvent::ITEM_STATE_CHANGED, var$1, this->this$0->isSelected(this->val$index) ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WListPeer$2::WListPeer$2() {
}

$Class* WListPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, this$0)},
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, val$index)},
		{"val$l", "Ljava/awt/List;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, val$l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WListPeer;Ljava/awt/List;I)V", "()V", 0, $method(WListPeer$2, init$, void, $WListPeer*, $List*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WListPeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WListPeer",
		"handleListChanged",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WListPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WListPeer$2",
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
		"sun.awt.windows.WListPeer"
	};
	$loadClass(WListPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WListPeer$2);
	});
	return class$;
}

$Class* WListPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun