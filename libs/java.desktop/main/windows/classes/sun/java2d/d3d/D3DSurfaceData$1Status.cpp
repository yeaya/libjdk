#include <sun/java2d/d3d/D3DSurfaceData$1Status.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DSurfaceData$1Status::init$($D3DSurfaceData* this$0) {
	$set(this, this$0, this$0);
	this->success = false;
}

D3DSurfaceData$1Status::D3DSurfaceData$1Status() {
}

$Class* D3DSurfaceData$1Status::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1Status, this$0)},
		{"success", "Z", nullptr, 0, $field(D3DSurfaceData$1Status, success)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData;)V", nullptr, 0, $method(D3DSurfaceData$1Status, init$, void, $D3DSurfaceData*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DSurfaceData",
		"initSurface",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DSurfaceData$1Status", nullptr, "Status", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DSurfaceData$1Status",
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
		"sun.java2d.d3d.D3DSurfaceData"
	};
	$loadClass(D3DSurfaceData$1Status, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DSurfaceData$1Status);
	});
	return class$;
}

$Class* D3DSurfaceData$1Status::class$ = nullptr;

		} // d3d
	} // java2d
} // sun