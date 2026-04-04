#include <sun/java2d/loops/XorPixelWriter$IntData.h>
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

void XorPixelWriter$IntData::init$(Object$* srcPixel, Object$* xorPixel) {
	$XorPixelWriter::init$();
	$set(this, xorData, $cast($ints, srcPixel));
	this->xorPixel(xorPixel);
	$set(this, xorData, $cast($ints, xorPixel));
}

void XorPixelWriter$IntData::xorPixel(Object$* pixData) {
	$var($ints, dstData, $cast($ints, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		(*dstData)[i] ^= $nc(this->xorData)->get(i);
	}
}

void XorPixelWriter$IntData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$IntData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$IntData::XorPixelWriter$IntData() {
}

$Class* XorPixelWriter$IntData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xorData", "[I", nullptr, 0, $field(XorPixelWriter$IntData, xorData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(XorPixelWriter$IntData, init$, void, Object$*, Object$*)},
		{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$IntData, setRaster, void, $WritableRaster*)},
		{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$IntData, writePixel, void, int32_t, int32_t)},
		{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XorPixelWriter$IntData, xorPixel, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.XorPixelWriter$IntData", "sun.java2d.loops.XorPixelWriter", "IntData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.XorPixelWriter$IntData",
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
	$loadClass(XorPixelWriter$IntData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorPixelWriter$IntData);
	});
	return class$;
}

$Class* XorPixelWriter$IntData::class$ = nullptr;

		} // loops
	} // java2d
} // sun