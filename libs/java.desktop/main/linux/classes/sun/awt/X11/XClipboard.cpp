#include <sun/awt/X11/XClipboard.h>

#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/SortedMap.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/OwnershipListener.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClipboard$CheckChangeTimerTask.h>
#include <sun/awt/X11/XClipboard$SelectionNotifyHandler.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDataTransferer.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XSelectionEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/datatransfer/ClipboardTransferable.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <sun/security/action/GetIntegerAction.h>
#include <jcpp.h>

#undef MAX_LENGTH
#undef TARGETS_ATOM

using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SortedMap = ::java::util::SortedMap;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $OwnershipListener = ::sun::awt::X11::OwnershipListener;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClipboard$CheckChangeTimerTask = ::sun::awt::X11::XClipboard$CheckChangeTimerTask;
using $XClipboard$SelectionNotifyHandler = ::sun::awt::X11::XClipboard$SelectionNotifyHandler;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDataTransferer = ::sun::awt::X11::XDataTransferer;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelection = ::sun::awt::X11::XSelection;
using $XSelectionEvent = ::sun::awt::X11::XSelectionEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $ClipboardTransferable = ::sun::awt::datatransfer::ClipboardTransferable;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XClipboard_FieldInfo_[] = {
	{"selection", "Lsun/awt/X11/XSelection;", nullptr, $PRIVATE | $FINAL, $field(XClipboard, selection)},
	{"convertSelectionTime", "J", nullptr, $PRIVATE, $field(XClipboard, convertSelectionTime)},
	{"isSelectionNotifyProcessed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(XClipboard, isSelectionNotifyProcessed)},
	{"targetsPropertyAtom", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $VOLATILE, $field(XClipboard, targetsPropertyAtom)},
	{"classLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XClipboard, classLock)},
	{"defaultPollInterval", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XClipboard, defaultPollInterval)},
	{"pollInterval", "I", nullptr, $PRIVATE | $STATIC, $staticField(XClipboard, pollInterval)},
	{"targetsAtom2Clipboard", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Lsun/awt/X11/XClipboard;>;", $PRIVATE | $STATIC, $staticField(XClipboard, targetsAtom2Clipboard)},
	{}
};

$MethodInfo _XClipboard_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XClipboard, init$, void, $String*, $String*)},
	{"checkChange", "(Lsun/awt/X11/XSelectionEvent;)V", nullptr, $PRIVATE, $method(XClipboard, checkChange, void, $XSelectionEvent*)},
	{"checkChangeHere", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PRIVATE, $method(XClipboard, checkChangeHere, void, $Transferable*)},
	{"clearNativeContext", "()V", nullptr, $PROTECTED, $virtualMethod(XClipboard, clearNativeContext, void)},
	{"getClipboardData", "(J)[B", nullptr, $PROTECTED, $virtualMethod(XClipboard, getClipboardData, $bytes*, int64_t), "java.io.IOException"},
	{"getClipboardFormats", "()[J", nullptr, $PROTECTED, $virtualMethod(XClipboard, getClipboardFormats, $longs*)},
	{"getContents", "(Ljava/lang/Object;)Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XClipboard, getContents, $Transferable*, Object$*)},
	{"getID", "()J", nullptr, $PUBLIC, $virtualMethod(XClipboard, getID, int64_t)},
	{"getPollInterval", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(XClipboard, getPollInterval, int32_t)},
	{"getTargetsDelayed", "()V", nullptr, $PRIVATE, $method(XClipboard, getTargetsDelayed, void)},
	{"getTargetsPropertyAtom", "()Lsun/awt/X11/XAtom;", nullptr, $PRIVATE, $method(XClipboard, getTargetsPropertyAtom, $XAtom*)},
	{"ownershipChanged", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XClipboard, ownershipChanged, void, bool)},
	{"registerClipboardViewerChecked", "()V", nullptr, $PROTECTED, $virtualMethod(XClipboard, registerClipboardViewerChecked, void)},
	{"setContentsNative", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(XClipboard, setContentsNative, void, $Transferable*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregisterClipboardViewerChecked", "()V", nullptr, $PROTECTED, $virtualMethod(XClipboard, unregisterClipboardViewerChecked, void)},
	{}
};

$InnerClassInfo _XClipboard_InnerClassesInfo_[] = {
	{"sun.awt.X11.XClipboard$SelectionNotifyHandler", "sun.awt.X11.XClipboard", "SelectionNotifyHandler", $PRIVATE | $STATIC},
	{"sun.awt.X11.XClipboard$CheckChangeTimerTask", "sun.awt.X11.XClipboard", "CheckChangeTimerTask", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XClipboard_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XClipboard",
	"sun.awt.datatransfer.SunClipboard",
	"sun.awt.X11.OwnershipListener",
	_XClipboard_FieldInfo_,
	_XClipboard_MethodInfo_,
	nullptr,
	nullptr,
	_XClipboard_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XClipboard$SelectionNotifyHandler,sun.awt.X11.XClipboard$CheckChangeTimerTask"
};

$Object* allocate$XClipboard($Class* clazz) {
	return $of($alloc(XClipboard));
}

int32_t XClipboard::hashCode() {
	 return this->$SunClipboard::hashCode();
}

bool XClipboard::equals(Object$* arg0) {
	 return this->$SunClipboard::equals(arg0);
}

$Object* XClipboard::clone() {
	 return this->$SunClipboard::clone();
}

$String* XClipboard::toString() {
	 return this->$SunClipboard::toString();
}

void XClipboard::finalize() {
	this->$SunClipboard::finalize();
}

$Object* XClipboard::classLock = nullptr;
int32_t XClipboard::pollInterval = 0;
$Map* XClipboard::targetsAtom2Clipboard = nullptr;

void XClipboard::init$($String* name, $String* selectionName) {
	$SunClipboard::init$(name);
	$set(this, selection, $new($XSelection, $($XAtom::get(selectionName))));
	$nc(this->selection)->registerOwershipListener(this);
}

void XClipboard::ownershipChanged(bool isOwner) {
	if (isOwner) {
		checkChangeHere(this->contents);
	} else {
		lostOwnershipImpl();
	}
}

void XClipboard::setContentsNative($Transferable* contents) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SortedMap, formatMap, $nc($($DataTransferer::getInstance()))->getFormatsForTransferable(contents, $($DataTransferer::adaptFlavorMap($(getDefaultFlavorTable())))));
		$var($longs, formats, $DataTransferer::keysToLongArray(formatMap));
		if (!$nc(this->selection)->setOwner(contents, formatMap, formats, $XToolkit::getCurrentServerTime())) {
			$set(this, owner, nullptr);
			$set(this, contents, nullptr);
		}
	}
}

int64_t XClipboard::getID() {
	return $nc($($nc(this->selection)->getSelectionAtom()))->getAtom();
}

$Transferable* XClipboard::getContents(Object$* requestor) {
	$synchronized(this) {
		if (this->contents != nullptr) {
			return this->contents;
		}
		return $new($ClipboardTransferable, this);
	}
}

void XClipboard::clearNativeContext() {
	$nc(this->selection)->reset();
}

$longs* XClipboard::getClipboardFormats() {
	return $nc(this->selection)->getTargets($XToolkit::getCurrentServerTime());
}

$bytes* XClipboard::getClipboardData(int64_t format) {
	return $nc(this->selection)->getData(format, $XToolkit::getCurrentServerTime());
}

void XClipboard::checkChangeHere($Transferable* contents) {
	$useLocalCurrentObjectStackCache();
	if (areFlavorListenersRegistered()) {
		checkChange($($nc($($DataTransferer::getInstance()))->getFormatsForTransferableAsArray(contents, $(getDefaultFlavorTable()))));
	}
}

int32_t XClipboard::getPollInterval() {
	$init(XClipboard);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(XClipboard::classLock) {
		if (XClipboard::pollInterval <= 0) {
			XClipboard::pollInterval = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetIntegerAction, "awt.datatransfer.clipboard.poll.interval"_s, XClipboard::defaultPollInterval)))))))->intValue();
			if (XClipboard::pollInterval <= 0) {
				XClipboard::pollInterval = XClipboard::defaultPollInterval;
			}
		}
		return XClipboard::pollInterval;
	}
}

$XAtom* XClipboard::getTargetsPropertyAtom() {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->targetsPropertyAtom) {
		$set(this, targetsPropertyAtom, $XAtom::get($$str({"XAWT_TARGETS_OF_SELECTION:"_s, $($nc($($nc(this->selection)->getSelectionAtom()))->getName())})));
	}
	return this->targetsPropertyAtom;
}

