#include <sun/awt/windows/WChoicePeer$2.h>
#include <java/awt/Choice.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WChoicePeer.h>
#include <jcpp.h>

#undef ITEM_STATE_CHANGED
#undef SELECTED

using $Choice = ::java::awt::Choice;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WChoicePeer = ::sun::awt::windows::WChoicePeer;

namespace sun {
	namespace awt {
		namespace windows {

void WChoicePeer$2::init$($WChoicePeer* this$0, $Choice* val$c, int32_t val$index) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
	this->val$index = val$index;
}

void WChoicePeer$2::run() {
	$useLocalObjectStack();
	$nc(this->val$c)->select(this->val$index);
	this->this$0->postEvent($$new($ItemEvent, this->val$c, $ItemEvent::ITEM_STATE_CHANGED, $(this->val$c->getItem(this->val$index)), $ItemEvent::SELECTED));
}

WChoicePeer$2::WChoicePeer$2() {
}

$Class* WChoicePeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, this$0)},
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, val$index)},
		{"val$c", "Ljava/awt/Choice;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WChoicePeer;Ljava/awt/Choice;I)V", "()V", 0, $method(WChoicePeer$2, init$, void, $WChoicePeer*, $Choice*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WChoicePeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WChoicePeer",
		"handleAction",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WChoicePeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WChoicePeer$2",
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
		"sun.awt.windows.WChoicePeer"
	};
	$loadClass(WChoicePeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WChoicePeer$2);
	});
	return class$;
}

$Class* WChoicePeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun