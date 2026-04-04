#include <javax/swing/GraphicsWrapper.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* GraphicsWrapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getClipHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, getClipHeight, int32_t)},
		{"getClipWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, getClipWidth, int32_t)},
		{"getClipX", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, getClipX, int32_t)},
		{"getClipY", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, getClipY, int32_t)},
		{"isClipIntersecting", "(Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, isClipIntersecting, bool, $Rectangle*)},
		{"subGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsWrapper, subGraphics, $Graphics*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.GraphicsWrapper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GraphicsWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsWrapper);
	});
	return class$;
}

$Class* GraphicsWrapper::class$ = nullptr;

	} // swing
} // javax