#include <sun/java2d/d3d/D3DGraphicsDevice$1Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsDevice$1Result::init$() {
}

D3DGraphicsDevice$1Result::D3DGraphicsDevice$1Result() {
}

$Class* D3DGraphicsDevice$1Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"caps", "I", nullptr, 0, $field(D3DGraphicsDevice$1Result, caps)},
		{"id", "Ljava/lang/String;", nullptr, 0, $field(D3DGraphicsDevice$1Result, id)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D3DGraphicsDevice$1Result, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.d3d.D3DGraphicsDevice",
		"getDeviceCaps",
		"(I)Lsun/java2d/pipe/hw/ContextCapabilities;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsDevice$1Result", nullptr, "Result", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsDevice$1Result",
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
	$loadClass(D3DGraphicsDevice$1Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsDevice$1Result);
	});
	return class$;
}

$Class* D3DGraphicsDevice$1Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun