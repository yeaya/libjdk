#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>
#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver$1.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
#include <jcpp.h>

#undef ALLBITS
#undef FRAMEBITS
#undef HEIGHT
#undef WIDTH

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CTrayIcon = ::sun::lwawt::macosx::CTrayIcon;
using $CTrayIcon$IconObserver$1 = ::sun::lwawt::macosx::CTrayIcon$IconObserver$1;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CTrayIcon$IconObserver::init$($CTrayIcon* this$0) {
	$set(this, this$0, this$0);
}

bool CTrayIcon$IconObserver::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->this$0->target == nullptr || image != this->this$0->target->getImage()) {
		return false;
	}
	if ((flags & ((($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS) | $ImageObserver::WIDTH) | $ImageObserver::HEIGHT)) != 0) {
		$SunToolkit::executeOnEventHandlerThread(this->this$0->target, $$new($CTrayIcon$IconObserver$1, this, image));
	}
	return (flags & $ImageObserver::ALLBITS) == 0;
}

CTrayIcon$IconObserver::CTrayIcon$IconObserver() {
}

$Class* CTrayIcon$IconObserver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CTrayIcon;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$IconObserver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;)V", nullptr, 0, $method(CTrayIcon$IconObserver, init$, void, $CTrayIcon*)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(CTrayIcon$IconObserver, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CTrayIcon$IconObserver", "sun.lwawt.macosx.CTrayIcon", "IconObserver", 0},
		{"sun.lwawt.macosx.CTrayIcon$IconObserver$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CTrayIcon$IconObserver",
		"java.lang.Object",
		"java.awt.image.ImageObserver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CTrayIcon"
	};
	$loadClass(CTrayIcon$IconObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CTrayIcon$IconObserver);
	});
	return class$;
}

$Class* CTrayIcon$IconObserver::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun