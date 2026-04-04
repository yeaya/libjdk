#include <sun/java2d/d3d/D3DGraphicsDevice$4.h>
#include <java/awt/DisplayMode.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$2Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$2Result = ::sun::java2d::d3d::D3DGraphicsDevice$2Result;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$4::init$($D3DGraphicsDevice* this$0, $D3DGraphicsDevice$2Result* val$res, int32_t val$screen) {
	$set(this, this$0, this$0);
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$4::run() {
	$set($nc(this->val$res), dm, $D3DGraphicsDevice::getCurrentDisplayModeNative(this->val$screen));
}

D3DGraphicsDevice$4::D3DGraphicsDevice$4() {
}

$Class* D3DGraphicsDevice$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, this$0)},
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, val$screen)},
		{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$2Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, val$res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/java2d/d3d/D3DGraphicsDevice$2Result;I)V", "()V", 0, $method(D3DGraphicsDevice$4, init$, void, $D3DGraphicsDevice*, $D3DGraphicsDevice$2Result*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"getCurrentDisplayMode",
		"(I)Ljava/awt/DisplayMode;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$4",
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
	$loadClass(D3DGraphicsDevice$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$4);
	});
	return class$;
}

$Class* D3DGraphicsDevice$4::class$ = nullptr;

		} // d3d
	} // java2d
} // sun