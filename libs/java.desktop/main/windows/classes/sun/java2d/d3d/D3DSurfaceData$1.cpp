#include <sun/java2d/d3d/D3DSurfaceData$1.h>
#include <sun/java2d/d3d/D3DSurfaceData$1Status.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$1Status = ::sun::java2d::d3d::D3DSurfaceData$1Status;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DSurfaceData$1::init$($D3DSurfaceData* this$0, $D3DSurfaceData$1Status* val$status) {
	$set(this, this$0, this$0);
	$set(this, val$status, val$status);
}

void D3DSurfaceData$1::run() {
	$nc(this->val$status)->success = this->this$0->initSurfaceNow();
}

D3DSurfaceData$1::D3DSurfaceData$1() {
}

$Class* D3DSurfaceData$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1, this$0)},
		{"val$status", "Lsun/java2d/d3d/D3DSurfaceData$1Status;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1, val$status)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData;Lsun/java2d/d3d/D3DSurfaceData$1Status;)V", "()V", 0, $method(D3DSurfaceData$1, init$, void, $D3DSurfaceData*, $D3DSurfaceData$1Status*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(D3DSurfaceData$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DSurfaceData",
		"initSurface",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DSurfaceData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DSurfaceData$1",
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
		"sun.java2d.d3d.D3DSurfaceData"
	};
	$loadClass(D3DSurfaceData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DSurfaceData$1);
	});
	return class$;
}

$Class* D3DSurfaceData$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun