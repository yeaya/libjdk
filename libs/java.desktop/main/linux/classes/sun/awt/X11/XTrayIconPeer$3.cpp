#include <sun/awt/X11/XTrayIconPeer$3.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$3::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$3::dispatchEvent($XEvent* ev) {
	$useLocalObjectStack();
	bool var$0 = this->this$0->isDisposed();
	if (var$0 || $nc(ev)->get_type() != $XConstants::ConfigureNotify) {
		return;
	}
	$var($XConfigureEvent, ce, $nc(ev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}: {1}x{2}+{3}+{4} (old: {5}+{6})"_s, $$new($ObjectArray, {
			this->this$0,
			$($Integer::valueOf($nc(ce)->get_width())),
			$($Integer::valueOf($nc(ce)->get_height())),
			$($Integer::valueOf($nc(ce)->get_x())),
			$($Integer::valueOf($nc(ce)->get_y())),
			$($Integer::valueOf(this->this$0->old_x)),
			$($Integer::valueOf(this->this$0->old_y))
		}));
	}
	bool var$1 = $nc(ce)->get_height() != 24;
	if (var$1 && ce->get_width() != 24) {
		if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
			$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Skipping as intermediate resizing."_s, $$new($ObjectArray, {this->this$0}));
		}
		return;
	} else if (ce->get_height() > 24) {
		if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
			$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Centering by \"Y\"."_s, $$new($ObjectArray, {this->this$0}));
		}
		int64_t var$2 = $XToolkit::getDisplay();
		int64_t var$3 = this->this$0->eframeParentID;
		int32_t var$4 = ce->get_x();
		int32_t var$5 = ce->get_y();
		$XlibWrapper::XMoveResizeWindow(var$2, var$3, var$4, var$5 + ce->get_height() / 2 - 24 / 2, 24, 24);
		this->this$0->ex_height = ce->get_height();
		this->this$0->ex_width = 0;
	} else if (ce->get_width() > 24) {
		if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
			$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Centering by \"X\"."_s, $$new($ObjectArray, {this->this$0}));
		}
		int64_t var$6 = $XToolkit::getDisplay();
		int64_t var$7 = this->this$0->eframeParentID;
		int32_t var$9 = ce->get_x();
		int32_t var$8 = var$9 + ce->get_width() / 2 - 24 / 2;
		$XlibWrapper::XMoveResizeWindow(var$6, var$7, var$8, ce->get_y(), 24, 24);
		this->this$0->ex_width = ce->get_width();
		this->this$0->ex_height = 0;
	} else {
		bool var$10 = this->this$0->isParentWindowLocated && ce->get_x() != this->this$0->old_x;
		if (var$10 && ce->get_y() != this->this$0->old_y) {
			if (this->this$0->ex_height != 0) {
				if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
					$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Move detected. Centering by \"Y\"."_s, $$new($ObjectArray, {this->this$0}));
				}
				int64_t var$11 = $XToolkit::getDisplay();
				int64_t var$12 = this->this$0->eframeParentID;
				int32_t var$13 = ce->get_x();
				$XlibWrapper::XMoveWindow(var$11, var$12, var$13, ce->get_y() + this->this$0->ex_height / 2 - 24 / 2);
			} else if (this->this$0->ex_width != 0) {
				if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
					$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Move detected. Centering by \"X\"."_s, $$new($ObjectArray, {this->this$0}));
				}
				int64_t var$14 = $XToolkit::getDisplay();
				int64_t var$15 = this->this$0->eframeParentID;
				int32_t var$16 = ce->get_x() + this->this$0->ex_width / 2 - 24 / 2;
				$XlibWrapper::XMoveWindow(var$14, var$15, var$16, ce->get_y());
			} else if ($XTrayIconPeer::ctrLog->isLoggable($PlatformLogger$Level::FINE)) {
				$XTrayIconPeer::ctrLog->fine("ConfigureNotify on parent of {0}. Move detected. Skipping."_s, $$new($ObjectArray, {this->this$0}));
			}
		}
	}
	this->this$0->old_x = ce->get_x();
	this->this$0->old_y = ce->get_y();
	this->this$0->isParentWindowLocated = true;
}

XTrayIconPeer$3::XTrayIconPeer$3() {
}

$Class* XTrayIconPeer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(XTrayIconPeer$3, init$, void, $XTrayIconPeer*)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$3, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer",
		"<init>",
		"(Ljava/awt/TrayIcon;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$3",
		"java.lang.Object",
		"sun.awt.X11.XEventDispatcher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$3);
	});
	return class$;
}

$Class* XTrayIconPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun