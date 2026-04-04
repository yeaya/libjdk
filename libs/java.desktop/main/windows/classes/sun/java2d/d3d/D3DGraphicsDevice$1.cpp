#include <sun/java2d/d3d/D3DGraphicsDevice$1.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$1Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$1Result = ::sun::java2d::d3d::D3DGraphicsDevice$1Result;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$1::init$($D3DGraphicsDevice$1Result* val$res, int32_t val$screen) {
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$1::run() {
	$nc(this->val$res)->caps = $D3DGraphicsDevice::getDeviceCapsNative(this->val$screen);
	$set(this->val$res, id, $D3DGraphicsDevice::getDeviceIdNative(this->val$screen));
}

D3DGraphicsDevice$1::D3DGraphicsDevice$1() {
}

$Class* D3DGraphicsDevice$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$1, val$screen)},
		{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$1Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$1, val$res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice$1Result;I)V", "()V", 0, $method(D3DGraphicsDevice$1, init$, void, $D3DGraphicsDevice$1Result*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"getDeviceCaps",
		"(I)Lsun/java2d/pipe/hw/ContextCapabilities;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$1",
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
	$loadClass(D3DGraphicsDevice$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$1);
	});
	return class$;
}

$Class* D3DGraphicsDevice$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun