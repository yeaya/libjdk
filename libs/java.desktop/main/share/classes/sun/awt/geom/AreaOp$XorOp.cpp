#include <sun/awt/geom/AreaOp$XorOp.h>
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

void AreaOp$XorOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$XorOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft != inRight);
}

AreaOp$XorOp::AreaOp$XorOp() {
}

$Class* AreaOp$XorOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AreaOp$XorOp, init$, void)},
		{"newClassification", "(ZZ)Z", nullptr, $PUBLIC, $virtualMethod(AreaOp$XorOp, newClassification, bool, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$XorOp", "sun.awt.geom.AreaOp", "XorOp", $PUBLIC | $STATIC},
		{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.geom.AreaOp$XorOp",
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
	$loadClass(AreaOp$XorOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$XorOp);
	});
	return class$;
}

$Class* AreaOp$XorOp::class$ = nullptr;

		} // geom
	} // awt
} // sun