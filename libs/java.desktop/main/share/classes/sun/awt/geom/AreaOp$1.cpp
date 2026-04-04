#include <sun/awt/geom/AreaOp$1.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Curve = ::sun::awt::geom::Curve;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

void AreaOp$1::init$() {
}

int32_t AreaOp$1::compare($Edge* o1, $Edge* o2) {
	$useLocalObjectStack();
	$var($Curve, c1, $nc(o1)->getCurve());
	$var($Curve, c2, $nc(o2)->getCurve());
	double v1 = 0.0;
	double v2 = 0.0;
	double var$0 = v1 = $nc(c1)->getYTop();
	if (var$0 == (v2 = $nc(c2)->getYTop())) {
		double var$1 = v1 = c1->getXTop();
		if (var$1 == (v2 = c2->getXTop())) {
			return 0;
		}
	}
	if (v1 < v2) {
		return -1;
	}
	return 1;
}

int32_t AreaOp$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Edge, o1), $cast($Edge, o2));
}

AreaOp$1::AreaOp$1() {
}

$Class* AreaOp$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AreaOp$1, init$, void)},
		{"compare", "(Lsun/awt/geom/Edge;Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC, $virtualMethod(AreaOp$1, compare, int32_t, $Edge*, $Edge*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AreaOp$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.geom.AreaOp",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.geom.AreaOp$1",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/awt/geom/Edge;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.geom.AreaOp"
	};
	$loadClass(AreaOp$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$1);
	});
	return class$;
}

$Class* AreaOp$1::class$ = nullptr;

		} // geom
	} // awt
} // sun