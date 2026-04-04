#include <sun/java2d/loops/XorPixelWriter$FloatData.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

void XorPixelWriter$FloatData::init$(Object$* srcPixel, Object$* xorPixel) {
	$useLocalObjectStack();
	$XorPixelWriter::init$();
	$var($floats, srcData, $cast($floats, srcPixel));
	$var($floats, xorData, $cast($floats, xorPixel));
	$set(this, xorData, $new($ints, $nc(srcData)->length));
	for (int32_t i = 0; i < srcData->length; ++i) {
		int32_t var$0 = $Float::floatToIntBits(srcData->get(i));
		this->xorData->set(i, (var$0 ^ $Float::floatToIntBits($nc(xorData)->get(i))));
	}
}

void XorPixelWriter$FloatData::xorPixel(Object$* pixData) {
	$var($floats, dstData, $cast($floats, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		int32_t v = $Float::floatToIntBits(dstData->get(i)) ^ $nc(this->xorData)->get(i);
		dstData->set(i, $Float::intBitsToFloat(v));
	}
}

void XorPixelWriter$FloatData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$FloatData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$FloatData::XorPixelWriter$FloatData() {
}

$Class* XorPixelWriter$FloatData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xorData", "[I", nullptr, 0, $field(XorPixelWriter$FloatData, xorData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(XorPixelWriter$FloatData, init$, void, Object$*, Object$*)},
		{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$FloatData, setRaster, void, $WritableRaster*)},
		{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$FloatData, writePixel, void, int32_t, int32_t)},
		{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XorPixelWriter$FloatData, xorPixel, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.XorPixelWriter$FloatData", "sun.java2d.loops.XorPixelWriter", "FloatData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.XorPixelWriter$FloatData",
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
	$loadClass(XorPixelWriter$FloatData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorPixelWriter$FloatData);
	});
	return class$;
}

$Class* XorPixelWriter$FloatData::class$ = nullptr;

		} // loops
	} // java2d
} // sun