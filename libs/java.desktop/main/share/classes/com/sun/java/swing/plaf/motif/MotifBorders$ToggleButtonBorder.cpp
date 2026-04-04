#include <com/sun/java/swing/plaf/motif/MotifBorders$ToggleButtonBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders$ButtonBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $MotifBorders$ButtonBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifBorders$ToggleButtonBorder::init$($Color* shadow, $Color* highlight, $Color* darkShadow, $Color* focus) {
	$MotifBorders$ButtonBorder::init$(shadow, highlight, darkShadow, focus);
}

void MotifBorders$ToggleButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, b->getModel());
		bool var$1 = $nc(model)->isArmed();
		bool var$0 = var$1 && model->isPressed();
		if (var$0 || model->isSelected()) {
			bool var$3 = model->isPressed();
			bool var$2 = var$3 || model->isSelected();
			bool var$4 = b->isFocusPainted();
			$MotifBorders::drawBezel(g, x, y, width, height, var$2, var$4 && b->hasFocus(), this->shadow, this->highlight, this->darkShadow, this->focus);
		} else {
			bool var$5 = b->isFocusPainted();
			$MotifBorders::drawBezel(g, x, y, width, height, false, var$5 && b->hasFocus(), this->shadow, this->highlight, this->darkShadow, this->focus);
		}
	} else {
		$MotifBorders::drawBezel(g, x, y, width, height, false, false, this->shadow, this->highlight, this->darkShadow, this->focus);
	}
}

$Insets* MotifBorders$ToggleButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 3, 3);
	return insets;
}

MotifBorders$ToggleButtonBorder::MotifBorders$ToggleButtonBorder() {
}

$Class* MotifBorders$ToggleButtonBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(MotifBorders$ToggleButtonBorder, init$, void, $Color*, $Color*, $Color*, $Color*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(MotifBorders$ToggleButtonBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(MotifBorders$ToggleButtonBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
		{"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ButtonBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder",
		"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifBorders"
	};
	$loadClass(MotifBorders$ToggleButtonBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifBorders$ToggleButtonBorder));
	});
	return class$;
}

$Class* MotifBorders$ToggleButtonBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com