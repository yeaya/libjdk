#include <sun/awt/windows/TranslucentWindowPainter$VIWindowPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Window.h>
#include <java/awt/image/VolatileImage.h>
#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter = ::sun::awt::windows::TranslucentWindowPainter;
using $TranslucentWindowPainter$BIWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$BIWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $AccelGraphicsConfig = ::sun::java2d::pipe::hw::AccelGraphicsConfig;

namespace sun {
	namespace awt {
		namespace windows {

void TranslucentWindowPainter$VIWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$BIWindowPainter::init$(peer);
}

$Image* TranslucentWindowPainter$VIWindowPainter::getBackBuffer(bool clear) {
	$useLocalObjectStack();
	int32_t w = $nc(this->window)->getWidth();
	int32_t h = $nc(this->window)->getHeight();
	$var($GraphicsConfiguration, gc, $nc(this->peer)->getGraphicsConfiguration());
	bool var$1 = this->viBB == nullptr || this->viBB->getWidth() != w;
	bool var$0 = var$1 || this->viBB->getHeight() != h;
	if (var$0 || this->viBB->validate(gc) == 2) {
		flush();
		if ($instanceOf($AccelGraphicsConfig, gc)) {
			$var($AccelGraphicsConfig, agc, $cast($AccelGraphicsConfig, gc));
			$set(this, viBB, agc->createCompatibleVolatileImage(w, h, 3, 2));
		}
		if (this->viBB == nullptr) {
			$set(this, viBB, $nc(gc)->createCompatibleVolatileImage(w, h, 3));
		}
		$nc(this->viBB)->validate(gc);
	}
	return clear ? $TranslucentWindowPainter::clearImage(this->viBB) : $cast($Image, this->viBB);
}

void TranslucentWindowPainter$VIWindowPainter::flush() {
	if (this->viBB != nullptr) {
		this->viBB->flush();
		$set(this, viBB, nullptr);
	}
}

$Graphics* TranslucentWindowPainter$VIWindowPainter::getGraphics(bool clear) {
	return $$nc(getBackBuffer(clear))->getGraphics();
}

TranslucentWindowPainter$VIWindowPainter::TranslucentWindowPainter$VIWindowPainter() {
}

$Class* TranslucentWindowPainter$VIWindowPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"viBB", "Ljava/awt/image/VolatileImage;", nullptr, $PRIVATE, $field(TranslucentWindowPainter$VIWindowPainter, viBB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(TranslucentWindowPainter$VIWindowPainter, init$, void, $WWindowPeer*)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(TranslucentWindowPainter$VIWindowPainter, flush, void)},
		{"getBackBuffer", "(Z)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$VIWindowPainter, getBackBuffer, $Image*, bool)},
		{"getGraphics", "(Z)Ljava/awt/Graphics;", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$VIWindowPainter, getGraphics, $Graphics*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIWindowPainter", $PRIVATE | $STATIC},
		{"sun.awt.windows.TranslucentWindowPainter$BIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "BIWindowPainter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter",
		"sun.awt.windows.TranslucentWindowPainter$BIWindowPainter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.TranslucentWindowPainter"
	};
	$loadClass(TranslucentWindowPainter$VIWindowPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TranslucentWindowPainter$VIWindowPainter);
	});
	return class$;
}

$Class* TranslucentWindowPainter$VIWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun