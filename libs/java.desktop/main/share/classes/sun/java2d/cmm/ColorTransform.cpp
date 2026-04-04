#include <sun/java2d/cmm/ColorTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

$Class* ColorTransform::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Any", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Any)},
		{"In", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, In)},
		{"Out", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Out)},
		{"Gamut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Gamut)},
		{"Simulation", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorTransform, Simulation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"colorConvert", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, colorConvert, void, $BufferedImage*, $BufferedImage*)},
		{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;[F[F[F[F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, colorConvert, void, $Raster*, $WritableRaster*, $floats*, $floats*, $floats*, $floats*)},
		{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, colorConvert, void, $Raster*, $WritableRaster*)},
		{"colorConvert", "([S[S)[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, colorConvert, $shorts*, $shorts*, $shorts*)},
		{"colorConvert", "([B[B)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, colorConvert, $bytes*, $bytes*, $bytes*)},
		{"getNumInComponents", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, getNumInComponents, int32_t)},
		{"getNumOutComponents", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ColorTransform, getNumOutComponents, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.cmm.ColorTransform",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ColorTransform, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorTransform);
	});
	return class$;
}

$Class* ColorTransform::class$ = nullptr;

		} // cmm
	} // java2d
} // sun