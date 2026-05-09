#include <sun/awt/windows/WTrayIconPeer.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WPopupMenuPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WTrayIconPeer$IconObserver.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TRAY_ICON_HEIGHT
#undef TRAY_ICON_MASK_SIZE
#undef TRAY_ICON_WIDTH
#undef TYPE_INT_ARGB

using $AWTEvent = ::java::awt::AWTEvent;
using $Frame = ::java::awt::Frame;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $TrayIcon = ::java::awt::TrayIcon;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Raster = ::java::awt::image::Raster;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPopupMenuPeer = ::sun::awt::windows::WPopupMenuPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WTrayIconPeer$IconObserver = ::sun::awt::windows::WTrayIconPeer$IconObserver;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

class WTrayIconPeer$$Lambda$lambda$showPopupMenu$0 : public $Runnable {
	$class(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WTrayIconPeer* inst, int32_t x, int32_t y) {
		$set(this, inst$, inst);
		this->x = x;
		this->y = y;
	}
	virtual void run() override {
		$nc(inst$)->lambda$showPopupMenu$0(x, y);
	}
	WTrayIconPeer* inst$ = nullptr;
	int32_t x = 0;
	int32_t y = 0;
};
$Class* WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, inst$)},
		{"x", "I", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, x)},
		{"y", "I", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, y)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WTrayIconPeer;II)V", nullptr, $PUBLIC, $method(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, init$, void, WTrayIconPeer*, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WTrayIconPeer$$Lambda$lambda$showPopupMenu$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0);
	});
	return class$;
}
$Class* WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::class$ = nullptr;

void WTrayIconPeer::dispose() {
	this->$WObjectPeer::dispose();
}

int32_t WTrayIconPeer::hashCode() {
	return this->$WObjectPeer::hashCode();
}

bool WTrayIconPeer::equals(Object$* arg0) {
	return this->$WObjectPeer::equals(arg0);
}

$Object* WTrayIconPeer::clone() {
	return this->$WObjectPeer::clone();
}

$String* WTrayIconPeer::toString() {
	return this->$WObjectPeer::toString();
}

void WTrayIconPeer::finalize() {
	this->$WObjectPeer::finalize();
}

void WTrayIconPeer::disposeImpl() {
	if (this->popupParent != nullptr) {
		this->popupParent->dispose();
	}
	$nc(this->popupParent)->dispose();
	_dispose();
	$WToolkit::targetDisposedPeer(this->target, this);
}

void WTrayIconPeer::init$($TrayIcon* target) {
	$WObjectPeer::init$();
	$set(this, observer, $new($WTrayIconPeer$IconObserver, this));
	this->firstUpdate = true;
	$set(this, popupParent, $new($Frame, "PopupMessageWindow"_s));
	$set(this, target, target);
	this->popupParent->addNotify();
	create();
	updateImage();
}

void WTrayIconPeer::updateImage() {
	$var($Image, image, $nc($cast($TrayIcon, this->target))->getImage());
	if (image != nullptr) {
		updateNativeImage(image);
	}
}

void WTrayIconPeer::setToolTip($String* tooltip) {
	$prepareNative(setToolTip, void, $String* tooltip);
	$invokeNative(tooltip);
	$finishNative();
}

void WTrayIconPeer::showPopupMenu(int32_t x, int32_t y) {
	$synchronized(this) {
		if (isDisposed()) {
			return;
		}
		$SunToolkit::executeOnEventHandlerThread(this->target, $$new(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, this, x, y));
	}
}

void WTrayIconPeer::displayMessage($String* caption$renamed, $String* text$renamed, $String* messageType) {
	$useLocalObjectStack();
	$var($String, caption, caption$renamed);
	$var($String, text, text$renamed);
	if (caption == nullptr) {
		$assign(caption, ""_s);
	}
	if (text == nullptr) {
		$assign(text, ""_s);
	}
	_displayMessage(caption, text, messageType);
}

