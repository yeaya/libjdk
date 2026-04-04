#include <sun/java2d/SurfaceData$PixelToPgramLoopConverter.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelToParallelogramConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelToParallelogramConverter = ::sun::java2d::pipe::PixelToParallelogramConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {

int32_t SurfaceData$PixelToPgramLoopConverter::hashCode() {
	 return this->$PixelToParallelogramConverter::hashCode();
}

bool SurfaceData$PixelToPgramLoopConverter::equals(Object$* arg0) {
	 return this->$PixelToParallelogramConverter::equals(arg0);
}

$Object* SurfaceData$PixelToPgramLoopConverter::clone() {
	 return this->$PixelToParallelogramConverter::clone();
}

$String* SurfaceData$PixelToPgramLoopConverter::toString() {
	 return this->$PixelToParallelogramConverter::toString();
}

void SurfaceData$PixelToPgramLoopConverter::finalize() {
	this->$PixelToParallelogramConverter::finalize();
}

void SurfaceData$PixelToPgramLoopConverter::init$($ShapeDrawPipe* shapepipe, $ParallelogramPipe* pgrampipe, double minPenSize, double normPosition, bool adjustfill) {
	$PixelToParallelogramConverter::init$(shapepipe, pgrampipe, minPenSize, normPosition, adjustfill);
}

SurfaceData$PixelToPgramLoopConverter::SurfaceData$PixelToPgramLoopConverter() {
}

$Class* SurfaceData$PixelToPgramLoopConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;Lsun/java2d/pipe/ParallelogramPipe;DDZ)V", nullptr, $PUBLIC, $method(SurfaceData$PixelToPgramLoopConverter, init$, void, $ShapeDrawPipe*, $ParallelogramPipe*, double, double, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.SurfaceData$PixelToPgramLoopConverter", "sun.java2d.SurfaceData", "PixelToPgramLoopConverter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.SurfaceData$PixelToPgramLoopConverter",
		"sun.java2d.pipe.PixelToParallelogramConverter",
		"sun.java2d.pipe.LoopBasedPipe",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.SurfaceData"
	};
	$loadClass(SurfaceData$PixelToPgramLoopConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SurfaceData$PixelToPgramLoopConverter));
	});
	return class$;
}

$Class* SurfaceData$PixelToPgramLoopConverter::class$ = nullptr;

	} // java2d
} // sun