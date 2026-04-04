#include <sun/awt/windows/WEmbeddedFrame.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WEmbeddedFrame$1.h>
#include <sun/awt/windows/WEmbeddedFrame$2.h>
#include <sun/awt/windows/WEmbeddedFramePeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef MAX_BAND_SIZE
#undef TYPE_3BYTE_BGR

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Color = ::java::awt::Color;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Toolkit = ::java::awt::Toolkit;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WEmbeddedFrame$1 = ::sun::awt::windows::WEmbeddedFrame$1;
using $WEmbeddedFrame$2 = ::sun::awt::windows::WEmbeddedFrame$2;
using $WEmbeddedFramePeer = ::sun::awt::windows::WEmbeddedFramePeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace windows {

int32_t WEmbeddedFrame::pScale = 0;
$String* WEmbeddedFrame::printScale = nullptr;

void WEmbeddedFrame::init$() {
	WEmbeddedFrame::init$((int64_t)0);
}

void WEmbeddedFrame::init$(int32_t handle) {
	WEmbeddedFrame::init$((int64_t)handle);
}

void WEmbeddedFrame::init$(int64_t handle) {
	$EmbeddedFrame::init$();
	this->bandWidth = 0;
	this->bandHeight = 0;
	this->imgWid = 0;
	this->imgHgt = 0;
	this->isEmbeddedInIE = false;
	this->handle = handle;
	if (handle != 0) {
		addNotify();
		show();
	}
}

void WEmbeddedFrame::addNotify() {
	$useLocalObjectStack();
	if (!isDisplayable()) {
		$var($WToolkit, toolkit, $cast($WToolkit, $Toolkit::getDefaultToolkit()));
		setPeer($$cast($WComponentPeer, $nc(toolkit)->createEmbeddedFrame(this)));
	}
	$EmbeddedFrame::addNotify();
}

int64_t WEmbeddedFrame::getEmbedderHandle() {
	return this->handle;
}

void WEmbeddedFrame::print(int64_t hdc) {
	$useLocalObjectStack();
	$var($BufferedImage, bandImage, nullptr);
	int32_t xscale = 1;
	int32_t yscale = 1;
	if (isPrinterDC(hdc)) {
		xscale = (yscale = getPrintScaleFactor());
	}
	int32_t frameHeight = getHeight();
	if (bandImage == nullptr) {
		this->bandWidth = getWidth();
		if (this->bandWidth % 4 != 0) {
			this->bandWidth += (4 - (this->bandWidth % 4));
		}
		if (this->bandWidth <= 0) {
			return;
		}
		this->bandHeight = $Math::min($div(WEmbeddedFrame::MAX_BAND_SIZE, this->bandWidth), frameHeight);
		this->imgWid = this->bandWidth * xscale;
		this->imgHgt = this->bandHeight * yscale;
		$assign(bandImage, $new($BufferedImage, this->imgWid, this->imgHgt, $BufferedImage::TYPE_3BYTE_BGR));
	}
	$var($Graphics, clearGraphics, $nc(bandImage)->getGraphics());
	$init($Color);
	$nc(clearGraphics)->setColor($Color::white);
	$var($Graphics2D, g2d, $cast($Graphics2D, bandImage->getGraphics()));
	$nc(g2d)->translate(0, this->imgHgt);
	g2d->scale((double)xscale, (double)-yscale);
	$var($ByteInterleavedRaster, ras, $cast($ByteInterleavedRaster, bandImage->getRaster()));
	$var($bytes, data, $nc(ras)->getDataStorage());
	for (int32_t bandTop = 0; bandTop < frameHeight; bandTop += this->bandHeight) {
		clearGraphics->fillRect(0, 0, this->bandWidth, this->bandHeight);
		printComponents(g2d);
		int32_t imageOffset = 0;
		int32_t currBandHeight = this->bandHeight;
		int32_t currImgHeight = this->imgHgt;
		if ((bandTop + this->bandHeight) > frameHeight) {
			currBandHeight = frameHeight - bandTop;
			currImgHeight = currBandHeight * yscale;
			imageOffset = this->imgWid * (this->imgHgt - currImgHeight) * 3;
		}
		printBand(hdc, data, imageOffset, 0, 0, this->imgWid, currImgHeight, 0, bandTop, this->bandWidth, currBandHeight);
		g2d->translate(0, -this->bandHeight);
	}
}

int32_t WEmbeddedFrame::getPrintScaleFactor() {
	$init(WEmbeddedFrame);
	$beforeCallerSensitive();
	if (WEmbeddedFrame::pScale != 0) {
		return WEmbeddedFrame::pScale;
	}
	if (WEmbeddedFrame::printScale == nullptr) {
		$assignStatic(WEmbeddedFrame::printScale, $cast($String, $AccessController::doPrivileged($$new($WEmbeddedFrame$1))));
	}
	int32_t default_printDC_scale = 4;
	int32_t scale = default_printDC_scale;
	if (WEmbeddedFrame::printScale != nullptr) {
		try {
			scale = $Integer::parseInt(WEmbeddedFrame::printScale);
			if (scale > 8 || scale < 1) {
				scale = default_printDC_scale;
			}
		} catch ($NumberFormatException& nfe) {
		}
	}
	WEmbeddedFrame::pScale = scale;
	return WEmbeddedFrame::pScale;
}

bool WEmbeddedFrame::isPrinterDC(int64_t hdc) {
	$prepareNative(isPrinterDC, bool, int64_t hdc);
	bool $ret = $invokeNative(hdc);
	$finishNative();
	return $ret;
}

void WEmbeddedFrame::printBand(int64_t hdc, $bytes* data, int32_t offset, int32_t sx, int32_t sy, int32_t swidth, int32_t sheight, int32_t dx, int32_t dy, int32_t dwidth, int32_t dheight) {
	$prepareNative(printBand, void, int64_t hdc, $bytes* data, int32_t offset, int32_t sx, int32_t sy, int32_t swidth, int32_t sheight, int32_t dx, int32_t dy, int32_t dwidth, int32_t dheight);
	$invokeNative(hdc, data, offset, sx, sy, swidth, sheight, dx, dy, dwidth, dheight);
	$finishNative();
}

void WEmbeddedFrame::initIDs() {
	$init(WEmbeddedFrame);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WEmbeddedFrame::activateEmbeddingTopLevel() {
}

void WEmbeddedFrame::synthesizeWindowActivation(bool activate) {
	$useLocalObjectStack();
	$var($FramePeer, peer, $cast($FramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (!activate || $EventQueue::isDispatchThread()) {
		$nc(peer)->emulateActivation(activate);
	} else {
		$var($Runnable, r, $new($WEmbeddedFrame$2, this, peer));
		$var($AppContext, var$0, $WToolkit::targetToAppContext(this));
		$WToolkit::postEvent(var$0, $$new($InvocationEvent, this, r));
	}
}

void WEmbeddedFrame::registerAccelerator($AWTKeyStroke* stroke) {
}

void WEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* stroke) {
}

void WEmbeddedFrame::notifyModalBlocked($Dialog* blocker, bool blocked) {
	$useLocalObjectStack();
	try {
		$var($ComponentPeer, thisPeer, $cast($ComponentPeer, $WToolkit::targetToPeer(this)));
		$var($ComponentPeer, blockerPeer, $cast($ComponentPeer, $WToolkit::targetToPeer(blocker)));
		notifyModalBlockedImpl($cast($WEmbeddedFramePeer, thisPeer), $cast($WWindowPeer, blockerPeer), blocked);
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
}

void WEmbeddedFrame::notifyModalBlockedImpl($WEmbeddedFramePeer* peer, $WWindowPeer* blockerPeer, bool blocked) {
	$prepareNative(notifyModalBlockedImpl, void, $WEmbeddedFramePeer* peer, $WWindowPeer* blockerPeer, bool blocked);
	$invokeNative(peer, blockerPeer, blocked);
	$finishNative();
}

void WEmbeddedFrame::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		WEmbeddedFrame::initIDs();
	}
	WEmbeddedFrame::pScale = 0;
	$assignStatic(WEmbeddedFrame::printScale, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "sun.java2d.print.pluginscalefactor"_s))));
}

