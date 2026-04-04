#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BASIC_TOGGLE_BUTTON_UI_KEY

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$Object* BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY = nullptr;
$String* BasicToggleButtonUI::propertyPrefix = nullptr;

void BasicToggleButtonUI::init$() {
	$BasicButtonUI::init$();
}

$ComponentUI* BasicToggleButtonUI::createUI($JComponent* b) {
	$init(BasicToggleButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicToggleButtonUI, toggleButtonUI, $cast(BasicToggleButtonUI, $nc(appContext)->get(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY)));
	if (toggleButtonUI == nullptr) {
		$assign(toggleButtonUI, $new(BasicToggleButtonUI));
		appContext->put(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY, toggleButtonUI);
	}
	return toggleButtonUI;
}

$String* BasicToggleButtonUI::getPropertyPrefix() {
	return BasicToggleButtonUI::propertyPrefix;
}

void BasicToggleButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Dimension, size, b->getSize());
	$var($FontMetrics, fm, $nc(g)->getFontMetrics());
	$var($Insets, i, $nc(c)->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle, size));
	viewRect->x += $nc(i)->left;
	viewRect->y += i->top;
	viewRect->width -= (i->right + viewRect->x);
	viewRect->height -= (i->bottom + viewRect->y);
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Font, f, c->getFont());
	g->setFont(f);
	$var($String, var$0, b->getText());
	$var($Icon, var$1, b->getIcon());
	int32_t var$2 = b->getVerticalAlignment();
	int32_t var$3 = b->getHorizontalAlignment();
	int32_t var$4 = b->getVerticalTextPosition();
	int32_t var$5 = b->getHorizontalTextPosition();
	$var($String, text, $SwingUtilities::layoutCompoundLabel(c, fm, var$0, var$1, var$2, var$3, var$4, var$5, viewRect, iconRect, textRect, b->getText() == nullptr ? 0 : b->getIconTextGap()));
	g->setColor($(b->getBackground()));
	bool var$7 = $nc(model)->isArmed();
	bool var$6 = var$7 && model->isPressed();
	if (var$6 || model->isSelected()) {
		paintButtonPressed(g, b);
	}
	if (b->getIcon() != nullptr) {
		paintIcon(g, b, iconRect);
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, textRect);
		} else {
			paintText(g, b, textRect, text);
		}
	}
	bool var$8 = b->isFocusPainted();
	if (var$8 && b->hasFocus()) {
		paintFocus(g, b, viewRect, textRect, iconRect);
	}
}

void BasicToggleButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* iconRect) {
	$useLocalObjectStack();
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, nullptr);
	if (!$nc(model)->isEnabled()) {
		if (model->isSelected()) {
			$assign(icon, b->getDisabledSelectedIcon());
		} else {
			$assign(icon, b->getDisabledIcon());
		}
	} else {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			$assign(icon, b->getPressedIcon());
			if (icon == nullptr) {
				$assign(icon, b->getSelectedIcon());
			}
		} else if (model->isSelected()) {
			bool var$1 = b->isRolloverEnabled();
			if (var$1 && model->isRollover()) {
				$assign(icon, b->getRolloverSelectedIcon());
				if (icon == nullptr) {
					$assign(icon, b->getSelectedIcon());
				}
			} else {
				$assign(icon, b->getSelectedIcon());
			}
		} else {
			bool var$2 = b->isRolloverEnabled();
			if (var$2 && model->isRollover()) {
				$assign(icon, b->getRolloverIcon());
			}
		}
	}
	if (icon == nullptr) {
		$assign(icon, b->getIcon());
	}
	$nc(icon)->paintIcon(b, g, $nc(iconRect)->x, $nc(iconRect)->y);
}

int32_t BasicToggleButtonUI::getTextShiftOffset() {
	return 0;
}

void BasicToggleButtonUI::clinit$($Class* clazz) {
	$assignStatic(BasicToggleButtonUI::propertyPrefix, "ToggleButton."_s);
	$assignStatic(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

BasicToggleButtonUI::BasicToggleButtonUI() {
}

$Class* BasicToggleButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASIC_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToggleButtonUI, BASIC_TOGGLE_BUTTON_UI_KEY)},
		{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToggleButtonUI, propertyPrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicToggleButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicToggleButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicToggleButtonUI, getPropertyPrefix, $String*)},
		{"getTextShiftOffset", "()I", nullptr, $PROTECTED, $virtualMethod(BasicToggleButtonUI, getTextShiftOffset, int32_t)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToggleButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(BasicToggleButtonUI, paintIcon, void, $Graphics*, $AbstractButton*, $Rectangle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToggleButtonUI",
		"javax.swing.plaf.basic.BasicButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicToggleButtonUI, name, initialize, &classInfo$$, BasicToggleButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToggleButtonUI);
	});
	return class$;
}

$Class* BasicToggleButtonUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax