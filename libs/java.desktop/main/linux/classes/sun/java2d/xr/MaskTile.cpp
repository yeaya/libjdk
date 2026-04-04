#include <sun/java2d/xr/MaskTile.h>
#include <sun/java2d/xr/DirtyRegion.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirtyRegion = ::sun::java2d::xr::DirtyRegion;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;

namespace sun {
	namespace java2d {
		namespace xr {

void MaskTile::init$() {
	$set(this, rects, $new($GrowableRectArray, 128));
	$set(this, dirtyArea, $new($DirtyRegion));
}

void MaskTile::calculateDirtyAreas() {
	for (int32_t i = 0; i < $nc(this->rects)->getSize(); ++i) {
		int32_t x = this->rects->getX(i);
		int32_t y = $nc(this->rects)->getY(i);
		int32_t var$0 = x + $nc(this->rects)->getWidth(i);
		$nc(this->dirtyArea)->growDirtyRegion(x, y, var$0, y + this->rects->getHeight(i));
	}
}

void MaskTile::reset() {
	$nc(this->rects)->clear();
	$nc(this->dirtyArea)->clear();
}

void MaskTile::translate(int32_t x, int32_t y) {
	if ($nc(this->rects)->getSize() > 0) {
		$nc(this->dirtyArea)->translate(x, y);
	}
	$nc(this->rects)->translateRects(x, y);
}

$GrowableRectArray* MaskTile::getRects() {
	return this->rects;
}

$DirtyRegion* MaskTile::getDirtyArea() {
	return this->dirtyArea;
}

MaskTile::MaskTile() {
}

$Class* MaskTile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rects", "Lsun/java2d/xr/GrowableRectArray;", nullptr, 0, $field(MaskTile, rects)},
		{"dirtyArea", "Lsun/java2d/xr/DirtyRegion;", nullptr, 0, $field(MaskTile, dirtyArea)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MaskTile, init$, void)},
		{"calculateDirtyAreas", "()V", nullptr, $PUBLIC, $virtualMethod(MaskTile, calculateDirtyAreas, void)},
		{"getDirtyArea", "()Lsun/java2d/xr/DirtyRegion;", nullptr, $PUBLIC, $virtualMethod(MaskTile, getDirtyArea, $DirtyRegion*)},
		{"getRects", "()Lsun/java2d/xr/GrowableRectArray;", nullptr, $PUBLIC, $virtualMethod(MaskTile, getRects, $GrowableRectArray*)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(MaskTile, reset, void)},
		{"translate", "(II)V", nullptr, $PUBLIC, $virtualMethod(MaskTile, translate, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.MaskTile",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MaskTile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskTile);
	});
	return class$;
}

$Class* MaskTile::class$ = nullptr;

		} // xr
	} // java2d
} // sun