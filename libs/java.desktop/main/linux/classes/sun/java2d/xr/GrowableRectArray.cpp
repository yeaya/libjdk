#include <sun/java2d/xr/GrowableRectArray.h>

#include <sun/java2d/xr/GrowableIntArray.h>
#include <jcpp.h>

#undef RECT_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _GrowableRectArray_FieldInfo_[] = {
	{"RECT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GrowableRectArray, RECT_SIZE)},
	{}
};

$MethodInfo _GrowableRectArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(GrowableRectArray, init$, void, int32_t)},
	{"getHeight", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, getHeight, int32_t, int32_t)},
	{"getWidth", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, getWidth, int32_t, int32_t)},
	{"getX", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, getX, int32_t, int32_t)},
	{"getY", "(I)I", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, getY, int32_t, int32_t)},
	{"pushRectValues", "(IIII)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, pushRectValues, void, int32_t, int32_t, int32_t, int32_t)},
	{"setHeight", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, setHeight, void, int32_t, int32_t)},
	{"setWidth", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, setWidth, void, int32_t, int32_t)},
	{"setX", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, setX, void, int32_t, int32_t)},
	{"setY", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, setY, void, int32_t, int32_t)},
	{"translateRects", "(II)V", nullptr, $PUBLIC | $FINAL, $method(GrowableRectArray, translateRects, void, int32_t, int32_t)},
	{}
};

$ClassInfo _GrowableRectArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.GrowableRectArray",
	"sun.java2d.xr.GrowableIntArray",
	nullptr,
	_GrowableRectArray_FieldInfo_,
	_GrowableRectArray_MethodInfo_
};

$Object* allocate$GrowableRectArray($Class* clazz) {
	return $of($alloc(GrowableRectArray));
}

void GrowableRectArray::init$(int32_t initialSize) {
	$GrowableIntArray::init$(GrowableRectArray::RECT_SIZE, initialSize);
}

void GrowableRectArray::pushRectValues(int32_t x, int32_t y, int32_t width, int32_t height) {
	int32_t currSize = this->size;
	this->size += GrowableRectArray::RECT_SIZE;
	if (this->size >= $nc(this->array)->length) {
		growArray();
	}
	$nc(this->array)->set(currSize, x);
	$nc(this->array)->set(currSize + 1, y);
	$nc(this->array)->set(currSize + 2, width);
	$nc(this->array)->set(currSize + 3, height);
}

void GrowableRectArray::setX(int32_t index, int32_t x) {
	$nc(this->array)->set(getCellIndex(index), x);
}

void GrowableRectArray::setY(int32_t index, int32_t y) {
	$nc(this->array)->set(getCellIndex(index) + 1, y);
}

void GrowableRectArray::setWidth(int32_t index, int32_t width) {
	$nc(this->array)->set(getCellIndex(index) + 2, width);
}

void GrowableRectArray::setHeight(int32_t index, int32_t height) {
	$nc(this->array)->set(getCellIndex(index) + 3, height);
}

int32_t GrowableRectArray::getX(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index));
}

int32_t GrowableRectArray::getY(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 1);
}

int32_t GrowableRectArray::getWidth(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 2);
}

int32_t GrowableRectArray::getHeight(int32_t index) {
	return $nc(this->array)->get(getCellIndex(index) + 3);
}

void GrowableRectArray::translateRects(int32_t x, int32_t y) {
	for (int32_t i = 0; i < getSize(); ++i) {
		setX(i, getX(i) + x);
		setY(i, getY(i) + y);
	}
}

GrowableRectArray::GrowableRectArray() {
}

$Class* GrowableRectArray::load$($String* name, bool initialize) {
	$loadClass(GrowableRectArray, name, initialize, &_GrowableRectArray_ClassInfo_, allocate$GrowableRectArray);
	return class$;
}

$Class* GrowableRectArray::class$ = nullptr;

		} // xr
	} // java2d
} // sun