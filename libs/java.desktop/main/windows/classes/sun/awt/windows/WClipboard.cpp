#include <sun/awt/windows/WClipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <sun/awt/windows/WClipboard$1.h>
#include <sun/awt/windows/WDataTransferer.h>
#include <jcpp.h>

#undef CF_LOCALE

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;
using $WClipboard$1 = ::sun::awt::windows::WClipboard$1;
using $WDataTransferer = ::sun::awt::windows::WDataTransferer;

namespace sun {
	namespace awt {
		namespace windows {

void WClipboard::init$() {
	$SunClipboard::init$("System"_s);
}

int64_t WClipboard::getID() {
	return 0;
}

void WClipboard::setContentsNative($Transferable* contents) {
	$useLocalObjectStack();
	$var($Map, formatMap, $$nc($WDataTransferer::getInstance())->getFormatsForTransferable(contents, $(getDefaultFlavorTable())));
	openClipboard(this);
	$var($Throwable, var$0, nullptr);
	try {
		$var($Iterator, i$, $$nc($nc(formatMap)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Long, format, $cast($Long, i$->next()));
			{
				$var($DataFlavor, flavor, $cast($DataFlavor, formatMap->get(format)));
				try {
					$var($bytes, bytes, $$nc($WDataTransferer::getInstance())->translateTransferable(contents, flavor, $nc(format)->longValue()));
					publishClipboardData(format->longValue(), bytes);
				} catch ($IOException& e) {
					$init($DataFlavor);
					if (!($nc(flavor)->isMimeTypeEqual($DataFlavor::javaJVMLocalObjectMimeType) && $instanceOf($NotSerializableException, e))) {
						e->printStackTrace();
					}
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		closeClipboard();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WClipboard::lostSelectionOwnershipImpl() {
	lostOwnershipImpl();
}

void WClipboard::clearNativeContext() {
}

void WClipboard::openClipboard($SunClipboard* newOwner) {
	$prepareNative(openClipboard, void, $SunClipboard* newOwner);
	$invokeNative(newOwner);
	$finishNative();
}

void WClipboard::closeClipboard() {
	$prepareNative(closeClipboard, void);
	$invokeNative();
	$finishNative();
}

void WClipboard::publishClipboardData(int64_t format, $bytes* bytes) {
	$prepareNative(publishClipboardData, void, int64_t format, $bytes* bytes);
	$invokeNative(format, bytes);
	$finishNative();
}

void WClipboard::init() {
	$init(WClipboard);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$longs* WClipboard::getClipboardFormats() {
	$prepareNative(getClipboardFormats, $longs*);
	$var($longs, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$bytes* WClipboard::getClipboardData(int64_t format) {
	$prepareNative(getClipboardData, $bytes*, int64_t format);
	$var($bytes, $ret, $invokeNativeObject(format));
	$finishNative();
	return $ret;
}

void WClipboard::registerClipboardViewerChecked() {
	if (!this->isClipboardViewerRegistered) {
		registerClipboardViewer();
		this->isClipboardViewerRegistered = true;
	}
}

void WClipboard::registerClipboardViewer() {
	$prepareNative(registerClipboardViewer, void);
	$invokeNative();
	$finishNative();
}

void WClipboard::unregisterClipboardViewerChecked() {
}

void WClipboard::handleContentsChanged() {
	$useLocalObjectStack();
	if (!areFlavorListenersRegistered()) {
		return;
	}
	$var($longs, formats, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			openClipboard(nullptr);
			$assign(formats, getClipboardFormats());
		} catch ($IllegalStateException& exc) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		closeClipboard();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	checkChange(formats);
}

$Transferable* WClipboard::createLocaleTransferable($longs* formats) {
	$useLocalObjectStack();
	bool found = false;
	for (int32_t i = 0; i < $nc(formats)->length; ++i) {
		if (formats->get(i) == $WDataTransferer::CF_LOCALE) {
			found = true;
			break;
		}
	}
	if (!found) {
		return nullptr;
	}
	$var($bytes, localeData, nullptr);
	try {
		$assign(localeData, getClipboardData($WDataTransferer::CF_LOCALE));
	} catch ($IOException& ioexc) {
		return nullptr;
	}
	$var($bytes, localeDataFinal, localeData);
	return $new($WClipboard$1, this, localeDataFinal);
}

void WClipboard::clinit$($Class* clazz) {
	{
		WClipboard::init();
	}
}

WClipboard::WClipboard() {
}

$Class* WClipboard::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isClipboardViewerRegistered", "Z", nullptr, $PRIVATE, $field(WClipboard, isClipboardViewerRegistered)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WClipboard, init$, void)},
		{"clearNativeContext", "()V", nullptr, $PROTECTED, $virtualMethod(WClipboard, clearNativeContext, void)},
		{"closeClipboard", "()V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WClipboard, closeClipboard, void)},
		{"createLocaleTransferable", "([J)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, $virtualMethod(WClipboard, createLocaleTransferable, $Transferable*, $longs*), "java.io.IOException"},
		{"getClipboardData", "(J)[B", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WClipboard, getClipboardData, $bytes*, int64_t), "java.io.IOException"},
		{"getClipboardFormats", "()[J", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WClipboard, getClipboardFormats, $longs*)},
		{"getID", "()J", nullptr, $PUBLIC, $virtualMethod(WClipboard, getID, int64_t)},
		{"handleContentsChanged", "()V", nullptr, $PRIVATE, $method(WClipboard, handleContentsChanged, void)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WClipboard, init, void)},
		{"lostSelectionOwnershipImpl", "()V", nullptr, $PRIVATE, $method(WClipboard, lostSelectionOwnershipImpl, void)},
		{"openClipboard", "(Lsun/awt/datatransfer/SunClipboard;)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WClipboard, openClipboard, void, $SunClipboard*), "java.lang.IllegalStateException"},
		{"publishClipboardData", "(J[B)V", nullptr, $PRIVATE | $NATIVE, $method(WClipboard, publishClipboardData, void, int64_t, $bytes*)},
		{"registerClipboardViewer", "()V", nullptr, $PRIVATE | $NATIVE, $method(WClipboard, registerClipboardViewer, void)},
		{"registerClipboardViewerChecked", "()V", nullptr, $PROTECTED, $virtualMethod(WClipboard, registerClipboardViewerChecked, void)},
		{"setContentsNative", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PROTECTED, $virtualMethod(WClipboard, setContentsNative, void, $Transferable*)},
		{"unregisterClipboardViewerChecked", "()V", nullptr, $PROTECTED, $virtualMethod(WClipboard, unregisterClipboardViewerChecked, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WClipboard$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WClipboard",
		"sun.awt.datatransfer.SunClipboard",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WClipboard$1"
	};
	$loadClass(WClipboard, name, initialize, &classInfo$$, WClipboard::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WClipboard));
	});
	return class$;
}

$Class* WClipboard::class$ = nullptr;

		} // windows
	} // awt
} // sun