#include <sun/awt/windows/WListPeer$1.h>
#include <java/awt/List.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/windows/WListPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $List = ::java::awt::List;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WListPeer = ::sun::awt::windows::WListPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WListPeer$1::init$($WListPeer* this$0, $List* val$l, int32_t val$index, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	$set(this, val$l, val$l);
	this->val$index = val$index;
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void WListPeer$1::run() {
	$useLocalObjectStack();
	$nc(this->val$l)->select(this->val$index);
	this->this$0->postEvent($$new($ActionEvent, this->this$0->target, $ActionEvent::ACTION_PERFORMED, $(this->val$l->getItem(this->val$index)), this->val$when, this->val$modifiers));
}

WListPeer$1::WListPeer$1() {
}

$Class* WListPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$1, this$0)},
		{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$1, val$modifiers)},
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$1, val$when)},
		{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$1, val$index)},
		{"val$l", "Ljava/awt/List;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$1, val$l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WListPeer;Ljava/awt/List;IJI)V", "()V", 0, $method(WListPeer$1, init$, void, $WListPeer*, $List*, int32_t, int64_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WListPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WListPeer",
		"handleAction",
		"(IJI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WListPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WListPeer$1",
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
	$loadClass(WListPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WListPeer$1);
	});
	return class$;
}

$Class* WListPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun