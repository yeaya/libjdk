#include <java/awt/Graphics2D.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {

$MethodInfo _Graphics2D_MethodInfo_[] = {
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(Graphics2D, init$, void)},
	{"addRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, addRenderingHints, void, $Map*)},
	{"clip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, clip, void, $Shape*)},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, draw, void, $Shape*)},
	{"draw3DRect", "(IIIIZ)V", nullptr, $PUBLIC, $virtualMethod(Graphics2D, draw3DRect, void, int32_t, int32_t, int32_t, int32_t, bool)},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawGlyphVector, void, $GlyphVector*, float, float)},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawImage, bool, $Image*, $AffineTransform*, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawImage, void, $BufferedImage*, $BufferedImageOp*, int32_t, int32_t)},
	{"drawRenderableImage", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawRenderableImage, void, $RenderableImage*, $AffineTransform*)},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawRenderedImage, void, $RenderedImage*, $AffineTransform*)},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawString, void, $String*, float, float)},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, drawString, void, $AttributedCharacterIterator*, float, float)},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, fill, void, $Shape*)},
	{"fill3DRect", "(IIIIZ)V", nullptr, $PUBLIC, $virtualMethod(Graphics2D, fill3DRect, void, int32_t, int32_t, int32_t, int32_t, bool)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getBackground, $Color*)},
	{"getComposite", "()Ljava/awt/Composite;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getComposite, $Composite*)},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getDeviceConfiguration, $GraphicsConfiguration*)},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getFontRenderContext, $FontRenderContext*)},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getPaint, $Paint*)},
	{"getRenderingHint", "(Ljava/awt/RenderingHints$Key;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getRenderingHint, $Object*, $RenderingHints$Key*)},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getRenderingHints, $RenderingHints*)},
	{"getStroke", "()Ljava/awt/Stroke;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getStroke, $Stroke*)},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, getTransform, $AffineTransform*)},
	{"hit", "(Ljava/awt/Rectangle;Ljava/awt/Shape;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, hit, bool, $Rectangle*, $Shape*, bool)},
	{"rotate", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, rotate, void, double)},
	{"rotate", "(DDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, rotate, void, double, double, double)},
	{"scale", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, scale, void, double, double)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setBackground, void, $Color*)},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setComposite, void, $Composite*)},
	{"setPaint", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setPaint, void, $Paint*)},
	{"setRenderingHint", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setRenderingHint, void, $RenderingHints$Key*, Object$*)},
	{"setRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setRenderingHints, void, $Map*)},
	{"setStroke", "(Ljava/awt/Stroke;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setStroke, void, $Stroke*)},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, setTransform, void, $AffineTransform*)},
	{"shear", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, shear, void, double, double)},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, transform, void, $AffineTransform*)},
	{"translate", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"translate", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Graphics2D, translate, void, double, double)},
	{}
};

$ClassInfo _Graphics2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Graphics2D",
	"java.awt.Graphics",
	nullptr,
	nullptr,
	_Graphics2D_MethodInfo_
};

$Object* allocate$Graphics2D($Class* clazz) {
	return $of($alloc(Graphics2D));
}

void Graphics2D::init$() {
	$Graphics::init$();
}

void Graphics2D::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Paint, p, getPaint());
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	setColor(raised ? brighter : darker);
	fillRect(x, y, 1, height + 1);
	fillRect(x + 1, y, width - 1, 1);
	setColor(raised ? darker : brighter);
	fillRect(x + 1, y + height, width, 1);
	fillRect(x + width, y, 1, height);
	setPaint(p);
}

void Graphics2D::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Paint, p, getPaint());
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	if (!raised) {
		setColor(darker);
	} else if (!$equals(p, c)) {
		setColor(c);
	}
	fillRect(x + 1, y + 1, width - 2, height - 2);
	setColor(raised ? brighter : darker);
	fillRect(x, y, 1, height);
	fillRect(x + 1, y, width - 2, 1);
	setColor(raised ? darker : brighter);
	fillRect(x + 1, y + height - 1, width - 1, 1);
	fillRect(x + width - 1, y, 1, height - 1);
	setPaint(p);
}

Graphics2D::Graphics2D() {
}

$Class* Graphics2D::load$($String* name, bool initialize) {
	$loadClass(Graphics2D, name, initialize, &_Graphics2D_ClassInfo_, allocate$Graphics2D);
	return class$;
}

$Class* Graphics2D::class$ = nullptr;

	} // awt
} // java