#include <sun/java2d/d3d/D3DRenderQueue$1.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DRenderQueue$1::init$() {
}

void D3DRenderQueue$1::run() {
	$init($D3DRenderQueue);
	$assignStatic($D3DRenderQueue::rqThread, $Thread::currentThread());
}

D3DRenderQueue$1::D3DRenderQueue$1() {
}

$Class* D3DRenderQueue$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D3DRenderQueue$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DRenderQueue$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DRenderQueue",
		"getInstance",
		"()Lsun/java2d/d3d/D3DRenderQueue;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DRenderQueue$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DRenderQueue$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DRenderQueue"
	};
	$loadClass(D3DRenderQueue$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DRenderQueue$1);
	});
	return class$;
}

$Class* D3DRenderQueue$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun