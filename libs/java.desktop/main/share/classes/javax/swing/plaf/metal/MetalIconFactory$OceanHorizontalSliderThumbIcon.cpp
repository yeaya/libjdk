#include <javax/swing/plaf/metal/MetalIconFactory$OceanHorizontalSliderThumbIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef BITMASK
#undef THUMB_SHAPE
#undef TYPE_INT_ARGB

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::hashCode() {
	return this->$CachedPainter::hashCode();
}

bool MetalIconFactory$OceanHorizontalSliderThumbIcon::equals(Object$* arg0) {
	return this->$CachedPainter::equals(arg0);
}

$Object* MetalIconFactory$OceanHorizontalSliderThumbIcon::clone() {
	return this->$CachedPainter::clone();
}

$String* MetalIconFactory$OceanHorizontalSliderThumbIcon::toString() {
	return this->$CachedPainter::toString();
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::finalize() {
	this->$CachedPainter::finalize();
}

$Polygon* MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE = nullptr;

void MetalIconFactory$OceanHorizontalSliderThumbIcon::init$() {
	$CachedPainter::init$(3);
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalObjectStack();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	int32_t var$0 = getIconWidth();
	int32_t var$1 = getIconHeight();
	paint(c, g, x, y, var$0, var$1, $$new($ObjectArray, {
		$($Boolean::valueOf($nc(c)->hasFocus())),
		$($Boolean::valueOf($nc(c)->isEnabled())),
		$($MetalLookAndFeel::getCurrentTheme())
	}));
}

$Image* MetalIconFactory$OceanHorizontalSliderThumbIcon::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	if (config == nullptr) {
		return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB);
	}
	return $nc(config)->createCompatibleImage(w, h, $Transparency::BITMASK);
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::paintToImage($Component* c, $Image* image, $Graphics* g2, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalObjectStack();
	$var($Graphics2D, g, $cast($Graphics2D, g2));
	bool hasFocus = $nc($cast($Boolean, $nc(args)->get(0)))->booleanValue();
	bool enabled = $nc($cast($Boolean, args->get(1)))->booleanValue();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	g->clip(MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE);
	if (!enabled) {
		g->setColor($($MetalLookAndFeel::getControl()));
		g->fillRect(1, 1, 13, 14);
	} else if (hasFocus) {
		$MetalUtils::drawGradient(c, g, "Slider.focusGradient"_s, 1, 1, 13, 14, true);
	} else {
		$MetalUtils::drawGradient(c, g, "Slider.gradient"_s, 1, 1, 13, 14, true);
	}
	g->setClip(clip);
	if (hasFocus) {
		g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	} else {
		g->setColor(enabled ? $($MetalLookAndFeel::getPrimaryControlInfo()) : $($MetalLookAndFeel::getControlDarkShadow()));
	}
	g->drawLine(1, 0, 13, 0);
	g->drawLine(0, 1, 0, 8);
	g->drawLine(14, 1, 14, 8);
	g->drawLine(1, 9, 7, 15);
	g->drawLine(7, 15, 14, 8);
	if (hasFocus && enabled) {
		g->setColor($($MetalLookAndFeel::getPrimaryControl()));
		g->fillRect(1, 1, 13, 1);
		g->fillRect(1, 2, 1, 7);
		g->fillRect(13, 2, 1, 7);
		g->drawLine(2, 9, 7, 14);
		g->drawLine(8, 13, 12, 9);
	}
}

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::getIconWidth() {
	return 15;
}

int32_t MetalIconFactory$OceanHorizontalSliderThumbIcon::getIconHeight() {
	return 16;
}

void MetalIconFactory$OceanHorizontalSliderThumbIcon::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$assignStatic(MetalIconFactory$OceanHorizontalSliderThumbIcon::THUMB_SHAPE, $new($Polygon, $$new($ints, {
			0,
			14,
			14,
			7,
			0
		}), $$new($ints, {
			0,
			0,
			8,
			15,
			8
		}), 5));
	}
}

MetalIconFactory$OceanHorizontalSliderThumbIcon::MetalIconFactory$OceanHorizontalSliderThumbIcon() {
}

$Class* MetalIconFactory$OceanHorizontalSliderThumbIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"THUMB_SHAPE", "Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory$OceanHorizontalSliderThumbIcon, THUMB_SHAPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(MetalIconFactory$OceanHorizontalSliderThumbIcon, init$, void)},
		{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(MetalIconFactory$OceanHorizontalSliderThumbIcon, createImage, $Image*, $Component*, int32_t, int32_t, $GraphicsConfiguration*, $ObjectArray*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$OceanHorizontalSliderThumbIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$OceanHorizontalSliderThumbIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$OceanHorizontalSliderThumbIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(MetalIconFactory$OceanHorizontalSliderThumbIcon, paintToImage, void, $Component*, $Image*, $Graphics*, int32_t, int32_t, $ObjectArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "OceanHorizontalSliderThumbIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon",
		"sun.swing.CachedPainter",
		"javax.swing.Icon,java.io.Serializable,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalIconFactory"
	};
	$loadClass(MetalIconFactory$OceanHorizontalSliderThumbIcon, name, initialize, &classInfo$$, MetalIconFactory$OceanHorizontalSliderThumbIcon::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalIconFactory$OceanHorizontalSliderThumbIcon));
	});
	return class$;
}

$Class* MetalIconFactory$OceanHorizontalSliderThumbIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax