#include <sun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame.h>
#include <java/awt/Window.h>
#include <sun/awt/X11/XEmbeddedFrame.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbeddedFrame = ::sun::awt::X11::XEmbeddedFrame;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$XTrayIconEmbeddedFrame::init$() {
	$XEmbeddedFrame::init$($XToolkit::getDefaultRootWindow(), true, true);
}

bool XTrayIconPeer$XTrayIconEmbeddedFrame::isUndecorated() {
	return true;
}

bool XTrayIconPeer$XTrayIconEmbeddedFrame::isResizable() {
	return false;
}

void XTrayIconPeer$XTrayIconEmbeddedFrame::dispose() {
}

void XTrayIconPeer$XTrayIconEmbeddedFrame::realDispose() {
	$XEmbeddedFrame::dispose();
}

XTrayIconPeer$XTrayIconEmbeddedFrame::XTrayIconPeer$XTrayIconEmbeddedFrame() {
}

$Class* XTrayIconPeer$XTrayIconEmbeddedFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XTrayIconPeer$XTrayIconEmbeddedFrame, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$XTrayIconEmbeddedFrame, dispose, void)},
		{"isResizable", "()Z", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$XTrayIconEmbeddedFrame, isResizable, bool)},
		{"isUndecorated", "()Z", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$XTrayIconEmbeddedFrame, isUndecorated, bool)},
		{"realDispose", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$XTrayIconEmbeddedFrame, realDispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame", "sun.awt.X11.XTrayIconPeer", "XTrayIconEmbeddedFrame", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame",
		"sun.awt.X11.XEmbeddedFrame",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$XTrayIconEmbeddedFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XTrayIconPeer$XTrayIconEmbeddedFrame));
	});
	return class$;
}

$Class* XTrayIconPeer$XTrayIconEmbeddedFrame::class$ = nullptr;

		} // X11
	} // awt
} // sun