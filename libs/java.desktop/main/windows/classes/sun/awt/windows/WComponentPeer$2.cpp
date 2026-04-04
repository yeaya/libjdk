#include <sun/awt/windows/WComponentPeer$2.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;

namespace sun {
	namespace awt {
		namespace windows {

void WComponentPeer$2::init$($WComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

void WComponentPeer$2::run() {
	if (!this->this$0->isDisposed()) {
		try {
			this->this$0->replaceSurfaceData();
		} catch ($InvalidPipeException& e) {
		}
	}
}

WComponentPeer$2::WComponentPeer$2() {
}

$Class* WComponentPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $method(WComponentPeer$2, init$, void, $WComponentPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WComponentPeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WComponentPeer",
		"replaceSurfaceDataLater",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WComponentPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WComponentPeer$2",
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
	$loadClass(WComponentPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WComponentPeer$2);
	});
	return class$;
}

$Class* WComponentPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun