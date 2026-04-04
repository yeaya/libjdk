#include <sun/java2d/loops/GraphicsPrimitive$1.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

void GraphicsPrimitive$1::init$() {
}

$Object* GraphicsPrimitive$1::run() {
	try {
		$init($GraphicsPrimitive);
		return $of($new($FileOutputStream, $GraphicsPrimitive::tracefile));
	} catch ($FileNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

GraphicsPrimitive$1::GraphicsPrimitive$1() {
}

$Class* GraphicsPrimitive$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GraphicsPrimitive$1, init$, void)},
		{"run", "()Ljava/io/FileOutputStream;", nullptr, $PUBLIC, $virtualMethod(GraphicsPrimitive$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.loops.GraphicsPrimitive",
		"getTraceOutputFile",
		"()Ljava/io/PrintStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.GraphicsPrimitive$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.GraphicsPrimitive$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/FileOutputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.GraphicsPrimitive"
	};
	$loadClass(GraphicsPrimitive$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitive$1);
	});
	return class$;
}

$Class* GraphicsPrimitive$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun