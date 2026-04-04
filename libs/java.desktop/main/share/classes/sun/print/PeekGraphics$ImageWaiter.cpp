#include <sun/print/PeekGraphics$ImageWaiter.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/InterruptedException.h>
#include <sun/print/PeekGraphics.h>
#include <jcpp.h>

#undef ABORT
#undef ERROR
#undef HEIGHT

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $PeekGraphics = ::sun::print::PeekGraphics;

namespace sun {
	namespace print {

void PeekGraphics$ImageWaiter::init$($PeekGraphics* this$0, $Image* img) {
	$set(this, this$0, this$0);
	this->badImage = false;
	waitForDimensions(img);
}

int32_t PeekGraphics$ImageWaiter::getWidth() {
	return this->mWidth;
}

int32_t PeekGraphics$ImageWaiter::getHeight() {
	return this->mHeight;
}

void PeekGraphics$ImageWaiter::waitForDimensions($Image* img) {
	$synchronized(this) {
		this->mHeight = $nc(img)->getHeight(this);
		this->mWidth = img->getWidth(this);
		while (!this->badImage && (this->mWidth < 0 || this->mHeight < 0)) {
			try {
				$Thread::sleep(50);
			} catch ($InterruptedException& e) {
			}
			this->mHeight = img->getHeight(this);
			this->mWidth = img->getWidth(this);
		}
		if (this->badImage) {
			this->mHeight = 0;
			this->mWidth = 0;
		}
	}
}

bool PeekGraphics$ImageWaiter::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		bool dontCallMeAgain = (flags & (($ImageObserver::HEIGHT | $ImageObserver::ABORT) | $ImageObserver::ERROR)) != 0;
		this->badImage = (flags & ($ImageObserver::ABORT | $ImageObserver::ERROR)) != 0;
		return dontCallMeAgain;
	}
}

PeekGraphics$ImageWaiter::PeekGraphics$ImageWaiter() {
}

$Class* PeekGraphics$ImageWaiter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PeekGraphics;", nullptr, $FINAL | $SYNTHETIC, $field(PeekGraphics$ImageWaiter, this$0)},
		{"mWidth", "I", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, mWidth)},
		{"mHeight", "I", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, mHeight)},
		{"badImage", "Z", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, badImage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PeekGraphics;Ljava/awt/Image;)V", nullptr, 0, $method(PeekGraphics$ImageWaiter, init$, void, $PeekGraphics*, $Image*)},
		{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(PeekGraphics$ImageWaiter, getHeight, int32_t)},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(PeekGraphics$ImageWaiter, getWidth, int32_t)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PeekGraphics$ImageWaiter, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"waitForDimensions", "(Ljava/awt/Image;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(PeekGraphics$ImageWaiter, waitForDimensions, void, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PeekGraphics$ImageWaiter", "sun.print.PeekGraphics", "ImageWaiter", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.PeekGraphics$ImageWaiter",
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
		"sun.print.PeekGraphics"
	};
	$loadClass(PeekGraphics$ImageWaiter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PeekGraphics$ImageWaiter);
	});
	return class$;
}

$Class* PeekGraphics$ImageWaiter::class$ = nullptr;

	} // print
} // sun