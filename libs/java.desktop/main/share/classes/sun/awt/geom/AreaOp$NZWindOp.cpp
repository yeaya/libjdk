#include <sun/awt/geom/AreaOp$NZWindOp.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

#undef ETAG_ENTER
#undef ETAG_EXIT
#undef ETAG_IGNORE
#undef RSTAG_INSIDE
#undef RSTAG_OUTSIDE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

void AreaOp$NZWindOp::init$() {
	$AreaOp::init$();
}

void AreaOp$NZWindOp::newRow() {
	this->count = 0;
}

int32_t AreaOp$NZWindOp::classify($Edge* e) {
	int32_t newCount = this->count;
	int32_t type = (newCount == 0 ? $AreaOp::ETAG_ENTER : $AreaOp::ETAG_IGNORE);
	newCount += $$nc($nc(e)->getCurve())->getDirection();
	this->count = newCount;
	return (newCount == 0 ? $AreaOp::ETAG_EXIT : type);
}

int32_t AreaOp$NZWindOp::getState() {
	return ((this->count == 0) ? $AreaOp::RSTAG_OUTSIDE : $AreaOp::RSTAG_INSIDE);
}

AreaOp$NZWindOp::AreaOp$NZWindOp() {
}

$Class* AreaOp$NZWindOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $PRIVATE, $field(AreaOp$NZWindOp, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AreaOp$NZWindOp, init$, void)},
		{"classify", "(Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC, $virtualMethod(AreaOp$NZWindOp, classify, int32_t, $Edge*)},
		{"getState", "()I", nullptr, $PUBLIC, $virtualMethod(AreaOp$NZWindOp, getState, int32_t)},
		{"newRow", "()V", nullptr, $PUBLIC, $virtualMethod(AreaOp$NZWindOp, newRow, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.geom.AreaOp$NZWindOp", "sun.awt.geom.AreaOp", "NZWindOp", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.geom.AreaOp$NZWindOp",
		"sun.awt.geom.AreaOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.geom.AreaOp"
	};
	$loadClass(AreaOp$NZWindOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AreaOp$NZWindOp);
	});
	return class$;
}

$Class* AreaOp$NZWindOp::class$ = nullptr;

		} // geom
	} // awt
} // sun