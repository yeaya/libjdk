#include <sun/java2d/loops/GraphicsPrimitiveMgr$PrimitiveSpec.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

void GraphicsPrimitiveMgr$PrimitiveSpec::init$() {
}

GraphicsPrimitiveMgr$PrimitiveSpec::GraphicsPrimitiveMgr$PrimitiveSpec() {
}

$Class* GraphicsPrimitiveMgr$PrimitiveSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uniqueID", "I", nullptr, $PUBLIC, $field(GraphicsPrimitiveMgr$PrimitiveSpec, uniqueID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsPrimitiveMgr$PrimitiveSpec, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec", "sun.java2d.loops.GraphicsPrimitiveMgr", "PrimitiveSpec", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.GraphicsPrimitiveMgr"
	};
	$loadClass(GraphicsPrimitiveMgr$PrimitiveSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitiveMgr$PrimitiveSpec);
	});
	return class$;
}

$Class* GraphicsPrimitiveMgr$PrimitiveSpec::class$ = nullptr;

		} // loops
	} // java2d
} // sun