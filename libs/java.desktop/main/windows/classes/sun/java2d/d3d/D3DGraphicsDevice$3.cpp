#include <sun/java2d/d3d/D3DGraphicsDevice$3.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$3::init$($D3DGraphicsDevice* this$0, int32_t val$screen) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$3::run() {
	$D3DGraphicsDevice::exitFullScreenExclusiveNative(this->val$screen);
}

D3DGraphicsDevice$3::D3DGraphicsDevice$3() {
}

$Class* D3DGraphicsDevice$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3, this$0)},
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3, val$screen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;I)V", "()V", 0, $method(D3DGraphicsDevice$3, init$, void, $D3DGraphicsDevice*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"exitFullScreenExclusive",
		"(ILjava/awt/peer/WindowPeer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$3",
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
		"sun.java2d.d3d.D3DGraphicsDevice"
	};
	$loadClass(D3DGraphicsDevice$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$3);
	});
	return class$;
}

$Class* D3DGraphicsDevice$3::class$ = nullptr;

		} // d3d
	} // java2d
} // sun