void XClipboard::registerClipboardViewerChecked() {
	$useLocalCurrentObjectStackCache();
	this->isSelectionNotifyProcessed = true;
	bool mustSchedule = false;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$synchronized(XClipboard::classLock) {
				if (XClipboard::targetsAtom2Clipboard == nullptr) {
					$assignStatic(XClipboard::targetsAtom2Clipboard, $new($HashMap, 2));
				}
				mustSchedule = $nc(XClipboard::targetsAtom2Clipboard)->isEmpty();
				$nc(XClipboard::targetsAtom2Clipboard)->put($($Long::valueOf($nc($(getTargetsPropertyAtom()))->getAtom())), this);
				if (mustSchedule) {
					int64_t var$1 = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
					$XToolkit::addEventDispatcher(var$1, $$new($XClipboard$SelectionNotifyHandler));
				}
			}
			if (mustSchedule) {
				$var($Runnable, var$2, static_cast<$Runnable*>($new($XClipboard$CheckChangeTimerTask)));
				$XToolkit::schedule(var$2, XClipboard::getPollInterval());
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XClipboard::unregisterClipboardViewerChecked() {
	$useLocalCurrentObjectStackCache();
	this->isSelectionNotifyProcessed = false;
	$synchronized(XClipboard::classLock) {
		$nc(XClipboard::targetsAtom2Clipboard)->remove($($Long::valueOf($nc($(getTargetsPropertyAtom()))->getAtom())));
	}
}

void XClipboard::getTargetsDelayed() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t curTime = $System::currentTimeMillis();
			if (this->isSelectionNotifyProcessed || curTime >= (this->convertSelectionTime + $UNIXToolkit::getDatatransferTimeout())) {
				this->convertSelectionTime = curTime;
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = $nc($($nc(this->selection)->getSelectionAtom()))->getAtom();
				$init($XDataTransferer);
				int64_t var$3 = $nc($XDataTransferer::TARGETS_ATOM)->getAtom();
				int64_t var$4 = $nc($(getTargetsPropertyAtom()))->getAtom();
				$XlibWrapper::XConvertSelection(var$1, var$2, var$3, var$4, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), $XConstants::CurrentTime);
				this->isSelectionNotifyProcessed = false;
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XClipboard::checkChange($XSelectionEvent* xse) {
	$useLocalCurrentObjectStackCache();
	int64_t propertyAtom = $nc(xse)->get_property();
	if (propertyAtom != $nc($(getTargetsPropertyAtom()))->getAtom()) {
		return;
	}
	$var($XAtom, selectionAtom, $XAtom::get(xse->get_selection()));
	$var($XSelection, changedSelection, $XSelection::getSelection(selectionAtom));
	if (nullptr == changedSelection || changedSelection != this->selection) {
		return;
	}
	this->isSelectionNotifyProcessed = true;
	if ($nc(this->selection)->isOwner()) {
		return;
	}
	$var($longs, formats, nullptr);
	if (propertyAtom == $XConstants::None) {
		$assign(formats, $new($longs, 0));
	} else {
		int64_t var$0 = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
		$var($WindowPropertyGetter, targetsGetter, $new($WindowPropertyGetter, var$0, $($XAtom::get(propertyAtom)), (int64_t)0, $XSelection::MAX_LENGTH, true, $XConstants::AnyPropertyType));
		{
			$var($Throwable, var$1, nullptr);
			try {
				targetsGetter->execute();
				$assign(formats, $XSelection::getFormats(targetsGetter));
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				targetsGetter->dispose();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	$XToolkit::awtUnlock();
	{
		$var($Throwable, var$3, nullptr);
		try {
			checkChange(formats);
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			$XToolkit::awtLock();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
}

void clinit$XClipboard($Class* class$) {
	$assignStatic(XClipboard::classLock, $new($Object));
}

XClipboard::XClipboard() {
}

$Class* XClipboard::load$($String* name, bool initialize) {
	$loadClass(XClipboard, name, initialize, &_XClipboard_ClassInfo_, clinit$XClipboard, allocate$XClipboard);
	return class$;
}

$Class* XClipboard::class$ = nullptr;

		} // X11
	} // awt
} // sun