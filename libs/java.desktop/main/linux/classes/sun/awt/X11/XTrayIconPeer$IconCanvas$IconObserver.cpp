#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver$1.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
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
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;
using $XTrayIconPeer$IconCanvas$IconObserver$1 = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver$1;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$IconCanvas$IconObserver::init$($XTrayIconPeer$IconCanvas* this$0) {
	$set(this, this$0, this$0);
}

bool XTrayIconPeer$IconCanvas$IconObserver::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (image != this->this$0->image || !this->this$0->isVisible()) {
		return false;
	}
	if ((flags & ((($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS) | $ImageObserver::WIDTH) | $ImageObserver::HEIGHT)) != 0) {
		$SunToolkit::executeOnEventHandlerThread(this->this$0, $$new($XTrayIconPeer$IconCanvas$IconObserver$1, this));
	}
	return (flags & $ImageObserver::ALLBITS) == 0;
}

XTrayIconPeer$IconCanvas$IconObserver::XTrayIconPeer$IconCanvas$IconObserver() {
}

$Class* XTrayIconPeer$IconCanvas$IconObserver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XTrayIconPeer$IconCanvas;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$IconCanvas$IconObserver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer$IconCanvas;)V", nullptr, 0, $method(XTrayIconPeer$IconCanvas$IconObserver, init$, void, $XTrayIconPeer$IconCanvas*)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$IconCanvas$IconObserver, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
		{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver", "sun.awt.X11.XTrayIconPeer$IconCanvas", "IconObserver", 0},
		{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver",
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
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$IconCanvas$IconObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$IconCanvas$IconObserver);
	});
	return class$;
}

$Class* XTrayIconPeer$IconCanvas$IconObserver::class$ = nullptr;

		} // X11
	} // awt
} // sun