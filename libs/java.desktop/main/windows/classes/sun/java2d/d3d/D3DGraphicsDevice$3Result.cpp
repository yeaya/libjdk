#include <sun/java2d/d3d/D3DGraphicsDevice$3Result.h>
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

void D3DGraphicsDevice$3Result::init$($D3DGraphicsDevice* this$0) {
	$set(this, this$0, this$0);
	this->mem = 0;
}

D3DGraphicsDevice$3Result::D3DGraphicsDevice$3Result() {
}

$Class* D3DGraphicsDevice$3Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3Result, this$0)},
		{"mem", "J", nullptr, 0, $field(D3DGraphicsDevice$3Result, mem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;)V", nullptr, 0, $method(D3DGraphicsDevice$3Result, init$, void, $D3DGraphicsDevice*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"getAvailableAcceleratedMemory",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$3Result", nullptr, "Result", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$3Result",
		"java.lang.Object",
		nullptr,
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
	$loadClass(D3DGraphicsDevice$3Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$3Result);
	});
	return class$;
}

$Class* D3DGraphicsDevice$3Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun