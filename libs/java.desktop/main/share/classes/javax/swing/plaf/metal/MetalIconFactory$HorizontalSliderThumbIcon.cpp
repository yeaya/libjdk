#include <javax/swing/plaf/metal/MetalIconFactory$HorizontalSliderThumbIcon.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

int32_t MetalIconFactory$HorizontalSliderThumbIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$HorizontalSliderThumbIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$HorizontalSliderThumbIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$HorizontalSliderThumbIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$HorizontalSliderThumbIcon::finalize() {
	this->$Icon::finalize();
}

$MetalBumps* MetalIconFactory$HorizontalSliderThumbIcon::controlBumps = nullptr;
$MetalBumps* MetalIconFactory$HorizontalSliderThumbIcon::primaryBumps = nullptr;

void MetalIconFactory$HorizontalSliderThumbIcon::init$() {
	$useLocalObjectStack();
	$var($Color, var$0, $MetalLookAndFeel::getControlHighlight());
	$var($Color, var$1, $MetalLookAndFeel::getControlInfo());
	$assignStatic(MetalIconFactory$HorizontalSliderThumbIcon::controlBumps, $new($MetalBumps, 10, 6, var$0, var$1, $($MetalLookAndFeel::getControl())));
	$var($Color, var$2, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, var$3, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$assignStatic(MetalIconFactory$HorizontalSliderThumbIcon::primaryBumps, $new($MetalBumps, 10, 6, var$2, var$3, $($MetalLookAndFeel::getPrimaryControlShadow())));
}

void MetalIconFactory$HorizontalSliderThumbIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$nc(g)->translate(x, y);
	$var($Rectangle, clip, g->getClipBounds());
	int32_t var$0 = getIconWidth();
	g->clipRect(0, 0, var$0, getIconHeight());
	if ($nc(c)->hasFocus()) {
		g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	} else {
		g->setColor(c->isEnabled() ? $($MetalLookAndFeel::getPrimaryControlInfo()) : $($MetalLookAndFeel::getControlDarkShadow()));
	}
	g->drawLine(1, 0, 13, 0);
	g->drawLine(0, 1, 0, 8);
	g->drawLine(14, 1, 14, 8);
	g->drawLine(1, 9, 7, 15);
	g->drawLine(7, 15, 14, 8);
	if (c->hasFocus()) {
		g->setColor($(c->getForeground()));
	} else {
		g->setColor($($MetalLookAndFeel::getControl()));
	}
	g->fillRect(1, 1, 13, 8);
	g->drawLine(2, 9, 12, 9);
	g->drawLine(3, 10, 11, 10);
	g->drawLine(4, 11, 10, 11);
	g->drawLine(5, 12, 9, 12);
	g->drawLine(6, 13, 8, 13);
	g->drawLine(7, 14, 7, 14);
	if (c->isEnabled()) {
		if (c->hasFocus()) {
			$nc(MetalIconFactory$HorizontalSliderThumbIcon::primaryBumps)->paintIcon(c, g, 2, 2);
		} else {
			$nc(MetalIconFactory$HorizontalSliderThumbIcon::controlBumps)->paintIcon(c, g, 2, 2);
		}
	}
	if (c->isEnabled()) {
		g->setColor(c->hasFocus() ? $($MetalLookAndFeel::getPrimaryControl()) : $($MetalLookAndFeel::getControlHighlight()));
		g->drawLine(1, 1, 13, 1);
		g->drawLine(1, 1, 1, 8);
	}
	g->setClip(clip);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$HorizontalSliderThumbIcon::getIconWidth() {
	return 15;
}

int32_t MetalIconFactory$HorizontalSliderThumbIcon::getIconHeight() {
	return 16;
}

MetalIconFactory$HorizontalSliderThumbIcon::MetalIconFactory$HorizontalSliderThumbIcon() {
}

$Class* MetalIconFactory$HorizontalSliderThumbIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controlBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PROTECTED | $STATIC, $staticField(MetalIconFactory$HorizontalSliderThumbIcon, controlBumps)},
		{"primaryBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PROTECTED | $STATIC, $staticField(MetalIconFactory$HorizontalSliderThumbIcon, primaryBumps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalIconFactory$HorizontalSliderThumbIcon, init$, void)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$HorizontalSliderThumbIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$HorizontalSliderThumbIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$HorizontalSliderThumbIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalIconFactory$HorizontalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "HorizontalSliderThumbIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalIconFactory$HorizontalSliderThumbIcon",
		"java.lang.Object",
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
	$loadClass(MetalIconFactory$HorizontalSliderThumbIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalIconFactory$HorizontalSliderThumbIcon));
	});
	return class$;
}

$Class* MetalIconFactory$HorizontalSliderThumbIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax