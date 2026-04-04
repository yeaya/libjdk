#include <sun/java2d/loops/GraphicsPrimitiveMgr$2.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr$PrimitiveSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr$PrimitiveSpec = ::sun::java2d::loops::GraphicsPrimitiveMgr$PrimitiveSpec;

namespace sun {
	namespace java2d {
		namespace loops {

void GraphicsPrimitiveMgr$2::init$() {
}

int32_t GraphicsPrimitiveMgr$2::compare(Object$* o1, Object$* o2) {
	int32_t id1 = $nc($cast($GraphicsPrimitive, o1))->getUniqueID();
	int32_t id2 = $nc($cast($GraphicsPrimitiveMgr$PrimitiveSpec, o2))->uniqueID;
	return (id1 == id2 ? 0 : (id1 < id2 ? -1 : 1));
}

GraphicsPrimitiveMgr$2::GraphicsPrimitiveMgr$2() {
}

$Class* GraphicsPrimitiveMgr$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GraphicsPrimitiveMgr$2, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(GraphicsPrimitiveMgr$2, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.loops.GraphicsPrimitiveMgr",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.GraphicsPrimitiveMgr$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.GraphicsPrimitiveMgr$2",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.GraphicsPrimitiveMgr"
	};
	$loadClass(GraphicsPrimitiveMgr$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitiveMgr$2);
	});
	return class$;
}

$Class* GraphicsPrimitiveMgr$2::class$ = nullptr;

		} // loops
	} // java2d
} // sun