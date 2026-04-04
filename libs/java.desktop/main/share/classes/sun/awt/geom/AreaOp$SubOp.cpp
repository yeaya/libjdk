#include <sun/awt/geom/AreaOp$SubOp.h>
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

void AreaOp$SubOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$SubOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft && !inRight);
}

AreaOp$SubOp::AreaOp$SubOp() {
}

$Class* AreaOp$SubOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AreaOp$SubOp, init$, void)},
		{"newClassification", "(ZZ)Z", nullptr, $PUBLIC, $virtualMethod(AreaOp$SubOp, newClassification, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$SubOp", "sun.awt.geom.AreaOp", "SubOp", $PUBLIC | $STATIC},
		{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.geom.AreaOp$SubOp",
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
	$loadClass(AreaOp$SubOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$SubOp);
	});
	return class$;
}

$Class* AreaOp$SubOp::class$ = nullptr;

		} // geom
	} // awt
} // sun