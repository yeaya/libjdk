#include <sun/awt/X11/XEmbedServerTester.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOUNDS
#undef BUTTON1_MASK
#undef EMBEDDED
#undef EVENT_LOCK
#undef EVENT_MASK
#undef FINE
#undef FINER
#undef MODAL_CLOSE
#undef NON_STANDARD_XEMBED_GTK_GRAB_KEY
#undef NON_STANDARD_XEMBED_GTK_UNGRAB_KEY
#undef OTHER_FRAME
#undef PARENT_WINDOW
#undef SERVER_BOUNDS
#undef SERVER_FOCUS
#undef SERVER_MODAL
#undef SYSTEM_EVENT_MASK
#undef TRUE
#undef VISIBLE
#undef VK_A
#undef VK_SPACE
#undef XEMBED_ACTIVATE_ACCELERATOR
#undef XEMBED_EMBEDDED_NOTIFY
#undef XEMBED_FOCUS_CURRENT
#undef XEMBED_FOCUS_IN
#undef XEMBED_FOCUS_NEXT
#undef XEMBED_FOCUS_OUT
#undef XEMBED_FOCUS_PREV
#undef XEMBED_MAPPED
#undef XEMBED_MODALITY_OFF
#undef XEMBED_MODALITY_ON
#undef XEMBED_REGISTER_ACCELERATOR
#undef XEMBED_REQUEST_FOCUS
#undef XEMBED_UNREGISTER_ACCELERATOR
#undef XEMBED_VERSION
#undef XEMBED_WINDOW_ACTIVATE
#undef XEMBED_WINDOW_DEACTIVATE

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Native = ::sun::awt::X11::Native;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$PlatformLogger* XEmbedServerTester::xembedLog = nullptr;
$Rectangle* XEmbedServerTester::initialBounds = nullptr;

void XEmbedServerTester::init$($RectangleArray* serverBounds, int64_t parent) {
	$useLocalObjectStack();
	$set(this, EVENT_LOCK, $new($Object));
	$set(this, xembed, $new($XEmbedHelper));
	this->eventWaited = -1;
	this->eventReceived = -1;
	$set(this, events, $new($LinkedList));
	this->parent = parent;
	this->focusedKind = -1;
	this->focusedServerComponent = -1;
	this->reparent = false;
	this->windowActive = false;
	this->xembedActive = false;
	this->my_version = $XEmbedHelper::XEMBED_VERSION;
	this->mapped = $XEmbedHelper::XEMBED_MAPPED;
	$set(this, serverBounds, serverBounds);
	if ($nc(serverBounds)->length < 5) {
		$throwNew($IllegalArgumentException, "There must be at least five areas: server-activation, server-deactivation, server-focus, server-modal show, modal-close"_s);
	}
	try {
		$set(this, robot, $new($Robot));
		this->robot->setAutoDelay(100);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, "Can\'t create robot"_s);
	}
	initAccel();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
		XEmbedServerTester::xembedLog->finer($$str({"XEmbed client(tester), embedder window: "_s, $($Long::toHexString(parent))}));
	}
}

XEmbedServerTester* XEmbedServerTester::getTester($RectangleArray* serverBounds, int64_t parent) {
	$init(XEmbedServerTester);
	return $new(XEmbedServerTester, serverBounds, parent);
}

void XEmbedServerTester::dumpReceivedEvents() {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
		XEmbedServerTester::xembedLog->finer("Events received so far:"_s);
		int32_t pos = 0;
		{
			$var($Iterator, i$, $nc(this->events)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Integer, event, $cast($Integer, i$->next()));
				{
					XEmbedServerTester::xembedLog->finer($$str({$$str((pos++)), ":"_s, $($XEmbedHelper::msgidToString($nc(event)->intValue()))}));
				}
			}
		}
		XEmbedServerTester::xembedLog->finer("End of event dump"_s);
	}
}

void XEmbedServerTester::test1_1() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	deactivateServer();
	res = activateServer(getEventPos());
	waitFocusGained(res);
	checkFocusGained($XEmbedHelper::XEMBED_FOCUS_CURRENT);
}

void XEmbedServerTester::test1_2() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	checkFocusGained($XEmbedHelper::XEMBED_FOCUS_CURRENT);
}

void XEmbedServerTester::test1_3() {
	embedCompletely();
	deactivateServer();
	requestFocusNoWait();
	checkNotFocused();
}

void XEmbedServerTester::test1_4() {
	embedCompletely();
	deactivateServer();
	requestFocusNoWait();
	checkNotFocused();
	int32_t res = getEventPos();
	activateServer(res);
	waitFocusGained(res);
	checkFocusGained($XEmbedHelper::XEMBED_FOCUS_CURRENT);
}

void XEmbedServerTester::test1_5() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	checkWindowActivated();
}

void XEmbedServerTester::test1_6() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	res = deactivateServer();
	checkFocused();
}

