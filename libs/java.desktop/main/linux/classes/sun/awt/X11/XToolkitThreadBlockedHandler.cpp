#include <sun/awt/X11/XToolkitThreadBlockedHandler.h>
#include <java/awt/Toolkit.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <jcpp.h>

#undef SECONDARY_LOOP

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;

namespace sun {
	namespace awt {
		namespace X11 {

$ToolkitThreadBlockedHandler* XToolkitThreadBlockedHandler::priveleged_lock = nullptr;
$XToolkit* XToolkitThreadBlockedHandler::tk = nullptr;

void XToolkitThreadBlockedHandler::init$() {
}

$ToolkitThreadBlockedHandler* XToolkitThreadBlockedHandler::getToolkitThreadBlockedHandler() {
	$init(XToolkitThreadBlockedHandler);
	return XToolkitThreadBlockedHandler::priveleged_lock;
}

void XToolkitThreadBlockedHandler::lock() {
	$XToolkit::awtLock();
}

void XToolkitThreadBlockedHandler::unlock() {
	$XToolkit::awtUnlock();
}

void XToolkitThreadBlockedHandler::enter() {
	$nc(XToolkitThreadBlockedHandler::tk)->run($XToolkit::SECONDARY_LOOP);
}

void XToolkitThreadBlockedHandler::exit() {
	$XlibWrapper::ExitSecondaryLoop();
}

void XToolkitThreadBlockedHandler::clinit$($Class* clazz) {
	{
		$assignStatic(XToolkitThreadBlockedHandler::priveleged_lock, $new(XToolkitThreadBlockedHandler));
	}
	$assignStatic(XToolkitThreadBlockedHandler::tk, $cast($XToolkit, $Toolkit::getDefaultToolkit()));
}

XToolkitThreadBlockedHandler::XToolkitThreadBlockedHandler() {
}

$Class* XToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"priveleged_lock", "Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkitThreadBlockedHandler, priveleged_lock)},
		{"tk", "Lsun/awt/X11/XToolkit;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkitThreadBlockedHandler, tk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XToolkitThreadBlockedHandler, init$, void)},
		{"enter", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkitThreadBlockedHandler, enter, void)},
		{"exit", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkitThreadBlockedHandler, exit, void)},
		{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $STATIC, $staticMethod(XToolkitThreadBlockedHandler, getToolkitThreadBlockedHandler, $ToolkitThreadBlockedHandler*)},
		{"lock", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkitThreadBlockedHandler, lock, void)},
		{"unlock", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkitThreadBlockedHandler, unlock, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XToolkitThreadBlockedHandler",
		"java.lang.Object",
		"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XToolkitThreadBlockedHandler, name, initialize, &classInfo$$, XToolkitThreadBlockedHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkitThreadBlockedHandler);
	});
	return class$;
}

$Class* XToolkitThreadBlockedHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun