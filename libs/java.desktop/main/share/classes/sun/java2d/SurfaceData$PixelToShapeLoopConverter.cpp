#include <sun/java2d/SurfaceData$PixelToShapeLoopConverter.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {

int32_t SurfaceData$PixelToShapeLoopConverter::hashCode() {
	 return this->$PixelToShapeConverter::hashCode();
}

bool SurfaceData$PixelToShapeLoopConverter::equals(Object$* arg0) {
	 return this->$PixelToShapeConverter::equals(arg0);
}

$Object* SurfaceData$PixelToShapeLoopConverter::clone() {
	 return this->$PixelToShapeConverter::clone();
}

$String* SurfaceData$PixelToShapeLoopConverter::toString() {
	 return this->$PixelToShapeConverter::toString();
}

void SurfaceData$PixelToShapeLoopConverter::finalize() {
	this->$PixelToShapeConverter::finalize();
}

void SurfaceData$PixelToShapeLoopConverter::init$($ShapeDrawPipe* pipe) {
	$PixelToShapeConverter::init$(pipe);
}

SurfaceData$PixelToShapeLoopConverter::SurfaceData$PixelToShapeLoopConverter() {
}

$Class* SurfaceData$PixelToShapeLoopConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;)V", nullptr, $PUBLIC, $method(SurfaceData$PixelToShapeLoopConverter, init$, void, $ShapeDrawPipe*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.SurfaceData$PixelToShapeLoopConverter", "sun.java2d.SurfaceData", "PixelToShapeLoopConverter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.SurfaceData$PixelToShapeLoopConverter",
		"sun.java2d.pipe.PixelToShapeConverter",
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
	$loadClass(SurfaceData$PixelToShapeLoopConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SurfaceData$PixelToShapeLoopConverter));
	});
	return class$;
}

$Class* SurfaceData$PixelToShapeLoopConverter::class$ = nullptr;

	} // java2d
} // sun