void WTrayIconPeer::updateNativeImage($Image* image) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (isDisposed()) {
			return;
		}
		bool autosize = $nc($cast($TrayIcon, this->target))->isImageAutoSize();
		$var($AffineTransform, tx, $$nc($$nc($$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice())->getDefaultConfiguration())->getDefaultTransform());
		int32_t w = $Region::clipScale(WTrayIconPeer::TRAY_ICON_WIDTH, $nc(tx)->getScaleX());
		int32_t h = $Region::clipScale(WTrayIconPeer::TRAY_ICON_HEIGHT, tx->getScaleY());
		int32_t var$0 = $nc(image)->getWidth(this->observer);
		int32_t imgWidth = $Region::clipScale(var$0, tx->getScaleX());
		int32_t var$1 = image->getHeight(this->observer);
		int32_t imgHeight = $Region::clipScale(var$1, tx->getScaleY());
		$var($BufferedImage, bufImage, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, gr, bufImage->createGraphics());
		if (gr != nullptr) {
			$var($Throwable, var$2, nullptr);
			try {
				gr->setPaintMode();
				gr->drawImage(image, 0, 0, (autosize ? w : imgWidth), (autosize ? h : imgHeight), this->observer);
				createNativeImage(bufImage);
				updateNativeIcon(!this->firstUpdate);
				if (this->firstUpdate) {
					this->firstUpdate = false;
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				gr->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void WTrayIconPeer::createNativeImage($BufferedImage* bimage) {
	$useLocalObjectStack();
	$var($Raster, raster, $nc(bimage)->getRaster());
	$var($bytes, andMask, $new($bytes, WTrayIconPeer::TRAY_ICON_MASK_SIZE));
	$var($ints, pixels, $$sure($DataBufferInt, $nc(raster)->getDataBuffer())->getData());
	int32_t npixels = $nc(pixels)->length;
	int32_t ficW = raster->getWidth();
	for (int32_t i = 0; i < npixels; ++i) {
		int32_t ibyte = i / 8;
		int32_t omask = $sl(1, 7 - (i % 8));
		if ((pixels->get(i) & (int32_t)0xff000000) == 0) {
			if (ibyte < andMask->length) {
				(*andMask)[ibyte] |= omask;
			}
		}
	}
	if ($instanceOf($IntegerComponentRaster, raster)) {
		ficW = $cast($IntegerComponentRaster, raster)->getScanlineStride();
	}
	$var($ints, var$0, $$sure($DataBufferInt, $$nc(bimage->getRaster())->getDataBuffer())->getData());
	int32_t var$1 = raster->getWidth();
	setNativeIcon(var$0, andMask, ficW, var$1, raster->getHeight());
}

void WTrayIconPeer::postEvent($AWTEvent* event) {
	$WToolkit::postEvent($($WToolkit::targetToAppContext(this->target)), event);
}

void WTrayIconPeer::create() {
	$prepareNative(create, void);
	$invokeNative();
	$finishNative();
}

void WTrayIconPeer::_dispose() {
	$prepareNative(_dispose, void);
	$invokeNative();
	$finishNative();
}

void WTrayIconPeer::updateNativeIcon(bool doUpdate) {
	$prepareNative(updateNativeIcon, void, bool doUpdate);
	$invokeNative(doUpdate);
	$finishNative();
}

void WTrayIconPeer::setNativeIcon($ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height) {
	$prepareNative(setNativeIcon, void, $ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height);
	$invokeNative(rData, andMask, nScanStride, width, height);
	$finishNative();
}

void WTrayIconPeer::_displayMessage($String* caption, $String* text, $String* messageType) {
	$prepareNative(_displayMessage, void, $String* caption, $String* text, $String* messageType);
	$invokeNative(caption, text, messageType);
	$finishNative();
}

void WTrayIconPeer::lambda$showPopupMenu$0(int32_t x, int32_t y) {
	$useLocalObjectStack();
	$var($PopupMenu, newPopup, $nc($cast($TrayIcon, this->target))->getPopupMenu());
	if (this->popup != newPopup) {
		if (this->popup != nullptr) {
			$nc(this->popupParent)->remove(this->popup);
		}
		if (newPopup != nullptr) {
			$nc(this->popupParent)->add(newPopup);
		}
		$set(this, popup, newPopup);
	}
	if (this->popup != nullptr) {
		$var($WPopupMenuPeer, peer, $cast($WPopupMenuPeer, $$nc($AWTAccessor::getMenuComponentAccessor())->getPeer(this->popup)));
		$nc(peer)->show(this->popupParent, $$new($Point, x, y));
	}
}

WTrayIconPeer::WTrayIconPeer() {
}

$Class* WTrayIconPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WTrayIconPeer$$Lambda$lambda$showPopupMenu$0")) {
			return WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TRAY_ICON_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_WIDTH)},
		{"TRAY_ICON_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_HEIGHT)},
		{"TRAY_ICON_MASK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_MASK_SIZE)},
		{"observer", "Lsun/awt/windows/WTrayIconPeer$IconObserver;", nullptr, 0, $field(WTrayIconPeer, observer)},
		{"firstUpdate", "Z", nullptr, 0, $field(WTrayIconPeer, firstUpdate)},
		{"popupParent", "Ljava/awt/Frame;", nullptr, 0, $field(WTrayIconPeer, popupParent)},
		{"popup", "Ljava/awt/PopupMenu;", nullptr, 0, $field(WTrayIconPeer, popup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/TrayIcon;)V", nullptr, 0, $method(WTrayIconPeer, init$, void, $TrayIcon*)},
		{"_displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $NATIVE, $method(WTrayIconPeer, _displayMessage, void, $String*, $String*, $String*)},
		{"_dispose", "()V", nullptr, $SYNCHRONIZED | $NATIVE, $method(WTrayIconPeer, _dispose, void)},
		{"create", "()V", nullptr, $NATIVE, $method(WTrayIconPeer, create, void)},
		{"createNativeImage", "(Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(WTrayIconPeer, createNativeImage, void, $BufferedImage*)},
		{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WTrayIconPeer, displayMessage, void, $String*, $String*, $String*)},
		{"disposeImpl", "()V", nullptr, $PROTECTED, $virtualMethod(WTrayIconPeer, disposeImpl, void)},
		{"lambda$showPopupMenu$0", "(II)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WTrayIconPeer, lambda$showPopupMenu$0, void, int32_t, int32_t)},
		{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $method(WTrayIconPeer, postEvent, void, $AWTEvent*)},
		{"setNativeIcon", "([I[BIII)V", nullptr, $NATIVE, $method(WTrayIconPeer, setNativeIcon, void, $ints*, $bytes*, int32_t, int32_t, int32_t)},
		{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WTrayIconPeer, setToolTip, void, $String*)},
		{"showPopupMenu", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WTrayIconPeer, showPopupMenu, void, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateImage", "()V", nullptr, $PUBLIC, $virtualMethod(WTrayIconPeer, updateImage, void)},
		{"updateNativeIcon", "(Z)V", nullptr, $NATIVE, $method(WTrayIconPeer, updateNativeIcon, void, bool)},
		{"updateNativeImage", "(Ljava/awt/Image;)V", nullptr, $SYNCHRONIZED, $method(WTrayIconPeer, updateNativeImage, void, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WTrayIconPeer$IconObserver", "sun.awt.windows.WTrayIconPeer", "IconObserver", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WTrayIconPeer",
		"sun.awt.windows.WObjectPeer",
		"java.awt.peer.TrayIconPeer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WTrayIconPeer$IconObserver"
	};
	$loadClass(WTrayIconPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WTrayIconPeer));
	});
	return class$;
}

$Class* WTrayIconPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun