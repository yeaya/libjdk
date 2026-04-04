#include <sun/java2d/loops/XorPixelWriter$DoubleData.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

void XorPixelWriter$DoubleData::init$(Object$* srcPixel, Object$* xorPixel) {
	$useLocalObjectStack();
	$XorPixelWriter::init$();
	$var($doubles, srcData, $cast($doubles, srcPixel));
	$var($doubles, xorData, $cast($doubles, xorPixel));
	$set(this, xorData, $new($longs, $nc(srcData)->length));
	for (int32_t i = 0; i < srcData->length; ++i) {
		int64_t var$0 = $Double::doubleToLongBits(srcData->get(i));
		this->xorData->set(i, (var$0 ^ $Double::doubleToLongBits($nc(xorData)->get(i))));
	}
}

void XorPixelWriter$DoubleData::xorPixel(Object$* pixData) {
	$var($doubles, dstData, $cast($doubles, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		int64_t v = $Double::doubleToLongBits(dstData->get(i)) ^ $nc(this->xorData)->get(i);
		dstData->set(i, $Double::longBitsToDouble(v));
	}
}

void XorPixelWriter$DoubleData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$DoubleData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$DoubleData::XorPixelWriter$DoubleData() {
}

$Class* XorPixelWriter$DoubleData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xorData", "[J", nullptr, 0, $field(XorPixelWriter$DoubleData, xorData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(XorPixelWriter$DoubleData, init$, void, Object$*, Object$*)},
		{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$DoubleData, setRaster, void, $WritableRaster*)},
		{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XorPixelWriter$DoubleData, writePixel, void, int32_t, int32_t)},
		{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XorPixelWriter$DoubleData, xorPixel, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.XorPixelWriter$DoubleData", "sun.java2d.loops.XorPixelWriter", "DoubleData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.XorPixelWriter$DoubleData",
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
	$loadClass(XorPixelWriter$DoubleData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorPixelWriter$DoubleData);
	});
	return class$;
}

$Class* XorPixelWriter$DoubleData::class$ = nullptr;

		} // loops
	} // java2d
} // sun