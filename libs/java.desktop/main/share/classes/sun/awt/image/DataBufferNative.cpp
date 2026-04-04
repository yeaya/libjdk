#include <sun/awt/image/DataBufferNative.h>
#include <java/awt/image/DataBuffer.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

void DataBufferNative::init$($SurfaceData* sData, int32_t type, int32_t width, int32_t height) {
	$DataBuffer::init$(type, width * height);
	this->width = width;
	$set(this, surfaceData, sData);
}

int32_t DataBufferNative::getElem(int32_t x, int32_t y, $SurfaceData* sData) {
	$prepareNative(getElem, int32_t, int32_t x, int32_t y, $SurfaceData* sData);
	int32_t $ret = $invokeNative(x, y, sData);
	$finishNative();
	return $ret;
}

int32_t DataBufferNative::getElem(int32_t bank, int32_t i) {
	return getElem($mod(i, this->width), $div(i, this->width), this->surfaceData);
}

void DataBufferNative::setElem(int32_t x, int32_t y, int32_t val, $SurfaceData* sData) {
	$prepareNative(setElem, void, int32_t x, int32_t y, int32_t val, $SurfaceData* sData);
	$invokeNative(x, y, val, sData);
	$finishNative();
}

void DataBufferNative::setElem(int32_t bank, int32_t i, int32_t val) {
	setElem($mod(i, this->width), $div(i, this->width), val, this->surfaceData);
}

DataBufferNative::DataBufferNative() {
}

$Class* DataBufferNative::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(DataBufferNative, surfaceData)},
		{"width", "I", nullptr, $PROTECTED, $field(DataBufferNative, width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/SurfaceData;III)V", nullptr, $PUBLIC, $method(DataBufferNative, init$, void, $SurfaceData*, int32_t, int32_t, int32_t)},
		{"getElem", "(IILsun/java2d/SurfaceData;)I", nullptr, $PROTECTED | $NATIVE, $virtualMethod(DataBufferNative, getElem, int32_t, int32_t, int32_t, $SurfaceData*)},
		{"getElem", "(II)I", nullptr, $PUBLIC, $virtualMethod(DataBufferNative, getElem, int32_t, int32_t, int32_t)},
		{"setElem", "(IIILsun/java2d/SurfaceData;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(DataBufferNative, setElem, void, int32_t, int32_t, int32_t, $SurfaceData*)},
		{"setElem", "(III)V", nullptr, $PUBLIC, $virtualMethod(DataBufferNative, setElem, void, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.DataBufferNative",
		"java.awt.image.DataBuffer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DataBufferNative, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataBufferNative);
	});
	return class$;
}

$Class* DataBufferNative::class$ = nullptr;

		} // image
	} // awt
} // sun