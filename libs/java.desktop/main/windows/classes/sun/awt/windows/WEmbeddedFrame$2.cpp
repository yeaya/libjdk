#include <sun/awt/windows/WEmbeddedFrame$2.h>
#include <java/awt/peer/FramePeer.h>
#include <sun/awt/windows/WEmbeddedFrame.h>
#include <jcpp.h>

using $FramePeer = ::java::awt::peer::FramePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WEmbeddedFrame = ::sun::awt::windows::WEmbeddedFrame;

namespace sun {
	namespace awt {
		namespace windows {

void WEmbeddedFrame$2::init$($WEmbeddedFrame* this$0, $FramePeer* val$peer) {
	$set(this, this$0, this$0);
	$set(this, val$peer, val$peer);
}

void WEmbeddedFrame$2::run() {
	$nc(this->val$peer)->emulateActivation(true);
}

WEmbeddedFrame$2::WEmbeddedFrame$2() {
}

$Class* WEmbeddedFrame$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WEmbeddedFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WEmbeddedFrame$2, this$0)},
		{"val$peer", "Ljava/awt/peer/FramePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WEmbeddedFrame$2, val$peer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WEmbeddedFrame;Ljava/awt/peer/FramePeer;)V", "()V", 0, $method(WEmbeddedFrame$2, init$, void, $WEmbeddedFrame*, $FramePeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WEmbeddedFrame",
		"synthesizeWindowActivation",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WEmbeddedFrame$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WEmbeddedFrame$2",
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
		"sun.awt.windows.WEmbeddedFrame"
	};
	$loadClass(WEmbeddedFrame$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WEmbeddedFrame$2);
	});
	return class$;
}

$Class* WEmbeddedFrame$2::class$ = nullptr;

		} // windows
	} // awt
} // sun