#include <sun/awt/geom/AreaOp$AddOp.h>
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

void AreaOp$AddOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$AddOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft || inRight);
}

AreaOp$AddOp::AreaOp$AddOp() {
}

$Class* AreaOp$AddOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AreaOp$AddOp, init$, void)},
		{"newClassification", "(ZZ)Z", nullptr, $PUBLIC, $virtualMethod(AreaOp$AddOp, newClassification, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$AddOp", "sun.awt.geom.AreaOp", "AddOp", $PUBLIC | $STATIC},
		{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.geom.AreaOp$AddOp",
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
	$loadClass(AreaOp$AddOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$AddOp);
	});
	return class$;
}

$Class* AreaOp$AddOp::class$ = nullptr;

		} // geom
	} // awt
} // sun