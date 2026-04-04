#include <sun/java2d/d3d/D3DGraphicsDevice$7.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$3Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$3Result = ::sun::java2d::d3d::D3DGraphicsDevice$3Result;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$7::init$($D3DGraphicsDevice* this$0, $D3DGraphicsDevice$3Result* val$res) {
	$set(this, this$0, this$0);
	$set(this, val$res, val$res);
}

void D3DGraphicsDevice$7::run() {
	$nc(this->val$res)->mem = $D3DGraphicsDevice::getAvailableAcceleratedMemoryNative(this->this$0->getScreen());
}

D3DGraphicsDevice$7::D3DGraphicsDevice$7() {
}

$Class* D3DGraphicsDevice$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$7, this$0)},
		{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$3Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$7, val$res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/java2d/d3d/D3DGraphicsDevice$3Result;)V", "()V", 0, $method(D3DGraphicsDevice$7, init$, void, $D3DGraphicsDevice*, $D3DGraphicsDevice$3Result*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsDevice$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"getAvailableAcceleratedMemory",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$7",
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
	$loadClass(D3DGraphicsDevice$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$7);
	});
	return class$;
}

$Class* D3DGraphicsDevice$7::class$ = nullptr;

		} // d3d
	} // java2d
} // sun