void XEmbedServerTester::test1_7() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	focusServer();
	checkFocusLost();
}

void XEmbedServerTester::test2_5() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	focusServerNext();
	checkFocusedServerNext();
	checkFocusLost();
}

void XEmbedServerTester::test2_6() {
	int32_t res = embedCompletely();
	waitWindowActivated(res);
	requestFocus();
	focusServerPrev();
	checkFocusedServerPrev();
	checkFocusLost();
}

void XEmbedServerTester::test3_1() {
	this->reparent = false;
	embedCompletely();
}

void XEmbedServerTester::test3_3() {
	this->reparent = true;
	embedCompletely();
}

void XEmbedServerTester::test3_4() {
	$useLocalObjectStack();
	this->my_version = 10;
	embedCompletely();
	if (this->server_version != $XEmbedHelper::XEMBED_VERSION) {
		$throwNew($RuntimeException, $$str({"Version "_s, $$str(this->server_version), " is not minimal"_s}));
	}
}

void XEmbedServerTester::test3_5() {
	embedCompletely();
	$nc(this->window)->destroy();
	sleep(1000);
}

void XEmbedServerTester::test3_6() {
	embedCompletely();
	sleep(1000);
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		int64_t var$1 = $XToolkit::getDisplay();
		$XlibWrapper::XUnmapWindow(var$1, $nc(this->window)->getWindow());
		int64_t var$2 = $XToolkit::getDisplay();
		int64_t var$3 = $nc(this->window)->getWindow();
		$XlibWrapper::XReparentWindow(var$2, var$3, $XToolkit::getDefaultRootWindow(), 0, 0);
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	int32_t res = getEventPos();
	activateServerNoWait(res);
	sleep(1000);
	if (checkEventList(res, $XEmbedHelper::XEMBED_WINDOW_ACTIVATE) != -1) {
		$throwNew($RuntimeException, "Focus was been given to the client after XEmbed has ended"_s);
	}
}

void XEmbedServerTester::test4_1() {
	this->mapped = $XEmbedHelper::XEMBED_MAPPED;
	int32_t res = getEventPos();
	embedCompletely();
	sleep(1000);
	checkMapped();
}

void XEmbedServerTester::test4_2() {
	this->mapped = 0;
	embedCompletely();
	sleep(1000);
	int32_t res = getEventPos();
	this->mapped = $XEmbedHelper::XEMBED_MAPPED;
	updateEmbedInfo();
	sleep(1000);
	checkMapped();
}

void XEmbedServerTester::test4_3() {
	int32_t res = getEventPos();
	this->mapped = $XEmbedHelper::XEMBED_MAPPED;
	embedCompletely();
	res = getEventPos();
	this->mapped = 0;
	updateEmbedInfo();
	sleep(1000);
	checkNotMapped();
}

void XEmbedServerTester::test4_4() {
	this->mapped = 0;
	embedCompletely();
	sleep(1000);
	if ($XlibUtil::getWindowMapState($nc(this->window)->getWindow()) != 0) {
		$throwNew($RuntimeException, "Client has been mapped"_s);
	}
}

void XEmbedServerTester::test6_1_1() {
	embedCompletely();
	registerAccelerator();
	focusServer();
	int32_t res = pressAccelKey();
	waitForEvent(res, $XEmbedHelper::XEMBED_ACTIVATE_ACCELERATOR);
}

void XEmbedServerTester::test6_1_2() {
	embedCompletely();
	registerAccelerator();
	focusServer();
	deactivateServer();
	int32_t res = pressAccelKey();
	sleep(1000);
	if (checkEventList(res, $XEmbedHelper::XEMBED_ACTIVATE_ACCELERATOR) != -1) {
		$throwNew($RuntimeException, "Accelerator has been activated in inactive embedder"_s);
	}
}

void XEmbedServerTester::test6_1_3() {
	embedCompletely();
	registerAccelerator();
	focusServer();
	deactivateServer();
	unregisterAccelerator();
	int32_t res = pressAccelKey();
	sleep(1000);
	if (checkEventList(res, $XEmbedHelper::XEMBED_ACTIVATE_ACCELERATOR) != -1) {
		$throwNew($RuntimeException, "Accelerator has been activated after unregistering"_s);
	}
}

void XEmbedServerTester::test6_1_4() {
	embedCompletely();
	registerAccelerator();
	requestFocus();
	int32_t res = pressAccelKey();
	sleep(1000);
	if (checkEventList(res, $XEmbedHelper::XEMBED_ACTIVATE_ACCELERATOR) != -1) {
		$throwNew($RuntimeException, "Accelerator has been activated in focused client"_s);
	}
}

void XEmbedServerTester::test6_2_1() {
	embedCompletely();
	grabKey();
	focusServer();
	int32_t res = pressAccelKey();
	waitSystemEvent(res, 2);
}

void XEmbedServerTester::test6_2_2() {
	embedCompletely();
	grabKey();
	focusServer();
	deactivateServer();
	int32_t res = pressAccelKey();
	sleep(1000);
	if (checkEventList(res, XEmbedServerTester::SYSTEM_EVENT_MASK | 2) != -1) {
		$throwNew($RuntimeException, "Accelerator has been activated in inactive embedder"_s);
	}
}

void XEmbedServerTester::test6_2_3() {
	embedCompletely();
	grabKey();
	focusServer();
	deactivateServer();
	ungrabKey();
	int32_t res = pressAccelKey();
	sleep(1000);
	if (checkEventList(res, XEmbedServerTester::SYSTEM_EVENT_MASK | 2) != -1) {
		$throwNew($RuntimeException, "Accelerator has been activated after unregistering"_s);
	}
}

void XEmbedServerTester::test6_2_4() {
	embedCompletely();
	grabKey();
	requestFocus();
	int32_t res = pressAccelKey();
	sleep(1000);
	int32_t pos = checkEventList(res, XEmbedServerTester::SYSTEM_EVENT_MASK | 2);
	if (pos != -1) {
		pos = checkEventList(pos + 1, XEmbedServerTester::SYSTEM_EVENT_MASK | 2);
		if (pos != -1) {
			$throwNew($RuntimeException, "Accelerator has been activated in focused client"_s);
		}
	}
}

void XEmbedServerTester::test7_1() {
	embedCompletely();
	int32_t res = showModalDialog();
	waitForEvent(res, $XEmbedHelper::XEMBED_MODALITY_ON);
}

void XEmbedServerTester::test7_2() {
	embedCompletely();
	int32_t res = showModalDialog();
	waitForEvent(res, $XEmbedHelper::XEMBED_MODALITY_ON);
	res = hideModalDialog();
	waitForEvent(res, $XEmbedHelper::XEMBED_MODALITY_OFF);
}

void XEmbedServerTester::test9_1() {
	embedCompletely();
	requestFocus();
	int32_t res = pressAccelKey();
	waitForEvent(res, XEmbedServerTester::SYSTEM_EVENT_MASK | 2);
}

int32_t XEmbedServerTester::embed() {
	$useLocalObjectStack();
	int32_t res = getEventPos();
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		$init($XBaseWindow);
		$var($XCreateWindowParams, params, $new($XCreateWindowParams, $$new($ObjectArray, {
			$XBaseWindow::PARENT_WINDOW,
			$($Long::valueOf(this->reparent ? $XToolkit::getDefaultRootWindow() : this->parent)),
			$XBaseWindow::BOUNDS,
			XEmbedServerTester::initialBounds,
			$XBaseWindow::EMBEDDED,
			$Boolean::TRUE,
			$XBaseWindow::VISIBLE,
			$($Boolean::valueOf(this->mapped == $XEmbedHelper::XEMBED_MAPPED)),
			$XBaseWindow::EVENT_MASK,
			$($Long::valueOf((((int64_t)0x00010000 | (int64_t)0x00020000) | (int64_t)0x00080000) | (int64_t)1))
		})));
		$set(this, window, $new($XBaseWindow, params));
		$init($PlatformLogger$Level);
		if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			XEmbedServerTester::xembedLog->finer($$str({"Created tester window: "_s, this->window}));
		}
		$XToolkit::addEventDispatcher($nc(this->window)->getWindow(), this);
		updateEmbedInfo();
		if (this->reparent) {
			XEmbedServerTester::xembedLog->finer("Reparenting to embedder"_s);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XReparentWindow(var$1, $nc(this->window)->getWindow(), this->parent, 0, 0);
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return res;
}

void XEmbedServerTester::updateEmbedInfo() {
	$useLocalObjectStack();
	$var($longs, info, $new($longs, {
		this->my_version,
		this->mapped
	}));
	int64_t data = $Native::card32ToData(info);
	$var($Throwable, var$0, nullptr);
	try {
		$init($XEmbedHelper);
		$nc($XEmbedHelper::XEmbedInfo)->setAtomData($nc(this->window)->getWindow(), data, info->length);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($XEmbedHelper);
		$nc($XEmbedHelper::unsafe)->freeMemory(data);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t XEmbedServerTester::getEventPos() {
	$synchronized(this->EVENT_LOCK) {
		return $nc(this->events)->size();
	}
}

int32_t XEmbedServerTester::embedCompletely() {
	$nc(XEmbedServerTester::xembedLog)->fine("Embedding completely"_s);
	int32_t res = getEventPos();
	embed();
	waitEmbeddedNotify(res);
	return res;
}

int32_t XEmbedServerTester::requestFocus() {
	$nc(XEmbedServerTester::xembedLog)->fine("Requesting focus"_s);
	int32_t res = getEventPos();
	sendMessage($XEmbedHelper::XEMBED_REQUEST_FOCUS);
	waitFocusGained(res);
	return res;
}

int32_t XEmbedServerTester::requestFocusNoWait() {
	$nc(XEmbedServerTester::xembedLog)->fine("Requesting focus without wait"_s);
	int32_t res = getEventPos();
	sendMessage($XEmbedHelper::XEMBED_REQUEST_FOCUS);
	return res;
}

int32_t XEmbedServerTester::activateServer(int32_t prev) {
	int32_t res = activateServerNoWait(prev);
	waitWindowActivated(res);
	return res;
}

int32_t XEmbedServerTester::activateServerNoWait(int32_t prev) {
	$nc(XEmbedServerTester::xembedLog)->fine("Activating server"_s);
	int32_t res = getEventPos();
	if (checkEventList(prev, $XEmbedHelper::XEMBED_WINDOW_ACTIVATE) != -1) {
		XEmbedServerTester::xembedLog->fine("Activation already received"_s);
		return res;
	}
	$var($Point, loc, $nc($nc(this->serverBounds)->get(XEmbedServerTester::SERVER_BOUNDS))->getLocation());
	$nc(loc)->x += $nc($nc(this->serverBounds)->get(XEmbedServerTester::SERVER_BOUNDS))->getWidth() / 2;
	loc->y += 5;
	$nc(this->robot)->mouseMove(loc->x, loc->y);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	return res;
}

int32_t XEmbedServerTester::deactivateServer() {
	$nc(XEmbedServerTester::xembedLog)->fine("Deactivating server"_s);
	int32_t res = getEventPos();
	$var($Point, loc, $nc($nc(this->serverBounds)->get(XEmbedServerTester::OTHER_FRAME))->getLocation());
	$nc(loc)->x += $nc($nc(this->serverBounds)->get(XEmbedServerTester::OTHER_FRAME))->getWidth() / 2;
	loc->y += $nc($nc(this->serverBounds)->get(XEmbedServerTester::OTHER_FRAME))->getHeight() / 2;
	$nc(this->robot)->mouseMove(loc->x, loc->y);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(this->robot)->delay(50);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	waitWindowDeactivated(res);
	return res;
}

int32_t XEmbedServerTester::focusServer() {
	$nc(XEmbedServerTester::xembedLog)->fine("Focusing server"_s);
	bool weFocused = this->focused;
	int32_t res = getEventPos();
	$var($Point, loc, $nc($nc(this->serverBounds)->get(XEmbedServerTester::SERVER_FOCUS))->getLocation());
	$nc(loc)->x += 5;
	loc->y += 5;
	$nc(this->robot)->mouseMove(loc->x, loc->y);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(this->robot)->delay(50);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	if (weFocused) {
		waitFocusLost(res);
	}
	return res;
}

int32_t XEmbedServerTester::focusServerNext() {
	$nc(XEmbedServerTester::xembedLog)->fine("Focusing next server component"_s);
	int32_t res = getEventPos();
	sendMessage($XEmbedHelper::XEMBED_FOCUS_NEXT);
	waitFocusLost(res);
	return res;
}

int32_t XEmbedServerTester::focusServerPrev() {
	$nc(XEmbedServerTester::xembedLog)->fine("Focusing previous server component"_s);
	int32_t res = getEventPos();
	sendMessage($XEmbedHelper::XEMBED_FOCUS_PREV);
	waitFocusLost(res);
	return res;
}

void XEmbedServerTester::waitEmbeddedNotify(int32_t pos) {
	waitForEvent(pos, $XEmbedHelper::XEMBED_EMBEDDED_NOTIFY);
}

void XEmbedServerTester::waitFocusGained(int32_t pos) {
	waitForEvent(pos, $XEmbedHelper::XEMBED_FOCUS_IN);
}

void XEmbedServerTester::waitFocusLost(int32_t pos) {
	waitForEvent(pos, $XEmbedHelper::XEMBED_FOCUS_OUT);
}

void XEmbedServerTester::waitWindowActivated(int32_t pos) {
	waitForEvent(pos, $XEmbedHelper::XEMBED_WINDOW_ACTIVATE);
}

void XEmbedServerTester::waitWindowDeactivated(int32_t pos) {
	waitForEvent(pos, $XEmbedHelper::XEMBED_WINDOW_DEACTIVATE);
}

void XEmbedServerTester::waitSystemEvent(int32_t position, int32_t event) {
	waitForEvent(position, event | XEmbedServerTester::SYSTEM_EVENT_MASK);
}

void XEmbedServerTester::waitForEvent(int32_t position, int32_t event) {
	$useLocalObjectStack();
	$synchronized(this->EVENT_LOCK) {
		if (checkEventList(position, event) != -1) {
			$init($PlatformLogger$Level);
			if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
				XEmbedServerTester::xembedLog->finer($$str({"The event "_s, $($XEmbedHelper::msgidToString(event)), " has already been received"_s}));
			}
			return;
		}
		if (this->eventReceived == event) {
			$init($PlatformLogger$Level);
			if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
				XEmbedServerTester::xembedLog->finer($$str({"Already received "_s, $($XEmbedHelper::msgidToString(event))}));
			}
			return;
		}
		this->eventReceived = -1;
		this->eventWaited = event;
		$init($PlatformLogger$Level);
		if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			XEmbedServerTester::xembedLog->finer($$str({"Waiting for "_s, $($XEmbedHelper::msgidToString(event)), " starting from "_s, $$str(position)}));
		}
		try {
			this->EVENT_LOCK->wait(3000);
		} catch ($InterruptedException& ie) {
			XEmbedServerTester::xembedLog->warning("Event wait interrupted"_s, ie);
		}
		this->eventWaited = -1;
		if (checkEventList(position, event) == -1) {
			dumpReceivedEvents();
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Didn\'t receive event "_s);
			var$0->append($($XEmbedHelper::msgidToString(event)));
			var$0->append(" but recevied "_s);
			var$0->append($($XEmbedHelper::msgidToString(this->eventReceived)));
			$throwNew($RuntimeException, $$str(var$0));
		} else if (XEmbedServerTester::xembedLog->isLoggable($PlatformLogger$Level::FINER)) {
			XEmbedServerTester::xembedLog->finer($$str({"Successfully recevied "_s, $($XEmbedHelper::msgidToString(event))}));
		}
	}
}

int32_t XEmbedServerTester::checkEventList(int32_t position, int32_t event) {
	$useLocalObjectStack();
	if (position == -1) {
		return -1;
	}
	$synchronized(this->EVENT_LOCK) {
		for (int32_t i = position; i < $nc(this->events)->size(); ++i) {
			if ($$sure($Integer, this->events->get(i))->intValue() == event) {
				return i;
			}
		}
		return -1;
	}
}

void XEmbedServerTester::checkFocusedServerNext() {
	$useLocalObjectStack();
	if (this->focusedServerComponent != 0) {
		$throwNew($RuntimeException, $$str({"Wrong focused server component, should be 0, but it is "_s, $$str(this->focusedServerComponent)}));
	}
}

void XEmbedServerTester::checkFocusedServerPrev() {
	$useLocalObjectStack();
	if (this->focusedServerComponent != 2) {
		$throwNew($RuntimeException, $$str({"Wrong focused server component, should be 2, but it is "_s, $$str(this->focusedServerComponent)}));
	}
}

void XEmbedServerTester::checkFocusGained(int32_t kind) {
	$useLocalObjectStack();
	if (!this->focused) {
		$throwNew($RuntimeException, "Didn\'t receive FOCUS_GAINED"_s);
	}
	if (this->focusedKind != kind) {
		$throwNew($RuntimeException, $$str({"Kinds don\'t match, required: "_s, $$str(kind), ", current: "_s, $$str(this->focusedKind)}));
	}
}

void XEmbedServerTester::checkNotFocused() {
	if (this->focused) {
		$throwNew($RuntimeException, "Focused"_s);
	}
}

void XEmbedServerTester::checkFocused() {
	if (!this->focused) {
		$throwNew($RuntimeException, "Not Focused"_s);
	}
}

void XEmbedServerTester::checkFocusLost() {
	checkNotFocused();
	if (this->focusedKind != $XEmbedHelper::XEMBED_FOCUS_OUT) {
		$throwNew($RuntimeException, "Didn\'t receive FOCUS_LOST"_s);
	}
}

void XEmbedServerTester::checkWindowActivated() {
	if (!this->windowActive) {
		$throwNew($RuntimeException, "Window is not active"_s);
	}
}

void XEmbedServerTester::checkMapped() {
	if ($XlibUtil::getWindowMapState($nc(this->window)->getWindow()) == 0) {
		$throwNew($RuntimeException, "Client is not mapped"_s);
	}
}

void XEmbedServerTester::checkNotMapped() {
	if ($XlibUtil::getWindowMapState($nc(this->window)->getWindow()) != 0) {
		$throwNew($RuntimeException, "Client is mapped"_s);
	}
}

void XEmbedServerTester::sendMessage(int32_t message) {
	$nc(this->xembed)->sendMessage(this->parent, message);
}

void XEmbedServerTester::sendMessage(int32_t message, int32_t detail, int64_t data1, int64_t data2) {
	$nc(this->xembed)->sendMessage(this->parent, message, detail, data1, data2);
}

void XEmbedServerTester::dispatchEvent($XEvent* ev) {
	$useLocalObjectStack();
	if ($nc(ev)->get_type() == 33) {
		$var($XClientMessageEvent, msg, ev->get_xclient());
		int64_t var$0 = $nc(msg)->get_message_type();
		$init($XEmbedHelper);
		if (var$0 == $nc($XEmbedHelper::XEmbed)->getAtom()) {
			$init($PlatformLogger$Level);
			if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
				XEmbedServerTester::xembedLog->fine($$str({"Embedded message: "_s, $($XEmbedHelper::msgidToString((int32_t)msg->get_data(1)))}));
			}
			switch ((int32_t)msg->get_data(1)) {
			case $XEmbedHelper::XEMBED_EMBEDDED_NOTIFY:
				this->xembedActive = true;
				this->server_version = (int32_t)msg->get_data(3);
				break;
			case $XEmbedHelper::XEMBED_WINDOW_ACTIVATE:
				this->windowActive = true;
				break;
			case $XEmbedHelper::XEMBED_WINDOW_DEACTIVATE:
				this->windowActive = false;
				break;
			case $XEmbedHelper::XEMBED_FOCUS_IN:
				this->focused = true;
				this->focusedKind = (int32_t)msg->get_data(2);
				break;
			case $XEmbedHelper::XEMBED_FOCUS_OUT:
				this->focused = false;
				this->focusedKind = $XEmbedHelper::XEMBED_FOCUS_OUT;
				this->focusedServerComponent = (int32_t)msg->get_data(2);
				break;
			}
			$synchronized(this->EVENT_LOCK) {
				$nc(this->events)->add($($Integer::valueOf((int32_t)msg->get_data(1))));
				if (XEmbedServerTester::xembedLog->isLoggable($PlatformLogger$Level::FINER)) {
					XEmbedServerTester::xembedLog->finer($$str({"Tester is waiting for "_s, $($XEmbedHelper::msgidToString(this->eventWaited))}));
				}
				if ((int32_t)msg->get_data(1) == this->eventWaited) {
					this->eventReceived = (int32_t)msg->get_data(1);
					if (XEmbedServerTester::xembedLog->isLoggable($PlatformLogger$Level::FINER)) {
						XEmbedServerTester::xembedLog->finer($$str({"Notifying waiting object for event "_s, $$str($System::identityHashCode(this->EVENT_LOCK))}));
					}
					this->EVENT_LOCK->notifyAll();
				}
			}
		}
	} else {
		$synchronized(this->EVENT_LOCK) {
			int32_t eventID = ev->get_type() | XEmbedServerTester::SYSTEM_EVENT_MASK;
			$nc(this->events)->add($($Integer::valueOf(eventID)));
			$init($PlatformLogger$Level);
			if ($nc(XEmbedServerTester::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append("Tester is waiting for "_s);
				var$1->append($($XEmbedHelper::msgidToString(this->eventWaited)));
				var$1->append(", but we received "_s);
				var$1->append(ev);
				var$1->append("("_s);
				var$1->append($($XEmbedHelper::msgidToString(eventID)));
				var$1->append(")"_s);
				XEmbedServerTester::xembedLog->finer($$str(var$1));
			}
			if (eventID == this->eventWaited) {
				this->eventReceived = eventID;
				if (XEmbedServerTester::xembedLog->isLoggable($PlatformLogger$Level::FINER)) {
					XEmbedServerTester::xembedLog->finer($$str({"Notifying waiting object"_s, $$str($System::identityHashCode(this->EVENT_LOCK))}));
				}
				this->EVENT_LOCK->notifyAll();
			}
		}
	}
}

void XEmbedServerTester::sleep(int32_t amount) {
	try {
		$Thread::sleep(amount);
	} catch ($Exception& e) {
	}
}

void XEmbedServerTester::registerAccelerator() {
	sendMessage($XEmbedHelper::XEMBED_REGISTER_ACCELERATOR, 1, this->accel_keysym, this->accel_mods);
}

void XEmbedServerTester::unregisterAccelerator() {
	sendMessage($XEmbedHelper::XEMBED_UNREGISTER_ACCELERATOR, 1, 0, 0);
}

int32_t XEmbedServerTester::pressAccelKey() {
	int32_t res = getEventPos();
	$nc(this->robot)->keyPress(this->accel_key);
	$nc(this->robot)->keyRelease(this->accel_key);
	return res;
}

void XEmbedServerTester::initAccel() {
	this->accel_key = $KeyEvent::VK_A;
	this->accel_keysym = $XWindow::getKeySymForAWTKeyCode(this->accel_key);
	this->accel_mods = 0;
}

void XEmbedServerTester::grabKey() {
	sendMessage($XEmbedHelper::NON_STANDARD_XEMBED_GTK_GRAB_KEY, 0, this->accel_keysym, this->accel_mods);
}

void XEmbedServerTester::ungrabKey() {
	sendMessage($XEmbedHelper::NON_STANDARD_XEMBED_GTK_UNGRAB_KEY, 0, this->accel_keysym, this->accel_mods);
}

