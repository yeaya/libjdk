#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Paint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Paint, createContext, $PaintContext*, $ColorModel*, $Rectangle*, $Rectangle2D*, $AffineTransform*, $RenderingHints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.Paint",
		nullptr,
		"java.awt.Transparency",
		nullptr,
		methodInfos$$
	};
	$loadClass(Paint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Paint);
	});
	return class$;
}

$Class* Paint::class$ = nullptr;

	} // awt
} // java