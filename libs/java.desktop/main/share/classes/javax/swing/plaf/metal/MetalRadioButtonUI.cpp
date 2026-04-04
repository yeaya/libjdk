#include <javax/swing/plaf/metal/MetalRadioButtonUI.h>
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
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_RADIO_BUTTON_UI_KEY
#undef TRUE

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$Object* MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY = nullptr;

void MetalRadioButtonUI::init$() {
	$BasicRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MetalRadioButtonUI::createUI($JComponent* c) {
	$init(MetalRadioButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalRadioButtonUI, metalRadioButtonUI, $cast(MetalRadioButtonUI, $nc(appContext)->get(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY)));
	if (metalRadioButtonUI == nullptr) {
		$assign(metalRadioButtonUI, $new(MetalRadioButtonUI));
		appContext->put(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY, metalRadioButtonUI);
	}
	return metalRadioButtonUI;
}

void MetalRadioButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$BasicRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		$set(this, disabledTextColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "disabledText"_s})));
		this->defaults_initialized = true;
	}
	$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::TRUE);
}

void MetalRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MetalRadioButtonUI::getSelectColor() {
	return this->selectColor;
}

$Color* MetalRadioButtonUI::getDisabledTextColor() {
	return this->disabledTextColor;
}

$Color* MetalRadioButtonUI::getFocusColor() {
	return this->focusColor;
}

void MetalRadioButtonUI::paint($Graphics* g, $JComponent* c) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		$var($Dimension, size, $nc(c)->getSize());
		int32_t w = $nc(size)->width;
		int32_t h = size->height;
		$var($Font, f, c->getFont());
		$nc(g)->setFont(f);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g, f));
		$var($Rectangle, viewRect, $new($Rectangle, size));
		$var($Rectangle, iconRect, $new($Rectangle));
		$var($Rectangle, textRect, $new($Rectangle));
		$var($Insets, i, c->getInsets());
		viewRect->x += $nc(i)->left;
		viewRect->y += i->top;
		viewRect->width -= (i->right + viewRect->x);
		viewRect->height -= (i->bottom + viewRect->y);
		$var($Icon, altIcon, b->getIcon());
		$var($Icon, selectedIcon, nullptr);
		$var($Icon, disabledIcon, nullptr);
		$var($String, var$0, b->getText());
		$var($Icon, var$1, altIcon != nullptr ? altIcon : getDefaultIcon());
		int32_t var$2 = b->getVerticalAlignment();
		int32_t var$3 = b->getHorizontalAlignment();
		int32_t var$4 = b->getVerticalTextPosition();
		int32_t var$5 = b->getHorizontalTextPosition();
		$var($String, text, $SwingUtilities::layoutCompoundLabel(c, fm, var$0, var$1, var$2, var$3, var$4, var$5, viewRect, iconRect, textRect, b->getIconTextGap()));
		if (c->isOpaque()) {
			g->setColor($(b->getBackground()));
			g->fillRect(0, 0, size->width, size->height);
		}
		if (altIcon != nullptr) {
			if (!$nc(model)->isEnabled()) {
				if (model->isSelected()) {
					$assign(altIcon, b->getDisabledSelectedIcon());
				} else {
					$assign(altIcon, b->getDisabledIcon());
				}
			} else {
				bool var$6 = model->isPressed();
				if (var$6 && model->isArmed()) {
					$assign(altIcon, b->getPressedIcon());
					if (altIcon == nullptr) {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else if (model->isSelected()) {
					bool var$7 = b->isRolloverEnabled();
					if (var$7 && model->isRollover()) {
						$assign(altIcon, b->getRolloverSelectedIcon());
						if (altIcon == nullptr) {
							$assign(altIcon, b->getSelectedIcon());
						}
					} else {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else {
					bool var$8 = b->isRolloverEnabled();
					if (var$8 && model->isRollover()) {
						$assign(altIcon, b->getRolloverIcon());
					}
				}
			}
			if (altIcon == nullptr) {
				$assign(altIcon, b->getIcon());
			}
			$nc(altIcon)->paintIcon(c, g, iconRect->x, iconRect->y);
		} else {
			$$nc(getDefaultIcon())->paintIcon(c, g, iconRect->x, iconRect->y);
		}
		if (text != nullptr) {
			$init($BasicHTML);
			$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
			if (v != nullptr) {
				v->paint(g, textRect);
			} else {
				int32_t mnemIndex = b->getDisplayedMnemonicIndex();
				if ($nc(model)->isEnabled()) {
					g->setColor($(b->getForeground()));
				} else {
					g->setColor($(getDisabledTextColor()));
				}
				$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemIndex, textRect->x, textRect->y + $nc(fm)->getAscent());
			}
			bool var$9 = b->hasFocus();
			if (var$9 && b->isFocusPainted() && textRect->width > 0 && textRect->height > 0) {
				paintFocus(g, textRect, size);
			}
		}
	}
}

void MetalRadioButtonUI::paintFocus($Graphics* g, $Rectangle* t, $Dimension* d) {
	$nc(g)->setColor($(getFocusColor()));
	g->drawRect($nc(t)->x - 1, $nc(t)->y - 1, $nc(t)->width + 1, $nc(t)->height + 1);
}

void MetalRadioButtonUI::clinit$($Class* clazz) {
	$assignStatic(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY, $new($Object));
}

MetalRadioButtonUI::MetalRadioButtonUI() {
}

$Class* MetalRadioButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"METAL_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalRadioButtonUI, METAL_RADIO_BUTTON_UI_KEY)},
		{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, focusColor)},
		{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, selectColor)},
		{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, disabledTextColor)},
		{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MetalRadioButtonUI, defaults_initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalRadioButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalRadioButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalRadioButtonUI, getDisabledTextColor, $Color*)},
		{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalRadioButtonUI, getFocusColor, $Color*)},
		{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalRadioButtonUI, getSelectColor, $Color*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $virtualMethod(MetalRadioButtonUI, installDefaults, void, $AbstractButton*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MetalRadioButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED, $virtualMethod(MetalRadioButtonUI, paintFocus, void, $Graphics*, $Rectangle*, $Dimension*)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MetalRadioButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalRadioButtonUI",
		"javax.swing.plaf.basic.BasicRadioButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalRadioButtonUI, name, initialize, &classInfo$$, MetalRadioButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalRadioButtonUI);
	});
	return class$;
}

$Class* MetalRadioButtonUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax