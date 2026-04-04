#include <sun/java2d/xr/DirtyRegion.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

void DirtyRegion::init$() {
	clear();
}

void DirtyRegion::clear() {
	this->x = $Integer::MAX_VALUE;
	this->y = $Integer::MAX_VALUE;
	this->x2 = $Integer::MIN_VALUE;
	this->y2 = $Integer::MIN_VALUE;
}

void DirtyRegion::growDirtyRegion(int32_t x, int32_t y, int32_t x2, int32_t y2) {
	this->x = $Math::min(x, this->x);
	this->y = $Math::min(y, this->y);
	this->x2 = $Math::max(x2, this->x2);
	this->y2 = $Math::max(y2, this->y2);
}

int32_t DirtyRegion::getWidth() {
	return this->x2 - this->x;
}

int32_t DirtyRegion::getHeight() {
	return this->y2 - this->y;
}

void DirtyRegion::growDirtyRegionTileLimit(int32_t x, int32_t y, int32_t x2, int32_t y2) {
	if (x < this->x) {
		this->x = $Math::max(x, 0);
	}
	if (y < this->y) {
		this->y = $Math::max(y, 0);
	}
	if (x2 > this->x2) {
		this->x2 = $Math::min(x2, 256);
	}
	if (y2 > this->y2) {
		this->y2 = $Math::min(y2, 256);
	}
}

DirtyRegion* DirtyRegion::combineRegion(DirtyRegion* region1, DirtyRegion* region2) {
	$init(DirtyRegion);
	$var(DirtyRegion, region, $new(DirtyRegion));
	region->x = $Math::min($nc(region1)->x, $nc(region2)->x);
	region->y = $Math::min(region1->y, region2->y);
	region->x2 = $Math::max(region1->x2, region2->x2);
	region->y2 = $Math::max(region1->y2, region2->y2);
	return region;
}

void DirtyRegion::setDirtyLineRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (x1 < x2) {
		this->x = x1;
		this->x2 = x2;
	} else {
		this->x = x2;
		this->x2 = x1;
	}
	if (y1 < y2) {
		this->y = y1;
		this->y2 = y2;
	} else {
		this->y = y2;
		this->y2 = y1;
	}
}

void DirtyRegion::translate(int32_t x, int32_t y) {
	if (this->x != $Integer::MAX_VALUE) {
		this->x += x;
		this->x2 += x;
		this->y += y;
		this->y2 += y;
	}
}

$String* DirtyRegion::toString() {
	$useLocalObjectStack();
	return $str({$(this->getClass()->getName()), "(x: "_s, $$str(this->x), ", y:"_s, $$str(this->y), ", x2:"_s, $$str(this->x2), ", y2:"_s, $$str(this->y2), ")"_s});
}

DirtyRegion* DirtyRegion::cloneRegion() {
	try {
		return $cast(DirtyRegion, clone());
	} catch ($CloneNotSupportedException& ex) {
		ex->printStackTrace();
	}
	return nullptr;
}

DirtyRegion::DirtyRegion() {
}

$Class* DirtyRegion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "I", nullptr, 0, $field(DirtyRegion, x)},
		{"y", "I", nullptr, 0, $field(DirtyRegion, y)},
		{"x2", "I", nullptr, 0, $field(DirtyRegion, x2)},
		{"y2", "I", nullptr, 0, $field(DirtyRegion, y2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DirtyRegion, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, clear, void)},
		{"cloneRegion", "()Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, cloneRegion, DirtyRegion*)},
		{"combineRegion", "(Lsun/java2d/xr/DirtyRegion;Lsun/java2d/xr/DirtyRegion;)Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC | $STATIC, $staticMethod(DirtyRegion, combineRegion, DirtyRegion*, DirtyRegion*, DirtyRegion*)},
		{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, getHeight, int32_t)},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, getWidth, int32_t)},
		{"growDirtyRegion", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, growDirtyRegion, void, int32_t, int32_t, int32_t, int32_t)},
		{"growDirtyRegionTileLimit", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, growDirtyRegionTileLimit, void, int32_t, int32_t, int32_t, int32_t)},
		{"setDirtyLineRegion", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, setDirtyLineRegion, void, int32_t, int32_t, int32_t, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, toString, $String*)},
		{"translate", "(II)V", nullptr, $PUBLIC, $virtualMethod(DirtyRegion, translate, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.DirtyRegion",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirtyRegion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirtyRegion);
	});
	return class$;
}

$Class* DirtyRegion::class$ = nullptr;

		} // xr
	} // java2d
} // sun