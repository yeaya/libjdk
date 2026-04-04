#include <sun/java2d/loops/GraphicsPrimitiveMgr$1.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

void GraphicsPrimitiveMgr$1::init$() {
}

int32_t GraphicsPrimitiveMgr$1::compare($GraphicsPrimitive* o1, $GraphicsPrimitive* o2) {
	int32_t id1 = $nc(o1)->getUniqueID();
	int32_t id2 = $nc(o2)->getUniqueID();
	return (id1 == id2 ? 0 : (id1 < id2 ? -1 : 1));
}

int32_t GraphicsPrimitiveMgr$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($GraphicsPrimitive, o1), $cast($GraphicsPrimitive, o2));
}

GraphicsPrimitiveMgr$1::GraphicsPrimitiveMgr$1() {
}

$Class* GraphicsPrimitiveMgr$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GraphicsPrimitiveMgr$1, init$, void)},
		{"compare", "(Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/GraphicsPrimitive;)I", nullptr, $PUBLIC, $virtualMethod(GraphicsPrimitiveMgr$1, compare, int32_t, $GraphicsPrimitive*, $GraphicsPrimitive*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GraphicsPrimitiveMgr$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.loops.GraphicsPrimitiveMgr",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.GraphicsPrimitiveMgr$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.GraphicsPrimitiveMgr$1",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/java2d/loops/GraphicsPrimitive;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.GraphicsPrimitiveMgr"
	};
	$loadClass(GraphicsPrimitiveMgr$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitiveMgr$1);
	});
	return class$;
}

$Class* GraphicsPrimitiveMgr$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun