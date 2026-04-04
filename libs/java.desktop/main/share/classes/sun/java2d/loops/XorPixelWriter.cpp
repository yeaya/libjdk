#include <sun/java2d/loops/XorPixelWriter.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

void XorPixelWriter::init$() {
	$PixelWriter::init$();
}

void XorPixelWriter::writePixel(int32_t x, int32_t y) {
	$var($Object, dstPixel, $nc(this->dstRast)->getDataElements(x, y, nullptr));
	xorPixel(dstPixel);
	$nc(this->dstRast)->setDataElements(x, y, dstPixel);
}

XorPixelWriter::XorPixelWriter() {
}

$Class* XorPixelWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dstCM", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(XorPixelWriter, dstCM)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XorPixelWriter, init$, void)},
		{"writePixel", "(II)V", nullptr, $PUBLIC, $virtualMethod(XorPixelWriter, writePixel, void, int32_t, int32_t)},
		{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(XorPixelWriter, xorPixel, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.XorPixelWriter$DoubleData", "sun.java2d.loops.XorPixelWriter", "DoubleData", $PUBLIC | $STATIC},
		{"sun.java2d.loops.XorPixelWriter$FloatData", "sun.java2d.loops.XorPixelWriter", "FloatData", $PUBLIC | $STATIC},
		{"sun.java2d.loops.XorPixelWriter$IntData", "sun.java2d.loops.XorPixelWriter", "IntData", $PUBLIC | $STATIC},
		{"sun.java2d.loops.XorPixelWriter$ShortData", "sun.java2d.loops.XorPixelWriter", "ShortData", $PUBLIC | $STATIC},
		{"sun.java2d.loops.XorPixelWriter$ByteData", "sun.java2d.loops.XorPixelWriter", "ByteData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.java2d.loops.XorPixelWriter",
		"sun.java2d.loops.PixelWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.XorPixelWriter$DoubleData,sun.java2d.loops.XorPixelWriter$FloatData,sun.java2d.loops.XorPixelWriter$IntData,sun.java2d.loops.XorPixelWriter$ShortData,sun.java2d.loops.XorPixelWriter$ByteData"
	};
	$loadClass(XorPixelWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorPixelWriter);
	});
	return class$;
}

$Class* XorPixelWriter::class$ = nullptr;

		} // loops
	} // java2d
} // sun