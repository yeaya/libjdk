#include <sun/awt/windows/WComponentPeer$1.h>
#include <java/awt/Container.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $D3DSurfaceData$D3DWindowSurfaceData = ::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

void WComponentPeer$1::init$($WComponentPeer* this$0, $Container* val$cont) {
	$set(this, this$0, this$0);
	$set(this, val$cont, val$cont);
}

void WComponentPeer$1::run() {
	$nc(this->val$cont)->invalidate();
	this->val$cont->validate();
	if ($instanceOf($D3DSurfaceData$D3DWindowSurfaceData, this->this$0->surfaceData) || $instanceOf($OGLSurfaceData, this->this$0->surfaceData)) {
		try {
			this->this$0->replaceSurfaceData();
		} catch ($InvalidPipeException& e) {
		}
	}
}

WComponentPeer$1::WComponentPeer$1() {
}

$Class* WComponentPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$1, this$0)},
		{"val$cont", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$1, val$cont)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Container;)V", "()V", 0, $method(WComponentPeer$1, init$, void, $WComponentPeer*, $Container*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WComponentPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WComponentPeer",
		"dynamicallyLayoutContainer",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WComponentPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WComponentPeer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WComponentPeer"
	};
	$loadClass(WComponentPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WComponentPeer$1);
	});
	return class$;
}

$Class* WComponentPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun