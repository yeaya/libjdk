#include <sun/lwawt/LWCursorManager$1.h>
#include <sun/lwawt/LWCursorManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;

namespace sun {
	namespace lwawt {

void LWCursorManager$1::init$($LWCursorManager* this$0) {
	$set(this, this$0, this$0);
}

void LWCursorManager$1::run() {
	this->this$0->updateCursor();
}

LWCursorManager$1::LWCursorManager$1() {
}

$Class* LWCursorManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWCursorManager;", nullptr, $FINAL | $SYNTHETIC, $field(LWCursorManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWCursorManager;)V", nullptr, 0, $method(LWCursorManager$1, init$, void, $LWCursorManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWCursorManager$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWCursorManager",
		"updateCursorLater",
		"(Lsun/lwawt/LWWindowPeer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWCursorManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWCursorManager$1",
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
		"sun.lwawt.LWCursorManager"
	};
	$loadClass(LWCursorManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCursorManager$1);
	});
	return class$;
}

$Class* LWCursorManager$1::class$ = nullptr;

	} // lwawt
} // sun