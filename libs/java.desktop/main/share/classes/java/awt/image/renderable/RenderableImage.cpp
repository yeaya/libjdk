#include <java/awt/image/renderable/RenderableImage.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef HINTS_OBSERVED

using $RenderingHints = ::java::awt::RenderingHints;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderContext = ::java::awt::image::renderable::RenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$String* RenderableImage::HINTS_OBSERVED = nullptr;

void RenderableImage::clinit$($Class* clazz) {
	$assignStatic(RenderableImage::HINTS_OBSERVED, "HINTS_OBSERVED"_s);
}

$Class* RenderableImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HINTS_OBSERVED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderableImage, HINTS_OBSERVED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"createDefaultRendering", "()Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, createDefaultRendering, $RenderedImage*)},
		{"createRendering", "(Ljava/awt/image/renderable/RenderContext;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, createRendering, $RenderedImage*, $RenderContext*)},
		{"createScaledRendering", "(IILjava/awt/RenderingHints;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, createScaledRendering, $RenderedImage*, int32_t, int32_t, $RenderingHints*)},
		{"getHeight", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getHeight, float)},
		{"getMinX", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getMinX, float)},
		{"getMinY", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getMinY, float)},
		{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getProperty, $Object*, $String*)},
		{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getPropertyNames, $StringArray*)},
		{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/renderable/RenderableImage;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getSources, $Vector*)},
		{"getWidth", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, getWidth, float)},
		{"isDynamic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RenderableImage, isDynamic, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.image.renderable.RenderableImage",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RenderableImage, name, initialize, &classInfo$$, RenderableImage::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RenderableImage);
	});
	return class$;
}

$Class* RenderableImage::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java