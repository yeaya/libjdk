#include <sun/awt/X11/XTrayIconPeer$TrayIconCanvas.h>
#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$TrayIconCanvas::init$($TrayIcon* target, int32_t width, int32_t height) {
	$XTrayIconPeer$IconCanvas::init$(width, height);
	$set(this, target, target);
}

void XTrayIconPeer$TrayIconCanvas::repaintImage(bool doClear) {
	bool old_autosize = this->autosize;
	this->autosize = $nc(this->target)->isImageAutoSize();
	this->curW = this->autosize ? this->width : $nc(this->image)->getWidth(this->observer);
	this->curH = this->autosize ? this->height : $nc(this->image)->getHeight(this->observer);
	$XTrayIconPeer$IconCanvas::repaintImage(doClear || (old_autosize != this->autosize));
}

void XTrayIconPeer$TrayIconCanvas::dispose() {
	$XTrayIconPeer$IconCanvas::dispose();
	$set(this, target, nullptr);
}

XTrayIconPeer$TrayIconCanvas::XTrayIconPeer$TrayIconCanvas() {
}

$Class* XTrayIconPeer$TrayIconCanvas::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljava/awt/TrayIcon;", nullptr, 0, $field(XTrayIconPeer$TrayIconCanvas, target)},
		{"autosize", "Z", nullptr, 0, $field(XTrayIconPeer$TrayIconCanvas, autosize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/TrayIcon;II)V", nullptr, 0, $method(XTrayIconPeer$TrayIconCanvas, init$, void, $TrayIcon*, int32_t, int32_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$TrayIconCanvas, dispose, void)},
		{"repaintImage", "(Z)V", nullptr, $PROTECTED, $virtualMethod(XTrayIconPeer$TrayIconCanvas, repaintImage, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$TrayIconCanvas", "sun.awt.X11.XTrayIconPeer", "TrayIconCanvas", $STATIC},
		{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$TrayIconCanvas",
		"sun.awt.X11.XTrayIconPeer$IconCanvas",
		nullptr,
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
	$loadClass(XTrayIconPeer$TrayIconCanvas, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XTrayIconPeer$TrayIconCanvas));
	});
	return class$;
}

$Class* XTrayIconPeer$TrayIconCanvas::class$ = nullptr;

		} // X11
	} // awt
} // sun