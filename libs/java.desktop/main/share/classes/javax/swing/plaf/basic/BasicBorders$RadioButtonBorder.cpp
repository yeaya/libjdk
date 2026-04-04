#include <javax/swing/plaf/basic/BasicBorders$RadioButtonBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicBorders$RadioButtonBorder::init$($Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$BasicBorders$ButtonBorder::init$(shadow, darkShadow, highlight, lightHighlight);
}

void BasicBorders$RadioButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, b->getModel());
		bool var$1 = $nc(model)->isArmed();
		bool var$0 = var$1 && model->isPressed();
		if (var$0 || model->isSelected()) {
			$BasicGraphicsUtils::drawLoweredBezel(g, x, y, width, height, this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
		} else {
			bool var$2 = b->isFocusPainted();
			$BasicGraphicsUtils::drawBezel(g, x, y, width, height, false, var$2 && b->hasFocus(), this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
		}
	} else {
		$BasicGraphicsUtils::drawBezel(g, x, y, width, height, false, false, this->shadow, this->darkShadow, this->highlight, this->lightHighlight);
	}
}

$Insets* BasicBorders$RadioButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 2);
	return insets;
}

BasicBorders$RadioButtonBorder::BasicBorders$RadioButtonBorder() {
}

$Class* BasicBorders$RadioButtonBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BasicBorders$RadioButtonBorder, init$, void, $Color*, $Color*, $Color*, $Color*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(BasicBorders$RadioButtonBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(BasicBorders$RadioButtonBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicBorders$RadioButtonBorder", "javax.swing.plaf.basic.BasicBorders", "RadioButtonBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.basic.BasicBorders$ButtonBorder", "javax.swing.plaf.basic.BasicBorders", "ButtonBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicBorders$RadioButtonBorder",
		"javax.swing.plaf.basic.BasicBorders$ButtonBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicBorders"
	};
	$loadClass(BasicBorders$RadioButtonBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicBorders$RadioButtonBorder));
	});
	return class$;
}

$Class* BasicBorders$RadioButtonBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax