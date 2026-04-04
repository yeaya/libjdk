#include <sun/awt/X11/XWrapperBase.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$PlatformLogger* XWrapperBase::log = nullptr;

void XWrapperBase::init$() {
}

$String* XWrapperBase::toString() {
	$useLocalObjectStack();
	$var($String, ret, ""_s);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getName()));
	var$0->append(" = "_s);
	var$0->append($(getFieldsAsString()));
	$plusAssign(ret, $$str(var$0));
	return ret;
}

$String* XWrapperBase::getFieldsAsString() {
	return ""_s;
}

$String* XWrapperBase::getName() {
	return "XWrapperBase"_s;
}

void XWrapperBase::zero() {
	$nc(XWrapperBase::log)->finest("Cleaning memory"_s);
	if (getPData() != 0) {
		$init($XlibWrapper);
		int64_t var$0 = getPData();
		$nc($XlibWrapper::unsafe)->setMemory(var$0, (int64_t)getDataSize(), (int8_t)0);
	}
}

$String* XWrapperBase::getWindow(int64_t window) {
	$var($XBaseWindow, w, $XToolkit::windowToXWindow(window));
	if (w == nullptr) {
		return $Long::toHexString(window);
	} else {
		return w->toString();
	}
}

$Object* XWrapperBase::clone() {
	$init($XlibWrapper);
	int64_t copy = $nc($XlibWrapper::unsafe)->allocateMemory(getDataSize());
	int64_t var$0 = getPData();
	$nc($XlibWrapper::unsafe)->copyMemory(var$0, copy, getDataSize());
	return $new($XEvent, copy);
}

void XWrapperBase::clinit$($Class* clazz) {
	$assignStatic(XWrapperBase::log, $PlatformLogger::getLogger("sun.awt.X11.wrappers"_s));
}

XWrapperBase::XWrapperBase() {
}

$Class* XWrapperBase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $STATIC | $FINAL, $staticField(XWrapperBase, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XWrapperBase, init$, void)},
		{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC, $virtualMethod(XWrapperBase, clone, $Object*)},
		{"getDataSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XWrapperBase, getDataSize, int32_t)},
		{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XWrapperBase, getFieldsAsString, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XWrapperBase, getName, $String*)},
		{"getPData", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XWrapperBase, getPData, int64_t)},
		{"getWindow", "(J)Ljava/lang/String;", nullptr, 0, $virtualMethod(XWrapperBase, getWindow, $String*, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XWrapperBase, toString, $String*)},
		{"zero", "()V", nullptr, $PUBLIC, $virtualMethod(XWrapperBase, zero, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.awt.X11.XWrapperBase",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XWrapperBase, name, initialize, &classInfo$$, XWrapperBase::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XWrapperBase);
	});
	return class$;
}

$Class* XWrapperBase::class$ = nullptr;

		} // X11
	} // awt
} // sun