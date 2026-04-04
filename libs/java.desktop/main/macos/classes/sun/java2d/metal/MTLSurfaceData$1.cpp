#include <sun/java2d/metal/MTLSurfaceData$1.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLSurfaceData$1::init$($MTLSurfaceData* this$0, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
	this->val$height = val$height;
}

void MTLSurfaceData$1::run() {
	this->this$0->initSurfaceNow(this->val$width, this->val$height);
}

MTLSurfaceData$1::MTLSurfaceData$1() {
}

$Class* MTLSurfaceData$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/metal/MTLSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, this$0)},
		{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, val$height)},
		{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, val$width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/metal/MTLSurfaceData;II)V", "()V", 0, $method(MTLSurfaceData$1, init$, void, $MTLSurfaceData*, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.metal.MTLSurfaceData",
		"initSurface",
		"(II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLSurfaceData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLSurfaceData$1",
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
		"sun.java2d.metal.MTLSurfaceData"
	};
	$loadClass(MTLSurfaceData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLSurfaceData$1);
	});
	return class$;
}

$Class* MTLSurfaceData$1::class$ = nullptr;

		} // metal
	} // java2d
} // sun