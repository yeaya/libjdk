#include <java/awt/CompositeContext.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <jcpp.h>

using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* CompositeContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compose", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeContext, compose, void, $Raster*, $Raster*, $WritableRaster*)},
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeContext, dispose, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.CompositeContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CompositeContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompositeContext);
	});
	return class$;
}

$Class* CompositeContext::class$ = nullptr;

	} // awt
} // java