#include <sun/java2d/xr/GrowablePointArray.h>
#include <sun/java2d/xr/GrowableIntArray.h>
#include <jcpp.h>

#undef POINT_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;

namespace sun {
	namespace java2d {
		namespace xr {

void GrowablePointArray::init$(int32_t initialSize) {
	$GrowableIntArray::init$(GrowablePointArray::POINT_SIZE, initialSize);
}

int32_t GrowablePointArray::getX(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index));
}

int32_t GrowablePointArray::getY(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 1);
}

void GrowablePointArray::setX(int32_t index, int32_t x) {
	$nc(this->array)->set(getCellIndex(index), x);
}

void GrowablePointArray::setY(int32_t index, int32_t y) {
	$nc(this->array)->set(getCellIndex(index) + 1, y);
}

GrowablePointArray::GrowablePointArray() {
}

$Class* GrowablePointArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"POINT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GrowablePointArray, POINT_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(GrowablePointArray, init$, void, int32_t)},
		{"getX", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowablePointArray, getX, int32_t, int32_t)},
		{"getY", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowablePointArray, getY, int32_t, int32_t)},
		{"setX", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowablePointArray, setX, void, int32_t, int32_t)},
		{"setY", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowablePointArray, setY, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.GrowablePointArray",
		"sun.java2d.xr.GrowableIntArray",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GrowablePointArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GrowablePointArray);
	});
	return class$;
}

$Class* GrowablePointArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun