#include <sun/awt/windows/WComponentPeer$3.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WComponentPeer$3::init$($WComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

void WComponentPeer$3::run() {
	this->this$0->dispose();
}

WComponentPeer$3::WComponentPeer$3() {
}

$Class* WComponentPeer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $method(WComponentPeer$3, init$, void, $WComponentPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WComponentPeer$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WComponentPeer",
		"disposeLater",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WComponentPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WComponentPeer$3",
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
		"sun.awt.windows.WComponentPeer"
	};
	$loadClass(WComponentPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WComponentPeer$3);
	});
	return class$;
}

$Class* WComponentPeer$3::class$ = nullptr;

		} // windows
	} // awt
} // sun