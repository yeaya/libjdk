#include <sun/java2d/d3d/D3DGraphicsDevice$D3DFSWindowAdapter.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$D3DFSWindowAdapter::init$() {
	$WindowAdapter::init$();
}

void D3DGraphicsDevice$D3DFSWindowAdapter::windowDeactivated($WindowEvent* e) {
	$$nc($D3DRenderQueue::getInstance())->restoreDevices();
}

void D3DGraphicsDevice$D3DFSWindowAdapter::windowActivated($WindowEvent* e) {
	$$nc($D3DRenderQueue::getInstance())->restoreDevices();
}

D3DGraphicsDevice$D3DFSWindowAdapter::D3DGraphicsDevice$D3DFSWindowAdapter() {
}

$Class* D3DGraphicsDevice$D3DFSWindowAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(D3DGraphicsDevice$D3DFSWindowAdapter, init$, void)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$D3DFSWindowAdapter, windowActivated, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$D3DFSWindowAdapter, windowDeactivated, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter", "sun.java2d.d3d.D3DGraphicsDevice", "D3DFSWindowAdapter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DGraphicsDevice"
	};
	$loadClass(D3DGraphicsDevice$D3DFSWindowAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(D3DGraphicsDevice$D3DFSWindowAdapter));
	});
	return class$;
}

$Class* D3DGraphicsDevice$D3DFSWindowAdapter::class$ = nullptr;

		} // d3d
	} // java2d
} // sun