#include <java/awt/image/renderable/RenderedImageFactory.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/ParameterBlock.h>
#include <jcpp.h>

using $RenderingHints = ::java::awt::RenderingHints;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $ParameterBlock = ::java::awt::image::renderable::ParameterBlock;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$Class* RenderedImageFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljava/awt/image/renderable/ParameterBlock;Ljava/awt/RenderingHints;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderedImageFactory, create, $RenderedImage*, $ParameterBlock*, $RenderingHints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.image.renderable.RenderedImageFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RenderedImageFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenderedImageFactory);
	});
	return class$;
}

$Class* RenderedImageFactory::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java