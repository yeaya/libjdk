#include <sun/java2d/d3d/D3DGraphicsDevice$8.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$4Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$4Result = ::sun::java2d::d3d::D3DGraphicsDevice$4Result;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$8::init$($D3DGraphicsDevice$4Result* val$res, int32_t val$screen) {
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$8::run() {
	$nc(this->val$res)->avail = $D3DGraphicsDevice::isD3DAvailableOnDeviceNative(this->val$screen);
}

D3DGraphicsDevice$8::D3DGraphicsDevice$8() {
}

$Class* D3DGraphicsDevice$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$8, val$screen)},
		{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$4Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$8, val$res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice$4Result;I)V", "()V", 0, $method(D3DGraphicsDevice$8, init$, void, $D3DGraphicsDevice$4Result*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$8, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"isD3DAvailableOnDevice",
		"(I)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$8",
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
	$loadClass(D3DGraphicsDevice$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$8);
	});
	return class$;
}

$Class* D3DGraphicsDevice$8::class$ = nullptr;

		} // d3d
	} // java2d
} // sun