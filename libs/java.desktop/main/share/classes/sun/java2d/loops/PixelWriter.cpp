#include <sun/java2d/loops/PixelWriter.h>
#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

void PixelWriter::init$() {
}

void PixelWriter::setRaster($WritableRaster* dstRast) {
	$set(this, dstRast, dstRast);
}

PixelWriter::PixelWriter() {
}

$Class* PixelWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dstRast", "Ljava/awt/image/WritableRaster;", nullptr, $PROTECTED, $field(PixelWriter, dstRast)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PixelWriter, init$, void)},
		{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC, $virtualMethod(PixelWriter, setRaster, void, $WritableRaster*)},
		{"writePixel", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelWriter, writePixel, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.java2d.loops.PixelWriter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PixelWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PixelWriter);
	});
	return class$;
}

$Class* PixelWriter::class$ = nullptr;

		} // loops
	} // java2d
} // sun