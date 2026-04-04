#include <sun/lwawt/macosx/CTrayIcon$IconObserver$1.h>
#include <java/awt/Image.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CTrayIcon$IconObserver = ::sun::lwawt::macosx::CTrayIcon$IconObserver;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CTrayIcon$IconObserver$1::init$($CTrayIcon$IconObserver* this$1, $Image* val$image) {
	$set(this, this$1, this$1);
	$set(this, val$image, val$image);
}

void CTrayIcon$IconObserver$1::run() {
	$nc(this->this$1->this$0)->updateNativeImage(this->val$image);
}

CTrayIcon$IconObserver$1::CTrayIcon$IconObserver$1() {
}

$Class* CTrayIcon$IconObserver$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/lwawt/macosx/CTrayIcon$IconObserver;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$IconObserver$1, this$1)},
		{"val$image", "Ljava/awt/Image;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$IconObserver$1, val$image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CTrayIcon$IconObserver;Ljava/awt/Image;)V", "()V", 0, $method(CTrayIcon$IconObserver$1, init$, void, $CTrayIcon$IconObserver*, $Image*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CTrayIcon$IconObserver$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CTrayIcon$IconObserver",
		"imageUpdate",
		"(Ljava/awt/Image;IIIII)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CTrayIcon$IconObserver", "sun.lwawt.macosx.CTrayIcon", "IconObserver", 0},
		{"sun.lwawt.macosx.CTrayIcon$IconObserver$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CTrayIcon$IconObserver$1",
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
		"sun.lwawt.macosx.CTrayIcon"
	};
	$loadClass(CTrayIcon$IconObserver$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CTrayIcon$IconObserver$1);
	});
	return class$;
}

$Class* CTrayIcon$IconObserver$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun