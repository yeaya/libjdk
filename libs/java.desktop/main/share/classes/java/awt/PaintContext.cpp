#include <java/awt/PaintContext.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* PaintContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PaintContext, dispose, void)},
		{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PaintContext, getColorModel, $ColorModel*)},
		{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PaintContext, getRaster, $Raster*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.PaintContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PaintContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintContext);
	});
	return class$;
}

$Class* PaintContext::class$ = nullptr;

	} // awt
} // java