WEmbeddedFrame::WEmbeddedFrame() {
}

$Class* WEmbeddedFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handle", "J", nullptr, $PRIVATE, $field(WEmbeddedFrame, handle)},
		{"bandWidth", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, bandWidth)},
		{"bandHeight", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, bandHeight)},
		{"imgWid", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, imgWid)},
		{"imgHgt", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, imgHgt)},
		{"pScale", "I", nullptr, $PRIVATE | $STATIC, $staticField(WEmbeddedFrame, pScale)},
		{"MAX_BAND_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WEmbeddedFrame, MAX_BAND_SIZE)},
		{"isEmbeddedInIE", "Z", nullptr, $PRIVATE, $field(WEmbeddedFrame, isEmbeddedInIE)},
		{"printScale", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WEmbeddedFrame, printScale)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WEmbeddedFrame, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $method(WEmbeddedFrame, init$, void, int32_t), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(WEmbeddedFrame, init$, void, int64_t)},
		{"activateEmbeddingTopLevel", "()V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, activateEmbeddingTopLevel, void)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, addNotify, void)},
		{"getEmbedderHandle", "()J", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, getEmbedderHandle, int64_t)},
		{"getPrintScaleFactor", "()I", nullptr, $PROTECTED | $STATIC, $staticMethod(WEmbeddedFrame, getPrintScaleFactor, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WEmbeddedFrame, initIDs, void)},
		{"isPrinterDC", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(WEmbeddedFrame, isPrinterDC, bool, int64_t)},
		{"notifyModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, notifyModalBlocked, void, $Dialog*, bool)},
		{"notifyModalBlockedImpl", "(Lsun/awt/windows/WEmbeddedFramePeer;Lsun/awt/windows/WWindowPeer;Z)V", nullptr, $NATIVE, $virtualMethod(WEmbeddedFrame, notifyModalBlockedImpl, void, $WEmbeddedFramePeer*, $WWindowPeer*, bool)},
		{"print", "(J)V", nullptr, 0, $virtualMethod(WEmbeddedFrame, print, void, int64_t)},
		{"printBand", "(J[BIIIIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(WEmbeddedFrame, printBand, void, int64_t, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, registerAccelerator, void, $AWTKeyStroke*)},
		{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, synthesizeWindowActivation, void, bool)},
		{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame, unregisterAccelerator, void, $AWTKeyStroke*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WEmbeddedFrame$2", nullptr, nullptr, 0},
		{"sun.awt.windows.WEmbeddedFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.windows.WEmbeddedFrame",
		"sun.awt.EmbeddedFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WEmbeddedFrame$2,sun.awt.windows.WEmbeddedFrame$1"
	};
	$loadClass(WEmbeddedFrame, name, initialize, &classInfo$$, WEmbeddedFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WEmbeddedFrame));
	});
	return class$;
}

$Class* WEmbeddedFrame::class$ = nullptr;

		} // windows
	} // awt
} // sun