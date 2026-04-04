#include <sun/awt/geom/AreaOp$IntOp.h>
#include <sun/awt/geom/AreaOp$CAGOp.h>
#include <sun/awt/geom/AreaOp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp$CAGOp = ::sun::awt::geom::AreaOp$CAGOp;

namespace sun {
	namespace awt {
		namespace geom {

void AreaOp$IntOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$IntOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft && inRight);
}

AreaOp$IntOp::AreaOp$IntOp() {
}

$Class* AreaOp$IntOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AreaOp$IntOp, init$, void)},
		{"newClassification", "(ZZ)Z", nullptr, $PUBLIC, $virtualMethod(AreaOp$IntOp, newClassification, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$IntOp", "sun.awt.geom.AreaOp", "IntOp", $PUBLIC | $STATIC},
		{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.geom.AreaOp$IntOp",
		"sun.awt.geom.AreaOp$CAGOp",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.geom.AreaOp"
	};
	$loadClass(AreaOp$IntOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$IntOp);
	});
	return class$;
}

$Class* AreaOp$IntOp::class$ = nullptr;

		} // geom
	} // awt
} // sun