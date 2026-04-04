#include <sun/awt/windows/WChoicePeer$1.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/windows/WChoicePeer.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WChoicePeer = ::sun::awt::windows::WChoicePeer;

namespace sun {
	namespace awt {
		namespace windows {

void WChoicePeer$1::init$($WChoicePeer* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void WChoicePeer$1::windowIconified($WindowEvent* e) {
	this->this$0->closeList();
}

void WChoicePeer$1::windowClosing($WindowEvent* e) {
	this->this$0->closeList();
}

WChoicePeer$1::WChoicePeer$1() {
}

$Class* WChoicePeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WChoicePeer;)V", nullptr, 0, $method(WChoicePeer$1, init$, void, $WChoicePeer*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WChoicePeer$1, windowClosing, void, $WindowEvent*)},
		{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WChoicePeer$1, windowIconified, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WChoicePeer",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WChoicePeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WChoicePeer$1",
		"java.awt.event.WindowAdapter",
		nullptr,
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
	$loadClass(WChoicePeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WChoicePeer$1));
	});
	return class$;
}

$Class* WChoicePeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun