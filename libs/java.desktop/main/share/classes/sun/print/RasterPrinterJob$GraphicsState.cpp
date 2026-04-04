#include <sun/print/RasterPrinterJob$GraphicsState.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

void RasterPrinterJob$GraphicsState::init$($RasterPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

RasterPrinterJob$GraphicsState::RasterPrinterJob$GraphicsState() {
}

$Class* RasterPrinterJob$GraphicsState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$GraphicsState, this$0)},
		{"region", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, region)},
		{"theClip", "Ljava/awt/Shape;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, theClip)},
		{"theTransform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, theTransform)},
		{"sx", "D", nullptr, 0, $field(RasterPrinterJob$GraphicsState, sx)},
		{"sy", "D", nullptr, 0, $field(RasterPrinterJob$GraphicsState, sy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/RasterPrinterJob;)V", nullptr, $PRIVATE, $method(RasterPrinterJob$GraphicsState, init$, void, $RasterPrinterJob*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.RasterPrinterJob$GraphicsState", "sun.print.RasterPrinterJob", "GraphicsState", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.RasterPrinterJob$GraphicsState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.RasterPrinterJob"
	};
	$loadClass(RasterPrinterJob$GraphicsState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RasterPrinterJob$GraphicsState);
	});
	return class$;
}

$Class* RasterPrinterJob$GraphicsState::class$ = nullptr;

	} // print
} // sun