int32_t XEmbedServerTester::showModalDialog() {
	$nc(XEmbedServerTester::xembedLog)->fine("Showing modal dialog"_s);
	int32_t res = getEventPos();
	$var($Point, loc, $nc($nc(this->serverBounds)->get(XEmbedServerTester::SERVER_MODAL))->getLocation());
	$nc(loc)->x += 5;
	loc->y += 5;
	$nc(this->robot)->mouseMove(loc->x, loc->y);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(this->robot)->delay(50);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	return res;
}

int32_t XEmbedServerTester::hideModalDialog() {
	$nc(XEmbedServerTester::xembedLog)->fine("Hide modal dialog"_s);
	int32_t res = getEventPos();
	$nc(this->robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(this->robot)->keyRelease($KeyEvent::VK_SPACE);
	return res;
}

void XEmbedServerTester::clinit$($Class* clazz) {
	$assignStatic(XEmbedServerTester::xembedLog, $PlatformLogger::getLogger("sun.awt.X11.xembed.XEmbedServerTester"_s));
	$assignStatic(XEmbedServerTester::initialBounds, $new($Rectangle, 0, 0, 100, 100));
}

XEmbedServerTester::XEmbedServerTester() {
}

$Class* XEmbedServerTester::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xembedLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbedServerTester, xembedLog)},
		{"EVENT_LOCK", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(XEmbedServerTester, EVENT_LOCK)},
		{"SYSTEM_EVENT_MASK", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedServerTester, SYSTEM_EVENT_MASK)},
		{"my_version", "I", nullptr, 0, $field(XEmbedServerTester, my_version)},
		{"server_version", "I", nullptr, 0, $field(XEmbedServerTester, server_version)},
		{"xembed", "Lsun/awt/X11/XEmbedHelper;", nullptr, 0, $field(XEmbedServerTester, xembed)},
		{"focused", "Z", nullptr, 0, $field(XEmbedServerTester, focused)},
		{"focusedKind", "I", nullptr, 0, $field(XEmbedServerTester, focusedKind)},
		{"focusedServerComponent", "I", nullptr, 0, $field(XEmbedServerTester, focusedServerComponent)},
		{"reparent", "Z", nullptr, 0, $field(XEmbedServerTester, reparent)},
		{"parent", "J", nullptr, 0, $field(XEmbedServerTester, parent)},
		{"windowActive", "Z", nullptr, 0, $field(XEmbedServerTester, windowActive)},
		{"xembedActive", "Z", nullptr, 0, $field(XEmbedServerTester, xembedActive)},
		{"window", "Lsun/awt/X11/XBaseWindow;", nullptr, 0, $field(XEmbedServerTester, window)},
		{"eventWaited", "I", nullptr, $VOLATILE, $field(XEmbedServerTester, eventWaited)},
		{"eventReceived", "I", nullptr, $VOLATILE, $field(XEmbedServerTester, eventReceived)},
		{"mapped", "I", nullptr, 0, $field(XEmbedServerTester, mapped)},
		{"accel_key", "I", nullptr, 0, $field(XEmbedServerTester, accel_key)},
		{"accel_keysym", "I", nullptr, 0, $field(XEmbedServerTester, accel_keysym)},
		{"accel_mods", "I", nullptr, 0, $field(XEmbedServerTester, accel_mods)},
		{"initialBounds", "Ljava/awt/Rectangle;", nullptr, $STATIC, $staticField(XEmbedServerTester, initialBounds)},
		{"robot", "Ljava/awt/Robot;", nullptr, 0, $field(XEmbedServerTester, robot)},
		{"serverBounds", "[Ljava/awt/Rectangle;", nullptr, 0, $field(XEmbedServerTester, serverBounds)},
		{"SERVER_BOUNDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XEmbedServerTester, SERVER_BOUNDS)},
		{"OTHER_FRAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XEmbedServerTester, OTHER_FRAME)},
		{"SERVER_FOCUS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XEmbedServerTester, SERVER_FOCUS)},
		{"SERVER_MODAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XEmbedServerTester, SERVER_MODAL)},
		{"MODAL_CLOSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XEmbedServerTester, MODAL_CLOSE)},
		{"events", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/Integer;>;", 0, $field(XEmbedServerTester, events)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Rectangle;J)V", nullptr, $PRIVATE, $method(XEmbedServerTester, init$, void, $RectangleArray*, int64_t)},
		{"activateServer", "(I)I", nullptr, $PRIVATE, $method(XEmbedServerTester, activateServer, int32_t, int32_t)},
		{"activateServerNoWait", "(I)I", nullptr, $PRIVATE, $method(XEmbedServerTester, activateServerNoWait, int32_t, int32_t)},
		{"checkEventList", "(II)I", nullptr, $PRIVATE, $method(XEmbedServerTester, checkEventList, int32_t, int32_t, int32_t)},
		{"checkFocusGained", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkFocusGained, void, int32_t)},
		{"checkFocusLost", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkFocusLost, void)},
		{"checkFocused", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkFocused, void)},
		{"checkFocusedServerNext", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkFocusedServerNext, void)},
		{"checkFocusedServerPrev", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkFocusedServerPrev, void)},
		{"checkMapped", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkMapped, void)},
		{"checkNotFocused", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkNotFocused, void)},
		{"checkNotMapped", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkNotMapped, void)},
		{"checkWindowActivated", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, checkWindowActivated, void)},
		{"deactivateServer", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, deactivateServer, int32_t)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, dispatchEvent, void, $XEvent*)},
		{"dumpReceivedEvents", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, dumpReceivedEvents, void)},
		{"embed", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, embed, int32_t)},
		{"embedCompletely", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, embedCompletely, int32_t)},
		{"focusServer", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, focusServer, int32_t)},
		{"focusServerNext", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, focusServerNext, int32_t)},
		{"focusServerPrev", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, focusServerPrev, int32_t)},
		{"getEventPos", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, getEventPos, int32_t)},
		{"getTester", "([Ljava/awt/Rectangle;J)Lsun/awt/X11/XEmbedServerTester;", nullptr, $PUBLIC | $STATIC, $staticMethod(XEmbedServerTester, getTester, XEmbedServerTester*, $RectangleArray*, int64_t)},
		{"grabKey", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, grabKey, void)},
		{"hideModalDialog", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, hideModalDialog, int32_t)},
		{"initAccel", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, initAccel, void)},
		{"pressAccelKey", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, pressAccelKey, int32_t)},
		{"registerAccelerator", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, registerAccelerator, void)},
		{"requestFocus", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, requestFocus, int32_t)},
		{"requestFocusNoWait", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, requestFocusNoWait, int32_t)},
		{"sendMessage", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, sendMessage, void, int32_t)},
		{"sendMessage", "(IIJJ)V", nullptr, $PRIVATE, $method(XEmbedServerTester, sendMessage, void, int32_t, int32_t, int64_t, int64_t)},
		{"showModalDialog", "()I", nullptr, $PRIVATE, $method(XEmbedServerTester, showModalDialog, int32_t)},
		{"sleep", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, sleep, void, int32_t)},
		{"test1_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_1, void)},
		{"test1_2", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_2, void)},
		{"test1_3", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_3, void)},
		{"test1_4", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_4, void)},
		{"test1_5", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_5, void)},
		{"test1_6", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_6, void)},
		{"test1_7", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test1_7, void)},
		{"test2_5", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test2_5, void)},
		{"test2_6", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test2_6, void)},
		{"test3_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test3_1, void)},
		{"test3_3", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test3_3, void)},
		{"test3_4", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test3_4, void)},
		{"test3_5", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test3_5, void)},
		{"test3_6", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test3_6, void)},
		{"test4_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test4_1, void)},
		{"test4_2", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test4_2, void)},
		{"test4_3", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test4_3, void)},
		{"test4_4", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test4_4, void)},
		{"test6_1_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_1_1, void)},
		{"test6_1_2", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_1_2, void)},
		{"test6_1_3", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_1_3, void)},
		{"test6_1_4", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_1_4, void)},
		{"test6_2_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_2_1, void)},
		{"test6_2_2", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_2_2, void)},
		{"test6_2_3", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_2_3, void)},
		{"test6_2_4", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test6_2_4, void)},
		{"test7_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test7_1, void)},
		{"test7_2", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test7_2, void)},
		{"test9_1", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedServerTester, test9_1, void)},
		{"ungrabKey", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, ungrabKey, void)},
		{"unregisterAccelerator", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, unregisterAccelerator, void)},
		{"updateEmbedInfo", "()V", nullptr, $PRIVATE, $method(XEmbedServerTester, updateEmbedInfo, void)},
		{"waitEmbeddedNotify", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitEmbeddedNotify, void, int32_t)},
		{"waitFocusGained", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitFocusGained, void, int32_t)},
		{"waitFocusLost", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitFocusLost, void, int32_t)},
		{"waitForEvent", "(II)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitForEvent, void, int32_t, int32_t)},
		{"waitSystemEvent", "(II)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitSystemEvent, void, int32_t, int32_t)},
		{"waitWindowActivated", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitWindowActivated, void, int32_t)},
		{"waitWindowDeactivated", "(I)V", nullptr, $PRIVATE, $method(XEmbedServerTester, waitWindowDeactivated, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XEmbedServerTester",
		"java.lang.Object",
		"sun.awt.X11.XEventDispatcher",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XEmbedServerTester, name, initialize, &classInfo$$, XEmbedServerTester::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedServerTester);
	});
	return class$;
}

$Class* XEmbedServerTester::class$ = nullptr;

		} // X11
	} // awt
} // sun