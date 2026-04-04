#include <javax/swing/plaf/metal/MetalToggleButtonUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_TOGGLE_BUTTON_UI_KEY

using $Color = ::java::awt::Color;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$Object* MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY = nullptr;

void MetalToggleButtonUI::init$() {
	$BasicToggleButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MetalToggleButtonUI::createUI($JComponent* b) {
	$init(MetalToggleButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalToggleButtonUI, metalToggleButtonUI, $cast(MetalToggleButtonUI, $nc(appContext)->get(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY)));
	if (metalToggleButtonUI == nullptr) {
		$assign(metalToggleButtonUI, $new(MetalToggleButtonUI));
		appContext->put(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY, metalToggleButtonUI);
	}
	return metalToggleButtonUI;
}

void MetalToggleButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$BasicToggleButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		$set(this, disabledTextColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "disabledText"_s})));
		this->defaults_initialized = true;
	}
}

void MetalToggleButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MetalToggleButtonUI::getSelectColor() {
	return this->selectColor;
}

$Color* MetalToggleButtonUI::getDisabledTextColor() {
	return this->disabledTextColor;
}

$Color* MetalToggleButtonUI::getFocusColor() {
	return this->focusColor;
}

void MetalToggleButtonUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($AbstractButton, button, $cast($AbstractButton, c));
	bool var$1 = $instanceOf($UIResource, $($nc(c)->getBackground()));
	bool var$0 = var$1 && $nc(button)->isContentAreaFilled();
	if (var$0 && c->isEnabled()) {
		$var($ButtonModel, model, button->getModel());
		if (!$MetalUtils::isToolBarButton(c)) {
			bool var$3 = !$nc(model)->isArmed();
			bool var$2 = var$3 && !model->isPressed();
			if (var$2) {
				$var($String, var$4, "ToggleButton.gradient"_s);
				int32_t var$5 = c->getWidth();
				var$2 = $MetalUtils::drawGradient(c, g, var$4, 0, 0, var$5, c->getHeight(), true);
			}
			if (var$2) {
				paint(g, c);
				return;
			}
		} else {
			bool var$7 = $nc(model)->isRollover();
			bool var$6 = var$7 || model->isSelected();
			if (var$6) {
				$var($String, var$8, "ToggleButton.gradient"_s);
				int32_t var$9 = c->getWidth();
				var$6 = $MetalUtils::drawGradient(c, g, var$8, 0, 0, var$9, c->getHeight(), true);
			}
			if (var$6) {
				paint(g, c);
				return;
			}
		}
	}
	$BasicToggleButtonUI::update(g, c);
}

void MetalToggleButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	if ($nc(b)->isContentAreaFilled()) {
		$nc(g)->setColor($(getSelectColor()));
		int32_t var$0 = b->getWidth();
		g->fillRect(0, 0, var$0, b->getHeight());
	}
}

void MetalToggleButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* textRect, $String* text) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(b, g));
	int32_t mnemIndex = b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		$nc(g)->setColor($(b->getForeground()));
	} else if (model->isSelected()) {
		$nc(g)->setColor($($nc(c)->getBackground()));
	} else {
		$nc(g)->setColor($(getDisabledTextColor()));
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemIndex, $nc(textRect)->x, $nc(textRect)->y + $nc(fm)->getAscent());
}

void MetalToggleButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
	$useLocalObjectStack();
	$var($Rectangle, focusRect, $new($Rectangle));
	$var($String, text, $nc(b)->getText());
	bool isIcon = b->getIcon() != nullptr;
	if (text != nullptr && !text->isEmpty()) {
		if (!isIcon) {
			focusRect->setBounds(textRect);
		} else {
			focusRect->setBounds($($nc(iconRect)->union$(textRect)));
		}
	} else if (isIcon) {
		focusRect->setBounds(iconRect);
	}
	$nc(g)->setColor($(getFocusColor()));
	g->drawRect((focusRect->x - 1), (focusRect->y - 1), focusRect->width + 1, focusRect->height + 1);
}

void MetalToggleButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* iconRect) {
	$BasicToggleButtonUI::paintIcon(g, b, iconRect);
}

void MetalToggleButtonUI::clinit$($Class* clazz) {
	$assignStatic(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

MetalToggleButtonUI::MetalToggleButtonUI() {
}

$Class* MetalToggleButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"METAL_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalToggleButtonUI, METAL_TOGGLE_BUTTON_UI_KEY)},
		{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, focusColor)},
		{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, selectColor)},
		{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, disabledTextColor)},
		{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MetalToggleButtonUI, defaults_initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalToggleButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalToggleButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, getDisabledTextColor, $Color*)},
		{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, getFocusColor, $Color*)},
		{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, getSelectColor, $Color*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $virtualMethod(MetalToggleButtonUI, installDefaults, void, $AbstractButton*)},
		{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, paintButtonPressed, void, $Graphics*, $AbstractButton*)},
		{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, paintFocus, void, $Graphics*, $AbstractButton*, $Rectangle*, $Rectangle*, $Rectangle*)},
		{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, paintIcon, void, $Graphics*, $AbstractButton*, $Rectangle*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, paintText, void, $Graphics*, $JComponent*, $Rectangle*, $String*)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MetalToggleButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToggleButtonUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalToggleButtonUI",
		"javax.swing.plaf.basic.BasicToggleButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalToggleButtonUI, name, initialize, &classInfo$$, MetalToggleButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalToggleButtonUI);
	});
	return class$;
}

$Class* MetalToggleButtonUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax