#include <sun/awt/X11/XSelection$IncrementalDataProvider.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef MAX_PROPERTY_SIZE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Native = ::sun::awt::X11::Native;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

bool XSelection$IncrementalDataProvider::$assertionsDisabled = false;

void XSelection$IncrementalDataProvider::init$(int64_t requestor, int64_t property, int64_t target, int32_t format, $bytes* data) {
	$useLocalObjectStack();
	this->offset = 0;
	if (format != 8) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported format: "_s, $$str(format)}));
	}
	this->requestor = requestor;
	this->property = property;
	this->target = target;
	this->format = format;
	$set(this, data, data);
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	$var($Throwable, var$0, nullptr);
	try {
		$XToolkit::awtLock();
		$var($Throwable, var$1, nullptr);
		try {
			$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), requestor, wattr->pData);
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSelectInput(var$2, requestor, wattr->get_your_event_mask() | $XConstants::PropertyChangeMask);
		} catch ($Throwable& var$3) {
			$assign(var$1, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		wattr->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$XToolkit::addEventDispatcher(requestor, this);
}

void XSelection$IncrementalDataProvider::dispatchEvent($XEvent* ev) {
	$useLocalObjectStack();
	$var($XPropertyEvent, xpe, nullptr);
	switch ($nc(ev)->get_type()) {
	case $XConstants::PropertyNotify:
		{
			$assign(xpe, ev->get_xproperty());
			bool var$1 = $nc(xpe)->get_window() == this->requestor;
			bool var$0 = var$1 && xpe->get_state() == $XConstants::PropertyDelete;
			if (var$0 && xpe->get_atom() == this->property) {
				int32_t count = $nc(this->data)->length - this->offset;
				int64_t nativeDataPtr = 0;
				$init($XSelection);
				if (count > $XSelection::MAX_PROPERTY_SIZE) {
					count = $XSelection::MAX_PROPERTY_SIZE;
				}
				if (count > 0) {
					$init($XlibWrapper);
					nativeDataPtr = $nc($XlibWrapper::unsafe)->allocateMemory(count);
					for (int32_t i = 0; i < count; ++i) {
						$Native::putByte(nativeDataPtr + i, this->data->get(this->offset + i));
					}
				} else {
					if (!XSelection$IncrementalDataProvider::$assertionsDisabled && !(count == 0)) {
						$throwNew($AssertionError);
					}
					$XToolkit::removeEventDispatcher(this->requestor, this);
				}
				$XToolkit::awtLock();
				$var($Throwable, var$2, nullptr);
				try {
					$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), this->requestor, this->property, this->target, this->format, $XConstants::PropModeReplace, nativeDataPtr, count);
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (nativeDataPtr != 0) {
					$init($XlibWrapper);
					$nc($XlibWrapper::unsafe)->freeMemory(nativeDataPtr);
					nativeDataPtr = 0;
				}
				this->offset += count;
			}
		}
	}
}

void XSelection$IncrementalDataProvider::clinit$($Class* clazz) {
	$load($XSelection);
	XSelection$IncrementalDataProvider::$assertionsDisabled = !$XSelection::class$->desiredAssertionStatus();
}

XSelection$IncrementalDataProvider::XSelection$IncrementalDataProvider() {
}

$Class* XSelection$IncrementalDataProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XSelection$IncrementalDataProvider, $assertionsDisabled)},
		{"requestor", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, requestor)},
		{"property", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, property)},
		{"target", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, target)},
		{"format", "I", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, format)},
		{"data", "[B", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, data)},
		{"offset", "I", nullptr, $PRIVATE, $field(XSelection$IncrementalDataProvider, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJJI[B)V", nullptr, $PUBLIC, $method(XSelection$IncrementalDataProvider, init$, void, int64_t, int64_t, int64_t, int32_t, $bytes*)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XSelection$IncrementalDataProvider, dispatchEvent, void, $XEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XSelection$IncrementalDataProvider", "sun.awt.X11.XSelection", "IncrementalDataProvider", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XSelection$IncrementalDataProvider",
		"java.lang.Object",
		"sun.awt.X11.XEventDispatcher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XSelection"
	};
	$loadClass(XSelection$IncrementalDataProvider, name, initialize, &classInfo$$, XSelection$IncrementalDataProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XSelection$IncrementalDataProvider);
	});
	return class$;
}

$Class* XSelection$IncrementalDataProvider::class$ = nullptr;

		} // X11
	} // awt
} // sun