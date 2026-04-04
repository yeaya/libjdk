#include <sun/java2d/loops/XorPixelWriter$ShortData.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

void XorPixelWriter$ShortData::init$(Object$* srcPixel, Object$* xorPixel) {
	$XorPixelWriter::init$();
	$set(this, xorData, $cast($shorts, srcPixel));
	this->xorPixel(xorPixel);
	$set(this, xorData, $cast($shorts, xorPixel));
}

void XorPixelWriter$ShortData::xorPixel(Object$* pixData) {
	$var($shorts, dstData, $cast($shorts, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		(*dstData)[i] ^= $nc(this->xorData)->get(i);
	}
}

void XorPixelWriter$ShortData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$ShortData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$ShortData::XorPixelWriter$ShortData() {
}

$Class* XorPixelWriter$ShortData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xorData", "[S", nullptr, 0, $field(XorPixelWriter$ShortData, xorData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(XorPixelWriter$ShortData, init$, void, Object$*, Object$*)},
		{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$ShortData, setRaster, void, $WritableRaster*)},
		{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$ShortData, writePixel, void, int32_t, int32_t)},
		{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XorPixelWriter$ShortData, xorPixel, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.XorPixelWriter$ShortData", "sun.java2d.loops.XorPixelWriter", "ShortData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.XorPixelWriter$ShortData",
		"sun.java2d.loops.XorPixelWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.XorPixelWriter"
	};
	$loadClass(XorPixelWriter$ShortData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorPixelWriter$ShortData);
	});
	return class$;
}

$Class* XorPixelWriter$ShortData::class$ = nullptr;

		} // loops
	} // java2d
} // sun