#include <sun/java2d/marlin/RendererStats$RendererStatsHolder$1.h>
#include <sun/java2d/marlin/RendererStats$RendererStatsHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RendererStats$RendererStatsHolder = ::sun::java2d::marlin::RendererStats$RendererStatsHolder;

namespace sun {
	namespace java2d {
		namespace marlin {

void RendererStats$RendererStatsHolder$1::init$($RendererStats$RendererStatsHolder* this$0) {
	$set(this, this$0, this$0);
}

void RendererStats$RendererStatsHolder$1::run() {
	this->this$0->dump();
}

RendererStats$RendererStatsHolder$1::RendererStats$RendererStatsHolder$1() {
}

$Class* RendererStats$RendererStatsHolder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $FINAL | $SYNTHETIC, $field(RendererStats$RendererStatsHolder$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;)V", nullptr, 0, $method(RendererStats$RendererStatsHolder$1, init$, void, $RendererStats$RendererStatsHolder*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RendererStats$RendererStatsHolder$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.marlin.RendererStats$RendererStatsHolder",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.RendererStats$RendererStatsHolder", "sun.java2d.marlin.RendererStats", "RendererStatsHolder", $STATIC | $FINAL},
		{"sun.java2d.marlin.RendererStats$RendererStatsHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.marlin.RendererStats$RendererStatsHolder$1",
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
		"sun.java2d.marlin.RendererStats"
	};
	$loadClass(RendererStats$RendererStatsHolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RendererStats$RendererStatsHolder$1);
	});
	return class$;
}

$Class* RendererStats$RendererStatsHolder$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun