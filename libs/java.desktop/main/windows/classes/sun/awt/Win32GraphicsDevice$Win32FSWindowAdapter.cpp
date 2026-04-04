#include <sun/awt/Win32GraphicsDevice$Win32FSWindowAdapter.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <jcpp.h>

#undef ICONIFIED
#undef NORMAL

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $DisplayMode = ::java::awt::DisplayMode;
using $Frame = ::java::awt::Frame;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;

namespace sun {
	namespace awt {

void Win32GraphicsDevice$Win32FSWindowAdapter::init$($Win32GraphicsDevice* device) {
	$WindowAdapter::init$();
	$set(this, device, device);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::setFSWindowsState($Window* other, int32_t state) {
	$useLocalObjectStack();
	$var($GraphicsDeviceArray, gds, $$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getScreenDevices());
	if (other != nullptr) {
		$var($GraphicsDeviceArray, arr$, gds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			if (other == $nc(gd)->getFullScreenWindow()) {
				return;
			}
		}
	}
	{
		$var($GraphicsDeviceArray, arr$, gds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				$var($Window, fsw, $nc(gd)->getFullScreenWindow());
				if ($instanceOf($Frame, fsw)) {
					$cast($Frame, fsw)->setExtendedState(state);
				}
			}
		}
	}
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowDeactivated($WindowEvent* e) {
	setFSWindowsState($($nc(e)->getOppositeWindow()), $Frame::ICONIFIED);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowActivated($WindowEvent* e) {
	setFSWindowsState($($nc(e)->getOppositeWindow()), $Frame::NORMAL);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowIconified($WindowEvent* e) {
	$var($DisplayMode, ddm, $nc(this->device)->defaultDisplayMode);
	if (ddm != nullptr) {
		$set(this, dm, this->device->getDisplayMode());
		$nc(this->device)->setDisplayMode(ddm);
	}
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowDeiconified($WindowEvent* e) {
	if (this->dm != nullptr) {
		$nc(this->device)->setDisplayMode(this->dm);
		$set(this, dm, nullptr);
	}
}

Win32GraphicsDevice$Win32FSWindowAdapter::Win32GraphicsDevice$Win32FSWindowAdapter() {
}

$Class* Win32GraphicsDevice$Win32FSWindowAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"device", "Lsun/awt/Win32GraphicsDevice;", nullptr, $PRIVATE, $field(Win32GraphicsDevice$Win32FSWindowAdapter, device)},
		{"dm", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(Win32GraphicsDevice$Win32FSWindowAdapter, dm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/Win32GraphicsDevice;)V", nullptr, 0, $method(Win32GraphicsDevice$Win32FSWindowAdapter, init$, void, $Win32GraphicsDevice*)},
		{"setFSWindowsState", "(Ljava/awt/Window;I)V", nullptr, $PRIVATE, $method(Win32GraphicsDevice$Win32FSWindowAdapter, setFSWindowsState, void, $Window*, int32_t)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(Win32GraphicsDevice$Win32FSWindowAdapter, windowActivated, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(Win32GraphicsDevice$Win32FSWindowAdapter, windowDeactivated, void, $WindowEvent*)},
		{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(Win32GraphicsDevice$Win32FSWindowAdapter, windowDeiconified, void, $WindowEvent*)},
		{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(Win32GraphicsDevice$Win32FSWindowAdapter, windowIconified, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter", "sun.awt.Win32GraphicsDevice", "Win32FSWindowAdapter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.Win32GraphicsDevice"
	};
	$loadClass(Win32GraphicsDevice$Win32FSWindowAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Win32GraphicsDevice$Win32FSWindowAdapter));
	});
	return class$;
}

$Class* Win32GraphicsDevice$Win32FSWindowAdapter::class$ = nullptr;

	} // awt
} // sun