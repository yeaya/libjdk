#include <sun/awt/windows/WTaskbarPeer.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/awt/Taskbar$State.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WTaskbarPeer$1.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE
#undef WINDOWS_7

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $Taskbar$State = ::java::awt::Taskbar$State;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Callable = ::java::util::concurrent::Callable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $OSInfo = ::sun::awt::OSInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $WTaskbarPeer$1 = ::sun::awt::windows::WTaskbarPeer$1;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

class WTaskbarPeer$$Lambda$lambda$init$0 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Callable)
public:
	void init$() {
	}
	virtual $Object* call() override {
		return $of(WTaskbarPeer::lambda$init$0());
	}
};
$Class* WTaskbarPeer$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WTaskbarPeer$$Lambda$lambda$init$0, init$, void)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer$$Lambda$lambda$init$0, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$
	};
	$loadClass(WTaskbarPeer$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$init$0::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, $ints* buffer, $Image* image) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		$set(this, buffer, buffer);
		$set(this, image, image);
	}
	virtual $Object* call() override {
		return $nc(inst$)->lambda$setWindowIconBadge$1(wp, buffer, image);
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	$ints* buffer = nullptr;
	$Image* image = nullptr;
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, inst$)},
		{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, wp)},
		{"buffer", "[I", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, buffer)},
		{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;[ILjava/awt/Image;)V", nullptr, $PUBLIC, $method(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, init$, void, WTaskbarPeer*, $WWindowPeer*, $ints*, $Image*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1);
	});
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, int32_t value) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		this->value = value;
	}
	virtual $Object* call() override {
		return $nc(inst$)->lambda$setWindowProgressValue$2(wp, value);
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	int32_t value = 0;
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, inst$)},
		{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, wp)},
		{"value", "I", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;I)V", nullptr, $PUBLIC, $method(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, init$, void, WTaskbarPeer*, $WWindowPeer*, int32_t)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2);
	});
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, $Taskbar$State* state) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		$set(this, state, state);
	}
	virtual $Object* call() override {
		return $nc(inst$)->lambda$setWindowProgressState$3(wp, state);
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	$Taskbar$State* state = nullptr;
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, inst$)},
		{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, wp)},
		{"state", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC, $method(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, init$, void, WTaskbarPeer*, $WWindowPeer*, $Taskbar$State*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3);
	});
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::class$ = nullptr;

bool WTaskbarPeer::supported = false;
bool WTaskbarPeer::initExecuted = false;

void WTaskbarPeer::init() {
	$init(WTaskbarPeer);
	$synchronized(class$) {
		$useLocalObjectStack();
		if (!WTaskbarPeer::initExecuted) {
			$init($OSInfo);
			bool var$0 = $$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_7) >= 0;
			WTaskbarPeer::supported = var$0 && $$sure($Boolean, $ShellFolder::invoke($$new(WTaskbarPeer$$Lambda$lambda$init$0)))->booleanValue();
		}
		WTaskbarPeer::initExecuted = true;
	}
}

bool WTaskbarPeer::isTaskbarSupported() {
	$init(WTaskbarPeer);
	init();
	return WTaskbarPeer::supported;
}

void WTaskbarPeer::init$() {
	init();
}

bool WTaskbarPeer::isSupported($Taskbar$Feature* feature) {
	$init($WTaskbarPeer$1);
	switch ($nc($WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->get($nc((feature))->ordinal())) {
	case 1:
	case 2:
	case 3:
		return WTaskbarPeer::supported;
	case 4:
		return true;
	default:
		return false;
	}
}

$ints* WTaskbarPeer::imageToArray($Image* image) {
	$init(WTaskbarPeer);
	$useLocalObjectStack();
	if (image == nullptr) {
		return nullptr;
	}
	int32_t w = $nc(image)->getWidth(nullptr);
	int32_t h = image->getHeight(nullptr);
	if (w < 0 || h < 0) {
		return nullptr;
	}
	$var($BufferedImage, bimg, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics2D, g2, bimg->createGraphics());
	$init($AlphaComposite);
	$nc(g2)->setComposite($AlphaComposite::Src);
	g2->drawImage(image, 0, 0, nullptr);
	g2->dispose();
	return $$sure($DataBufferInt, $$nc(bimg->getRaster())->getDataBuffer())->getData();
}

void WTaskbarPeer::setWindowIconBadge($Window* window, $Image* image) {
	$useLocalObjectStack();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(window)));
	if (wp != nullptr) {
		$var($ints, buffer, imageToArray(image));
		$ShellFolder::invoke($$new(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, this, wp, buffer, image));
	}
}

void WTaskbarPeer::requestWindowUserAttention($Window* window) {
	$useLocalObjectStack();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(window)));
	if (wp != nullptr) {
		flashWindow(wp->getHWnd());
	}
}

void WTaskbarPeer::setWindowProgressValue($Window* window, int32_t value) {
	$useLocalObjectStack();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(window)));
	if (wp != nullptr) {
		$ShellFolder::invoke($$new(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, this, wp, value));
	}
}

void WTaskbarPeer::setWindowProgressState($Window* window, $Taskbar$State* state) {
	$useLocalObjectStack();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(window)));
	if (wp != nullptr) {
		$ShellFolder::invoke($$new(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, this, wp, state));
	}
}

bool WTaskbarPeer::nativeInit() {
	$init(WTaskbarPeer);
	$prepareNativeStatic(nativeInit, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void WTaskbarPeer::setProgressValue(int64_t hwnd, int32_t value) {
	$prepareNative(setProgressValue, void, int64_t hwnd, int32_t value);
	$invokeNative(hwnd, value);
	$finishNative();
}

void WTaskbarPeer::setProgressState(int64_t hwnd, $Taskbar$State* state) {
	$prepareNative(setProgressState, void, int64_t hwnd, $Taskbar$State* state);
	$invokeNative(hwnd, state);
	$finishNative();
}

void WTaskbarPeer::setOverlayIcon(int64_t hwnd, $ints* badge, int32_t width, int32_t height) {
	$prepareNative(setOverlayIcon, void, int64_t hwnd, $ints* badge, int32_t width, int32_t height);
	$invokeNative(hwnd, badge, width, height);
	$finishNative();
}

void WTaskbarPeer::flashWindow(int64_t hWnd) {
	$prepareNative(flashWindow, void, int64_t hWnd);
	$invokeNative(hWnd);
	$finishNative();
}

$Object* WTaskbarPeer::lambda$setWindowProgressState$3($WWindowPeer* wp, $Taskbar$State* state) {
	setProgressState($nc(wp)->getHWnd(), state);
	return nullptr;
}

$Object* WTaskbarPeer::lambda$setWindowProgressValue$2($WWindowPeer* wp, int32_t value) {
	setProgressValue($nc(wp)->getHWnd(), value);
	return nullptr;
}

$Object* WTaskbarPeer::lambda$setWindowIconBadge$1($WWindowPeer* wp, $ints* buffer, $Image* image) {
	int64_t var$0 = $nc(wp)->getHWnd();
	int32_t var$1 = buffer != nullptr ? $nc(image)->getWidth(nullptr) : 0;
	setOverlayIcon(var$0, buffer, var$1, buffer != nullptr ? $nc(image)->getHeight(nullptr) : 0);
	return nullptr;
}

$Boolean* WTaskbarPeer::lambda$init$0() {
	$init(WTaskbarPeer);
	return $Boolean::valueOf(nativeInit());
}

void WTaskbarPeer::clinit$($Class* clazz) {
	WTaskbarPeer::supported = false;
	WTaskbarPeer::initExecuted = false;
}

WTaskbarPeer::WTaskbarPeer() {
}

$Class* WTaskbarPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WTaskbarPeer$$Lambda$lambda$init$0")) {
			return WTaskbarPeer$$Lambda$lambda$init$0::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1")) {
			return WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2")) {
			return WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3")) {
			return WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"supported", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WTaskbarPeer, supported)},
		{"initExecuted", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WTaskbarPeer, initExecuted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WTaskbarPeer, init$, void)},
		{"flashWindow", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(WTaskbarPeer, flashWindow, void, int64_t)},
		{"imageToArray", "(Ljava/awt/Image;)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(WTaskbarPeer, imageToArray, $ints*, $Image*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(WTaskbarPeer, init, void)},
		{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer, isSupported, bool, $Taskbar$Feature*)},
		{"isTaskbarSupported", "()Z", nullptr, $STATIC, $staticMethod(WTaskbarPeer, isTaskbarSupported, bool)},
		{"lambda$init$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WTaskbarPeer, lambda$init$0, $Boolean*), "java.lang.Exception"},
		{"lambda$setWindowIconBadge$1", "(Lsun/awt/windows/WWindowPeer;[ILjava/awt/Image;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(WTaskbarPeer, lambda$setWindowIconBadge$1, $Object*, $WWindowPeer*, $ints*, $Image*), "java.lang.Exception"},
		{"lambda$setWindowProgressState$3", "(Lsun/awt/windows/WWindowPeer;Ljava/awt/Taskbar$State;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(WTaskbarPeer, lambda$setWindowProgressState$3, $Object*, $WWindowPeer*, $Taskbar$State*), "java.lang.Exception"},
		{"lambda$setWindowProgressValue$2", "(Lsun/awt/windows/WWindowPeer;I)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(WTaskbarPeer, lambda$setWindowProgressValue$2, $Object*, $WWindowPeer*, int32_t), "java.lang.Exception"},
		{"nativeInit", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WTaskbarPeer, nativeInit, bool)},
		{"requestWindowUserAttention", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer, requestWindowUserAttention, void, $Window*)},
		{"setOverlayIcon", "(J[III)V", nullptr, $PRIVATE | $NATIVE, $method(WTaskbarPeer, setOverlayIcon, void, int64_t, $ints*, int32_t, int32_t)},
		{"setProgressState", "(JLjava/awt/Taskbar$State;)V", nullptr, $PRIVATE | $NATIVE, $method(WTaskbarPeer, setProgressState, void, int64_t, $Taskbar$State*)},
		{"setProgressValue", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(WTaskbarPeer, setProgressValue, void, int64_t, int32_t)},
		{"setWindowIconBadge", "(Ljava/awt/Window;Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer, setWindowIconBadge, void, $Window*, $Image*)},
		{"setWindowProgressState", "(Ljava/awt/Window;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer, setWindowProgressState, void, $Window*, $Taskbar$State*)},
		{"setWindowProgressValue", "(Ljava/awt/Window;I)V", nullptr, $PUBLIC, $virtualMethod(WTaskbarPeer, setWindowProgressValue, void, $Window*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WTaskbarPeer",
		"java.lang.Object",
		"java.awt.peer.TaskbarPeer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WTaskbarPeer$1"
	};
	$loadClass(WTaskbarPeer, name, initialize, &classInfo$$, WTaskbarPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer);
	});
	return class$;
}

$Class* WTaskbarPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun