#include <javax/swing/plaf/metal/MetalBorders$PaletteBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

int32_t MetalBorders$PaletteBorder::hashCode() {
	return this->$AbstractBorder::hashCode();
}

bool MetalBorders$PaletteBorder::equals(Object$* arg0) {
	return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$PaletteBorder::clone() {
	return this->$AbstractBorder::clone();
}

$String* MetalBorders$PaletteBorder::toString() {
	return this->$AbstractBorder::toString();
}

void MetalBorders$PaletteBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$PaletteBorder::init$() {
	$AbstractBorder::init$();
	this->titleHeight = 0;
}

void MetalBorders$PaletteBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawLine(0, 1, 0, h - 2);
	g->drawLine(1, h - 1, w - 2, h - 1);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->drawLine(1, 0, w - 2, 0);
	g->drawRect(1, 1, w - 3, h - 3);
	g->translate(-x, -y);
}

$Insets* MetalBorders$PaletteBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(1, 1, 1, 1);
	return newInsets;
}

MetalBorders$PaletteBorder::MetalBorders$PaletteBorder() {
}

$Class* MetalBorders$PaletteBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"titleHeight", "I", nullptr, 0, $field(MetalBorders$PaletteBorder, titleHeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalBorders$PaletteBorder, init$, void)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(MetalBorders$PaletteBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(MetalBorders$PaletteBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalBorders$PaletteBorder", "javax.swing.plaf.metal.MetalBorders", "PaletteBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalBorders$PaletteBorder",
		"javax.swing.border.AbstractBorder",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalBorders"
	};
	$loadClass(MetalBorders$PaletteBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalBorders$PaletteBorder));
	});
	return class$;
}

$Class* MetalBorders$PaletteBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax