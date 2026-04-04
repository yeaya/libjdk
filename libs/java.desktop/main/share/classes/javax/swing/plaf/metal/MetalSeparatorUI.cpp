#include <javax/swing/plaf/metal/MetalSeparatorUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef VERTICAL

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* MetalSeparatorUI::createUI($JComponent* c) {
	$init(MetalSeparatorUI);
	return $new(MetalSeparatorUI);
}

void MetalSeparatorUI::installDefaults($JSeparator* s) {
	$LookAndFeel::installColors(s, "Separator.background"_s, "Separator.foreground"_s);
}

void MetalSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, s, $nc(c)->getSize());
	if ($cast($JSeparator, c)->getOrientation() == $JSeparator::VERTICAL) {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, 0, $nc(s)->height);
		g->setColor($(c->getBackground()));
		g->drawLine(1, 0, 1, s->height);
	} else {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, $nc(s)->width, 0);
		g->setColor($(c->getBackground()));
		g->drawLine(0, 1, s->width, 1);
	}
}

$Dimension* MetalSeparatorUI::getPreferredSize($JComponent* c) {
	if ($nc($cast($JSeparator, c))->getOrientation() == $JSeparator::VERTICAL) {
		return $new($Dimension, 2, 0);
	} else {
		return $new($Dimension, 0, 2);
	}
}

MetalSeparatorUI::MetalSeparatorUI() {
}

$Class* MetalSeparatorUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(MetalSeparatorUI, installDefaults, void, $JSeparator*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalSeparatorUI",
		"javax.swing.plaf.basic.BasicSeparatorUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalSeparatorUI);
	});
	return class$;
}

$Class* MetalSeparatorUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax