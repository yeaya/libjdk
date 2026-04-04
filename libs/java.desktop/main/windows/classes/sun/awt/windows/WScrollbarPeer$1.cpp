#include <sun/awt/windows/WScrollbarPeer$1.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <sun/awt/windows/WScrollbarPeer.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED

using $Scrollbar = ::java::awt::Scrollbar;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WScrollbarPeer = ::sun::awt::windows::WScrollbarPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WScrollbarPeer$1::init$($WScrollbarPeer* this$0, $Scrollbar* val$sb, bool val$isAdjusting, int32_t val$value, int32_t val$type) {
	$set(this, this$0, this$0);
	$set(this, val$sb, val$sb);
	this->val$isAdjusting = val$isAdjusting;
	this->val$value = val$value;
	this->val$type = val$type;
}

void WScrollbarPeer$1::run() {
	$nc(this->val$sb)->setValueIsAdjusting(this->val$isAdjusting);
	this->val$sb->setValue(this->val$value);
	this->this$0->postEvent($$new($AdjustmentEvent, this->val$sb, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, this->val$type, this->val$value, this->val$isAdjusting));
}

WScrollbarPeer$1::WScrollbarPeer$1() {
}

$Class* WScrollbarPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WScrollbarPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, this$0)},
		{"val$type", "I", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$type)},
		{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$value)},
		{"val$isAdjusting", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$isAdjusting)},
		{"val$sb", "Ljava/awt/Scrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$sb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WScrollbarPeer;Ljava/awt/Scrollbar;ZII)V", "()V", 0, $method(WScrollbarPeer$1, init$, void, $WScrollbarPeer*, $Scrollbar*, bool, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WScrollbarPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WScrollbarPeer",
		"postAdjustmentEvent",
		"(IIZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WScrollbarPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WScrollbarPeer$1",
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
		"sun.awt.windows.WScrollbarPeer"
	};
	$loadClass(WScrollbarPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WScrollbarPeer$1);
	});
	return class$;
}

$Class* WScrollbarPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun